#include<stdio.h>

int main()
{
char x;
int a=0,e=0,o=0,u=0,i=0;

while(scanf("%c",&x)!=EOF)
{

	if(x=='a'||x=='A')
	a++;
	if(x=='e'||x=='E')
	e++;
	if (x=='i'||x=='I')
	i++;
	if(x=='o'||x=='O')
	o++;
	if(x=='u'||x=='U')
	u++;
}
printf("%d %d %d %d %d\n",a,e,i,o,u);
return 0;
}
