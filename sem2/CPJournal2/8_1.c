#include <stdio.h>
struct employee
{

char name[20];
int salary,id;
};
 int main()
 {
      printf("D5A_60_ShashwatTripathi\n");
 struct employee s[5];
  int i;
  printf("enter name,salary and id of the employee");
  for(i=0;i<=4;i++)
  {
    printf("\n enter employee %d details;-",i+1);
    scanf("%s%d%d",&s[i].name,&s[i].salary,&s[i].id);
  }
 printf("employees details are as follows :-");
 for(i=0;i<=4;i++)
 {
     printf("\nName-%s,\t salary-%d,\t id-%d",s[i].name,s[i].salary,s[i].id);
 }
 }