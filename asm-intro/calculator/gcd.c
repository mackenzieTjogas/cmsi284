#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int64_t gcd(int 64_t, int64_t);

int main(int argc, char** argv) {
	if (argc != 3) {
		printf(This is the wrong number of arguments \n");
		return 0;
	}

	int firstArg = atoi(argv[1]);
	int secondArg = atoi(argv[2]);
	int answer = gcd(firstArg, secondArg);
	printf("%ld\n", answer);
}
