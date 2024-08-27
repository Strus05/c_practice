#include <stdio.h>
  
int main(void)
{
    int age;
    char name[20];
    // вводим имя
    printf("Your name: ");
    scanf("%20[^\n]", name);
    // вводим возраст
    printf("Your age: ");
    scanf("%d", &age);   
    printf("Name: %s \t Age = %d", name, age);
    return 0;
}