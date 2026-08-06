#include <stdio.h>
#include <sys/stat.h>

int main() {

	mkdir ("DemoDir" , 12345);
	printf("Directory created.\n");

	int rmdir(const char *);
	rmdir ("DemoDir");
	printf("Directory removed.\n");

	return 0;
}
