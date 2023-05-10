#include "main.h"

#define MAX_FILENAME_LENGHT 256
#define MAX_TEXT_CONTENT_LENGHT 1024

void print_error(char *error_msg);
int main(int argc, char **argv);

/**
 * print_error - LET'S WRITE FUNCTION TO PRINT ERROR
 * MESSAGES TO STDERRS AND EXITS WITH STATUS CODE 98.
 * @error_msg: IT'S POINTERS STRING TO MESSAGE ERORR.
 */
void print_error(char *error_msg)
{
	fprintf(stderr, "Error: %s\n", error_msg);
	exit(98);
}

/**
 * main - ENTRY POINTS IN -- THIS PROGRAM.
 * @argc: NUMBER OF COMMAND LINE ARGUEMNT.
 * @argv: ARRAYS OF CONNAMD LINE ARGUEMNT.
 * Return: (0) ALWAYS SUCCESS, 98 ON FAIL.
 */
int main(int argc, char **argv)
{
	int fd, n;
	char buf[128];
	Elf64_Ehdr *elf_header;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Failed to open file");
	}

	n = read(fd, buf, sizeof(buf));
	if (n == -1)
	{
		print_error("Failed to read file");
	}

	elf_header = (Elf64_Ehdr *) buf;

	if (elf_header->e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header->e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header->e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header->e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("File is not an ELF file");
	}

	printf("ELF Header:\n");
	printf("  Magic:   %02lx %02lx %02lx %02lx %02lx %02lx %02lx %02lx\n"
			"%02x %02x %02x %02x %02x %02x %02x %lx\n",
			elf_header->e_ident[EI_MAG0],
			elf_header->e_ident[EI_MAG1],
			elf_header->e_ident[EI_MAG2],
			elf_header->e_ident[EI_MAG3],
			elf_header->e_ident[EI_CLASS],
			elf_header->e_ident[EI_DATA],
			elf_header->e_ident[EI_VERSION],
			elf_header->e_ident[EI_OSABI],
			elf_header->e_ident[EI_ABIVERSION],
			elf_header->e_ident[EI_PAD],
			elf_header->e_type, elf_header->e_machine,
			elf_header->e_version, elf_header->e_entry);
	printf("  Class:                             %s\n",
			elf_header->e_ident[EI_CLASS] ==
			ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			elf_header->e_ident[EI_DATA] ==
			ELFDATA2LSB ? "2's complement,little endian"
			: "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			elf_header->e_version);
	printf("  OS/ABI:                            %s\n",
			elf_header->e_ident[EI_OSABI] ==
			ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
	printf("  ABI Version:                       %d\n",
			elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			elf_header->e_type ==
			ET_EXEC ? "EXEC (Executable file)" : "Unknown");
	printf("  Entry point address:               0x%lx\n", elf_header->e_entry);

	close(fd);
	return (0);
}
