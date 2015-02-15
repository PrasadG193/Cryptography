#include<stdio.h>

char fun(int);

void main()

{


int i,j,k=0,p,q,a[100],b[3][3]={1,0,1,4,4,3,-4,-3,-3},c[3][10],d[10][10],e[50];

char text[50];

clrscr();



printf("Enter the length of code :\n");

scanf("%d",&p);




printf("\nEnter your code which you want to decode\n");

for(i=0;i<p;i++)

scanf("%d",&a[i]);


q=p/3;


for(i=0;i<3;i++)

for(j=0;j<q;j++)

c[i][j]=a[i+(j*3)];	/*Conv. of 2d to 1d matrix*/


for(i=0;i<3;i++)

for(j=0;j<q;j++)

{

d[i][j]=0;

for(k=0;k<3;k++)

d[i][j]=d[i][j]+b[i][k]*c[k][j];

}


for(i=0;i<q;i++)	/*Conv. of 1d to 2d matrix*/

for(j=0;j<3;j++,k++)

e[k]=d[j][i];


printf("\nDecoded text is:\n");

for(i=3;i<(q*3+3);i++)
{

text[i]=fun(e[i]);

printf("%c",text[i]);

}

getch();

}



char fun(int code)	/*Function defn*/
{
int i;

char alph[30]="abcdefghijklmnopqrstuvwxyz_";


for(i=0;i<27;i++)

if(code==(i+1))

return(alph[i]);

return(0);

}