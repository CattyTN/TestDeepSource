#include <stdio.h>
#include <string.h>
void foo(const char* input)
{
    char buf[10];
    //chúng ta chú ý doan sau
    printf("stack hien thoi:\n%p\n%p\n%p\n%p\n%p\n%p\n\n");
   //dua thang chuoi dau vao cua nguoi su dung vao vung dem, day la loi nguy hiem so 1
    strcpy(buf, input);
    printf("%s\n", buf);
    printf("Stacksau khi copy :\n%p\n%p\n%p\n%p\n%p\n%p\n\n");
}
void bar(void)
{
    printf("da hack xong!\n");
}
int main(int argc, char* argv[])
{
    printf("dia chi cua ham foo = %p\n", foo);
    printf("dia chi cua ham bar = %p\n", bar);
    foo(argv[1]);
    return 0;
}

