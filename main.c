#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char* argv[]) {
	FILE *fp;
	unsigned int word = 0;
	unsigned int str = 0;
	char ch;
	if ((fp = fopen(argv[2], "r")) == NULL) {
		printf("Error:Open Failed\n");
		exit(-1);
	}
	while ((ch = fgetc(fp)) != EOF) {
		if (ch == ' ' || ch == ',' || ch == '\n')    word++;
		str++;
	}
	word++;
	fclose(fp);
	if (!strcmp(argv[1], "-c"))
	   printf("×Ö·ûÊý : %d", str);
	else printf("µ¥´ÊÊý : %d", word);
	return 0;
}
