#include <stdio.h>


int main()
{
    char* names[] = {"Tom", "Bob", "Sam"};
    for(int i=0; i<3; i++)
    {
        printf("%s\t", names[i]);
    }
    return 0;
}
