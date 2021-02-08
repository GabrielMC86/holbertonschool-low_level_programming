#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void     clearerr(FILE *);
[CX][Option Start]
char    *ctermid(char *);
[Option End]
int      fclose(FILE *);
[CX][Option Start]
FILE    *fdopen(int, const char *);
[Option End]
int      feof(FILE *);
int      ferror(FILE *);
int      fflush(FILE *);
int      fgetc(FILE *);
int      fgetpos(FILE *restrict, fpos_t *restrict);
char    *fgets(char *restrict, int, FILE *restrict);
[CX][Option Start]
int      fileno(FILE *);
[Option End]
[TSF][Option Start]
void     flockfile(FILE *);
[Option End]
FILE    *fopen(const char *restrict, const char *restrict);
int      fprintf(FILE *restrict, const char *restrict, ...);
int      fputc(int, FILE *);
int      fputs(const char *restrict, FILE *restrict);
size_t   fread(void *restrict, size_t, size_t, FILE *restrict);
FILE    *freopen(const char *restrict, const char *restrict,
		             FILE *restrict);
int      fscanf(FILE *restrict, const char *restrict, ...);
int      fseek(FILE *, long, int);
[CX][Option Start]
int      fseeko(FILE *, off_t, int);
[Option End]
int      fsetpos(FILE *, const fpos_t *);
long     ftell(FILE *);
[CX][Option Start]
off_t    ftello(FILE *);
[Option End]
[TSF][Option Start]
int      ftrylockfile(FILE *);
void     funlockfile(FILE *);
[Option End]
size_t   fwrite(const void *restrict, size_t, size_t, FILE *restrict);
int      getc(FILE *);
int      getchar(void);
[TSF][Option Start]
int      getc_unlocked(FILE *);
int      getchar_unlocked(void);
[Option End]
char    *gets(char *);
[CX][Option Start]
int      pclose(FILE *);
[Option End]
void     perror(const char *);
[CX][Option Start]
FILE    *popen(const char *, const char *);
[Option End]
int      printf(const char *restrict, ...);
int      putc(int, FILE *);
int      putchar(int);
[TSF][Option Start]
int      putc_unlocked(int, FILE *);
int      putchar_unlocked(int);
[Option End]
int      puts(const char *);
int      remove(const char *);
int      rename(const char *, const char *);
void     rewind(FILE *);
int      scanf(const char *restrict, ...);
void     setbuf(FILE *restrict, char *restrict);
int      setvbuf(FILE *restrict, char *restrict, int, size_t);
int      snprintf(char *restrict, size_t, const char *restrict, ...);
int      sprintf(char *restrict, const char *restrict, ...);
int      sscanf(const char *restrict, const char *restrict, int ...);
[XSI][Option Start]
char    *tempnam(const char *, const char *);
[Option End]
FILE    *tmpfile(void);
char    *tmpnam(char *);
int      ungetc(int, FILE *);
int      vfprintf(FILE *restrict, const char *restrict, va_list);
int      vfscanf(FILE *restrict, const char *restrict, va_list);
int      vprintf(const char *restrict, va_list);
int      vscanf(const char *restrict, va_list);
int      vsnprintf(char *restrict, size_t, const char *restrict,
		             va_list);
int      vsprintf(char *restrict, const char *restrict, va_list);
int      vsscanf(const char *restrict, const char *restrict,
		             va_list arg);
