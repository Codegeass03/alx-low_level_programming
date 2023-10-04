#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * check_error - Checks for an error condition and
 * exits with a message if true.
 * @condition: The condition to check.
 * @message: The error message to print.
 */
void check_error(int condition, const char *message)
{
if (condition)
{
perror(message);
exit(98);
}
}

/**
 * check_elf - Checks if the provided ELF file is valid.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 */
void check_elf(unsigned char *e_ident)
{
if (e_ident[EI_MAG0] != ELFMAG0 ||
e_ident[EI_MAG1] != ELFMAG1 ||
e_ident[EI_MAG2] != ELFMAG2 ||
e_ident[EI_MAG3] != ELFMAG3) {
fprintf(stderr, "Error: Not an ELF file\n");
exit(98);
}
}

/**
 * print_elf_ident - Prints the ELF magic numbers.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 */
void print_elf_ident(unsigned char *e_ident)
{
int i;
printf(" Magic: ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", e_ident[i]);
}
printf("\n");
}

/**
 * print_elf_class - Prints the ELF class.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_elf_class(unsigned char *e_ident)
{
printf(" Class: %s\n", e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
}
/**
 * main - Displays information contained in the ELF header of a specified file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;
check_error(argc != 2, "Usage: elf_header <file>");

fd = open(argv[1], O_RDONLY);
check_error(fd == -1, "Error: Can't read file");
check_error(read(fd, &header,
sizeof(Elf64_Ehdr)) == -1, "Error: No such file");
check_elf(header.e_ident);
printf("ELF Header:\n");
print_elf_ident(header.e_ident);
print_elf_class(header.e_ident);
close(fd);
return (0);
}
