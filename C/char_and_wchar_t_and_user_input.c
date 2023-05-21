/* small experimentation regarding char, wchar_t and Unicode characters */
/* tested on a Windows machine */

/* related resources I found on the web:
    resource_1: https://stackoverflow.com/questions/27401231/understanding-and-writing-wchar-t-in-c
    resource_2: https://stackoverflow.com/questions/26816547/whats-the-difference-between-printfs-printfls-wprintfs-and-wp
    resource_3 https://stackoverflow.com/questions/73084516/c-printing-unicode-characters-gives-question-marks

    ASCII, UTF, UNICODE tables
    resource_4: https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
    resource_5: https://www.utf8-chartable.de/
    resource_6: https://www.ssec.wisc.edu/~tomw/java/unicode.html
*/


#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {

    // char (1 byte)    
    const char STANDARD_HARD_CODED_CHARACTER = 'ф';
    char standard_input_character;

    printf("Enter a character from UTF-16 or bigger: ");
    standard_input_character = fgetc(stdin);
    fseek(stdin, 0, SEEK_END);

    printf("STANDARD_HARD_CODED_CHARACTER as %%c=%c\n", STANDARD_HARD_CODED_CHARACTER);
    printf("STANDARD_HARD_CODED_CHARACTER as %%d=%d\n", STANDARD_HARD_CODED_CHARACTER);
    
    printf("standard_input_character as %%c=%c\n", standard_input_character);
    printf("standard_input_character as %%d=%d\n\n\n", standard_input_character);





    // wchar_t (4 byte)
    const wchar_t WIDE_HARD_CODED_CHARACTER = 'ф';
    wchar_t wide_input_character;

    printf("Enter a character from UTF-16 or bigger: ");
    wide_input_character = fgetc(stdin);
    fseek(stdin, 0, SEEK_END);

    setlocale(LC_CTYPE, "");
    wprintf(L"WIDE_HARD_CODED_CHARACTER as %%lc=%lc\n", WIDE_HARD_CODED_CHARACTER);
    printf("WIDE_HARD_CODED_CHARACTER as %%d=%d\n", WIDE_HARD_CODED_CHARACTER);
    
    printf("wide_input_character as %%ls=%ls\n", wide_input_character);
    printf("wide_input_character as %%d=%d\n", wide_input_character);
    
    return 0;

}