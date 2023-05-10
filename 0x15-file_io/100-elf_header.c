#include "main.h"

#define EI_MAG4 4
#define EI_MAG5 5
#define EI_MAG6 6
#define EI_MAG7 7
#define EI_MAG8 8
#define EI_MAG9 9
#define EI_MAG10 10

#define BUF_SIZE 128
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
	Elf64_Ehdr *ehdr;

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

	ehdr = (Elf64_Ehdr *) buf;

	printf("ELF Header:\n");
	printf("  Magic:   %02lx %02lx %02lx %02lx %02lx %02lx %02lx %02lx %02lx"
			"%02lx %02lx\n",
			(unsigned long) ehdr->e_ident[EI_MAG0],
			(unsigned long) ehdr->e_ident[EI_MAG1],
			(unsigned long) ehdr->e_ident[EI_MAG2],
			(unsigned long) ehdr->e_ident[EI_MAG3],
			(unsigned long) ehdr->e_ident[EI_MAG4],
			(unsigned long) ehdr->e_ident[EI_MAG5],
			(unsigned long) ehdr->e_ident[EI_MAG6],
			(unsigned long) ehdr->e_ident[EI_MAG7],
			(unsigned long) ehdr->e_ident[EI_MAG8],
			(unsigned long) ehdr->e_ident[EI_MAG9],
			(unsigned long) ehdr->e_ident[EI_MAG10]);

	printf("  Class:                             %s\n",
			ehdr->e_ident[EI_CLASS] ==
			ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			ehdr->e_ident[EI_DATA] ==
			ELFDATA2LSB ? "2's complement,little endian"
			: "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			ehdr->e_version);
	printf("  OS/ABI:                            %s\n",
			ehdr->e_ident[EI_OSABI] ==
			ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
	printf("  ABI Version:                       %d\n",
			ehdr->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			ehdr->e_type ==
			ET_EXEC ? "EXEC (Executable file)" : "Unknown");
	printf("  Entry point address:               0x%lx\n", ehdr->e_entry);

	close(fd);
	return (0);
}
