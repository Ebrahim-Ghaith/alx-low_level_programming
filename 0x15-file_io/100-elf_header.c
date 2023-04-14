#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#define ERROR_EXIT_CODE 98
#define ERROR_MESSAGE "Error: Not an ELF file\n"

/**
 * main - Displays the information contained in the ELF header at the start of
 *        an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
        int fd;
        Elf64_Ehdr header;
        ssize_t bytes_read;

        if (argc != 2)
        {
                dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
                exit(ERROR_EXIT_CODE);
        }

        fd = open(argv[1], O_RDONLY);
        if (fd == -1)
        {
                dprintf(STDERR_FILENO, "Error: Unable to open file %s\n", argv[1]);
                exit(ERROR_EXIT_CODE);
        }

        bytes_read = read(fd, &header, sizeof(header));
        if (bytes_read != sizeof(header) || header.e_ident[EI_MAG0] != ELFMAG0 ||
            header.e_ident[EI_MAG1] != ELFMAG1 ||
            header.e_ident[EI_MAG2] != ELFMAG2 ||
            header.e_ident[EI_MAG3] != ELFMAG3)
        {
                dprintf(STDERR_FILENO, ERROR_MESSAGE);
                exit(ERROR_EXIT_CODE);
        }

        printf("ELF Header:\n");
        printf("  Magic:   ");
        for (int i = 0; i < EI_NIDENT; i++)
                printf("%02x ", header.e_ident[i]);
        printf("\n");

        printf("  Class:                             ");
        switch (header.e_ident[EI_CLASS])
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
                printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
                break;
        }

        printf("  Data:                              ");
        switch (header.e_ident[EI_DATA])
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
                printf("<unknown: %x>\n", header.e_ident[EI_DATA]);
                break;
        }

        printf("  Version:                           %d\n",
               header.e_ident[EI_VERSION]);

        printf("  OS/ABI:                            ");
        switch (header.e_ident[EI_OSABI])
        {
        case ELFOSABI_SYSV:
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
        case ELFOSABI_AIX:
                printf("UNIX - AIX\n");
                break;
        case ELFOSABI_IRIX

