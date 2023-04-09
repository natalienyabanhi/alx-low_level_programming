#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;unistd.h&gt;
#include &lt;fcntl.h&gt;
#include &lt;errno.h&gt;
#include &lt;string.h&gt;

#define BUF_SIZE 1024

int main(int argc, char *argv[]) {
    int fd_from, fd_to, nread, nwritten;
    char buf[BUF_SIZE];

    if (argc != 3) {
        fprintf(stderr, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
    if (fd_to == -1) {
        perror("open");
        exit(99);
    }

    while ((nread = read(fd_from, buf, BUF_SIZE)) &gt; 0) {
        nwritten = write(fd_to, buf, nread);
        if (nwritten == -1) {
            perror("write");
            exit(99);
        }
    }

    if (nread == -1) {
        perror("read");
        exit(99);
    }

    if (close(fd_from) == -1) {
        perror("close");
        exit(99);
    }

    if (close(fd_to) == -1) {
        perror("close");
        exit(99);
    }

    return 0;
}
