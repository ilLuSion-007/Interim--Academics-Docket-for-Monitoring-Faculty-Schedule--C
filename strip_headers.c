/* preprocessor directives */
#include <stdio.h> // linked first header file for standard input/output facilities
#include <stdlib.h> /* linked second header file for standard library for atoi() and malloc() */
#include <string.h> /* linked third header file for string for memmove() */

/* print to standard error and exit nonzero. */
#define ERROR(fmt, arg) return fprintf(stderr, fmt "\n", arg)

/* takes three parameters (filename, starting line, and the number of lines to be removed).

For the purpose of this task, so to remove the first two lines from the file abc.html, the parameters should be: abc.html, 1, 2

Empty lines are considered and should still be counted, and if the specified line is empty, it should still be removed */

int main(int argc, char **argv) /* argc will be the count of input arguments to the program  & argv  will be a pointer to all the input arguments. */
{
    FILE *fp;
    char *buf;
    size_t sz;
    int start, count, lines = 1;
    int dest = 0, src = 0, pos = -1;

    /* Initialization and error checks */
    if (argc != 4)
        ERROR("Usage: %s <file> <start> <count>", argv[0]);

    if ((count = atoi(argv[3])) < 1) /* should be greater than 1 */
        return 0;

    if ((start = atoi(argv[2])) < 1) /* should be greater than 1 */
        ERROR("Error: <start> (%d) must be positive", start);

    if ((fp = fopen(argv[1], "r")) == NULL)
        ERROR("No such file: %s", argv[1]);

    /* Determine filesize and allocate a buffer accordingly. */
    fseek(fp, 0, SEEK_END);
    sz = ftell(fp);
    buf = malloc(sz + 1);
    rewind(fp);

    /* Fill the buffer, count lines */
    while ((buf[++pos] = fgetc(fp)) != EOF) {
        if (buf[pos] == '\n') {
            ++lines;
            if (lines == start) dest = pos + 1;
            if (lines == start + count) src = pos + 1;
        }
    }

    /* if wrong arguments or more lines specified to remove than file */
    if (start + count > lines) {
        free(buf);
        fclose(fp);
        ERROR("Error: invalid parameters for file with %d lines", --lines);
    }

    /* Overwrite the lines to be deleted with the remaining data*/
    memmove(buf + dest, buf + src, pos - src);

    /* Reopen the file and write back just enough of the buffer. */
    freopen(argv[1], "w", fp);
    fwrite(buf, pos - src + dest, 1, fp);

    free(buf); // free the buffer
    fclose(fp); // close the file
    return 0;
}
