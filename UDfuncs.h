#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ptn
{
    int flag;
    char name1[100],name2[100];
    char gen;
    int age;
    int doc;
    char date[30];
    int app;
    int serial;
}pt[500];
void PrsnlDetails(int i)
{
    system("cls");
    printf("#####   PERSONAL DETAILS   #####\n");
    printf("\nEnter first name: ");
    scanf("%s",pt[i].name1);
    printf("\nEnter last name: ");
    scanf("%s",pt[i].name2);
    printf("\nEnter age: ");
    scanf(" %d",&pt[i].age);
    printf("\nEnter gender (m/f): ");
    scanf(" %c",&pt[i].gen);
    pt[i].serial=i+1;
}
void DocSec(int i)
{
    system("cls");
    printf("        -----   APPOINT DOCTOR   -----\n\n");
    printf("        1. Dr. Zakir Khan, Neurologist\n");
    printf("        2. Dr. Ahsan Qureshi, Cardiologist\n");
    printf("        3. Dr. Rezwana Kabir, Gyanologist\n");
    printf("        4. Dr. Shabbir Hassan, Medicine\n");
    printf("        5. Dr. Azhar Rahman, Orthopedics\n");
    printf("        6. Back\n");
    printf("        7. Back to Start\n\n");
    printf("        Enter choice: ");
    scanf("%d",&pt[i].doc);
    if(pt[i].doc==6)
    {
        PrsnlDetails(i);
        DocSec(i);
    }
    else if(pt[i].doc==7){
        main();
    }
}
void Schd(int i)
{
    int c;
    system("cls");
    printf("\n\nEnter date of appointment: ");
    scanf("%s",pt[i].date);
    system("cls");
    printf("\n\n\n");
    printf("        *_____  SLOTS AVAILABLE  _____*\n\n");
    if(pt[i].doc==1)
    {
        printf("        1. Slot: 9:00-10:00 AM\n");
        printf("        2. Slot: 4:00-5:00 PM\n");
        printf("        3. Slot: 8:00-9:00 PM\n");
        printf("        4.Back\n");
        printf("        \nEnter slot: ");
        scanf(" %d",&c);
        if(c==4)
    {
        DocSec(i);
        Schd(i);
    }
    else
        pt[i].app=10+c;
    }
    else if(pt[i].doc==2)
    {
        printf("        1. Slot: 10:00-11:00 AM\n");
        printf("        2. Slot: 2:00-3:00 PM\n");
        printf("        3. Slot: 6:00-7:00 PM\n");
        printf("        4.Back\n");
        printf("        \nEnter slot: ");
        scanf(" %d",&c);
        if(c==4)
    {
        DocSec(i);
        Schd(i);
    }else
        pt[i].app=20+c;
    }
    else if(pt[i].doc==3)
    {
        printf("        1. Slot: 9:00-10:00 AM\n");
        printf("        2. Slot: 2:00-3:00 PM\n");
        printf("        3. Slot: 5:00-6:00 PM\n");
        printf("        4.Back\n");
        printf("\nEnter slot: ");
        scanf(" %d",&c);
        if(c==4)
    {
        DocSec(i);
        Schd(i);
    }else
        pt[i].app=30+c;
    }
    else if(pt[i].doc==4)
    {
        printf("        1. Slot: 10:00-11:00 AM\n");
        printf("        2. Slot: 4:00-5:00 PM\n");
        printf("        3. Slot: 6:00-7:00 PM\n");
        printf("        4.Back\n");
        printf("        Enter slot: ");
        scanf(" %d",&c);
        if(c==4)
    {
        DocSec(i);
        Schd(i);
    }else
        pt[i].app=40+c;
    }
    else if(pt[i].doc==5)
    {
        printf("        1. Slot: 9:00-10:00 AM\n");
        printf("        2. Slot: 4:00-5:00 PM\n");
        printf("        3. Slot: 6:00-7:00 PM\n");
        printf("        4.Back\n");
        printf("        Enter slot: ");
        scanf(" %d",&c);
        if(c==4)
    {
        DocSec(i);
        Schd(i);
    }else
        pt[i].app=50+c;
    }
    if(c==4)
    {
        DocSec(i);
        Schd(i);
    }
}
void Update(int n)
{
    int c2;
    system("cls");
    printf("        $$$$$   APPOINTMENT UPDATE   $$$$$\n\n");
    printf("        1.Personal Details\n");
    printf("        2.Doctor Selection\n");
    printf("        3.Schedule\n");
    printf("        4.Back to Start\n");
    printf("        \nWhat do you want to change: ");
    scanf("%d",&c2);
    switch(c2)
    {
    case 1:
        PrsnlDetails(n);
        break;
    case 2:
        DocSec(n);
        break;
    case 3:
        Schd(n);
        break;
    case 4:
        main();
        break;
    }
}
void Delete(int n)
{
    pt[n].name1[100]="Invalid";
    pt[n].name2[100]="Invalid";
    pt[n].gen='n';
    pt[n].age=0;
    pt[n].doc=0;
    pt[n].app=0;
    pt[n].date[30]="None";
    pt[n].serial=-1;
}
void FilePrint(int n)
{
    FILE *fp;
    fp=fopen("appoint.txt","w+");
    fprintf(fp,"Serial No.: %d\n\n",pt[n].serial);
    fprintf(fp,"Name: %s %s\n\n",pt[n].name1,pt[n].name2);
    if(pt[n].gen=='m'){
        fprintf(fp,"Gender: Male\n\n");
    }
    else if(pt[n].gen=='f'){
            fprintf(fp,"Gender: Female\n\n");
    }
    fprintf(fp,"Date: %s\n\n",pt[n].date);
    if(pt[n].doc==1)
    {
        fprintf(fp,"Doctor: Dr. Zakir Khan\n\n");
        if(pt[n].app==11)
        {
            fprintf(fp,"Time: 9:00-10:00 AM\n\n");
        }
        else if(pt[n].app==12)
        {
            fprintf(fp,"Time: 4:00-5:00 PM\n\n");
        }
        else if(pt[n].app==13)
        {
            fprintf(fp,"Time: 8:00-9:00 PM\n\n");
        }
    }
    else if(pt[n].doc==2)
    {
        fprintf(fp,"Doctor: Dr. Ahsan Qureshi\n\n");
        if(pt[n].app==21)
        {
            fprintf(fp,"Time: 10:00-11:00 AM\n\n");
        }
        else if(pt[n].app==22)
        {
            fprintf(fp,"Time: 2:00-3:00 PM\n\n");
        }
        else if(pt[n].app==23)
        {
            fprintf(fp,"Time: 6:00-7:00 PM\n\n");
        }
    }
    else if(pt[n].doc==3)
    {
        fprintf(fp,"Doctor: Dr. Rezwana Kabir\n\n");
        if(pt[n].app==31)
        {
            fprintf(fp,"Time: 9:00-10:00 AM\n\n");
        }
        else if(pt[n].app==32)
        {
            fprintf(fp,"Time: 2:00-3:00 PM\n\n");
        }
        else if(pt[n].app==33)
        {
            fprintf(fp,"Time: 5:00-6:00 PM\n\n");
        }
    }
    else if(pt[n].doc==4)
    {
        fprintf(fp,"Doctor: Dr. Shabbir Hassan\n\n");
        if(pt[n].app==41)
        {
            fprintf(fp,"Time: 10:00-11:00 AM\n\n");
        }
        else if(pt[n].app==42)
        {
            fprintf(fp,"Time: 4:00-5:00 PM\n\n");
        }
        else if(pt[n].app==43)
        {
            fprintf(fp,"Time: 6:00-7:00 PM\n\n");
        }
    }
    else if(pt[n].doc==5)
    {
        fprintf(fp,"Doctor: Dr. Azhar Rahman\n\n");
        if(pt[n].app==51)
        {
            fprintf(fp,"Time: 9:00-10:00 AM\n\n");
        }
        else if(pt[n].app==52)
        {
            fprintf(fp,"Time: 4:00-5:00 PM\n\n");
        }
        else if(pt[n].app==53)
        {
            fprintf(fp,"Time: 6:00-7:00 PM\n\n");
        }
    }
    fclose(fp);

}
