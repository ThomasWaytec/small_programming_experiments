/* tested on Windows machine */
// resource: https://stackoverflow.com/questions/27401231/understanding-and-writing-wchar-t-in-c

#include <stdio.h>


int main(void) {

    // char (1 byte)    
    char character;

    printf("Enter a normal character: ");
    character = fgetc(stdin);
    fseek(stdin, 0, SEEK_END);

    printf("%c\n", character);





    // wchar_t (4 byte)
    char character;
    printf("Enter a normal character: ");
    character = fgetc(stdin);
    fseek(stdin, 0, SEEK_END);

    printf("%c\n", character);



    return 0;

}