#include <stdio.h>    // printf(), perror()
#include <stdlib.h>   // exit()
#include <sys/stat.h> // stat(), struct stat
#include <unistd.h>   // POSIX functions
#include <pwd.h>      // getpwuid()
#include <grp.h>      // getgrgid()
#include <time.h>     // ctime()

int main()
{
    struct stat fileStat;    // Holds file metadata
    char filename[100];      // Stores user-entered filename

    printf("Enter filename: ");
    scanf("%s", filename);

    // Fetch file stats; returns -1 if it fails
    if (stat(filename, &fileStat) == -1)
    {
        perror("Error");
        return 1;
    }

    printf("\n===== File Information =====\n");
    printf("File Size : %ld bytes\n", fileStat.st_size);       // Size in bytes
    printf("Inode Number : %ld\n", fileStat.st_ino);          // Inode number
    printf("Hard Links : %ld\n", fileStat.st_nlink);        // Number of hard links
    printf("Owner UID : %d\n", fileStat.st_uid);            // Owner user ID
    printf("Group GID : %d\n", fileStat.st_gid);            // Group ID

    // Convert UID/GID numbers to readable names
    printf("Owner Name : %s\n", getpwuid(fileStat.st_uid)->pw_name);
    printf("Group Name : %s\n", getgrgid(fileStat.st_gid)->gr_name);

    // Parse file permissions bit by bit
    printf("\nPermissions : ");
    printf((S_ISDIR(fileStat.st_mode)) ? "d" : "-");        // Is directory?
    printf((fileStat.st_mode & S_IRUSR) ? "r" : "-");       // Owner read
    printf((fileStat.st_mode & S_IWUSR) ? "w" : "-");       // Owner write
    printf((fileStat.st_mode & S_IXUSR) ? "x" : "-");       // Owner execute
    printf((fileStat.st_mode & S_IRGRP) ? "r" : "-");       // Group read
    printf((fileStat.st_mode & S_IWGRP) ? "w" : "-");       // Group write
    printf((fileStat.st_mode & S_IXGRP) ? "x" : "-");       // Group execute
    printf((fileStat.st_mode & S_IROTH) ? "r" : "-");       // Others read
    printf((fileStat.st_mode & S_IWOTH) ? "w" : "-");       // Others write
    printf((fileStat.st_mode & S_IXOTH) ? "x" : "-");       // Others execute
    printf("\n");

    // Convert raw time to readable format
    printf("Last Access : %s", ctime(&fileStat.st_atime));
    printf("Last Modification : %s", ctime(&fileStat.st_mtime));
    printf("Last Status Change : %s", ctime(&fileStat.st_ctime));

    return 0;
}
