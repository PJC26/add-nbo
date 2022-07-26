#include <stdio.h>
#include <stdint.h> 
#include <netinet/in.h>

int main(int argc, char* argv[]) {

	FILE *file1, *file2;

        file1 = fopen(argv[1], "rb");
        file2 = fopen(argv[2], "rb");

	uint32_t n1, n2;

        fread(&n1, 1, sizeof(n1), file1);
        fread(&n2, 1, sizeof(n2), file2);
	
	n1 = ntohl(n1);
	n2 = ntohl(n2);

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", n1,n1,n2,n2,n1+n2,n1+n2);

        fclose(file1);
        fclose(file2);


}
