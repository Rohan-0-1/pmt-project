include<stdio.h>
struct sub {
    char name[10];
    int credit;
    int ia1;
    int ia2;
    int ia3;
    int cta;
    int sem;
    int cie;
    int t;
    char grade;
    int gp;
    int gdp;
}sb[6];
struct subl {
    char name[10];
    int credit;
    int cie;
    int t;
    char grade;
    int gp;
    int gdp;
}sbl[4];
void read();            // to read thoery marks
void readl();           // for reading lab marks
void compute();         // computing cie & total in each sub of thoery
void computel();        // omputing cie & total in each sub of labs
float computesgpa();
void main()
{
    int i;
    char name[10],usn[10];
    float sgpa;
    printf("enter name of student:\n");
    scanf("%s",name);
    printf("enter usn:\n");
    scanf("%s",usn);
     for(i=0;i<5;i++)
 {
    read(sb);
 }
    sgpa=computesgpa();
    printf("sgpa of %d is %f",name,sgpa);
}
void read()
{
    int i,j;
    printf("enter name of sub:\n");
    scanf("%s",sb[i].name);
    printf("enter credit of sub:\n");
    scanf("%d",&sb[i].credit);
    printf("enter ia1 marks:\n ");
    scanf("%d",&sb[i].ia1);
    printf("enter ia2 marks:\n ");
    scanf("%d",&sb[i].ia2);
    printf("enter ia3 marks:\n ");
    scanf("%d",&sb[i].ia3);
    printf("enter cta marks:\n");
    scanf("%d",&sb[i].cta);
    printf("enter sem marks:\n ");
    scanf("%d",&sb[i].sem);
       if((sb[i].ia1>sb[i].ia2) && (sb[i].ia3>sb[i].ia2))
            {
                sb[i].cie=sb[i].ia1 + sb[i].ia3 + sb[i].cta;
                 printf(" cie is %d\n",sb[i].cie);
            }
        else if((sb[i].ia2>sb[i].ia1) && (sb[i].ia3>sb[i].ia1))
            {
                sb[i].cie=sb[i].ia2 + sb[i].ia3 + sb[i].cta;
                 printf(" cie is %d\n",sb[i].cie);
            }
        else
            {
                sb[i].cie=sb[i].ia1 + sb[i].ia2 + sb[i].cta;
                 printf(" cie is %d\n",sb[i].cie);
            }
        compute();
}
