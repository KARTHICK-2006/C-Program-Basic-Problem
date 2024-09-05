#include <stdio.h>
#include <string.h>
int main()
{
    int custid, conu;
    float chg, surchg = 0, gramt, netamt;
    char connm[25];
    printf("Input Customer ID :");
    scanf("%d", &custid);
    printf("Input the name of the customer :");
    scanf("%s", connm);
    printf("Input the unit consumed by the customer : ");
    scanf("%d", &conu);
    if (conu < 200)
    {
        chg = 1.20;
    }
    else if (conu >= 200 && conu < 400)
        chg = 1.50;
    else if (conu >= 400 && conu < 600)
        chg = 1.80;
    else
        chg = 2.00;
    gramt = conu * chg;
    if (gramt > 400)
        surchg = gramt * 15 / 100.0;
    netamt = gramt + surchg;
    if (netamt < 100)
        netamt = 100;
    printf("\nElectricity Bill\n");
    printf("Customer IDNO                                  :%d\n", custid);
    printf("Customer Name                                   :%s\n", connm);
    printf("unit Consumed                                     :%d\n", conu);
    printf("Amount Charges @Rs.%f  per unit     :%f\n", chg, gramt);
    printf("Surcharge Amount                               :%f\n", surchg);
    printf("Net Amount Paid By the Customer     :%f\n", netamt);
    return 0;
}

