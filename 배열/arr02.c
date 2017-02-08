#include<stdio.h>
#include<string.h>

void main() {
	char buf[500];
	int i;

	buf = getchar();

	for (i = 0; i < 101; i++) {
		if (!strcmp(buf[i]," ")) {
			printf("%c", buf[i]);
		}
	}
	

}