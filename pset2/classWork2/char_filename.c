#include <stdio.h>
#include <stdlib.h>
//We'll pass in the name of the file using a char* called filename.

int count_file_chars(char*filename)
{
    FILE* thefile;
    char ch;
    int count = 0;
    
    thefile = fopen(filename, "r");
    if (thefile == NULL)
        return -1;
        
    while ((ch = fgetc(thefile)) != EOF)
        count++;
    
    fclose(thefile);
    
    return count;
}
int main(void)
