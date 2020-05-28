# c
#include<stdio.h>
#include<conio.h>
void main()
{
int markss[10],marksl[10],grades[10],i,sub,lab,internalSMarks[10],externalSMarks[10];
int internalLMarks[10],externalLMarks[10],gradesl[10];
int credits=4,creditl=1,totalc,totalg=0,totall=0;
float total;
char gradeSLetter[10][1],gradeLLetter[10][1];
clrscr();
printf("enter number of subjects: ");
scanf("%d",&sub);
printf("enter number of labs: ");
scanf("%d",&lab);
printf("enter inetrnal subjects marks: \n");
for(i=1;i<=sub;i++)
{
printf("subject%d: ",i);
scanf("%d",&internalSMarks[i]);
}
printf("enter external subjects marks: \n");
for(i=1;i<=sub;i++)
{
printf("subject%d: ",i);
scanf("%d",&externalSMarks[i]);
}
printf("enter internal labs marks: \n");
for(i=1;i<=lab;i++)
{
printf("lab%d: ",i);
scanf("%d",&internalLMarks[i]);
}
printf("enter external labs marks: \n");
for(i=1;i<=lab;i++)
{
printf("lab%d: ",i);
scanf("%d",&externalLMarks[i]);
}
for(i=1;i<=sub;i++)
{
markss[i]=internalSMarks[i]+externalSMarks[i];
//printf("%d\n",markss[i]);
}
for(i=1;i<=lab;i++)
{
marksl[i]=internalLMarks[i]+externalLMarks[i];
//printf("%d\n",marksl[i]);
}
//printf("****Subject Grades****\n");
for(i=1;i<=sub;i++)
{
switch((int)markss[i]/10)
{
case 10:
case 9:
     gradeSLetter[i][1]='O';
     grades[i]=10;
     break;
case 8:
     gradeSLetter[i][1]='A';
     grades[i]=9;
     break;
case 7:
     gradeSLetter[i][1]='B';
     grades[i]=8;
     break;
case 6:
     gradeSLetter[i][1]='C';
     grades[i]=7;
     break;
case 5:
     gradeSLetter[i][1]='D';
     grades[i]=6;
     break;
case 4:
     gradeSLetter[i][1]='P';
     grades[i]=5;
     break;
default:
     gradeSLetter[i][1]='F';
     grades[i]=0;
     break;
}
//printf("%d\t %c\n",grades[i],gradeLetter[i][1]);
}
//printf("****Lab Grades****\n");
for(i=1;i<=lab;i++)
{
switch((int)marksl[i]/10)
{
case 10:
case 9:
     gradeLLetter[i][1]='O';
     gradesl[i]=10;
     break;
case 8:
     gradeLLetter[i][1]='A';
     gradesl[i]=9;
     break;
case 7:
     gradeLLetter[i][1]='B';
     gradesl[i]=8;
     break;
case 6:
     gradeLLetter[i][1]='C';
     gradesl[i]=7;
     break;
case 5:
     gradeLLetter[i][1]='D';
     gradesl[i]=6;
     break;
case 4:
     gradeLLetter[i][1]='P';
     gradesl[i]=5;
     break;
default:
     gradeLLetter[i][1]='F';
     gradesl[i]=0;
     break;
}
//printf("%d\t %c\n",gradesl[i],gradeLetter[i][1]);
}
for(i=1;i<=(sub+lab);i++)
{
if(grades[i]!=0&&gradesl[i]!=0)
{
totalc=(sub*credits)+(lab*creditl);
for(i=1;i<=sub;i++)
{
totalg=totalg+grades[i]*credits;
}
for(i=1;i<=lab;i++)
{
totall=totall+gradesl[i]*creditl;
}
}
}
total=(float)(totalg+totall)/totalc;
printf("\n----------------------------------------------------------------------------\n");
printf("\n\t\t\t\tMarks Memo\n");
printf("\n----------------------------------------------------------------------------\n");
printf("InternalMarks\tExternalMarks\tTotalMarks\tGradePoints\tGradeLetter");
printf("\n----------------------------------------------------------------------------\n");
for(i=1;i<=sub;i++)
printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%c",internalSMarks[i],externalSMarks[i],markss[i],grades[i],gradeSLetter[i][1]);
for(i=1;i<=lab;i++)
printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%c",internalLMarks[i],externalLMarks[i],marksl[i],gradesl[i],gradeLLetter[i][1]);
printf("\n----------------------------------------------------------------------------\n");
printf("\ntotal grade points: %.2f",total);
getch();
}
