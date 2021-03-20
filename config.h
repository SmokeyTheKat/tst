char* default_editor = "vidd";
char* program_dir = "~/Documents/Test/";

struct lang_setting lang_settings[] = {
	{ "c", "gcc %stest_%s.c -o %stest_%s -Wall -lX11 -lm -lpthread", "%stest_%s", },
	{ "py", "echo \"%s%s%s%s\" > /dev/null", "python3 %stest_%s.py", },
	{ "java", "echo \"%s%s%s%s\" > /dev/null", "java %stest_%s.java", },
	{ "jl", "echo \"%s%s%s%s\" > /dev/null", "julia %stest_%s.jl", },
};
