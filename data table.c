//program to diplay internet data bundles 
 /*internet data bundles  
name:Miyoge sharon Nyatichi
reg no:PA106/G/28785/25
description:system display  the internet data bundles 
*/

#include<stdio.h>
int main(){
int choices;
//display menu
   printf("1.100MB for KES 50\n");
   printf("2.500MB for KES 200\n");
   printf("3.1GB for KES 350\n");
   printf("4.2GB for KES 600\n");
    
    //users to enter their choices 
    printf("enter your choice 1-4");
    scanf("%d",&choices);
    
    //swich statement to display choices 
    switch(choices);
    case1:
    printf("you selected 100MB.for KES50\n ");
    break;
    
    case2:
    printf("you selected 500MB.for KES200\n");
    break;
    
    case3:
    printf("you selected 1GB.for KES350\n");
    break;
    
    case4:
    printf("you selected 2GB.for KES600\n");
    break;
  
    
    error:
    printf("invalid choice\n");
    
    return 0;
    }
