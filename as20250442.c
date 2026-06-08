#include <stdio.h>
#include <stdlib.h>


int main()
{

int maths,english,science,Total;
float Average;
char Grade;

printf("Please Enter Your Mathematics Marks(out of 100): ");
scanf("%d",&maths);

printf("Please Enter Your English Marks(out of 100): ");
scanf("%d",&english);

printf("Please Enter Your Science Marks(out of 100): ");
scanf("%d",&science);

Total=(maths + english + science);
printf("Total : %d\n",Total);

Average = Total/3.0;
printf("Average : %.2f\n",Average);

printf("Grade :%c\n",Grade);

 if (100<=Average && Average<=80)
     Grade='A';
 else if (79<=Average && Average<=70)
     Grade='B';
 else if (69<=Average && Average<=60)
     Grade='C';
 else if (59<=Average && Average<=50)
     Grade='D';
 else if (Average<=50)
     Grade='F';

        if (maths>=40 && science>=40 && english>=40)
            printf("Result : Pass");
        else
             printf("Result : Fail");


    return 0;
}
