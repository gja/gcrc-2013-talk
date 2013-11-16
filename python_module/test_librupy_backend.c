#include <stdio.h>

// Test with gcc test_librupy_backend.c -L. -lrupy_backend

void rupy_start_ruby_vm();
void rupy_require_file(const char *file);
long rupy_eval(const char *string);

int main(int argc, char **argv)
{
	rupy_start_ruby_vm();
	rupy_eval("$: << '.'");
	rupy_require_file("factorial");
	rupy_eval("def factorial(n); 10; end");
	printf("%li\n", rupy_eval("factorial 5"));
	return 0;
}
