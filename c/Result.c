#include<stdio.h>
void main()
{
         int m1,m2,m3,m4,m5,total;
         float per;

         printf("Enter 5 subject markes.\n");
         printf("Physics : ");
         scanf("%D",&m1);
         printf("Chemistry : ");
         scanf("%D",&m2);
         printf("Math : ");
         scanf("%D",&m3);
         printf("English : ");
         scanf("%D",&m4);
         printf("Biology : ");
         scanf("%D",&m5);

         total=m1+m2+m3+m4+m5;
         per=total*100/500;
         if(per>=60&&per<=100)
                 printf("You are 1st ");
        else if(per>=50&&per<=60)
                 printf("You are 2nd");
        else if(per>=40&&per<=50)
                 printf("You are 3rd");
        else
                 printf("You are Fail");
        getch();


        if(per<40)
                 printf("fail ");
        else if(per>=40&&per<55)
                 printf("pass & third division");
        else if(per>=55&&per<65)
                 printf("second division ");
        else if(per>=65&&per<80)
                 printf("first division ");
        else if(per>=80&&per<95)
                 printf("Distinction ");
      else if(per>=95&&per<=100)
                 printf("extra ordinary ");
}
