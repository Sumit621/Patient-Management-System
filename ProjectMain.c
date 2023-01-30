#include<stdio.h>
#include<stdlib.h>
#include"UDfuncs.h"
#include<string.h>
int main()
{
    int i=0;
    char fp,ac;
    int c1,serial;
    char rep='y';
    while(rep=='y')
    {
        system("cls");
        printf("----------------------------------------------------------------------------------\n");
        printf("\n");
        printf("            *     *   * * *   *        * *     * *    *     *   * * *\n");
        printf("            *     *   *       *       *   *   *   *   * * * *   *\n");
        printf("            *     *   * * *   *       *       *   *   *  *  *   * * *\n");
        printf("            *  *  *   *       *       *       *   *   *     *   *\n");
        printf("            * * * *   *       *       *   *   *   *   *     *   * \n");
        printf("             *   *    * * *   * * *    * *     * *    *     *   * * * \n");
        printf("\n");
        printf("----------------------------------------------------------------------------------\n");
        printf("\n\n");
        printf("                 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
        printf("                       PATIENT APPOINTMENT SYSTEM    \n\n");
        printf("                 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
        printf("             All rights reserved to Sumit, Ishrat and Nabila\n\n");
        printf("\n\n\nPress Any key to continue.....\n");
        ac=getche();
        system("cls");
        printf("\n\n     _________________________\n");
        printf("\n          MAIN MENU\n");
        printf("     _________________________\n\n");
        printf("     ************************\n\n");
        printf("      1-> Create new Appointment\n\n");
        printf("      2-> Update existing Appointment\n\n");
        printf("      3-> Cancel Appointment\n\n");
        printf("     ************************\n");
        printf("     Enter choice: ");
        scanf("%d",&c1);
        switch(c1)
        {
        case 1:
            pt[i].flag=1;
            PrsnlDetails(i);
            DocSec(i);
            Schd(i);
            system("cls");
            printf("\n\n\n    APPOINTMENT SUCCESSFUL!!!\n");
            printf("\n\nDo you want a file print of the appointment(y/n): \n");
            scanf(" %c",&fp);
            if(fp=='y')
            {
                FilePrint(i);
                printf("\n DOCUMENT PRINTED IN FILE\n");
            }
            i++;
            break;
        case 2:
            printf("\n\nEnter serial no.: ");
            scanf("%d",&serial);
            Update(serial-1);
            system("cls");
            printf("\n\n\n    UPDATE SUCCESSFUL!!!\n");
            printf("\n\nDo you want a file print of the appointment(y/n): \n");
            scanf(" %c",&fp);
            if(fp=='y')
            {
                FilePrint(serial-1);
                printf("\n DOCUMENT PRINTED IN FILE\n");
            }
            break;
        case 3:
            printf("\n\nEnter serial no.: ");
            scanf("%d",&serial);
            pt[serial-1].flag=0;
            Delete(serial-1);
            printf("\n\n\n    CANCEL SUCCESSFUL!!!\n");
            break;
        }
        printf("\n\nDo you want to continue(y/n): ");
        scanf(" %c",&rep);
    }
    return 0;
}
