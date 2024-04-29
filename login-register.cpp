//login or register to the login page by using the c language
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void login()
{
   FILE *fp;
    char user[20],password[20];
    char ch[30];
     fp=fopen("users.txt","r+");
     printf("Enter user name\n");
     scanf("%s",user);
     printf("Enter password:\n");
     scanf("%s",password);
     strcat(user,password);
     fgets(ch,30,fp);
     if(strcmp(ch,user)==0)
     {
         printf("WELCOME ADMIN\n");
         
         
         
     }
     else 
     printf("invalid username or incorrect password.......try again:\n");
    
}
void reuser()
{
    FILE *fp;
    char user[20],password[20];
    char ch[30];
    fp=fopen("users.txt","w+");
    
     printf("Enter user name\n");
     scanf("%s",user);
     printf("Enter password:\n");
     scanf("%s",password);
     strcat(user,password);
     fprintf(fp,user);
    fclose(fp);
    printf("registeration successful");
}
 int main()
{
    int c;
    printf("   1.LOGIN    \n");
    printf("    2.REGISTER  \n");
    printf("Enter the choice :\n");
    scanf("%d",&c);
    if(c==1)
    {
        login();
    }
    if(c==2)
    {
        reuser();
        
    }
}
