#include<stdio.h>
#include<string.h>
int fun(char);
void main()
{
int i,j,k,p,q,r,a[100],b[3][3]={-3,-3,-4,0,1,1,4,3,4},c[3][10],d[10][10];
char text[50];

clrscr();

printf("Enter your text which you want to encode\n");
scanf("%s",text);

p=strlen(text);

for(i=0;i<p;i++)
a[i]=fun(text[i]);


for(i=0;i<p;i++)
printf("%d\t",a[i]);


r=p%3;
if(r==0)
q=p/3;

else

q=(p/3)+1;


for(i=0;i<3;i++)
for(j=0;j<q;j++)
c[i][j]=a[i+(j*3)];


for(i=0;i<3;i++)
for(j=0;j<q;j++)
{
d[i][j]=0;

for(k=0;k<3;k++)

d[i][j]=d[i][j]+b[i][k]*c[k][j];
}

printf("\n\nEncoded text is :\n");

for(i=0;i<q;i++)	/*output of encoded code*/

for(j=0;j<3;j++)

printf("%d\t",d[j][i]);


getch();
}


int fun(char text)	/*function declaration*/

{
int i,j=0;

char alph[30]="abcdefghijklmnopqrstuvwxyz";

for(i=0;i<26;i++)

if(text==alph[i])

j=i+1;

return(j);

}