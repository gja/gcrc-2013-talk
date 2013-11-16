#include <ruby.h>

void rupy_start_ruby_vm()
{
	ruby_init();
}

void rupy_require_file(const char *file)
{
	rb_require(file);
}

long rupy_eval(const char *string)
{
	return FIX2INT(rb_eval_string(string));
}
