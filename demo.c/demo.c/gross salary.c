#include <stdio.h>
main()

{
    float bs,gs,da,hra;
    printf("enter basic salary");
    scanf("%f",&bs);
    if (bs<1500)
    {
           hra = bs*10/100;
           da = bs*90/100;


    }
    else
    {
        hra = 500;
        da = bs*90/100;
    }
     gs = bs + hra + da
      printf("gross salary = rs.%f",gs);
      

}