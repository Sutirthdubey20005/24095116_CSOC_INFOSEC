#include <stdio.h>
int main(){
    FILE *f=fopen("todos.txt","a+"); // append 
    char user[20],task[100];
    printf("Username: ");
    fgets(user,20,stdin);
    printf("Task: ");
    fgets(task,100,stdin);
    fprintf(f,"%s::%s",user,task);
    fclose(f);
    f=fopen("todos.txt","r");  // read only 
    char ch;
    while((ch=fgetc(f))!=EOF) 
      putchar(ch);
    fclose(f);  // closing fle
    return 0;
}
