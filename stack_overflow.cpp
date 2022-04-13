#include <string.h>
#include <stdio.h> 
#include <stdlib.h>
void foo(const char* input)
{
    char buf[10];

    printf("My stack looks like:\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p \n\n");

    strcpy(buf, input);
    printf("%s\n", buf);

    printf("My stack looks like:\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n%p \n\n");
}

void bar(void)
{
    printf("Augh! I've been hacked!\n");
}

int main(int argc, char* argv[])
{
    printf("Address of foo = %p\n", foo);
    printf("Address of bar = %p\n", bar);

    if (argc != 2) 
	{
        printf("Please supply a string as an argument!\n");
        return -1;
	}
	
	foo(argv[1]);
	bar();
	//system("./stack_overflow_1.exe 123");
    return 0;
}