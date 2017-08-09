#include<stdio.h>

enum
{ 
    BELL          = '\a',
    BACKSPACE = '\b',
    HTAB         = '\t',
    RETURN      = '\r',
    NEWLINE    = '\n', 
    VTAB         = '\v',
    SPACE       = ' '
};

enum BOOLEAN { FALSE = 0, TRUE } match_flag;

int main()
{
    int index = 0;
    int count_of_letter = 0;
    int count_of_space = 0;

    char str[] = "I'm  Ely  efod";

    match_flag = FALSE;

    for(; str[index] != '\0'; index++){
        if( SPACE != str[index] )
            count_of_letter++;
        else
        {
            match_flag = (enum BOOLEAN) 1;//赋值为整数值时需要强制类型转换
            count_of_space++;
        }
    }
    
    printf("%s %d times %c", match_flag ? "match" : "not match", count_of_space, NEWLINE);
    printf("count of letters: %d %c%c", count_of_letter, NEWLINE, RETURN);

    return 0;
}