/* tested on a Windows machine */

/* related resources I found on the web:
    resource_1: https://stackoverflow.com/questions/27401231/understanding-and-writing-wchar-t-in-c
    resource_2: https://www.utf8-chartable.de/
*/


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