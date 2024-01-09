#include<stdio.h>
#define MAX_SIZE 80
void main()
{
  char com[MAX_SIZE];
  int i=2,a=0;
  printf("\n Enter comment:");
  fgets(com,MAX_SIZE,stdin);
  if(com[0]=='/')
  {
  	if(com[1]=='/')
  	printf("\n it is a comment");
  	else if(com[1]=='*')
  	{
  		for(i=2;i<=30;i++)
  		{
  			if(com[i]=='*' && com[i+1]=='/')
  			{
  			printf("\n it is a comment");
  			a=1;
  			break;
  			}
  			else continue;
  		}
  		if(a==0)
  		printf("\n it is not a comment");
  	}
  	else
  	printf("\n it is a not a comment");
  }
  else
     printf("\n it is not a comment");
}
  			
