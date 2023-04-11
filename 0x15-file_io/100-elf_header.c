#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);



/**
 * check_elf - Checks if a file is an ELF file
 * @elf_nums: A pointer to an array containing the ELF magic numbers
 * Description: If the file is not an ELF file - exit code 98
 */
void check_elf(unsigned char *elf_nums)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (elf_nums[index] != 127 &&
		    elf_nums[index] != 'E' &&
		    elf_nums[index] != 'L' &&
		    elf_nums[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}



/**
 * print_magic - Prints the magic numbers of an ELF header
 * @elf_nums: A pointer to an array containing the ELF magic numbers
 * Description: Magic numbers are separated by spaces
 */
void print_magic(unsigned char *elf_nums)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", elf_nums[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}



/**
 * print_class - Prints the class of an ELF header
 * @elf_nums: A pointer to an array containing the ELF class
 */
void print_class(unsigned char *elf_nums)
{
	printf("  Class:                             ");

	switch (elf_nums[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_nums[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of an ELF header
 * @elf_nums: A pointer to an array containing the ELF class
 */
void print_data(unsigned char *elf_nums)
{
	printf("  Data:                              ");

	switch (elf_nums[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_nums[EI_CLASS]);
	}
}

/**
 * print_version - Prints the version of an ELF header
 * @elf_nums: A pointer to an array containing the ELF version
 */
void print_version(unsigned char *elf_nums)
{
	printf("  Version:                           %d",
	       elf_nums[EI_VERSION]);

	switch (elf_nums[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header
 * @elf_nums: A pointer to an array containing the ELF version
 */
void print_osabi(unsigned char *elf_nums)
{
	printf("  OS/ABI:                            ");

	switch (elf_nums[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_nums[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header
 * @elf_nums: A pointer to an array containing the ELF ABI version
 */
void print_abi(unsigned char *elf_nums)
{
	printf("  ABI Version:                       %d\n",
	       elf_nums[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header
 * @elf_type: The ELF type
 * @elf_nums: A pointer to an array containing the ELF class
 */
void print_type(unsigned int elf_type, unsigned char *elf_nums)
{
	if (elf_nums[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf("  Type:                              ");

	switch (elf_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_type);
	}
}

/**
 * print_entry - Prints the entry point of an ELF header
 * @elf_entry: The address of the ELF entry point
 * @elf_nums: A pointer to an array containing the ELF class
 */
void print_entry(unsigned long int elf_entry, unsigned char *elf_nums)
{
	printf("  Entry point address:               ");

	if (elf_nums[EI_DATA] == ELFDATA2MSB)
	{
		elf_entry = ((elf_entry << 8) & 0xFF00FF00) |
			  ((elf_entry >> 8) & 0xFF00FF);
		elf_entry = (elf_entry << 16) | (elf_entry >> 16);
	}

	if (elf_nums[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elf_entry);

	else
		printf("%#lx\n", elf_entry);
}

/**
 * close_elf - Closes an ELF file
 * @ELF: The file descriptor of the ELF file
 * Description: If the file cannot be closed - exit code 98
 */
void close_elf(int ELF)
{
	if (close(ELF) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", ELF);
		exit(98);
	}
}

/**
 * main - Displays the information contained
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: 0 on success
 * Description: If the file is not an ELF File
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int openIt, readIt;

	openIt = open(argv[1], O_RDONLY);
	if (openIt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		close_elf(openIt);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	readIt = read(openIt, head, sizeof(Elf64_Ehdr));
	if (readIt == -1)
	{
		free(head);
		close_elf(openIt);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(head->elf_nums);
	printf("ELF head:\n");
	print_magic(head->elf_nums);
	print_class(head->elf_nums);
	print_data(head->elf_nums);
	print_version(head->elf_nums);
	print_osabi(head->elf_nums);
	print_abi(head->elf_nums);
	print_type(head->e_type, head->elf_nums);
	print_entry(head->e_entry, head->elf_nums);

	free(head);
	close_elf(openIt);
	return (0);
}

