char* default_editor = "vidd";
char* program_dir = "~/Documents/Test/";

struct lang_setting lang_settings[] = {
	{ "c", "gcc %stest_%s.c -o %stest_%s -Wall", "%stest_%s", },
	{ "py", "echo \"%s%s%s%s\" > /dev/null", "python3 %stest_%s.py", },
	{ "java", "echo \"%s%s%s%s\" > /dev/null", "java %stest_%s.java", },
};
