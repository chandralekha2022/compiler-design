#include<stdio.h>
#define MAX 200
int main()
{
char s[MAX],c,ca=0;
int state=0,i=0;
printf("\n Enter a string:");
scanf("%s", s);
while(s[i]!='\0')
{
switch(state)
{
  case 0: 
	  		c=s[i++];
          if(c=='a')
		  { 
		  state=0;
		  ca++;
		  }
	  else if(c=='b')
	  state=1;
	  else
	  state=4;
	  break;
case 1: 
	c=s[i++];
	if(c=='b')
	state=2;
	else
	state=4;
	break;
case 2: 
	c=s[i++];
	if(c=='b')
	state=3;
	else
	state=4;
	break;
case 3: 
	c=s[i++];
	if(c=='b')
	state=3;
	else
	state=4;
	break;
case 4: 
	printf("%s is not a recognised string.\n",s);
	return 0;	
}
}
if(state==0)
printf("%s is accepted under rule 'a*'.\n",s);
else if(state==1||state==3||(state==2&&(ca>1||ca==0)))
printf("%s is accepted under rule 'a*b+'.\n",s);
else if(state==2) 
printf("%s is accepted under rule 'abb'.\n",s);
else if(state==4)
printf("%s is not recognised string.\n",s);
}
