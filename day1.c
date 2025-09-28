#include<stdio.h>
int main(){
char name[50];
int age;
printf("enter name:");
scanf("%s", &name);
printf("enter age:");
scanf("%d", &age);
printf("hello %s, you are %d years old\n", name, age);
printf("your favorite hobby is coding");
return 0;
}

