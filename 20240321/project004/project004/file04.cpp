#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void main()
{
	int fd1, fd2;
	char str[] = "wonderful day!!";
	char buf[1024];
	fd1 = open("mytest.txt", O_CREAT | O_RDWR | O_TRUNC);
	if (fd1 < 0) printf("Open Error");
	if (write(fd1, str, strlen(str)) < 0) printf("Write Error");
	if (read(fd1, buf, strlen(buf)) < 0) printf("Read Error");

	printf("%s\n", buf);
	close(fd1);

}