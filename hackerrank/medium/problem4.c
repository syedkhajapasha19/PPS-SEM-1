#include <stdio.h>
int main(){
int uid,upwd,sid,spwd;

 sid=456;
 spwd=456;

 printf(" enter the number:  ");
     scanf("%d%d",&sid,&spwd);

    if ((uid==sid)&&(upwd==spwd));
    printf("login sucessful");
    else printf("invlid credentials")
        return 0;
 }
