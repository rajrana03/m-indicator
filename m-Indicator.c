#include<stdio.h>
#include<time.h>
#include<string.h>
void source();
void kalyan();
void dombivli();
void thane();
void mulund();
void bhandup();
void vikhroli();
void ghatkopar();
void kurla();
void dadar();
void byculla();
void csmt();
void ftcsmt();
void ftdadar();
void ftmulund();
void ftdcsmt();
void ftddadar();
void ftbhandup();
void ftkalyan();
void fttcsmt();
void fttdadar();
void fttghatkopar();
void fttvikhroli();
void fttmulund();
void fttdombivli();
void ftmghatkopar();
void ftmthane();
void ftmkalyan();
void ftbmulund();
void ftbthane();
void ftbkalyan();
void ftvbhandup();
void ftvthane();
void ftgcsmt();
void ftgdadar();
void ftgmulund();
void ftgthane();
void ftgdombivli();
void ftgkalyan();
void ftkvikhroli();
void ftkbhandup();
void ftkmulund();
void ftkthane();
void ftdrkurla();
void ftbykalyan();
void ftbydombivli();
void ftbymulund();
void ftbybhandup();
void ftbyvikhroli();
void ftbyghatkopar();
void ftbydadar();
void ftcmulund();
void ftcghatkopar();
void ftckurla();
void ftcdadar();
void main()
{
    system("cls");
    char src[30],dtn[30];
    printf("***     Welcome to m-Indicator!     ***\n"
           "    For Fast Trains on Central Line  \n\n"
           "All Stations: KALYAN, DOMBIVLI, THANE, MULUND, BHANDUP, VIKHROLI, GHATKOPAR, KURLA, DADAR, BYCULLA, CSMT  \n"
           "              <-----Towards Suburbs                                                 Towards Mumbai----->  \n\n");
    printf("Enter Source Station: ");
    scanf("%s",&src);
    printf("Enter Destination Station: ");
    scanf("%s",&dtn);
    time_t t;
    time(&t);
    printf("\nCurrent Date & Time is %s \n",ctime(&t));
    source(src,dtn);
}
void source(src,dtn)
{
    if(strcmp(src,"kalyan")==0 || strcmp(src,"KALYAN")==0)
    {
        kalyan(dtn);
    }
    else if(strcmp(src,"dombivli")==0 || strcmp(src,"DOMBIVLI")==0)
    {
        dombivli(dtn);
    }
    else if(strcmp(src,"thane")==0 || strcmp(src,"THANE")==0)
    {
        thane(dtn);
    }
    else if(strcmp(src,"mulund")==0 || strcmp(src,"MULUND")==0)
    {
        mulund(dtn);
    }
    else if(strcmp(src,"bhandup")==0 || strcmp(src,"BHANDUP")==0)
    {
        bhandup(dtn);
    }
    else if(strcmp(src,"vikhroli")==0 || strcmp(src,"VIKHROLI")==0)
    {
        vikhroli(dtn);
    }
    else if(strcmp(src,"ghatkopar")==0 || strcmp(src,"GHATKOPAR")==0)
    {
        ghatkopar(dtn);
    }
    else if(strcmp(src,"kurla")==0 || strcmp(src,"KURLA")==0)
    {
        kurla(dtn);
    }
    else if(strcmp(src,"dadar")==0 || strcmp(src,"DADAR")==0)
    {
        dadar(dtn);
    }
    else if(strcmp(src,"byculla")==0 || strcmp(src,"BYCULLA")==0)
    {
        byculla(dtn);
    }
    else if(strcmp(src,"csmt")==0 || strcmp(src,"CSMT")==0)
    {
        csmt(dtn);
    }
    else
    {
        printf("Enter Valid Station \n\n");
        system("pause");
        main();
    }
}
void kalyan(dtn)
{
    int ft, menu;
    if (strcmp(dtn,"csmt")==0 || strcmp(dtn,"CSMT")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time\n\n");
        printf("1. \t 07:18 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:20 \t\t *Not on SUNDAY* \n"
               "2. \t 08:34 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:35 \t\t *Not on SUNDAY* \n"
               "3. \t 11:46 \t\t\t\t CSMT \t\t\t 15 \t\t 12:48 \t\t *Not on SUNDAY* \n"
               "4. \t 14:05 \t\t\t\t CSMT \t\t\t 15 \t\t 15:07 \t\t *Not on SUNDAY* \n"
               "5. \t 16:46 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:46 \t\t *Not on SUNDAY* \n"
               "6. \t 18:22 \t\t\t\t CSMT \t\t\t 15 \t\t 19:24 \t\t *Not on SUNDAY* \n"
               "7. \t 20:41 \t\t\t\t CSMT \t\t\t 15 \t\t 21:44 \t\t *Not on SUNDAY* \n"
               "8. \t 23:05 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 00:05 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftcsmt(ft);
    }
    else if(strcmp(dtn,"byculla")==0 || strcmp(dtn,"BYCULLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time\n\n");
        printf("1. \t 07:18 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:11 \t\t *Not on SUNDAY* \n"
               "2. \t 08:34 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:27 \t\t *Not on SUNDAY* \n"
               "3. \t 11:46 \t\t\t\t CSMT \t\t\t 15 \t\t 12:39 \t\t *Not on SUNDAY* \n"
               "4. \t 14:05 \t\t\t\t CSMT \t\t\t 15 \t\t 14:58 \t\t *Not on SUNDAY* \n"
               "5. \t 16:46 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:38 \t\t *Not on SUNDAY* \n"
               "6. \t 18:22 \t\t\t\t CSMT \t\t\t 15 \t\t 19:16 \t\t *Not on SUNDAY* \n"
               "7. \t 20:41 \t\t\t\t CSMT \t\t\t 15 \t\t 21:34 \t\t *Not on SUNDAY* \n"
               "8. \t 23:05 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftcsmt(ft);
    }
    else if(strcmp(dtn,"dadar")==0 || strcmp(dtn,"DADAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:18 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:05 \t\t *Not on SUNDAY* \n"
               "2. \t 08:34 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:21 \t\t *Not on SUNDAY* \n"
               "3. \t 09:47 \t\t\t\t DADAR \t\t\t 15 \t\t 10:37 \t\t *Not on SUNDAY* \n"
               "4. \t 11:46 \t\t\t\t CSMT \t\t\t 15 \t\t 12:33 \t\t *Not on SUNDAY* \n"
               "5. \t 14:05 \t\t\t\t CSMT \t\t\t 15 \t\t 14:52 \t\t *Not on SUNDAY* \n"
               "6. \t 16:31 \t\t\t\t DADAR \t\t\t 15 \t\t 17:20 \t\t *Not on SUNDAY* \n"
               "7. \t 16:46 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:32 \t\t *Not on SUNDAY* \n"
               "8. \t 18:22 \t\t\t\t CSMT \t\t\t 15 \t\t 19:10 \t\t *Not on SUNDAY* \n"
               "9. \t 20:41 \t\t\t\t CSMT \t\t\t 15 \t\t 21:28 \t\t *Not on SUNDAY* \n"
               "10. \t 23:05 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:51 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftdadar(ft);
    }
    else if(strcmp(dtn,"kurla")==0 || strcmp(dtn,"KURLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:18 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:57 \t\t *Not on SUNDAY* \n"
               "2. \t 08:34 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:13 \t\t *Not on SUNDAY* \n"
               "3. \t 09:47 \t\t\t\t DADAR \t\t\t 15 \t\t 10:28 \t\t *Not on SUNDAY* \n"
               "4. \t 11:46 \t\t\t\t CSMT \t\t\t 15 \t\t 12:25 \t\t *Not on SUNDAY* \n"
               "5. \t 14:05 \t\t\t\t CSMT \t\t\t 15 \t\t 14:44 \t\t *Not on SUNDAY* \n"
               "6. \t 16:31 \t\t\t\t DADAR \t\t\t 15 \t\t 17:12 \t\t *Not on SUNDAY* \n"
               "7. \t 16:46 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:24 \t\t *Not on SUNDAY* \n"
               "8. \t 18:22 \t\t\t\t CSMT \t\t\t 15 \t\t 19:02 \t\t *Not on SUNDAY* \n"
               "9. \t 20:41 \t\t\t\t CSMT \t\t\t 15 \t\t 21:20 \t\t *Not on SUNDAY* \n"
               "10. \t 23:05 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:43 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftdadar(ft);
    }
    else if(strcmp(dtn,"ghatkopar")==0 || strcmp(dtn,"GHATKOPAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:18 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:53 \t\t *Not on SUNDAY* \n"
               "2. \t 08:34 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:09 \t\t *Not on SUNDAY* \n"
               "3. \t 09:47 \t\t\t\t DADAR \t\t\t 15 \t\t 10:24 \t\t *Not on SUNDAY* \n"
               "4. \t 11:46 \t\t\t\t CSMT \t\t\t 15 \t\t 12:21 \t\t *Not on SUNDAY* \n"
               "5. \t 14:05 \t\t\t\t CSMT \t\t\t 15 \t\t 14:40 \t\t *Not on SUNDAY* \n"
               "6. \t 16:31 \t\t\t\t DADAR \t\t\t 15 \t\t 17:08 \t\t *Not on SUNDAY* \n"
               "7. \t 16:46 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:20 \t\t *Not on SUNDAY* \n"
               "8. \t 18:22 \t\t\t\t CSMT \t\t\t 15 \t\t 18:58 \t\t *Not on SUNDAY* \n"
               "9. \t 20:41 \t\t\t\t CSMT \t\t\t 15 \t\t 21:16 \t\t *Not on SUNDAY* \n"
               "10. \t 23:05 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:39 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftdadar(ft);
    }
    else if(strcmp(dtn,"vikhroli")==0 || strcmp(dtn,"VIKHROLI")==0)
    {
        printf("***              NO DIRECT TRAINS FOUND!            ***\n"
               "    Please Change the Source or Destination Station   \n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"bhandup")==0 || strcmp(dtn,"BHANDUP")==0)
    {
        printf("***              NO DIRECT TRAINS FOUND!            ***\n"
               "    Please Change the Source or Destination Station   \n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"mulund")==0 || strcmp(dtn,"MULUND")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:18 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:41 \t\t *Not on SUNDAY* \n"
               "2. \t 08:34 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:57 \t\t *Not on SUNDAY* \n"
               "3. \t 16:46 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:09 \t\t *Not on SUNDAY* \n"
               "4. \t 23:05 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:29 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftmulund(ft);
    }
    else if(strcmp(dtn,"thane")==0 || strcmp(dtn,"THANE")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:18 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:37 \t\t *Not on SUNDAY* \n"
               "2. \t 08:34 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:53 \t\t *Not on SUNDAY* \n"
               "3. \t 09:47 \t\t\t\t DADAR \t\t\t 15 \t\t 10:07 \t\t *Not on SUNDAY* \n"
               "4. \t 11:46 \t\t\t\t CSMT \t\t\t 15 \t\t 12:08 \t\t *Not on SUNDAY* \n"
               "5. \t 14:05 \t\t\t\t CSMT \t\t\t 15 \t\t 14:25 \t\t *Not on SUNDAY* \n"
               "6. \t 16:31 \t\t\t\t DADAR \t\t\t 15 \t\t 16:52 \t\t *Not on SUNDAY* \n"
               "7. \t 16:46 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:05 \t\t *Not on SUNDAY* \n"
               "8. \t 18:22 \t\t\t\t CSMT \t\t\t 15 \t\t 18:43 \t\t *Not on SUNDAY* \n"
               "9. \t 20:41 \t\t\t\t CSMT \t\t\t 15 \t\t 21:01 \t\t *Not on SUNDAY* \n"
               "10. \t 23:05 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:25 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftdadar(ft);
    }
    else if(strcmp(dtn,"dombivli")==0 || strcmp(dtn,"DOMBIVLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:18 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:25 \t\t *Not on SUNDAY* \n"
               "2. \t 08:34 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:40 \t\t *Not on SUNDAY* \n"
               "3. \t 09:47 \t\t\t\t DADAR \t\t\t 15 \t\t 09:55 \t\t *Not on SUNDAY* \n"
               "4. \t 11:46 \t\t\t\t CSMT \t\t\t 15 \t\t 11:54 \t\t *Not on SUNDAY* \n"
               "5. \t 14:05 \t\t\t\t CSMT \t\t\t 15 \t\t 14:13 \t\t *Not on SUNDAY* \n"
               "6. \t 16:31 \t\t\t\t DADAR \t\t\t 15 \t\t 16:39 \t\t *Not on SUNDAY* \n"
               "7. \t 16:46 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 16:53 \t\t *Not on SUNDAY* \n"
               "8. \t 18:22 \t\t\t\t CSMT \t\t\t 15 \t\t 18:29 \t\t *Not on SUNDAY* \n"
               "9. \t 20:41 \t\t\t\t CSMT \t\t\t 15 \t\t 20:48 \t\t *Not on SUNDAY* \n"
               "10. \t 23:05 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:12 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftdadar(ft);
    }
    else if(strcmp(dtn,"kalyan")==0 || strcmp(dtn,"KALYAN")==0)
    {
        printf("*     Source & Destination Station cannot be same\n"
               "    Please Change the Source or Destination Station   *\n\n");
        system("pause");
        main();
    }
    else
    {
        printf("Enter Valid Station \n\n");
        system("pause");
        main();
    }
    printf("1. New Search \n2. End program \nEnter Choice: ");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1: main();
                break;
        case 2: printf("\n***     THANK YOU!!!     ***\n");
                exit(0);
                break;
    }
}
void dombivli(dtn)
{
    int ft, menu;
    if (strcmp(dtn,"csmt")==0 || strcmp(dtn,"CSMT")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time\n\n");
        printf("1. \t 06:14 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 07:11 \t\t *Not on SATURDAY & SUNDAY* \n"
               "2. \t 07:25 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:20 \t\t *Not on SUNDAY* \n"
               "3. \t 08:40 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:35 \t\t *Not on SUNDAY* \n"
               "4. \t 11:54 \t\t\t\t CSMT \t\t\t 15 \t\t 12:48 \t\t *Not on SUNDAY* \n"
               "5. \t 14:13 \t\t\t\t CSMT \t\t\t 15 \t\t 15:07 \t\t *Not on SUNDAY* \n"
               "6. \t 16:53 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:46 \t\t *Not on SUNDAY* \n"
               "7. \t 18:29 \t\t\t\t CSMT \t\t\t 15 \t\t 19:24 \t\t *Not on SUNDAY* \n"
               "8. \t 20:48 \t\t\t\t CSMT \t\t\t 15 \t\t 21:44 \t\t *Not on SUNDAY* \n"
               "9. \t 23:12 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 00:05 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftdcsmt(ft);
    }
    else if(strcmp(dtn,"byculla")==0 || strcmp(dtn,"BYCULLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time\n\n");
        printf("1. \t 06:14 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 07:00 \t\t *Not on SATURDAY & SUNDAY* \n"
               "2. \t 07:25 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:11 \t\t *Not on SUNDAY* \n"
               "3. \t 08:40 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:27 \t\t *Not on SUNDAY* \n"
               "4. \t 11:54 \t\t\t\t CSMT \t\t\t 15 \t\t 12:39 \t\t *Not on SUNDAY* \n"
               "5. \t 14:13 \t\t\t\t CSMT \t\t\t 15 \t\t 14:58 \t\t *Not on SUNDAY* \n"
               "6. \t 16:53 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:38 \t\t *Not on SUNDAY* \n"
               "7. \t 18:29 \t\t\t\t CSMT \t\t\t 15 \t\t 19:16 \t\t *Not on SUNDAY* \n"
               "8. \t 20:48 \t\t\t\t CSMT \t\t\t 15 \t\t 21:34 \t\t *Not on SUNDAY* \n"
               "9. \t 23:12 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftdcsmt(ft);
    }
    else if(strcmp(dtn,"dadar")==0 || strcmp(dtn,"DADAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:14 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:54 \t\t *Not on SATURDAY & SUNDAY* \n"
               "2. \t 07:25 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:05 \t\t *Not on SUNDAY* \n"
               "3. \t 08:40 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:21 \t\t *Not on SUNDAY* \n"
               "4. \t 09:55 \t\t\t\t DADAR \t\t\t 15 \t\t 10:37 \t\t *Not on SUNDAY* \n"
               "5. \t 11:54 \t\t\t\t CSMT \t\t\t 15 \t\t 12:33 \t\t *Not on SUNDAY* \n"
               "6. \t 14:13 \t\t\t\t CSMT \t\t\t 15 \t\t 14:52 \t\t *Not on SUNDAY* \n"
               "7. \t 16:39 \t\t\t\t DADAR \t\t\t 15 \t\t 17:20 \t\t *Not on SUNDAY* \n"
               "8. \t 16:53 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:32 \t\t *Not on SUNDAY* \n"
               "9. \t 18:29 \t\t\t\t CSMT \t\t\t 15 \t\t 19:10 \t\t *Not on SUNDAY* \n"
               "10. \t 20:48 \t\t\t\t CSMT \t\t\t 15 \t\t 21:28 \t\t *Not on SUNDAY* \n"
               "11. \t 23:12 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:51 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftddadar(ft);
    }
    else if(strcmp(dtn,"kurla")==0 || strcmp(dtn,"KURLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:14 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:46 \t\t *Not on SATURDAY & SUNDAY* \n"
               "2. \t 07:25 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:57 \t\t *Not on SUNDAY* \n"
               "3. \t 08:40 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:13 \t\t *Not on SUNDAY* \n"
               "4. \t 09:55 \t\t\t\t DADAR \t\t\t 15 \t\t 10:28 \t\t *Not on SUNDAY* \n"
               "5. \t 11:54 \t\t\t\t CSMT \t\t\t 15 \t\t 12:25 \t\t *Not on SUNDAY* \n"
               "6. \t 14:13 \t\t\t\t CSMT \t\t\t 15 \t\t 14:44 \t\t *Not on SUNDAY* \n"
               "7. \t 16:39 \t\t\t\t DADAR \t\t\t 15 \t\t 17:12 \t\t *Not on SUNDAY* \n"
               "8. \t 16:53 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:24 \t\t *Not on SUNDAY* \n"
               "9. \t 18:29 \t\t\t\t CSMT \t\t\t 15 \t\t 19:02 \t\t *Not on SUNDAY* \n"
               "10. \t 20:48 \t\t\t\t CSMT \t\t\t 15 \t\t 21:20 \t\t *Not on SUNDAY* \n"
               "11. \t 23:12 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:43 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftddadar(ft);
    }
    else if(strcmp(dtn,"ghatkopar")==0 || strcmp(dtn,"GHATKOPAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:14 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:42 \t\t *Not on SATURDAY & SUNDAY* \n"
               "2. \t 07:25 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:53 \t\t *Not on SUNDAY* \n"
               "3. \t 08:40 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:09 \t\t *Not on SUNDAY* \n"
               "4. \t 09:55 \t\t\t\t DADAR \t\t\t 15 \t\t 10:24 \t\t *Not on SUNDAY* \n"
               "5. \t 11:54 \t\t\t\t CSMT \t\t\t 15 \t\t 12:21 \t\t *Not on SUNDAY* \n"
               "6. \t 14:13 \t\t\t\t CSMT \t\t\t 15 \t\t 14:40 \t\t *Not on SUNDAY* \n"
               "7. \t 16:39 \t\t\t\t DADAR \t\t\t 15 \t\t 17:08 \t\t *Not on SUNDAY* \n"
               "8. \t 16:53 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:20 \t\t *Not on SUNDAY* \n"
               "9. \t 18:29 \t\t\t\t CSMT \t\t\t 15 \t\t 18:58 \t\t *Not on SUNDAY* \n"
               "10. \t 20:48 \t\t\t\t CSMT \t\t\t 15 \t\t 21:16 \t\t *Not on SUNDAY* \n"
               "11. \t 23:12 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:39 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftddadar(ft);
    }
    else if(strcmp(dtn,"vikhroli")==0 || strcmp(dtn,"VIKHROLI")==0)
    {
        printf("***              NO DIRECT TRAINS FOUND!            ***\n"
               "    Please Change the Source or Destination Station   \n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"bhandup")==0 || strcmp(dtn,"BHANDUP")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:14 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:35 \t\t *Not on SATURDAY & SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbhandup(ft);
    }
    else if(strcmp(dtn,"mulund")==0 || strcmp(dtn,"MULUND")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:18 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:41 \t\t *Not on SUNDAY* \n"
               "2. \t 08:34 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:57 \t\t *Not on SUNDAY* \n"
               "3. \t 16:46 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:09 \t\t *Not on SUNDAY* \n"
               "4. \t 23:05 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:29 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftmulund(ft);
    }
    else if(strcmp(dtn,"thane")==0 || strcmp(dtn,"THANE")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:14 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:27 \t\t *Not on SATURDAY & SUNDAY* \n"
               "2. \t 07:25 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:37 \t\t *Not on SUNDAY* \n"
               "3. \t 08:40 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:53 \t\t *Not on SUNDAY* \n"
               "4. \t 09:55 \t\t\t\t DADAR \t\t\t 15 \t\t 10:07 \t\t *Not on SUNDAY* \n"
               "5. \t 11:54 \t\t\t\t CSMT \t\t\t 15 \t\t 12:08 \t\t *Not on SUNDAY* \n"
               "6. \t 14:13 \t\t\t\t CSMT \t\t\t 15 \t\t 14:25 \t\t *Not on SUNDAY* \n"
               "7. \t 16:39 \t\t\t\t DADAR \t\t\t 15 \t\t 16:52 \t\t *Not on SUNDAY* \n"
               "8. \t 16:53 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:05 \t\t *Not on SUNDAY* \n"
               "9. \t 18:29 \t\t\t\t CSMT \t\t\t 15 \t\t 18:43 \t\t *Not on SUNDAY* \n"
               "10. \t 20:48 \t\t\t\t CSMT \t\t\t 15 \t\t 21:01 \t\t *Not on SUNDAY* \n"
               "11. \t 23:12 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:25 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftddadar(ft);
    }
    else if(strcmp(dtn,"dombivli")==0 || strcmp(dtn,"DOMBIVLI")==0)
    {
        printf("*     Source & Destination Station cannot be same\n"
               "    Please Change the Source or Destination Station   *\n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"kalyan")==0 || strcmp(dtn,"KALYAN")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:59 \t\t\t\t KALYAN \t\t\t 15 \t\t 07:07 \t\t *Not on SUNDAY* \n"
               "2. \t 08:17 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 08:25 \t\t *Not on SUNDAY* \n"
               "3. \t 09:30 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:37 \t\t *Not on SUNDAY* \n"
               "4. \t 11:28 \t\t\t\t KALYAN \t\t\t 15 \t\t 11:36 \t\t *Not on SUNDAY* \n"
               "5. \t 13:49 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:57 \t\t *Not on SUNDAY* \n"
               "6. \t 16:11 \t\t\t\t KALYAN \t\t\t 15 \t\t 16:19 \t\t *Not on SUNDAY* \n"
               "7. \t 18:10 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 18:17 \t\t *Not on SUNDAY* \n"
               "8. \t 20:21 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:31 \t\t *Not on SUNDAY* \n"
               "9. \t 22:48 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftkalyan(ft);
    }
    else
    {
        printf("Enter Valid Station \n\n");
        system("pause");
        main();
    }
    printf("\n1. New Search \n2. End program \nEnter Choice: ");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1: main();
                break;
        case 2: printf("\n***     THANK YOU!!!     ***\n");
                exit(0);
                break;
    }
}
void thane(dtn)
{
    int ft, menu;
    if (strcmp(dtn,"csmt")==0 || strcmp(dtn,"CSMT")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:06 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:50 \n"
               "2. \t 06:27 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 07:11 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 07:37 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:20 \t\t *Not on SUNDAY* \n"
               "4. \t 08:03 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:47 \t\t *Not on SUNDAY* \n"
               "5. \t 08:25 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 09:08 \t\t \n"
               "6. \t 08:53 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:35 \t\t *Not on SUNDAY* \n"
               "7. \t 09:00 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:45 \n"
               "8. \t 09:54 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:37 \t\t *Not on SUNDAY* \n"
               "9. \t 10:49 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:33 \n"
               "10. \t 12:08 \t\t\t\t CSMT \t\t\t 15 \t\t 12:48 \t\t *Not on SUNDAY* \n"
               "11. \t 14:25 \t\t\t\t CSMT \t\t\t 15 \t\t 15:07 \t\t *Not on SUNDAY* \n"
               "12. \t 17:05 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:46 \t\t *Not on SUNDAY* \n"
               "13. \t 18:43 \t\t\t\t CSMT \t\t\t 15 \t\t 19:24 \t\t *Not on SUNDAY* \n"
               "14. \t 21:01 \t\t\t\t CSMT \t\t\t 15 \t\t 21:44 \t\t *Not on SUNDAY* \n"
               "15. \t 23:25 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 00:05 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttcsmt(ft);
    }
    else if(strcmp(dtn,"byculla")==0 || strcmp(dtn,"BYCULLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:06 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:38 \n"
               "2. \t 06:27 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 07:00 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 07:37 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:11 \t\t *Not on SUNDAY* \n"
               "4. \t 08:03 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:38 \t\t *Not on SUNDAY* \n"
               "5. \t 08:25 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 09:00 \t\t \n"
               "6. \t 08:53 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:27 \t\t *Not on SUNDAY* \n"
               "7. \t 09:00 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:35 \n"
               "8. \t 09:54 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:29 \t\t *Not on SUNDAY* \n"
               "9. \t 10:49 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:25 \n"
               "10. \t 12:08 \t\t\t\t CSMT \t\t\t 15 \t\t 12:39 \t\t *Not on SUNDAY* \n"
               "11. \t 14:25 \t\t\t\t CSMT \t\t\t 15 \t\t 14:58 \t\t *Not on SUNDAY* \n"
               "12. \t 17:05 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:38 \t\t *Not on SUNDAY* \n"
               "13. \t 18:43 \t\t\t\t CSMT \t\t\t 15 \t\t 19:16 \t\t *Not on SUNDAY* \n"
               "14. \t 21:01 \t\t\t\t CSMT \t\t\t 15 \t\t 21:34 \t\t *Not on SUNDAY* \n"
               "15. \t 23:25 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttcsmt(ft);
    }
    else if(strcmp(dtn,"dadar")==0 || strcmp(dtn,"DADAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:06 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:31 \n"
               "2. \t 06:27 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:54 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 07:37 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:05 \t\t *Not on SUNDAY* \n"
               "4. \t 08:03 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:32 \t\t *Not on SUNDAY* \n"
               "5. \t 08:25 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:54 \t\t \n"
               "6. \t 08:53 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:21 \t\t *Not on SUNDAY* \n"
               "7. \t 09:00 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:29 \n"
               "8. \t 09:54 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:23 \t\t *Not on SUNDAY* \n"
               "9. \t 10:07 \t\t\t\t DADAR \t\t\t 15 \t\t 10:37 \t\t *Not on SUNDAY* \n"
               "10. \t 10:49 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:19 \n"
               "11. \t 12:08 \t\t\t\t CSMT \t\t\t 15 \t\t 12:33 \t\t *Not on SUNDAY* \n"
               "12. \t 14:25 \t\t\t\t CSMT \t\t\t 15 \t\t 14:52 \t\t *Not on SUNDAY* \n"
               "13. \t 16:52 \t\t\t\t DADAR \t\t\t 15 \t\t 17:20 \t\t *Not on SUNDAY* \n"
               "14. \t 17:05 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:32 \t\t *Not on SUNDAY* \n"
               "15. \t 18:43 \t\t\t\t CSMT \t\t\t 15 \t\t 19:10 \t\t *Not on SUNDAY* \n"
               "16. \t 21:01 \t\t\t\t CSMT \t\t\t 15 \t\t 21:28 \t\t *Not on SUNDAY* \n"
               "17. \t 23:25 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:51 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttdadar(ft);
    }
    else if(strcmp(dtn,"kurla")==0 || strcmp(dtn,"KURLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:06 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:23 \n"
               "2. \t 06:27 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:46 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 07:37 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:57 \t\t *Not on SUNDAY* \n"
               "4. \t 08:03 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:24 \t\t *Not on SUNDAY* \n"
               "5. \t 08:25 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:46 \t\t \n"
               "6. \t 08:53 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:13 \t\t *Not on SUNDAY* \n"
               "7. \t 09:00 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:21 \n"
               "8. \t 09:54 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:15 \t\t *Not on SUNDAY* \n"
               "9. \t 10:07 \t\t\t\t DADAR \t\t\t 15 \t\t 10:28 \t\t *Not on SUNDAY* \n"
               "10. \t 10:49 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:11 \n"
               "11. \t 12:08 \t\t\t\t CSMT \t\t\t 15 \t\t 12:25 \t\t *Not on SUNDAY* \n"
               "12. \t 14:25 \t\t\t\t CSMT \t\t\t 15 \t\t 14:44 \t\t *Not on SUNDAY* \n"
               "13. \t 16:52 \t\t\t\t DADAR \t\t\t 15 \t\t 17:12 \t\t *Not on SUNDAY* \n"
               "14. \t 17:05 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:24 \t\t *Not on SUNDAY* \n"
               "15. \t 18:43 \t\t\t\t CSMT \t\t\t 15 \t\t 19:02 \t\t *Not on SUNDAY* \n"
               "16. \t 21:01 \t\t\t\t CSMT \t\t\t 15 \t\t 21:20 \t\t *Not on SUNDAY* \n"
               "17. \t 23:25 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:43 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttdadar(ft);
    }
    else if(strcmp(dtn,"ghatkopar")==0 || strcmp(dtn,"GHATKOPAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:06 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:19 \n"
               "2. \t 06:27 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:42 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 07:37 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:53 \t\t *Not on SUNDAY* \n"
               "4. \t 08:53 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:09 \t\t *Not on SUNDAY* \n"
               "5. \t 09:00 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:17 \n"
               "6. \t 09:54 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:11 \t\t *Not on SUNDAY* \n"
               "7. \t 10:07 \t\t\t\t DADAR \t\t\t 15 \t\t 10:24 \t\t *Not on SUNDAY* \n"
               "8. \t 10:49 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:07 \n"
               "9. \t 12:08 \t\t\t\t CSMT \t\t\t 15 \t\t 12:21 \t\t *Not on SUNDAY* \n"
               "10. \t 14:25 \t\t\t\t CSMT \t\t\t 15 \t\t 14:40 \t\t *Not on SUNDAY* \n"
               "11. \t 16:52 \t\t\t\t DADAR \t\t\t 15 \t\t 17:08 \t\t *Not on SUNDAY* \n"
               "12. \t 17:05 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:20 \t\t *Not on SUNDAY* \n"
               "13. \t 18:43 \t\t\t\t CSMT \t\t\t 15 \t\t 18:58 \t\t *Not on SUNDAY* \n"
               "14. \t 21:01 \t\t\t\t CSMT \t\t\t 15 \t\t 21:16 \t\t *Not on SUNDAY* \n"
               "15. \t 23:25 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:39 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttghatkopar(ft);
    }
    else if(strcmp(dtn,"vikhroli")==0 || strcmp(dtn,"VIKHROLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 08:03 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:16 \t\t *Not on SUNDAY* \n"
               "2. \t 08:25 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:38 \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttvikhroli(ft);
    }
    else if(strcmp(dtn,"bhandup")==0 || strcmp(dtn,"BHANDUP")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:27 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:35 \t\t *Not on SATURDAY & SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbhandup(ft);
    }
    else if(strcmp(dtn,"mulund")==0 || strcmp(dtn,"MULUND")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:06 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:11 \n"
               "2. \t 07:37 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:41 \t\t *Not on SUNDAY* \n"
               "3. \t 08:03 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:08 \t\t *Not on SUNDAY* \n"
               "4. \t 08:25 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:30 \t\t \n"
               "5. \t 08:53 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:57 \t\t *Not on SUNDAY* \n"
               "6. \t 09:00 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:06 \n"
               "7. \t 09:54 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:59 \t\t *Not on SUNDAY* \n"
               "8. \t 10:49 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:55 \n"
               "9. \t 17:05 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:09 \t\t *Not on SUNDAY* \n"
               "10. \t 23:55 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:29 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttmulund(ft);
    }
    else if(strcmp(dtn,"thane")==0 || strcmp(dtn,"THANE")==0)
    {
        printf("*     Source & Destination Station cannot be same\n"
               "    Please Change the Source or Destination Station   *\n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"dombivli")==0 || strcmp(dtn,"DOMBIVLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:46 \t\t\t\t KALYAN \t\t\t 15 \t\t 06:59 \t\t *Not on SUNDAY* \n"
               "2. \t 08:05 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 08:17 \t\t *Not on SUNDAY* \n"
               "3. \t 09:18 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:30 \t\t *Not on SUNDAY* \n"
               "4. \t 11:15 \t\t\t\t KALYAN \t\t\t 15 \t\t 11:28 \t\t *Not on SUNDAY* \n"
               "5. \t 12:17 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 12:29 \n"
               "6. \t 13:36 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:49 \t\t *Not on SUNDAY* \n"
               "7. \t 15:58 \t\t\t\t KALYAN \t\t\t 15 \t\t 16:11 \t\t *Not on SUNDAY* \n"
               "8. \t 17:57 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 18:10 \t\t *Not on SUNDAY* \n"
               "9. \t 20:09 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:21 \t\t *Not on SUNDAY* \n"
               "10. \t 22:36 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:48 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttdombivli(ft);
    }
    else if(strcmp(dtn,"kalyan")==0 || strcmp(dtn,"KALYAN")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:46 \t\t\t\t KALYAN \t\t\t 15 \t\t 07:07 \t\t *Not on SUNDAY* \n"
               "2. \t 08:05 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 08:25 \t\t *Not on SUNDAY* \n"
               "3. \t 09:18 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:37 \t\t *Not on SUNDAY* \n"
               "4. \t 11:15 \t\t\t\t KALYAN \t\t\t 15 \t\t 11:36 \t\t *Not on SUNDAY* \n"
               "5. \t 13:36 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:57 \t\t *Not on SUNDAY* \n"
               "6. \t 15:58 \t\t\t\t KALYAN \t\t\t 15 \t\t 16:19 \t\t *Not on SUNDAY* \n"
               "7. \t 17:57 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 18:17 \t\t *Not on SUNDAY* \n"
               "8. \t 20:09 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:31 \t\t *Not on SUNDAY* \n"
               "9. \t 22:36 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftkalyan(ft);
    }
    else
    {
        printf("Enter Valid Station \n\n");
        system("pause");
        main();
    }
    printf("\n1. New Search \n2. End program \nEnter Choice: ");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1: main();
                break;
        case 2: printf("\n***     THANK YOU!!!     ***\n");
                exit(0);
                break;
    }
}
void mulund(dtn)
{
    int ft, menu;
    if (strcmp(dtn,"csmt")==0 || strcmp(dtn,"CSMT")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:11 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:50 \n"
               "2. \t 07:41 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:20 \t\t *Not on SUNDAY* \n"
               "3. \t 08:08 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:47 \t\t *Not on SUNDAY* \n"
               "4. \t 08:30 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 09:08 \t\t \n"
               "5. \t 08:57 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:35 \t\t *Not on SUNDAY* \n"
               "6. \t 09:06 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:45 \n"
               "7. \t 09:59 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:37 \t\t *Not on SUNDAY* \n"
               "8. \t 10:55 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:33 \n"
               "9. \t 17:09 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:46 \t\t *Not on SUNDAY* \n"
               "10. \t 23:29 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 00:05 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttmulund(ft);
    }
    else if(strcmp(dtn,"byculla")==0 || strcmp(dtn,"BYCULLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:11 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:38 \n"
               "2. \t 07:41 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:11 \t\t *Not on SUNDAY* \n"
               "3. \t 08:08 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:38 \t\t *Not on SUNDAY* \n"
               "4. \t 08:30 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 09:00 \t\t \n"
               "5. \t 08:57 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:27 \t\t *Not on SUNDAY* \n"
               "6. \t 09:06 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:35 \n"
               "7. \t 09:59 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:29 \t\t *Not on SUNDAY* \n"
               "8. \t 10:55 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:25 \n"
               "9. \t 17:09 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:38 \t\t*Not on SUNDAY* \n"
               "10. \t 23:29 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttmulund(ft);
    }
    else if(strcmp(dtn,"dadar")==0 || strcmp(dtn,"DADAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:11 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:31 \n"
               "2. \t 07:41 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:05 \t\t *Not on SUNDAY* \n"
               "3. \t 08:08 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:32 \t\t *Not on SUNDAY* \n"
               "4. \t 08:30 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:54 \t\t \n"
               "5. \t 08:57 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:21 \t\t *Not on SUNDAY* \n"
               "6. \t 09:06 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:29 \n"
               "7. \t 09:59 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:23 \t\t *Not on SUNDAY* \n"
               "8. \t 10:55 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:19 \n"
               "9. \t 17:09 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:32 \t\t *Not on SUNDAY* \n"
               "10. \t 23:29 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:51 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttmulund(ft);
    }
    else if(strcmp(dtn,"kurla")==0 || strcmp(dtn,"KURLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:11 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:23 \n"
               "2. \t 07:41 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:57 \t\t *Not on SUNDAY* \n"
               "3. \t 08:08 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:24 \t\t *Not on SUNDAY* \n"
               "4. \t 08:30 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:46 \t\t \n"
               "5. \t 08:57 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:13 \t\t *Not on SUNDAY* \n"
               "6. \t 09:06 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:21 \n"
               "7. \t 09:59 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:15 \t\t *Not on SUNDAY* \n"
               "8. \t 10:55 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:11 \n"
               "9. \t 17:09 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:24 \t\t *Not on SUNDAY* \n"
               "10. \t 23:29 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:43 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttmulund(ft);
    }
    else if(strcmp(dtn,"ghatkopar")==0 || strcmp(dtn,"GHATKOPAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:11 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:19 \n"
               "2. \t 07:41 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:53 \t\t *Not on SUNDAY* \n"
               "3. \t 08:57 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:09 \t\t *Not on SUNDAY* \n"
               "4. \t 09:06 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:17 \n"
               "5. \t 09:59 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:11 \t\t *Not on SUNDAY* \n"
               "6. \t 10:55 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:07 \n"
               "7. \t 17:09 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:20 \t\t *Not on SUNDAY* \n"
               "8. \t 23:29 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:39 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftmghatkopar(ft);
    }
    else if(strcmp(dtn,"vikhroli")==0 || strcmp(dtn,"VIKHROLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 08:08 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:16 \t\t *Not on SUNDAY* \n"
               "2. \t 08:30 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:38 \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttvikhroli(ft);
    }
    else if(strcmp(dtn,"bhandup")==0 || strcmp(dtn,"BHANDUP")==0)
    {
        printf("***              NO DIRECT TRAINS FOUND!            ***\n"
               "    Please Change the Source or Destination Station   \n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"mulund")==0 || strcmp(dtn,"MULUND")==0)
    {
        printf("*     Source & Destination Station cannot be same\n"
               "    Please Change the Source or Destination Station   *\n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"thane")==0 || strcmp(dtn,"THANE")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 09:14 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:18 \t\t *Not on SUNDAY* \n"
               "2. \t 09:27 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:33 \t\t *Not on SUNDAY* \n"
               "3. \t 09:40 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 09:46 \t\t *Not on SUNDAY* \n"
               "4. \t 10:24 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 10:30 \t\t *Not on SUNDAY* \n"
               "5. \t 17:53 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 17:57 \t\t *Not on SUNDAY* \n"
               "6. \t 18:46 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:52 \t\t *Not on SUNDAY* \n"
               "7. \t 19:40 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:46 \t\t *Not on SUNDAY* \n"
               "8. \t 20:05 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:09 \t\t *Not on SUNDAY* \n"
               "9. \t 22:32 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:36 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftmthane(ft);
    }
    else if(strcmp(dtn,"dombivli")==0 || strcmp(dtn,"DOMBIVLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 09:14 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 09:30 \t\t *Not on SUNDAY* \n"
               "2. \t 17:53 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 18:10 \t\t *Not on SUNDAY* \n"
               "3. \t 20:05 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 20:21 \t\t *Not on SUNDAY* \n"
               "4. \t 22:32 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 22:48 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftmkalyan(ft);
    }
    else if(strcmp(dtn,"kalyan")==0 || strcmp(dtn,"KALYAN")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 09:14 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 09:37 \t\t *Not on SUNDAY* \n"
               "2. \t 17:53 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 18:17 \t\t *Not on SUNDAY* \n"
               "3. \t 20:05 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 20:31 \t\t *Not on SUNDAY* \n"
               "4. \t 22:32 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 22:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftmkalyan(ft);
    }
    else
    {
        printf("Enter Valid Station \n\n");
        system("pause");
        main();
    }
    printf("\n1. New Search \n2. End program \nEnter Choice: ");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1: main();
                break;
        case 2: printf("\n***     THANK YOU!!!     ***\n");
                exit(0);
                break;
    }
}
void bhandup(dtn)
{
    int ft, menu;
    if (strcmp(dtn,"csmt")==0 || strcmp(dtn,"CSMT")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:35 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 07:11 \t\t *Not on SATURDAY & SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbhandup(ft);
    }
    else if(strcmp(dtn,"byculla")==0 || strcmp(dtn,"BYCULLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:35 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 07:00 \t\t *Not on SATURDAY & SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbhandup(ft);
    }
    else if(strcmp(dtn,"dadar")==0 || strcmp(dtn,"DADAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:35 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:54 \t\t *Not on SATURDAY & SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbhandup(ft);
    }
    else if(strcmp(dtn,"kurla")==0 || strcmp(dtn,"KURLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:35 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:46 \t\t *Not on SATURDAY & SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbhandup(ft);
    }
    else if(strcmp(dtn,"ghatkopar")==0 || strcmp(dtn,"GHATKOPAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:35 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:42 \t\t *Not on SATURDAY & SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbhandup(ft);
    }
    else if(strcmp(dtn,"vikhroli")==0 || strcmp(dtn,"VIKHROLI")==0)
    {
        printf("***              NO DIRECT TRAINS FOUND!            ***\n"
               "    Please Change the Source or Destination Station   \n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"bhandup")==0 || strcmp(dtn,"BHANDUP")==0)
    {
        printf("*     Source & Destination Station cannot be same\n"
               "    Please Change the Source or Destination Station   *\n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"mulund")==0 || strcmp(dtn,"MULUND")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 18:40 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:46 \t\t *Not on SUNDAY* \n"
               "2. \t 19:35 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:40 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbmulund(ft);
    }
    else if(strcmp(dtn,"thane")==0 || strcmp(dtn,"THANE")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:57 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 08:05 \t\t *Not on SUNDAY* \n"
               "2. \t 18:40 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:52 \t\t *Not on SUNDAY* \n"
               "3. \t 19:35 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:46 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbthane(ft);
    }
    else if(strcmp(dtn,"dombivli")==0 || strcmp(dtn,"DOMBIVLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:57 \t\t\t\t KALYAN (Bhandup) \t 15 \t\t 08:17 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbkalyan(ft);
    }
    else if(strcmp(dtn,"kalyan")==0 || strcmp(dtn,"KALYAN")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:57 \t\t\t\t KALYAN (Bhandup) \t 15 \t\t 08:25 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbkalyan(ft);
    }
    else
    {
        printf("Enter Valid Station \n\n");
        system("pause");
        main();
    }
    printf("\n1. New Search \n2. End program \nEnter Choice: ");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1: main();
                break;
        case 2: printf("\n***     THANK YOU!!!     ***\n");
                exit(0);
                break;
    }
}
void vikhroli(dtn)
{
    int ft, menu;
    if (strcmp(dtn,"csmt")==0 || strcmp(dtn,"CSMT")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 08:16 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:47 \t\t *Not on SUNDAY* \n"
               "2. \t 08:38 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 09:08 \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttvikhroli(ft);
    }
    else if(strcmp(dtn,"byculla")==0 || strcmp(dtn,"BYCULLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 08:16 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:38 \t\t *Not on SUNDAY* \n"
               "2. \t 08:38 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 09:00 \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttvikhroli(ft);
    }
    else if(strcmp(dtn,"dadar")==0 || strcmp(dtn,"DADAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 08:16 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:32 \t\t *Not on SUNDAY* \n"
               "2. \t 08:38 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:54 \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttvikhroli(ft);
    }
    else if(strcmp(dtn,"kurla")==0 || strcmp(dtn,"KURLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 08:16 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:24 \t\t *Not on SUNDAY* \n"
               "2. \t 08:38 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:46 \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttvikhroli(ft);
    }
    else if(strcmp(dtn,"ghatkopar")==0 || strcmp(dtn,"GHATKOPAR")==0)
    {
        printf("***              NO DIRECT TRAINS FOUND!            ***\n"
               "    Please Change the Source or Destination Station   \n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"vikhroli")==0 || strcmp(dtn,"VIKHROLI")==0)
    {
        printf("*     Source & Destination Station cannot be same\n"
               "    Please Change the Source or Destination Station   *\n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"bhandup")==0 || strcmp(dtn,"BHANDUP")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 19:35 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:40 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftvbhandup(ft);
    }
    else if(strcmp(dtn,"mulund")==0 || strcmp(dtn,"MULUND")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 09:19 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:27 \t\t *Not on SUNDAY* \n"
               "2. \t 19:30 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:40 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftvthane(ft);
    }
    else if(strcmp(dtn,"thane")==0 || strcmp(dtn,"THANE")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 09:19 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:33 \t\t *Not on SUNDAY* \n"
               "2. \t 19:30 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:46 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftvthane(ft);
    }
    else if(strcmp(dtn,"dombivli")==0 || strcmp(dtn,"DOMBIVLI")==0)
    {
        printf("***              NO DIRECT TRAINS FOUND!            ***\n"
               "    Please Change the Source or Destination Station   \n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"kalyan")==0 || strcmp(dtn,"KALYAN")==0)
    {
        printf("***              NO DIRECT TRAINS FOUND!            ***\n"
               "    Please Change the Source or Destination Station   \n\n");
        system("pause");
        main();
    }
    else
    {
        printf("Enter Valid Station \n\n");
        system("pause");
        main();
    }
    printf("\n1. New Search \n2. End program \nEnter Choice: ");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1: main();
                break;
        case 2: printf("\n***     THANK YOU!!!     ***\n");
                exit(0);
                break;
    }
}
void ghatkopar(dtn)
{
    int ft, menu;
    if (strcmp(dtn,"csmt")==0 || strcmp(dtn,"CSMT")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:19 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:50 \n"
               "2. \t 06:42 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 07:11 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 07:53 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:20 \t\t *Not on SUNDAY* \n"
               "4. \t 09:09 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:35 \t\t *Not on SUNDAY* \n"
               "5. \t 09:17 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:45 \n"
               "6. \t 10:11 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:37 \t\t *Not on SUNDAY* \n"
               "7. \t 11:07 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:33 \n"
               "8. \t 12:21 \t\t\t\t CSMT \t\t\t 15 \t\t 12:48 \t\t *Not on SUNDAY* \n"
               "9. \t 14:40 \t\t\t\t CSMT \t\t\t 15 \t\t 15:07 \t\t *Not on SUNDAY* \n"
               "10. \t 17:20 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:46 \t\t *Not on SUNDAY* \n"
               "11. \t 18:58 \t\t\t\t CSMT \t\t\t 15 \t\t 19:24 \t\t *Not on SUNDAY* \n"
               "12. \t 21:16 \t\t\t\t CSMT \t\t\t 15 \t\t 21:44 \t\t *Not on SUNDAY* \n"
               "13. \t 23:39 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 00:05 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftgcsmt(ft);
    }
    else if(strcmp(dtn,"byculla")==0 || strcmp(dtn,"BYCULLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:19 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:38 \n"
               "2. \t 06:42 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 07:00 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 07:53 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:11 \t\t *Not on SUNDAY* \n"
               "4. \t 09:09 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:27 \t\t *Not on SUNDAY* \n"
               "5. \t 09:17 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:35 \n"
               "6. \t 10:11 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:29 \t\t *Not on SUNDAY* \n"
               "7. \t 11:07 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:25 \n"
               "8. \t 12:21 \t\t\t\t CSMT \t\t\t 15 \t\t 12:39 \t\t *Not on SUNDAY* \n"
               "9. \t 14:40 \t\t\t\t CSMT \t\t\t 15 \t\t 14:58 \t\t *Not on SUNDAY* \n"
               "10. \t 17:20 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:38 \t\t *Not on SUNDAY* \n"
               "11. \t 18:58 \t\t\t\t CSMT \t\t\t 15 \t\t 19:16 \t\t *Not on SUNDAY* \n"
               "12. \t 21:16 \t\t\t\t CSMT \t\t\t 15 \t\t 21:34 \t\t *Not on SUNDAY* \n"
               "13. \t 23:39 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftgcsmt(ft);
    }
    else if(strcmp(dtn,"dadar")==0 || strcmp(dtn,"DADAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:19 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:31 \n"
               "2. \t 06:42 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:54 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 07:53 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:05 \t\t *Not on SUNDAY* \n"
               "4. \t 09:09 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:21 \t\t *Not on SUNDAY* \n"
               "5. \t 09:17 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:29 \n"
               "6. \t 10:11 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:23 \t\t *Not on SUNDAY* \n"
               "7. \t 10:24 \t\t\t\t DADAR \t\t\t 15 \t\t 10:37 \t\t *Not on SUNDAY* \n"
               "8. \t 11:07 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:19 \n"
               "9. \t 12:21 \t\t\t\t CSMT \t\t\t 15 \t\t 12:33 \t\t *Not on SUNDAY* \n"
               "10. \t 14:40 \t\t\t\t CSMT \t\t\t 15 \t\t 14:52 \t\t *Not on SUNDAY* \n"
               "11. \t 17:08 \t\t\t\t DADAR \t\t\t 15 \t\t 17:20 \t\t *Not on SUNDAY* \n"
               "12. \t 17:20 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:32 \t\t *Not on SUNDAY* \n"
               "13. \t 18:58 \t\t\t\t CSMT \t\t\t 15 \t\t 19:10 \t\t *Not on SUNDAY* \n"
               "14. \t 21:16 \t\t\t\t CSMT \t\t\t 15 \t\t 21:28 \t\t *Not on SUNDAY* \n"
               "15. \t 23:39 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:51 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftgdadar(ft);
    }
    else if(strcmp(dtn,"kurla")==0 || strcmp(dtn,"KURLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:19 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:23 \n"
               "2. \t 06:42 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:46 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 07:53 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 07:57 \t\t *Not on SUNDAY* \n"
               "4. \t 09:09 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:13 \t\t *Not on SUNDAY* \n"
               "5. \t 09:17 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:21 \n"
               "6. \t 10:11 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:15 \t\t *Not on SUNDAY* \n"
               "7. \t 10:24 \t\t\t\t DADAR \t\t\t 15 \t\t 10:28 \t\t *Not on SUNDAY* \n"
               "8. \t 11:07 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:11 \n"
               "9. \t 12:21 \t\t\t\t CSMT \t\t\t 15 \t\t 12:25 \t\t *Not on SUNDAY* \n"
               "10. \t 14:40 \t\t\t\t CSMT \t\t\t 15 \t\t 14:44 \t\t *Not on SUNDAY* \n"
               "11. \t 17:08 \t\t\t\t DADAR \t\t\t 15 \t\t 17:12 \t\t *Not on SUNDAY* \n"
               "12. \t 17:20 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:24 \t\t *Not on SUNDAY* \n"
               "13. \t 18:58 \t\t\t\t CSMT \t\t\t 15 \t\t 19:02 \t\t *Not on SUNDAY* \n"
               "14. \t 21:16 \t\t\t\t CSMT \t\t\t 15 \t\t 21:20 \t\t *Not on SUNDAY* \n"
               "15. \t 23:39 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:43 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftgdadar(ft);
    }
    else if(strcmp(dtn,"ghatkopar")==0 || strcmp(dtn,"GHATKOPAR")==0)
    {
        printf("*     Source & Destination Station cannot be same\n"
               "    Please Change the Source or Destination Station   *\n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"vikhroli")==0 || strcmp(dtn,"VIKHROLI")==0)
    {
        printf("***              NO DIRECT TRAINS FOUND!            ***\n"
               "    Please Change the Source or Destination Station   \n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"bhandup")==0 || strcmp(dtn,"BHANDUP")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:49 \t\t\t\t KALYAN (Bhandup) \t 12 \t\t 07:57 \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbkalyan(ft);
    }
    else if(strcmp(dtn,"mulund")==0 || strcmp(dtn,"MULUND")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 09:02 \t\t\t\t KALYAN (Mulund) \t 12 \t\t 09:14 \t\t *Not on SUNDAY* \n"
               "2. \t 10:12 \t\t\t\t THANE (Mulund) \t 12 \t\t 10:24 \n"
               "3. \t 17:41 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 17:53 \t\t *Not on SUNDAY* \n"
               "4. \t 19:55 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 20:05 \t\t *Not on SUNDAY* \n"
               "5. \t 22:20 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 22:32 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftgmulund(ft);
    }
    else if(strcmp(dtn,"thane")==0 || strcmp(dtn,"THANE")==0)
    {

        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:49 \t\t\t\t KALYAN (Bhandup) \t\t 12 \t\t 08:05 \n"
               "2. \t 08:28 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:46 \t\t \n"
               "3. \t 09:02 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:18 \t\t *Not on SUNDAY* \n"
               "4. \t 10:12 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 10:30 \n"
               "5. \t 10:57 \t\t\t\t KALYAN \t\t\t 15 \t\t 11:15 \t\t *Not on SUNDAY* \n"
               "6. \t 12:02 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 12:17 \t\t \n"
               "7. \t 13:20 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:36 \t\t *Not on SUNDAY* \n"
               "8. \t 15:42 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:58 \t\t *Not on SUNDAY* \n"
               "9. \t 17:41 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 17:57 \t\t *Not on SUNDAY* \n"
               "10. \t 19:55 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:09 \t\t *Not on SUNDAY* \n"
               "11. \t 22:20 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:36 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftgthane(ft);
    }
    else if(strcmp(dtn,"dombivli")==0 || strcmp(dtn,"DOMBIVLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:49 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 08:17 \t\t \n"
               "2. \t 09:02 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:30 \t\t *Not on SUNDAY* \n"
               "3. \t 10:57 \t\t\t\t KALYAN \t\t\t 15 \t\t 11:28 \t\t *Not on SUNDAY* \n"
               "4. \t 12:02 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 12:29 \t\t \n"
               "5. \t 13:20 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:49 \t\t *Not on SUNDAY* \n"
               "6. \t 15:42 \t\t\t\t KALYAN \t\t\t 15 \t\t 16:11 \t\t *Not on SUNDAY* \n"
               "7. \t 17:41 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 18:10 \t\t *Not on SUNDAY* \n"
               "8. \t 19:55 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:21 \t\t *Not on SUNDAY* \n"
               "9. \t 22:20 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:48 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftgdombivli(ft);
    }
    else if(strcmp(dtn,"kalyan")==0 || strcmp(dtn,"KALYAN")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:49 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 08:25 \t\t \n"
               "2. \t 09:02 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:37 \t\t *Not on SUNDAY* \n"
               "3. \t 10:57 \t\t\t\t KALYAN \t\t\t 15 \t\t 11:36 \t\t *Not on SUNDAY* \n"
               "4. \t 13:20 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:57 \t\t *Not on SUNDAY* \n"
               "5. \t 15:42 \t\t\t\t KALYAN \t\t\t 15 \t\t 16:19 \t\t *Not on SUNDAY* \n"
               "6. \t 17:41 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 18:17 \t\t *Not on SUNDAY* \n"
               "7. \t 19:55 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:31 \t\t *Not on SUNDAY* \n"
               "8. \t 22:20 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftgkalyan(ft);
    }
    else
    {
        printf("Enter Valid Station \n\n");
        system("pause");
        main();
    }
    printf("\n1. New Search \n2. End program \nEnter Choice: ");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1: main();
                break;
        case 2: printf("\n***     THANK YOU!!!     ***\n");
                exit(0);
                break;
    }
}
void kurla(dtn)
{
    int ft, menu;
    if (strcmp(dtn,"csmt")==0 || strcmp(dtn,"CSMT")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:23 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:50 \n"
               "2. \t 06:46 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 07:11 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 07:57 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:20 \t\t *Not on SUNDAY* \n"
               "4. \t 08:24 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:47 \t\t *Not on SUNDAY* \n"
               "5. \t 08:46 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 09:08 \t\t \n"
               "6. \t 09:13 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:35 \t\t *Not on SUNDAY* \n"
               "7. \t 09:21 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:45 \n"
               "8. \t 10:15 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:37 \t\t *Not on SUNDAY* \n"
               "9. \t 11:11 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:33 \n"
               "10. \t 12:25 \t\t\t\t CSMT \t\t\t 15 \t\t 12:48 \t\t *Not on SUNDAY* \n"
               "11. \t 14:44 \t\t\t\t CSMT \t\t\t 15 \t\t 15:07 \t\t *Not on SUNDAY* \n"
               "12. \t 17:24 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:46 \t\t *Not on SUNDAY* \n"
               "13. \t 19:02 \t\t\t\t CSMT \t\t\t 15 \t\t 19:24 \t\t *Not on SUNDAY* \n"
               "14. \t 21:20 \t\t\t\t CSMT \t\t\t 15 \t\t 21:44 \t\t *Not on SUNDAY* \n"
               "15. \t 23:43 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 00:05 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttcsmt(ft);
    }
    else if(strcmp(dtn,"byculla")==0 || strcmp(dtn,"BYCULLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:23 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:38 \n"
               "2. \t 06:46 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 07:00 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 07:57 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:11 \t\t *Not on SUNDAY* \n"
               "4. \t 08:24 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:38 \t\t *Not on SUNDAY* \n"
               "5. \t 08:46 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 09:00 \t\t \n"
               "6. \t 09:13 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:27 \t\t *Not on SUNDAY* \n"
               "7. \t 09:21 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:35 \n"
               "8. \t 10:15 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:29 \t\t *Not on SUNDAY* \n"
               "9. \t 11:11 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:25 \n"
               "10. \t 12:25 \t\t\t\t CSMT \t\t\t 15 \t\t 12:39 \t\t *Not on SUNDAY* \n"
               "11. \t 14:44 \t\t\t\t CSMT \t\t\t 15 \t\t 14:58 \t\t *Not on SUNDAY* \n"
               "12. \t 17:24 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:38 \t\t *Not on SUNDAY* \n"
               "13. \t 19:02 \t\t\t\t CSMT \t\t\t 15 \t\t 19:16 \t\t *Not on SUNDAY* \n"
               "14. \t 21:20 \t\t\t\t CSMT \t\t\t 15 \t\t 21:34 \t\t *Not on SUNDAY* \n"
               "15. \t 23:43 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttcsmt(ft);
    }
    else if(strcmp(dtn,"dadar")==0 || strcmp(dtn,"DADAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:23 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:31 \n"
               "2. \t 06:46 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 06:54 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 07:57 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:05 \t\t *Not on SUNDAY* \n"
               "4. \t 08:24 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:32 \t\t *Not on SUNDAY* \n"
               "5. \t 08:46 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:54 \t\t \n"
               "6. \t 09:13 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:21 \t\t *Not on SUNDAY* \n"
               "7. \t 09:21 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:29 \n"
               "8. \t 10:15 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:23 \t\t *Not on SUNDAY* \n"
               "9. \t 10:28 \t\t\t\t DADAR \t\t\t 15 \t\t 10:37 \t\t *Not on SUNDAY* \n"
               "10. \t 11:11 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:19 \n"
               "11. \t 12:25 \t\t\t\t CSMT \t\t\t 15 \t\t 12:33 \t\t *Not on SUNDAY* \n"
               "12. \t 14:44 \t\t\t\t CSMT \t\t\t 15 \t\t 14:52 \t\t *Not on SUNDAY* \n"
               "13. \t 17:12 \t\t\t\t DADAR \t\t\t 15 \t\t 17:20 \t\t *Not on SUNDAY* \n"
               "14. \t 17:24 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:32 \t\t *Not on SUNDAY* \n"
               "15. \t 19:02 \t\t\t\t CSMT \t\t\t 15 \t\t 19:10 \t\t *Not on SUNDAY* \n"
               "16. \t 21:20 \t\t\t\t CSMT \t\t\t 15 \t\t 21:28 \t\t *Not on SUNDAY* \n"
               "17. \t 23:43 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:51 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttdadar(ft);
    }
    else if(strcmp(dtn,"kurla")==0 || strcmp(dtn,"KURLA")==0)
    {
        printf("*     Source & Destination Station cannot be same\n"
               "    Please Change the Source or Destination Station   *\n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"ghatkopar")==0 || strcmp(dtn,"GHATKOPAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:45 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 07:49 \t\t *Not on SUNDAY* \n"
               "2. \t 08:24 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:28 \n"
               "3. \t 08:58 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:02 \t\t *Not on SUNDAY* \n"
               "4. \t 10:08 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 10:12 \t\t \n"
               "5. \t 10:53 \t\t\t\t KALYAN \t\t\t 12 \t\t 10:57 \t\t *Not on SUNDAY* \n"
               "6. \t 11:58 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 12:02 \t\t *Not on SUNDAY* \n"
               "7. \t 13:16 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:20 \t\t *Not on SUNDAY* \n"
               "8. \t 15:38 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:42 \t\t *Not on SUNDAY* \n"
               "9. \t 17:37 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 17:41 \t\t *Not on SUNDAY* \n"
               "10. \t 19:51 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 19:55 \t\t *Not on SUNDAY* \n"
               "11. \t 22:16 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:20 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftgthane(ft);
    }
    else if(strcmp(dtn,"vikhroli")==0 || strcmp(dtn,"VIKHROLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 09:11 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:19 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftkvikhroli(ft);
    }
    else if(strcmp(dtn,"bhandup")==0 || strcmp(dtn,"BHANDUP")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:45 \t\t\t\t KALYAN (Bhandup) \t\t 12 \t\t 07:57 \t\t \n"
               "2. \t 18:30 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:40 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftkbhandup(ft);
    }
    else if(strcmp(dtn,"mulund")==0 || strcmp(dtn,"MULUND")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 08:58 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:14 \t\t *Not on SUNDAY* \n"
               "2. \t 09:11 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:27 \t\t *Not on SUNDAY* \n"
               "3. \t 09:24 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 09:40 \t\t *Not on SUNDAY* \n"
               "4. \t 10:08 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 10:24 \t\t \n"
               "5. \t 17:37 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 17:53 \t\t *Not on SUNDAY* \n"
               "6. \t 18:30 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:46 \t\t *Not on SUNDAY* \n"
               "7. \t 19:51 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:05 \t\t *Not on SUNDAY* \n"
               "8. \t 22:16 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:32 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftkmulund(ft);
    }
    else if(strcmp(dtn,"thane")==0 || strcmp(dtn,"THANE")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:28 \t\t\t\t KALYAN \t\t\t 12 \t\t 06:46 \t\t *Not on SUNDAY* \n"
               "2. \t 07:45 \t\t\t\t KALYAN (Bhandup) \t\t 12 \t\t 08:05 \t\t \n"
               "3. \t 08:24 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:46 \n"
               "4. \t 08:58 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:18 \t\t *Not on SUNDAY* \n"
               "5. \t 09:11 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:33 \t\t *Not on SUNDAY* \n"
               "6. \t 09:24 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 09:46 \t\t *Not on SUNDAY* \n"
               "7. \t 10:08 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 10:30 \t\t \n"
               "8. \t 10:53 \t\t\t\t KALYAN \t\t\t 15 \t\t 11:15 \t\t *Not on SUNDAY* \n"
               "9. \t 11:58 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 12:17 \t\t \n"
               "10. \t 13:16 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:36 \t\t *Not on SUNDAY* \n"
               "11. \t 15:38 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:58 \t\t *Not on SUNDAY* \n"
               "12. \t 17:37 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 17:57 \t\t *Not on SUNDAY* \n"
               "13. \t 18:30 \t\t\t\t THANE (Bha-Mul) \t\t 12 \t\t 18:52 \t\t *Not on SUNDAY* \n"
               "14. \t 19:51 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:09 \t\t *Not on SUNDAY* \n"
               "15. \t 22:16 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:36 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftkthane(ft);
    }
    else if(strcmp(dtn,"dombivli")==0 || strcmp(dtn,"DOMBIVLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:28 \t\t\t\t KALYAN \t\t 12 \t\t 06:59 \t\t *Not on SUNDAY* \n"
               "2. \t 07:45 \t\t\t\t KALYAN (Bhandup) \t 12 \t\t 08:17 \t\t \n"
               "3. \t 08:58 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 09:30 \t\t *Not on SUNDAY* \n"
               "4. \t 10:53 \t\t\t\t KALYAN \t\t 15 \t\t 11:28 \t\t *Not on SUNDAY* \n"
               "5. \t 11:58 \t\t\t\t DOMBIVLI \t\t 15 \t\t 12:29 \t\t \n"
               "6. \t 13:16 \t\t\t\t KALYAN \t\t 15 \t\t 13:49 \t\t *Not on SUNDAY* \n"
               "7. \t 15:38 \t\t\t\t KALYAN \t\t 15 \t\t 16:11 \t\t *Not on SUNDAY* \n"
               "8. \t 17:37 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 18:10 \t\t *Not on SUNDAY* \n"
               "9. \t 19:51 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 20:21 \t\t *Not on SUNDAY* \n"
               "10. \t 22:16 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 22:48 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttdombivli(ft);
    }
    else if(strcmp(dtn,"kalyan")==0 || strcmp(dtn,"KALYAN")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:28 \t\t\t\t KALYAN \t\t 12 \t\t 07:07 \t\t *Not on SUNDAY* \n"
               "2. \t 07:45 \t\t\t\t KALYAN (Bhandup) \t 12 \t\t 08:25 \t\t \n"
               "3. \t 08:58 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 09:37 \t\t *Not on SUNDAY* \n"
               "4. \t 10:53 \t\t\t\t KALYAN \t\t 15 \t\t 11:36 \t\t *Not on SUNDAY* \n"
               "5. \t 13:16 \t\t\t\t KALYAN \t\t 15 \t\t 13:57 \t\t *Not on SUNDAY* \n"
               "6. \t 15:38 \t\t\t\t KALYAN \t\t 15 \t\t 16:19 \t\t *Not on SUNDAY* \n"
               "7. \t 17:37 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 18:17 \t\t *Not on SUNDAY* \n"
               "8. \t 19:51 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 20:31 \t\t *Not on SUNDAY* \n"
               "9. \t 22:16 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 22:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftkalyan(ft);
    }
    else
    {
        printf("Enter Valid Station \n\n");
        system("pause");
        main();
    }
    printf("\n1. New Search \n2. End program \nEnter Choice: ");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1: main();
                break;
        case 2: printf("\n***     THANK YOU!!!     ***\n");
                exit(0);
                break;
    }
}
void dadar(dtn)
{
    int ft, menu;
    if (strcmp(dtn,"csmt")==0 || strcmp(dtn,"CSMT")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:31 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:50 \n"
               "2. \t 06:54 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 07:11 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 08:05 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:20 \t\t *Not on SUNDAY* \n"
               "4. \t 08:32 \t\t\t\t CSMT (Vik-Mulund) \t 15 \t\t 08:47 \t\t *Not on SUNDAY* \n"
               "5. \t 08:54 \t\t\t\t CSMT (Vik-Mulund) \t 15 \t\t 09:08 \t\t \n"
               "6. \t 09:21 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:35 \n"
               "7. \t 09:29 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:45 \n"
               "8. \t 10:23 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 10:37 \t\t *Not on SUNDAY* \n"
               "9. \t 11:19 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:33 \n"
               "10. \t 12:33 \t\t\t\t CSMT \t\t\t 15 \t\t 12:48 \t\t *Not on SUNDAY* \n"
               "11. \t 14:52 \t\t\t\t CSMT \t\t\t 15 \t\t 15:07 \t\t *Not on SUNDAY* \n"
               "12. \t 17:32 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:46 \t\t *Not on SUNDAY* \n"
               "13. \t 19:10 \t\t\t\t CSMT \t\t\t 15 \t\t 19:24 \t\t *Not on SUNDAY* \n"
               "14. \t 21:28 \t\t\t\t CSMT \t\t\t 15 \t\t 21:44 \t\t *Not on SUNDAY* \n"
               "15. \t 23:51 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 00:05 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttcsmt(ft);
    }
    else if(strcmp(dtn,"byculla")==0 || strcmp(dtn,"BYCULLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:31 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:38 \n"
               "2. \t 06:54 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 07:00 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 08:05 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:11 \t\t *Not on SUNDAY* \n"
               "4. \t 08:32 \t\t\t\t CSMT (Vik-Mulund) \t 15 \t\t 08:38 \t\t *Not on SUNDAY* \n"
               "5. \t 08:54 \t\t\t\t CSMT (Vik-Mulund) \t 15 \t\t 09:00 \t\t \n"
               "6. \t 09:21 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:27 \n"
               "7. \t 09:29 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:35 \n"
               "8. \t 10:23 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 10:29 \t\t *Not on SUNDAY* \n"
               "9. \t 11:19 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:25 \n"
               "10. \t 12:33 \t\t\t\t CSMT \t\t\t 15 \t\t 12:39 \t\t *Not on SUNDAY* \n"
               "11. \t 14:52 \t\t\t\t CSMT \t\t\t 15 \t\t 14:58 \t\t *Not on SUNDAY* \n"
               "12. \t 17:32 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:38 \t\t *Not on SUNDAY* \n"
               "13. \t 19:10 \t\t\t\t CSMT \t\t\t 15 \t\t 19:16 \t\t *Not on SUNDAY* \n"
               "14. \t 21:28 \t\t\t\t CSMT \t\t\t 15 \t\t 21:34 \t\t *Not on SUNDAY* \n"
               "15. \t 23:51 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 23:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttcsmt(ft);
    }
    else if(strcmp(dtn,"dadar")==0 || strcmp(dtn,"DADAR")==0)
    {
        printf("*     Source & Destination Station cannot be same\n"
               "    Please Change the Source or Destination Station   *\n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"kurla")==0 || strcmp(dtn,"KURLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:21 \t\t\t\t KALYAN \t\t\t 12 \t\t 06:28 \t\t *Not on SUNDAY* \n"
               "2. \t 07:38 \t\t\t\t KALYAN (Bhandup) \t\t 12 \t\t 07:45 \t\t \n"
               "3. \t 08:17 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:24 \n"
               "4. \t 08:51 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 08:58 \t\t *Not on SUNDAY* \n"
               "5. \t 09:04 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:11 \t\t *Not on SUNDAY* \n"
               "6. \t 09:17 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 09:24 \t\t *Not on SUNDAY* \n"
               "7. \t 10:01 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 10:08 \t\t \n"
               "8. \t 10:45 \t\t\t\t KALYAN \t\t\t 15 \t\t 10:53 \t\t *Not on SUNDAY* \n"
               "9. \t 11:51 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 11:58 \t\t \n"
               "10. \t 13:09 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:16 \t\t *Not on SUNDAY* \n"
               "11. \t 15:31 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:38 \t\t *Not on SUNDAY* \n"
               "12. \t 17:30 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 17:37 \t\t *Not on SUNDAY* \n"
               "13. \t 18:23 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:30 \t\t *Not on SUNDAY* \n"
               "14. \t 19:43 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 19:51 \t\t *Not on SUNDAY* \n"
               "15. \t 22:08 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:16 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftdrkurla(ft);
    }
    else if(strcmp(dtn,"ghatkopar")==0 || strcmp(dtn,"GHATKOPAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:38 \t\t\t\t KALYAN (Bhandup) \t 12 \t\t 07:49 \t\t \n"
               "2. \t 08:17 \t\t\t\t THANE \t\t\t 12 \t\t 08:28 \n"
               "3. \t 08:51 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 09:02 \t\t *Not on SUNDAY* \n"
               "4. \t 10:01 \t\t\t\t THANE (Mulund) \t 12 \t\t 10:12 \t\t \n"
               "5. \t 10:45 \t\t\t\t KALYAN \t\t 15 \t\t 10:57 \t\t *Not on SUNDAY* \n"
               "6. \t 11:51 \t\t\t\t DOMBIVLI \t\t 15 \t\t 12:02 \t\t \n"
               "7. \t 13:09 \t\t\t\t KALYAN \t\t 15 \t\t 13:20 \t\t *Not on SUNDAY* \n"
               "8. \t 15:31 \t\t\t\t KALYAN \t\t 15 \t\t 15:42 \t\t *Not on SUNDAY* \n"
               "9. \t 17:30 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 17:41 \t\t *Not on SUNDAY* \n"
               "10. \t 19:43 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 19:55 \t\t *Not on SUNDAY* \n"
               "11. \t 22:08 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 22:20 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftgthane(ft);
    }
    else if(strcmp(dtn,"vikhroli")==0 || strcmp(dtn,"VIKHROLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 09:04 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:19 \t\t *Not on SUNDAY* \n"
               "2. \t 19:16 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:30 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftvthane(ft);
    }
    else if(strcmp(dtn,"bhandup")==0 || strcmp(dtn,"BHANDUP")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:38 \t\t\t\t KALYAN (Bhandup) \t\t 12 \t\t 07:57 \t\t \n"
               "2. \t 18:23 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:40 \t\t *Not on SUNDAY* \n"
               "3. \t 19:16 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:35 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbthane(ft);
    }
    else if(strcmp(dtn,"mulund")==0 || strcmp(dtn,"MULUND")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 08:51 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:14 \t\t *Not on SUNDAY* \n"
               "2. \t 09:04 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:27 \t\t *Not on SUNDAY* \n"
               "3. \t 09:17 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 09:40 \t\t *Not on SUNDAY* \n"
               "4. \t 10:01 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 10:24 \t\t \n"
               "5. \t 17:30 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 17:53 \t\t *Not on SUNDAY* \n"
               "6. \t 18:23 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:46 \t\t *Not on SUNDAY* \n"
               "7. \t 19:16 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:40 \t\t *Not on SUNDAY* \n"
               "8. \t 19:43 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:05 \t\t *Not on SUNDAY* \n"
               "9. \t 22:08 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:32 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftmthane(ft);
    }
    else if(strcmp(dtn,"thane")==0 || strcmp(dtn,"THANE")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:21 \t\t\t\t KALYAN \t\t\t 12 \t\t 06:46 \t\t *Not on SUNDAY* \n"
               "2. \t 07:38 \t\t\t\t KALYAN (Bhandup) \t\t 12 \t\t 08:05 \t\t \n"
               "3. \t 08:17 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:46 \n"
               "4. \t 08:51 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:18 \t\t *Not on SUNDAY* \n"
               "5. \t 09:04 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:33 \t\t *Not on SUNDAY* \n"
               "6. \t 09:17 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 09:46 \t\t *Not on SUNDAY* \n"
               "7. \t 10:01 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 10:30 \t\t \n"
               "8. \t 10:45 \t\t\t\t KALYAN \t\t\t 15 \t\t 11:15 \t\t *Not on SUNDAY* \n"
               "9. \t 11:51 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 12:17 \t\t \n"
               "10. \t 13:09 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:36 \t\t *Not on SUNDAY* \n"
               "11. \t 15:31 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:58 \t\t *Not on SUNDAY* \n"
               "12. \t 17:30 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 17:57 \t\t *Not on SUNDAY* \n"
               "13. \t 18:23 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:52 \t\t *Not on SUNDAY* \n"
               "14. \t 19:16 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:46 \t\t *Not on SUNDAY* \n"
               "15. \t 19:43 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:09 \t\t *Not on SUNDAY* \n"
               "16. \t 22:08 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:36 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftdrthane(ft);
    }
    else if(strcmp(dtn,"dombivli")==0 || strcmp(dtn,"DOMBIVLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:21 \t\t\t\t KALYAN \t\t 12 \t\t 06:59 \t\t *Not on SUNDAY* \n"
               "2. \t 07:38 \t\t\t\t KALYAN (Bhandup) \t 12 \t\t 08:17 \t\t \n"
               "3. \t 08:51 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 09:30 \t\t *Not on SUNDAY* \n"
               "4. \t 10:45 \t\t\t\t KALYAN \t\t 15 \t\t 11:28 \t\t *Not on SUNDAY* \n"
               "5. \t 11:51 \t\t\t\t DOMBIVLI \t\t 15 \t\t 12:29 \t\t \n"
               "6. \t 13:09 \t\t\t\t KALYAN \t\t 15 \t\t 13:49 \t\t *Not on SUNDAY* \n"
               "7. \t 15:31 \t\t\t\t KALYAN \t\t 15 \t\t 16:11 \t\t *Not on SUNDAY* \n"
               "8. \t 17:30 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 18:10 \t\t *Not on SUNDAY* \n"
               "9. \t 19:43 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 20:21 \t\t *Not on SUNDAY* \n"
               "10. \t 22:08 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 22:48 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttdombivli(ft);
    }
    else if(strcmp(dtn,"kalyan")==0 || strcmp(dtn,"KALYAN")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:21 \t\t\t\t KALYAN \t\t 12 \t\t 07:07 \t\t *Not on SUNDAY* \n"
               "2. \t 07:38 \t\t\t\t KALYAN (Bhandup) \t 12 \t\t 08:25 \t\t \n"
               "3. \t 08:51 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 09:37 \t\t *Not on SUNDAY* \n"
               "4. \t 10:45 \t\t\t\t KALYAN \t\t 15 \t\t 11:36 \t\t *Not on SUNDAY* \n"
               "5. \t 13:09 \t\t\t\t KALYAN \t\t 15 \t\t 13:57 \t\t *Not on SUNDAY* \n"
               "6. \t 15:31 \t\t\t\t KALYAN \t\t 15 \t\t 16:19 \t\t *Not on SUNDAY* \n"
               "7. \t 17:30 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 18:17 \t\t *Not on SUNDAY* \n"
               "8. \t 19:43 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 20:31 \t\t *Not on SUNDAY* \n"
               "9. \t 22:08 \t\t\t\t KALYAN (Mulund) \t 15 \t\t 22:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftkalyan(ft);
    }
    else
    {
        printf("Enter Valid Station \n\n");
        system("pause");
        main();
    }
    printf("\n1. New Search \n2. End program \nEnter Choice: ");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1: main();
                break;
        case 2: printf("\n***     THANK YOU!!!     ***\n");
                exit(0);
                break;
    }
}
void byculla(dtn)
{
    int ft, menu;
    if (strcmp(dtn,"csmt")==0 || strcmp(dtn,"CSMT")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 05:38 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 05:50 \n"
               "2. \t 07:00 \t\t\t\t CSMT (Bhandup) \t 12 \t\t 07:11 \t\t *Not on SATURDAY & SUNDAY* \n"
               "3. \t 08:11 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 08:20 \t\t *Not on SUNDAY* \n"
               "4. \t 08:38 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 08:47 \t\t *Not on SUNDAY* \n"
               "5. \t 09:00 \t\t\t\t CSMT (Vik-Mulund) \t 12 \t\t 09:08 \t\t \n"
               "6. \t 09:27 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 09:35 \t\t *Not on SUNDAY* \n"
               "7. \t 09:35 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 09:45 \n"
               "8. \t 10:29 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 10:37 \t\t *Not on SUNDAY* \n"
               "9. \t 11:25 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 11:33 \n"
               "10. \t 12:39 \t\t\t\t CSMT \t\t\t 15 \t\t 12:48 \t\t *Not on SUNDAY* \n"
               "11. \t 14:58 \t\t\t\t CSMT \t\t\t 15 \t\t 15:07 \t\t *Not on SUNDAY* \n"
               "12. \t 17:38 \t\t\t\t CSMT (Mulund) \t\t 12 \t\t 17:46 \t\t *Not on SUNDAY* \n"
               "13. \t 19:16 \t\t\t\t CSMT \t\t\t 15 \t\t 19:24 \t\t *Not on SUNDAY* \n"
               "14. \t 21:34 \t\t\t\t CSMT \t\t\t 15 \t\t 21:44 \t\t *Not on SUNDAY* \n"
               "15. \t 23:57 \t\t\t\t CSMT (Mulund) \t\t 15 \t\t 00:05 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        fttcsmt(ft);
    }
    else if(strcmp(dtn,"byculla")==0 || strcmp(dtn,"BYCULLA")==0)
    {
        printf("*     Source & Destination Station cannot be same\n"
               "    Please Change the Source or Destination Station   *\n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"dadar")==0 || strcmp(dtn,"DADAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:14 \t\t\t\t KALYAN \t\t\t 15 \t\t 06:21 \t\t *Not on SUNDAY* \n"
               "2. \t 07:32 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 07:38 \t\t *Not on SUNDAY* \n"
               "3. \t 08:11 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:17 \n"
               "4. \t 08:45 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 08:51 \t\t *Not on SUNDAY* \n"
               "5. \t 08:57 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:04 \t\t *Not on SUNDAY* \n"
               "6. \t 11:45 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 11:51 \n"
               "7. \t 13:03 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:09 \t\t *Not on SUNDAY* \n"
               "8. \t 15:25 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:31 \t\t *Not on SUNDAY* \n"
               "9. \t 19:37 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 19:43 \t\t *Not on SUNDAY* \n"
               "10. \t 22:02 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:08 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbydadar(ft);
    }
    else if(strcmp(dtn,"kurla")==0 || strcmp(dtn,"KURLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:14 \t\t\t\t KALYAN \t\t\t 15 \t\t 06:28 \t\t *Not on SUNDAY* \n"
               "2. \t 07:32 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 07:45 \t\t *Not on SUNDAY* \n"
               "3. \t 08:11 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:24 \n"
               "4. \t 08:45 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 08:58 \t\t *Not on SUNDAY* \n"
               "5. \t 08:57 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:11 \t\t *Not on SUNDAY* \n"
               "6. \t 11:45 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 11:58 \n"
               "7. \t 13:03 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:16 \t\t *Not on SUNDAY* \n"
               "8. \t 15:25 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:38 \t\t *Not on SUNDAY* \n"
               "9. \t 19:37 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 19:51 \t\t *Not on SUNDAY* \n"
               "10. \t 22:02 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:16 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbydadar(ft);
    }
    else if(strcmp(dtn,"ghatkopar")==0 || strcmp(dtn,"GHATKOPAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:32 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 07:49 \t\t *Not on SUNDAY* \n"
               "2. \t 08:11 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:28 \n"
               "3. \t 08:45 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:02 \t\t *Not on SUNDAY* \n"
               "4. \t 11:45 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 12:02 \n"
               "5. \t 13:03 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:20 \t\t *Not on SUNDAY* \n"
               "6. \t 15:25 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:42 \t\t *Not on SUNDAY* \n"
               "7. \t 19:37 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 19:55 \t\t *Not on SUNDAY* \n"
               "8. \t 22:02 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:20 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbyghatkopar(ft);
    }
    else if(strcmp(dtn,"vikhroli")==0 || strcmp(dtn,"VIKHROLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 08:57 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:19 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbyvikhroli(ft);
    }
    else if(strcmp(dtn,"bhandup")==0 || strcmp(dtn,"BHANDUP")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:32 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 07:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbybhandup(ft);
    }
    else if(strcmp(dtn,"mulund")==0 || strcmp(dtn,"MULUND")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 08:45 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:14 \t\t *Not on SUNDAY* \n"
               "2. \t 08:57 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:27 \t\t *Not on SUNDAY* \n"
               "3. \t 19:37 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:05 \t\t *Not on SUNDAY* \n"
               "4. \t 22:02 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:32 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbymulund(ft);
    }
    else if(strcmp(dtn,"thane")==0 || strcmp(dtn,"THANE")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:14 \t\t\t\t KALYAN \t\t\t 15 \t\t 06:46 \t\t *Not on SUNDAY* \n"
               "2. \t 07:32 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 08:05 \t\t *Not on SUNDAY* \n"
               "3. \t 08:11 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:46 \n"
               "4. \t 08:45 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:18 \t\t *Not on SUNDAY* \n"
               "5. \t 08:57 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:33 \t\t *Not on SUNDAY* \n"
               "6. \t 11:45 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 12:17 \n"
               "7. \t 13:03 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:36 \t\t *Not on SUNDAY* \n"
               "8. \t 15:25 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:58 \t\t *Not on SUNDAY* \n"
               "9. \t 19:37 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:09 \t\t *Not on SUNDAY* \n"
               "10. \t 22:02 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:36 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbydadar(ft);
    }
    else if(strcmp(dtn,"dombivli")==0 || strcmp(dtn,"DOMBIVLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:14 \t\t\t\t KALYAN \t\t\t 15 \t\t 06:59 \t\t *Not on SUNDAY* \n"
               "2. \t 07:32 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 08:17 \t\t *Not on SUNDAY* \n"
               "3. \t 08:45 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:30 \t\t *Not on SUNDAY* \n"
               "4. \t 11:45 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 12:29 \n"
               "5. \t 13:03 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:49 \t\t *Not on SUNDAY* \n"
               "6. \t 15:25 \t\t\t\t KALYAN \t\t\t 15 \t\t 16:11 \t\t *Not on SUNDAY* \n"
               "7. \t 19:37 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:21 \t\t *Not on SUNDAY* \n"
               "8. \t 22:02 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:48 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbydombivli(ft);
    }
    else if(strcmp(dtn,"kalyan")==0 || strcmp(dtn,"KALYAN")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:14 \t\t\t\t KALYAN \t\t\t 15 \t\t 07:07 \t\t *Not on SUNDAY* \n"
               "2. \t 07:32 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 08:25 \t\t *Not on SUNDAY* \n"
               "3. \t 08:45 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:37 \t\t *Not on SUNDAY* \n"
               "4. \t 13:03 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:57 \t\t *Not on SUNDAY* \n"
               "5. \t 15:25 \t\t\t\t KALYAN \t\t\t 15 \t\t 16:19 \t\t *Not on SUNDAY* \n"
               "6. \t 19:37 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:31 \t\t *Not on SUNDAY* \n"
               "7. \t 22:02 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbykalyan(ft);
    }
    else
    {
        printf("Enter Valid Station \n\n");
        system("pause");
        main();
    }
    printf("\n1. New Search \n2. End program \nEnter Choice: ");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1: main();
                break;
        case 2: printf("\n***     THANK YOU!!!     ***\n");
                exit(0);
                break;
    }
}
void csmt(dtn)
{
    int ft, menu;
    if (strcmp(dtn,"csmt")==0 || strcmp(dtn,"CSMT")==0)
    {
        printf("*     Source & Destination Station cannot be same\n"
               "    Please Change the Source or Destination Station   *\n\n");
        system("pause");
        main();
    }
    else if(strcmp(dtn,"byculla")==0 || strcmp(dtn,"BYCULLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:06 \t\t\t\t KALYAN \t\t\t 15 \t\t 06:14 \t\t *Not on SUNDAY* \n"
               "2. \t 07:25 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 07:32 \t\t *Not on SUNDAY* \n"
               "3. \t 08:04 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:11 \n"
               "4. \t 08:36 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 08:45 \t\t *Not on SUNDAY* \n"
               "5. \t 08:50 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 08:57 \t\t *Not on SUNDAY* \n"
               "6. \t 11:37 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 11:45 \n"
               "7. \t 12:55 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:03 \t\t *Not on SUNDAY* \n"
               "8. \t 15:17 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:25 \t\t *Not on SUNDAY* \n"
               "9. \t 19:28 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 19:37 \t\t *Not on SUNDAY* \n"
               "10. \t 21:54 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:02 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbydadar(ft);
    }
    else if(strcmp(dtn,"dadar")==0 || strcmp(dtn,"DADAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:06 \t\t\t\t KALYAN \t\t\t 15 \t\t 06:21 \t\t *Not on SUNDAY* \n"
               "2. \t 07:25 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 07:38 \t\t *Not on SUNDAY* \n"
               "3. \t 08:04 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:17 \n"
               "4. \t 08:36 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 08:51 \t\t *Not on SUNDAY* \n"
               "5. \t 08:50 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:04 \t\t *Not on SUNDAY* \n"
               "6. \t 09:04 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 09:17 \n"
               "7. \t 09:48 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 10:01 \n"
               "8. \t 11:37 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 11:51 \n"
               "9. \t 12:55 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:09 \t\t *Not on SUNDAY* \n"
               "10. \t 15:17 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:31 \t\t *Not on SUNDAY* \n"
               "11. \t 18:10 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:23 \t\t *Not on SUNDAY* \n"
               "12. \t 19:02 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:16 \t\t *Not on SUNDAY* \n"
               "13. \t 19:28 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 19:43 \t\t *Not on SUNDAY* \n"
               "14. \t 21:54 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:08 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftcdadar(ft);
    }
    else if(strcmp(dtn,"kurla")==0 || strcmp(dtn,"KURLA")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:06 \t\t\t\t KALYAN \t\t\t 15 \t\t 06:28 \t\t *Not on SUNDAY* \n"
               "2. \t 07:25 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 07:45 \t\t *Not on SUNDAY* \n"
               "3. \t 08:04 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:24 \n"
               "4. \t 08:36 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 08:58 \t\t *Not on SUNDAY* \n"
               "5. \t 08:50 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:11 \t\t *Not on SUNDAY* \n"
               "6. \t 09:04 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 09:24 \n"
               "7. \t 09:48 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 10:08 \n"
               "8. \t 11:37 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 11:58 \n"
               "9. \t 12:55 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:16 \t\t *Not on SUNDAY* \n"
               "10. \t 15:17 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:38 \t\t *Not on SUNDAY* \n"
               "11. \t 18:10 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:30 \t\t *Not on SUNDAY* \n"
               "12. \t 19:28 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 19:51 \t\t *Not on SUNDAY* \n"
               "13. \t 21:54 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:16 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftckurla(ft);
    }
    else if(strcmp(dtn,"ghatkopar")==0 || strcmp(dtn,"GHATKOPAR")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:25 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 07:49 \t\t *Not on SUNDAY* \n"
               "2. \t 08:04 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:28 \n"
               "3. \t 08:36 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:02 \t\t *Not on SUNDAY* \n"
               "4. \t 09:48 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 10:12 \n"
               "5. \t 11:37 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 12:02 \n"
               "6. \t 12:55 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:20 \t\t *Not on SUNDAY* \n"
               "7. \t 15:17 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:42 \t\t *Not on SUNDAY* \n"
               "8. \t 19:28 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 19:55 \t\t *Not on SUNDAY* \n"
               "9. \t 21:54 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:20 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftcghatkopar(ft);
    }
    else if(strcmp(dtn,"vikhroli")==0 || strcmp(dtn,"VIKHROLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 08:50 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:19 \t\t *Not on SUNDAY* \n"
               "2. \t 19:02 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:30 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftvthane(ft);
    }
    else if(strcmp(dtn,"bhandup")==0 || strcmp(dtn,"BHANDUP")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 07:25 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 07:57 \t\t *Not on SUNDAY* \n"
               "2. \t 18:10 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:40 \t\t *Not on SUNDAY* \n"
               "3. \t 19:02 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:35 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbthane(ft);
    }
    else if(strcmp(dtn,"mulund")==0 || strcmp(dtn,"MULUND")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 08:36 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:14 \t\t *Not on SUNDAY* \n"
               "2. \t 08:50 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:27 \t\t *Not on SUNDAY* \n"
               "3. \t 09:04 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 09:40 \n"
               "4. \t 09:48 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 10:24 \n"
               "5. \t 18:10 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:46 \t\t *Not on SUNDAY* \n"
               "6. \t 19:02 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:40 \t\t *Not on SUNDAY* \n"
               "7. \t 19:28 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:05 \t\t *Not on SUNDAY* \n"
               "8. \t 21:54 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:32 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftcmulund(ft);
    }
    else if(strcmp(dtn,"thane")==0 || strcmp(dtn,"THANE")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:06 \t\t\t\t KALYAN \t\t\t 15 \t\t 06:46 \t\t *Not on SUNDAY* \n"
               "2. \t 07:25 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 08:05 \t\t *Not on SUNDAY* \n"
               "3. \t 08:04 \t\t\t\t THANE \t\t\t\t 12 \t\t 08:46 \n"
               "4. \t 08:36 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:18 \t\t *Not on SUNDAY* \n"
               "5. \t 08:50 \t\t\t\t THANE (Vik-Mulund) \t\t 12 \t\t 09:33 \t\t *Not on SUNDAY* \n"
               "6. \t 09:04 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 09:46 \n"
               "7. \t 09:48 \t\t\t\t THANE (Mulund) \t\t 12 \t\t 10:30 \n"
               "8. \t 11:37 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 12:17 \n"
               "9. \t 12:55 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:36 \t\t *Not on SUNDAY* \n"
               "10. \t 15:17 \t\t\t\t KALYAN \t\t\t 15 \t\t 15:58 \t\t *Not on SUNDAY* \n"
               "11. \t 18:10 \t\t\t\t THANE (Bha-Mulund) \t\t 12 \t\t 18:52 \t\t *Not on SUNDAY* \n"
               "12. \t 19:02 \t\t\t\t THANE (Vik-Bha-Mul) \t\t 12 \t\t 19:46 \t\t *Not on SUNDAY* \n"
               "13. \t 19:28 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:09 \t\t *Not on SUNDAY* \n"
               "14. \t 21:54 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:36 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftcdadar(ft);
    }
    else if(strcmp(dtn,"dombivli")==0 || strcmp(dtn,"DOMBIVLI")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:06 \t\t\t\t KALYAN \t\t\t 15 \t\t 06:59 \t\t *Not on SUNDAY* \n"
               "2. \t 07:25 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 08:17 \t\t *Not on SUNDAY* \n"
               "3. \t 08:36 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:30 \t\t *Not on SUNDAY* \n"
               "4. \t 11:37 \t\t\t\t DOMBIVLI \t\t\t 15 \t\t 12:29 \n"
               "5. \t 12:55 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:49 \t\t *Not on SUNDAY* \n"
               "6. \t 15:17 \t\t\t\t KALYAN \t\t\t 15 \t\t 16:11 \t\t *Not on SUNDAY* \n"
               "7. \t 19:28 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:21 \t\t *Not on SUNDAY* \n"
               "8. \t 19:54 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:48 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbydombivli(ft);
    }
    else if(strcmp(dtn,"kalyan")==0 || strcmp(dtn,"KALYAN")==0)
    {
        printf("\t Departure Time \t\t Destination \t\t\t Coach \t\t Arrival Time \n\n");
        printf("1. \t 06:06 \t\t\t\t KALYAN \t\t\t 15 \t\t 07:07 \t\t *Not on SUNDAY* \n"
               "2. \t 07:25 \t\t\t\t KALYAN (Bhandup) \t\t 15 \t\t 08:25 \t\t *Not on SUNDAY* \n"
               "3. \t 08:36 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 09:37 \t\t *Not on SUNDAY* \n"
               "4. \t 12:55 \t\t\t\t KALYAN \t\t\t 15 \t\t 13:57 \t\t *Not on SUNDAY* \n"
               "5. \t 15:17 \t\t\t\t KALYAN \t\t\t 15 \t\t 16:19 \t\t *Not on SUNDAY* \n"
               "6. \t 19:28 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 20:31 \t\t *Not on SUNDAY* \n"
               "7. \t 21:54 \t\t\t\t KALYAN (Mulund) \t\t 15 \t\t 22:57 \t\t *Not on SUNDAY* \n\n");
        printf("Select the train for Full Time-table: ");
        scanf("%d",&ft);
        ftbykalyan(ft);
    }
    else
    {
        printf("Enter Valid Station \n\n");
        system("pause");
        main();
    }
    printf("\n1. New Search \n2. End program \nEnter Choice: ");
    scanf("%d",&menu);
    switch(menu)
    {
        case 1: main();
                break;
        case 2: printf("\n***     THANK YOU!!!     ***\n");
                exit(0);
                break;
    }
}
void ftcsmt(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 07:18 \t\t KALYAN \t PF 6|7\n"
                           "\t 07:25 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 07:37 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 07:41 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 07:53 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 07:57 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:05 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:11 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:20 \t\t CSMT \n\n");
                    break;
            case 2: printf("\n\t 08:34 \t\t KALYAN \t PF 6|7\n"
                           "\t 08:40 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 08:53 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 08:57 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:09 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:13 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:21 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:27 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:35 \t\t CSMT \n\n");
                    break;
            case 3: printf("\n\t 11:46 \t\t KALYAN \t PF 6|7\n"
                           "\t 11:54 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 12:08 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 12:21 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 12:25 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 12:33 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 12:39 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 12:48 \t\t CSMT \n\n");
                    break;
            case 4: printf("\n\t 14:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 14:13 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 14:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 14:40 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 14:44 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 14:52 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 14:58 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 15:07 \t\t CSMT \n\n");
                    break;
            case 5: printf("\n\t 16:46 \t\t KALYAN \t PF 6|7 \n"
                           "\t 16:53 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 17:05 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:09 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 17:20 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 17:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 17:46 \t\t CSMT \n\n");
                    break;
            case 6: printf("\n\t 18:22 \t\t KALYAN \t PF 6|7 \n"
                           "\t 18:29 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 18:43 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 18:58 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 19:02 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 19:10 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 19:16 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 19:24 \t\t CSMT \n\n");
                    break;
            case 7: printf("\n\t 20:41 \t\t KALYAN \t PF 6|7 \n"
                           "\t 20:48 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 21:01 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 21:16 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 21:20 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 21:28 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 21:34 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 21:44 \t\t CSMT \n\n");
                    break;
            case 8: printf("\n\t 23:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 23:12 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 23:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 23:29 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 23:39 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 23:43 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 23:51 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 23:57 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 00:05 \t\t CSMT \n\n");
                    break;
        }
}
void ftdadar(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 07:18 \t\t KALYAN \t PF 6|7\n"
                           "\t 07:25 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 07:37 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 07:41 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 07:53 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 07:57 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:05 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:11 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:20 \t\t CSMT \n\n");
                    break;
            case 2: printf("\n\t 08:34 \t\t KALYAN \t PF 6|7\n"
                           "\t 08:40 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 08:53 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 08:57 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:09 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:13 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:21 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:27 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:35 \t\t CSMT \n\n");
                    break;
            case 3: printf("\n\t 09:47 \t\t KALYAN \t PF 6|7\n"
                           "\t 09:55 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 10:07 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 10:24 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 10:28 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 10:37 \t\t DADAR \t\t PF 5 \t RIGHT \n\n");
                    break;
            case 4: printf("\n\t 11:46 \t\t KALYAN \t PF 6|7\n"
                           "\t 11:54 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 12:08 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 12:21 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 12:25 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 12:33 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 12:39 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 12:48 \t\t CSMT \n\n");
                    break;
            case 5: printf("\n\t 14:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 14:13 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 14:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 14:40 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 14:44 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 14:52 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 14:58 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 15:07 \t\t CSMT \n\n");
                    break;
            case 6: printf("\n\t 16:31 \t\t KALYAN \t PF 6|7\n"
                           "\t 16:39 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 16:52 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:08 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:12 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:20 \t\t DADAR \t\t PF 5 \t RIGHT \n\n");
                    break;
            case 7: printf("\n\t 16:46 \t\t KALYAN \t PF 6|7 \n"
                           "\t 16:53 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 17:05 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:09 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 17:20 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 17:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 17:46 \t\t CSMT \n\n");
                    break;
            case 8: printf("\n\t 18:22 \t\t KALYAN \t PF 6|7 \n"
                           "\t 18:29 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 18:43 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 18:58 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 19:02 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 19:10 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 19:16 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 19:24 \t\t CSMT \n\n");
                    break;
            case 9: printf("\n\t 20:41 \t\t KALYAN \t PF 6|7 \n"
                           "\t 20:48 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 21:01 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 21:16 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 21:20 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 21:28 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 21:34 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 21:44 \t\t CSMT \n\n");
                    break;
            case 10: printf("\n\t 23:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 23:12 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 23:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 23:29 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 23:39 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 23:43 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 23:51 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 23:57 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 00:05 \t\t CSMT \n\n");
                    break;
        }
}
void ftmulund(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 07:18 \t\t KALYAN \t PF 6|7\n"
                           "\t 07:25 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 07:37 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 07:41 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 07:53 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 07:57 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:05 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:11 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:20 \t\t CSMT \n\n");
                    break;
            case 2: printf("\n\t 08:34 \t\t KALYAN \t PF 6|7\n"
                           "\t 08:40 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 08:53 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 08:57 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:09 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:13 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:21 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:27 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:35 \t\t CSMT \n\n");
                    break;
            case 3: printf("\n\t 16:46 \t\t KALYAN \t PF 6|7 \n"
                           "\t 16:53 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 17:05 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:09 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 17:20 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 17:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 17:46 \t\t CSMT \n\n");
                    break;
            case 4: printf("\n\t 23:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 23:12 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 23:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 23:29 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 23:39 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 23:43 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 23:51 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 23:57 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 00:05 \t\t CSMT \n\n");
                    break;
        }
}
void ftdcsmt(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 06:14 \t\t DOMBIVLI  \n"
                           "\t 06:27 \t\t THANE \n"
                           "\t 06:35 \t\t BHANDUP \n"
                           "\t 06:42 \t\t GHATKOPAR  \n"
                           "\t 06:46 \t\t KURLA  \n"
                           "\t 06:54 \t\t DADAR  \n"
                           "\t 07:00 \t\t BYCULLA \n"
                           "\t 07:11 \t\t CSMT \n\n");
                    break;
            case 2: printf("\n\t 07:18 \t\t KALYAN \t PF 6|7\n"
                           "\t 07:25 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 07:37 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 07:41 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 07:53 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 07:57 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:05 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:11 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:20 \t\t CSMT \n\n");
                    break;
            case 3: printf("\n\t 08:34 \t\t KALYAN \t PF 6|7\n"
                           "\t 08:40 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 08:53 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 08:57 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:09 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:13 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:21 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:27 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:35 \t\t CSMT \n\n");
                    break;
            case 4: printf("\n\t 11:46 \t\t KALYAN \t PF 6|7\n"
                           "\t 11:54 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 12:08 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 12:21 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 12:25 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 12:33 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 12:39 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 12:48 \t\t CSMT \n\n");
                    break;
            case 5: printf("\n\t 14:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 14:13 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 14:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 14:40 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 14:44 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 14:52 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 14:58 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 15:07 \t\t CSMT \n\n");
                    break;
            case 6: printf("\n\t 16:46 \t\t KALYAN \t PF 6|7 \n"
                           "\t 16:53 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 17:05 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:09 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 17:20 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 17:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 17:46 \t\t CSMT \n\n");
                    break;
            case 7: printf("\n\t 18:22 \t\t KALYAN \t PF 6|7 \n"
                           "\t 18:29 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 18:43 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 18:58 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 19:02 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 19:10 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 19:16 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 19:24 \t\t CSMT \n\n");
                    break;
            case 8: printf("\n\t 20:41 \t\t KALYAN \t PF 6|7 \n"
                           "\t 20:48 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 21:01 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 21:16 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 21:20 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 21:28 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 21:34 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 21:44 \t\t CSMT \n\n");
                    break;
            case 9: printf("\n\t 23:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 23:12 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 23:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 23:29 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 23:39 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 23:43 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 23:51 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 23:57 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 00:05 \t\t CSMT \n\n");
                    break;
        }
}
void ftddadar(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 06:14 \t\t DOMBIVLI  \n"
                           "\t 06:27 \t\t THANE \n"
                           "\t 06:35 \t\t BHANDUP \n"
                           "\t 06:42 \t\t GHATKOPAR  \n"
                           "\t 06:46 \t\t KURLA  \n"
                           "\t 06:54 \t\t DADAR  \n"
                           "\t 07:00 \t\t BYCULLA \n"
                           "\t 07:11 \t\t CSMT \n\n");
                    break;
            case 2: printf("\n\t 07:18 \t\t KALYAN \t PF 6|7\n"
                           "\t 07:25 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 07:37 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 07:41 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 07:53 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 07:57 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:05 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:11 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:20 \t\t CSMT \n\n");
                    break;
            case 3: printf("\n\t 08:34 \t\t KALYAN \t PF 6|7\n"
                           "\t 08:40 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 08:53 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 08:57 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:09 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:13 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:21 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:27 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:35 \t\t CSMT \n\n");
                    break;
            case 4: printf("\n\t 09:47 \t\t KALYAN \t PF 6|7\n"
                           "\t 09:55 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 10:07 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 10:24 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 10:28 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 10:37 \t\t DADAR \t\t PF 5 \t RIGHT \n\n");
                    break;
            case 5: printf("\n\t 11:46 \t\t KALYAN \t PF 6|7\n"
                           "\t 11:54 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 12:08 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 12:21 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 12:25 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 12:33 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 12:39 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 12:48 \t\t CSMT \n\n");
                    break;
            case 6: printf("\n\t 14:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 14:13 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 14:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 14:40 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 14:44 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 14:52 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 14:58 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 15:07 \t\t CSMT \n\n");
                    break;
            case 7: printf("\n\t 16:31 \t\t KALYAN \t PF 6|7\n"
                           "\t 16:39 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 16:52 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:08 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:12 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:20 \t\t DADAR \t\t PF 5 \t RIGHT \n\n");
                    break;
            case 8: printf("\n\t 16:46 \t\t KALYAN \t PF 6|7 \n"
                           "\t 16:53 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 17:05 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:09 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 17:20 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 17:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 17:46 \t\t CSMT \n\n");
                    break;
            case 9: printf("\n\t 18:22 \t\t KALYAN \t PF 6|7 \n"
                           "\t 18:29 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 18:43 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 18:58 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 19:02 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 19:10 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 19:16 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 19:24 \t\t CSMT \n\n");
                    break;
            case 10: printf("\n\t 20:41 \t\t KALYAN \t PF 6|7 \n"
                           "\t 20:48 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 21:01 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 21:16 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 21:20 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 21:28 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 21:34 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 21:44 \t\t CSMT \n\n");
                    break;
            case 11: printf("\n\t 23:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 23:12 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 23:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 23:29 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 23:39 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 23:43 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 23:51 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 23:57 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 00:05 \t\t CSMT \n\n");
                    break;
        }
}
void ftbhandup(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 06:14 \t\t DOMBIVLI  \n"
                           "\t 06:27 \t\t THANE \n"
                           "\t 06:35 \t\t BHANDUP \n"
                           "\t 06:42 \t\t GHATKOPAR  \n"
                           "\t 06:46 \t\t KURLA  \n"
                           "\t 06:54 \t\t DADAR  \n"
                           "\t 07:00 \t\t BYCULLA \n"
                           "\t 07:11 \t\t CSMT \n\n");
                    break;
        }
}
void ftkalyan(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 06:06 \t\t CSMT \n"
                       "\t 06:14 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 06:21 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 06:28 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 06:46 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 06:59 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 07:07 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 3: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 4: printf("\n\t 10:45 \t\t DADAR \t\t PF 5 \t RIGHT \n"
                       "\t 10:53 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:57 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 11:15 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 11:28 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 11:36 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 5: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 6: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 7: printf("\n\t 17:30 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 17:37 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 17:41 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 17:53 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 17:57 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 18:10 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 18:17 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 8: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 9: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void fttcsmt(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 05:06 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 05:11 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 05:19 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 05:23 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 05:31 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 05:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 05:50 \t\t CSMT \n\n");
                    break;
            case 2: printf("\n\t 06:14 \t\t DOMBIVLI  \n"
                           "\t 06:27 \t\t THANE \n"
                           "\t 06:35 \t\t BHANDUP \n"
                           "\t 06:42 \t\t GHATKOPAR  \n"
                           "\t 06:46 \t\t KURLA  \n"
                           "\t 06:54 \t\t DADAR  \n"
                           "\t 07:00 \t\t BYCULLA \n"
                           "\t 07:11 \t\t CSMT \n\n");
                    break;
            case 3: printf("\n\t 07:18 \t\t KALYAN \t PF 6|7\n"
                           "\t 07:25 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 07:37 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 07:41 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 07:53 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 07:57 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:05 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:11 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:20 \t\t CSMT \n\n");
                    break;
            case 4: printf("\n\t 08:03 \t\t THANE  \n"
                           "\t 08:08 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 08:16 \t\t VIKHROLI \t PF 4 \t LEFT \n"
                           "\t 08:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:47 \t\t CSMT \n\n");
                    break;
            case 5: printf("\n\t 08:25 \t\t THANE \t\t PF 4 \t RIGHT \n"
                           "\t 08:30 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 08:38 \t\t VIKHROLI \t PF 4 \t LEFT \n"
                           "\t 08:46 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:54 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:00 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:08 \t\t CSMT \n\n");
                    break;
            case 6: printf("\n\t 08:34 \t\t KALYAN \t PF 6|7\n"
                           "\t 08:40 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 08:53 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 08:57 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:09 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:13 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:21 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:27 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:35 \t\t CSMT \n\n");
                    break;
            case 7: printf("\n\t 09:00 \t\t THANE \t\t PF 7 \t LEFT \n"
                           "\t 09:06 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:17 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:21 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:29 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:35 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:45 \t\t CSMT \n\n");
                    break;
            case 8: printf("\n\t 09:54 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 09:59 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 10:11 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 10:15 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 10:23 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 10:29 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 10:37 \t\t CSMT \n\n");
                    break;
            case 9: printf("\n\t 10:49 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 10:55 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 11:07 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 11:11 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 11:19 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 11:25 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 11:33 \t\t CSMT \n\n");
                    break;
            case 10: printf("\n\t 11:46 \t\t KALYAN \t PF 6|7\n"
                           "\t 11:54 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 12:08 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 12:21 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 12:25 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 12:33 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 12:39 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 12:48 \t\t CSMT \n\n");
                    break;
            case 11: printf("\n\t 14:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 14:13 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 14:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 14:40 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 14:44 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 14:52 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 14:58 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 15:07 \t\t CSMT \n\n");
                    break;
            case 12: printf("\n\t 16:46 \t\t KALYAN \t PF 6|7 \n"
                           "\t 16:53 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 17:05 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:09 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 17:20 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 17:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 17:46 \t\t CSMT \n\n");
                    break;
            case 13: printf("\n\t 18:22 \t\t KALYAN \t PF 6|7 \n"
                           "\t 18:29 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 18:43 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 18:58 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 19:02 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 19:10 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 19:16 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 19:24 \t\t CSMT \n\n");
                    break;
            case 14: printf("\n\t 20:41 \t\t KALYAN \t PF 6|7 \n"
                           "\t 20:48 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 21:01 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 21:16 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 21:20 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 21:28 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 21:34 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 21:44 \t\t CSMT \n\n");
                    break;
            case 15: printf("\n\t 23:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 23:12 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 23:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 23:29 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 23:39 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 23:43 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 23:51 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 23:57 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 00:05 \t\t CSMT \n\n");
                    break;
        }
}
void fttdadar(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 05:06 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 05:11 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 05:19 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 05:23 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 05:31 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 05:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 05:50 \t\t CSMT \n\n");
                    break;
            case 2: printf("\n\t 06:14 \t\t DOMBIVLI  \n"
                           "\t 06:27 \t\t THANE \n"
                           "\t 06:35 \t\t BHANDUP \n"
                           "\t 06:42 \t\t GHATKOPAR  \n"
                           "\t 06:46 \t\t KURLA  \n"
                           "\t 06:54 \t\t DADAR  \n"
                           "\t 07:00 \t\t BYCULLA \n"
                           "\t 07:11 \t\t CSMT \n\n");
                    break;
            case 3: printf("\n\t 07:18 \t\t KALYAN \t PF 6|7\n"
                           "\t 07:25 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 07:37 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 07:41 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 07:53 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 07:57 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:05 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:11 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:20 \t\t CSMT \n\n");
                    break;
            case 4: printf("\n\t 08:03 \t\t THANE  \n"
                           "\t 08:08 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 08:16 \t\t VIKHROLI \t PF 4 \t LEFT \n"
                           "\t 08:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:47 \t\t CSMT \n\n");
                    break;
            case 5: printf("\n\t 08:25 \t\t THANE \t\t PF 4 \t RIGHT \n"
                           "\t 08:30 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 08:38 \t\t VIKHROLI \t PF 4 \t LEFT \n"
                           "\t 08:46 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:54 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:00 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:08 \t\t CSMT \n\n");
                    break;
            case 6: printf("\n\t 08:34 \t\t KALYAN \t PF 6|7\n"
                           "\t 08:40 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 08:53 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 08:57 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:09 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:13 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:21 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:27 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:35 \t\t CSMT \n\n");
                    break;
            case 7: printf("\n\t 09:00 \t\t THANE \t\t PF 7 \t LEFT \n"
                           "\t 09:06 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:17 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:21 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:29 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:35 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:45 \t\t CSMT \n\n");
                    break;
            case 8: printf("\n\t 09:54 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 09:59 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 10:11 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 10:15 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 10:23 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 10:29 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 10:37 \t\t CSMT \n\n");
                    break;
            case 9: printf("\n\t 09:47 \t\t KALYAN \t PF 6|7\n"
                           "\t 09:55 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 10:07 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 10:24 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 10:28 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 10:37 \t\t DADAR \t\t PF 5 \t RIGHT \n\n");
                    break;
            case 10: printf("\n\t 10:49 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 10:55 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 11:07 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 11:11 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 11:19 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 11:25 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 11:33 \t\t CSMT \n\n");
                    break;
            case 11: printf("\n\t 11:46 \t\t KALYAN \t PF 6|7\n"
                           "\t 11:54 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 12:08 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 12:21 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 12:25 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 12:33 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 12:39 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 12:48 \t\t CSMT \n\n");
                    break;
            case 12: printf("\n\t 14:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 14:13 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 14:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 14:40 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 14:44 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 14:52 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 14:58 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 15:07 \t\t CSMT \n\n");
                    break;
            case 13: printf("\n\t 16:31 \t\t KALYAN \t PF 6|7\n"
                           "\t 16:39 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 16:52 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:08 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:12 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:20 \t\t DADAR \t\t PF 5 \t RIGHT \n\n");
                    break;
            case 14: printf("\n\t 16:46 \t\t KALYAN \t PF 6|7 \n"
                           "\t 16:53 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 17:05 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:09 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 17:20 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 17:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 17:46 \t\t CSMT \n\n");
                    break;
            case 15: printf("\n\t 18:22 \t\t KALYAN \t PF 6|7 \n"
                           "\t 18:29 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 18:43 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 18:58 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 19:02 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 19:10 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 19:16 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 19:24 \t\t CSMT \n\n");
                    break;
            case 16: printf("\n\t 20:41 \t\t KALYAN \t PF 6|7 \n"
                           "\t 20:48 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 21:01 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 21:16 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 21:20 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 21:28 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 21:34 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 21:44 \t\t CSMT \n\n");
                    break;
            case 17: printf("\n\t 23:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 23:12 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 23:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 23:29 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 23:39 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 23:43 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 23:51 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 23:57 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 00:05 \t\t CSMT \n\n");
                    break;
        }
}
void fttghatkopar(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 05:06 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 05:11 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 05:19 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 05:23 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 05:31 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 05:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 05:50 \t\t CSMT \n\n");
                    break;
            case 2: printf("\n\t 06:14 \t\t DOMBIVLI  \n"
                           "\t 06:27 \t\t THANE \n"
                           "\t 06:35 \t\t BHANDUP \n"
                           "\t 06:42 \t\t GHATKOPAR  \n"
                           "\t 06:46 \t\t KURLA  \n"
                           "\t 06:54 \t\t DADAR  \n"
                           "\t 07:00 \t\t BYCULLA \n"
                           "\t 07:11 \t\t CSMT \n\n");
                    break;
            case 3: printf("\n\t 07:18 \t\t KALYAN \t PF 6|7\n"
                           "\t 07:25 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 07:37 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 07:41 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 07:53 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 07:57 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:05 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:11 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:20 \t\t CSMT \n\n");
                    break;
            case 4: printf("\n\t 08:34 \t\t KALYAN \t PF 6|7\n"
                           "\t 08:40 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 08:53 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 08:57 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:09 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:13 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:21 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:27 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:35 \t\t CSMT \n\n");
                    break;
            case 5: printf("\n\t 09:00 \t\t THANE \t\t PF 7  LEFT \n"
                           "\t 09:06 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:17 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:21 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:29 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:35 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:45 \t\t CSMT \n\n");
                    break;
            case 6: printf("\n\t 09:54 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 09:59 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 10:11 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 10:15 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 10:23 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 10:29 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 10:37 \t\t CSMT \n\n");
                    break;
            case 7: printf("\n\t 09:47 \t\t KALYAN \t PF 6|7\n"
                           "\t 09:55 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 10:07 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 10:24 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 10:28 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 10:37 \t\t DADAR \t\t PF 5 \t RIGHT \n\n");
                    break;
            case 8: printf("\n\t 10:49 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 10:55 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 11:07 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 11:11 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 11:19 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 11:25 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 11:33 \t\t CSMT \n\n");
                    break;
            case 9: printf("\n\t 11:46 \t\t KALYAN \t PF 6|7\n"
                           "\t 11:54 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 12:08 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 12:21 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 12:25 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 12:33 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 12:39 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 12:48 \t\t CSMT \n\n");
                    break;
            case 10: printf("\n\t 14:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 14:13 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 14:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 14:40 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 14:44 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 14:52 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 14:58 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 15:07 \t\t CSMT \n\n");
                    break;
            case 11: printf("\n\t 16:31 \t\t KALYAN \t PF 6|7\n"
                           "\t 16:39 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 16:52 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:08 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:12 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:20 \t\t DADAR \t\t PF 5 \t RIGHT \n\n");
                    break;
            case 12: printf("\n\t 16:46 \t\t KALYAN \t PF 6|7 \n"
                           "\t 16:53 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 17:05 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:09 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 17:20 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 17:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 17:46 \t\t CSMT \n\n");
                    break;
            case 13: printf("\n\t 18:22 \t\t KALYAN \t PF 6|7 \n"
                           "\t 18:29 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 18:43 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 18:58 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 19:02 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 19:10 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 19:16 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 19:24 \t\t CSMT \n\n");
                    break;
            case 14: printf("\n\t 20:41 \t\t KALYAN \t PF 6|7 \n"
                           "\t 20:48 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 21:01 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 21:16 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 21:20 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 21:28 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 21:34 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 21:44 \t\t CSMT \n\n");
                    break;
            case 15: printf("\n\t 23:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 23:12 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 23:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 23:29 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 23:39 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 23:43 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 23:51 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 23:57 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 00:05 \t\t CSMT \n\n");
                    break;
        }
}
void fttvikhroli(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 08:03 \t\t THANE  \n"
                            "\t 08:08 \t\t MULUND \t PF 4 \t LEFT \n"
                            "\t 08:16 \t\t VIKHROLI \t PF 4 \t LEFT \n"
                            "\t 08:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                            "\t 08:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                            "\t 08:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                            "\t 08:47 \t\t CSMT \n\n");
                    break;
            case 2: printf("\n\t 08:25 \t\t THANE \t\t PF 4 \t RIGHT \n"
                            "\t 08:30 \t\t MULUND \t PF 4 \t LEFT \n"
                            "\t 08:38 \t\t VIKHROLI \t PF 4 \t LEFT \n"
                            "\t 08:46 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                            "\t 08:54 \t\t DADAR \t\t PF 6 \t LEFT \n"
                            "\t 09:00 \t\t BYCULLA \t PF 4 \t LEFT \n"
                            "\t 09:08 \t\t CSMT \n\n");
                    break;
    }
}
void fttmulund(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 05:06 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 05:11 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 05:19 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 05:23 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 05:31 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 05:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 05:50 \t\t CSMT \n\n");
                    break;
            case 2: printf("\n\t 07:18 \t\t KALYAN \t PF 6|7\n"
                           "\t 07:25 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 07:37 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 07:41 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 07:53 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 07:57 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:05 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:11 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:20 \t\t CSMT \n\n");
                    break;
            case 3: printf("\n\t 08:03 \t\t THANE  \n"
                           "\t 08:08 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 08:16 \t\t VIKHROLI \t PF 4 \t LEFT \n"
                           "\t 08:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:47 \t\t CSMT \n\n");
                    break;
            case 4: printf("\n\t 08:25 \t\t THANE \t\t PF 4 \t RIGHT \n"
                           "\t 08:30 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 08:38 \t\t VIKHROLI \t PF 4 \t LEFT \n"
                           "\t 08:46 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:54 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:00 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:08 \t\t CSMT \n\n");
                    break;
            case 5: printf("\n\t 08:34 \t\t KALYAN \t PF 6|7\n"
                           "\t 08:40 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 08:53 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 08:57 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:09 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:13 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:21 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:27 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:35 \t\t CSMT \n\n");
                    break;
            case 6: printf("\n\t 09:00 \t\t THANE \t\t PF 7 \t LEFT \n"
                           "\t 09:06 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:17 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:21 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:29 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:35 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:45 \t\t CSMT \n\n");
                    break;
            case 7: printf("\n\t 09:54 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 09:59 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 10:11 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 10:15 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 10:23 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 10:29 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 10:37 \t\t CSMT \n\n");
                    break;
            case 8: printf("\n\t 10:49 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 10:55 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 11:07 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 11:11 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 11:19 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 11:25 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 11:33 \t\t CSMT \n\n");
                    break;
            case 9: printf("\n\t 16:46 \t\t KALYAN \t PF 6|7 \n"
                           "\t 16:53 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 17:05 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:09 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 17:20 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 17:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 17:46 \t\t CSMT \n\n");
                    break;
            case 10: printf("\n\t 23:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 23:12 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 23:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 23:29 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 23:39 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 23:43 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 23:51 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 23:57 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 00:05 \t\t CSMT \n\n");
                    break;
        }
}
void fttdombivli(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 06:06 \t\t CSMT \n"
                       "\t 06:14 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 06:21 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 06:28 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 06:46 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 06:59 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 07:07 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 3: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 4: printf("\n\t 10:45 \t\t DADAR \t\t PF 5 \t RIGHT \n"
                       "\t 10:53 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:57 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 11:15 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 11:28 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 11:36 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 5: printf("\n\t 11:37 \t\t CSMT \n"
                       "\t 11:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 11:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 11:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 12:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 12:17 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 12:29 \t\t DOMBIVLI \t PF 4 \t LEFT \n");
                break;
        case 6: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 7: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 8: printf("\n\t 17:30 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 17:37 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 17:41 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 17:53 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 17:57 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 18:10 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 18:17 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 9: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 10: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftmghatkopar(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 05:06 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 05:11 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 05:19 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 05:23 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 05:31 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 05:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 05:50 \t\t CSMT \n\n");
                    break;
            case 2: printf("\n\t 07:18 \t\t KALYAN \t PF 6|7\n"
                           "\t 07:25 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 07:37 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 07:41 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 07:53 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 07:57 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:05 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:11 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:20 \t\t CSMT \n\n");
                    break;
            case 3: printf("\n\t 08:34 \t\t KALYAN \t PF 6|7\n"
                           "\t 08:40 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 08:53 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 08:57 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:09 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:13 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:21 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:27 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:35 \t\t CSMT \n\n");
                    break;
            case 4: printf("\n\t 09:00 \t\t THANE \t\t PF 7 \t LEFT \n"
                           "\t 09:06 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:17 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:21 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:29 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:35 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:45 \t\t CSMT \n\n");
                    break;
            case 5: printf("\n\t 09:54 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 09:59 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 10:11 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 10:15 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 10:23 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 10:29 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 10:37 \t\t CSMT \n\n");
                    break;
            case 6: printf("\n\t 10:49 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 10:55 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 11:07 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 11:11 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 11:19 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 11:25 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 11:33 \t\t CSMT \n\n");
                    break;
            case 7: printf("\n\t 16:46 \t\t KALYAN \t PF 6|7 \n"
                           "\t 16:53 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 17:05 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:09 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 17:20 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 17:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 17:46 \t\t CSMT \n\n");
                    break;
            case 8: printf("\n\t 23:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 23:12 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 23:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 23:29 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 23:39 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 23:43 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 23:51 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 23:57 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 00:05 \t\t CSMT \n\n");
                    break;
        }
}
void ftmthane(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 08:50 \t\t CSMT \n"
                       "\t 08:57 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 09:04 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:11 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:19 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 09:27 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:33 \t\t THANE  \n");
                break;
        case 3: printf("\n\t 09:04 \t\t CSMT \n"
                       "\t 09:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:46 \t\t THANE \n");
                break;
        case 4: printf("\n\t 09:48 \t\t CSMT \n"
                       "\t 10:01 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 10:08 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:12 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 10:24 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 10:30 \t\t THANE  \n");
                break;
        case 5: printf("\n\t 17:30 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 17:37 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 17:41 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 17:53 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 17:57 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 18:10 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 18:17 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 6: printf("\n\t 18:10 \t\t CSMT \n"
                       "\t 18:23 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 18:30 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 18:40 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 18:46 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 18:52 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 7: printf("\n\t 19:02 \t\t CSMT \n"
                       "\t 19:16 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:30 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 19:35 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 19:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 19:46 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 8: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 9: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftmkalyan(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 17:30 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 17:37 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 17:41 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 17:53 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 17:57 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 18:10 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 18:17 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 3: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 4: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftbmulund(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 18:10 \t\t CSMT \n"
                       "\t 18:23 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 18:30 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 18:40 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 18:46 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 18:52 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 2: printf("\n\t 19:02 \t\t CSMT \n"
                       "\t 19:16 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:30 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 19:35 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 19:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 19:46 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
    }
}
void ftbthane(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 18:10 \t\t CSMT \n"
                       "\t 18:23 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 18:30 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 18:40 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 18:46 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 18:52 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 3: printf("\n\t 19:02 \t\t CSMT \n"
                       "\t 19:16 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:30 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 19:35 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 19:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 19:46 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
    }
}
void ftbkalyan(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftvthane(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 08:50 \t\t CSMT \n"
                       "\t 08:57 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 09:04 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:11 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:19 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 09:27 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:33 \t\t THANE  \n");
                break;
        case 2: printf("\n\t 19:02 \t\t CSMT \n"
                       "\t 19:16 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:30 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 19:35 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 19:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 19:46 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
    }
}
void ftvbhandup(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 19:02 \t\t CSMT \n"
                       "\t 19:16 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:30 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 19:35 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 19:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 19:46 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
    }
}
void ftgcsmt(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 05:06 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 05:11 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 05:19 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 05:23 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 05:31 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 05:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 05:50 \t\t CSMT \n\n");
                    break;
            case 2: printf("\n\t 06:14 \t\t DOMBIVLI  \n"
                           "\t 06:27 \t\t THANE \n"
                           "\t 06:35 \t\t BHANDUP \n"
                           "\t 06:42 \t\t GHATKOPAR  \n"
                           "\t 06:46 \t\t KURLA  \n"
                           "\t 06:54 \t\t DADAR  \n"
                           "\t 07:00 \t\t BYCULLA \n"
                           "\t 07:11 \t\t CSMT \n\n");
                    break;
            case 3: printf("\n\t 07:18 \t\t KALYAN \t PF 6|7\n"
                           "\t 07:25 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 07:37 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 07:41 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 07:53 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 07:57 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:05 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:11 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:20 \t\t CSMT \n\n");
                    break;
            case 4: printf("\n\t 08:34 \t\t KALYAN \t PF 6|7\n"
                           "\t 08:40 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 08:53 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 08:57 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:09 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:13 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:21 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:27 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:35 \t\t CSMT \n\n");
                    break;
            case 5: printf("\n\t 09:00 \t\t THANE \t\t PF 7 \t LEFT \n"
                           "\t 09:06 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:17 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:21 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:29 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:35 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:45 \t\t CSMT \n\n");
                    break;
            case 6: printf("\n\t 09:54 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 09:59 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 10:11 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 10:15 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 10:23 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 10:29 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 10:37 \t\t CSMT \n\n");
                    break;
            case 7: printf("\n\t 10:49 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 10:55 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 11:07 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 11:11 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 11:19 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 11:25 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 11:33 \t\t CSMT \n\n");
                    break;
            case 8: printf("\n\t 11:46 \t\t KALYAN \t PF 6|7\n"
                           "\t 11:54 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 12:08 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 12:21 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 12:25 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 12:33 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 12:39 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 12:48 \t\t CSMT \n\n");
                    break;
            case 9: printf("\n\t 14:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 14:13 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 14:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 14:40 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 14:44 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 14:52 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 14:58 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 15:07 \t\t CSMT \n\n");
                    break;
            case 10: printf("\n\t 16:46 \t\t KALYAN \t PF 6|7 \n"
                           "\t 16:53 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 17:05 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:09 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 17:20 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 17:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 17:46 \t\t CSMT \n\n");
                    break;
            case 11: printf("\n\t 18:22 \t\t KALYAN \t PF 6|7 \n"
                           "\t 18:29 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 18:43 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 18:58 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 19:02 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 19:10 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 19:16 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 19:24 \t\t CSMT \n\n");
                    break;
            case 12: printf("\n\t 20:41 \t\t KALYAN \t PF 6|7 \n"
                           "\t 20:48 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 21:01 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 21:16 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 21:20 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 21:28 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 21:34 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 21:44 \t\t CSMT \n\n");
                    break;
            case 13: printf("\n\t 23:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 23:12 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 23:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 23:29 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 23:39 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 23:43 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 23:51 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 23:57 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 00:05 \t\t CSMT \n\n");
                    break;
        }
}
void ftgdadar(ft)
{
    switch(ft)
        {
            case 1: printf("\n\t 05:06 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 05:11 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 05:19 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 05:23 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 05:31 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 05:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 05:50 \t\t CSMT \n\n");
                    break;
            case 2: printf("\n\t 06:14 \t\t DOMBIVLI  \n"
                           "\t 06:27 \t\t THANE \n"
                           "\t 06:35 \t\t BHANDUP \n"
                           "\t 06:42 \t\t GHATKOPAR  \n"
                           "\t 06:46 \t\t KURLA  \n"
                           "\t 06:54 \t\t DADAR  \n"
                           "\t 07:00 \t\t BYCULLA \n"
                           "\t 07:11 \t\t CSMT \n\n");
                    break;
            case 3: printf("\n\t 07:18 \t\t KALYAN \t PF 6|7\n"
                           "\t 07:25 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 07:37 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 07:41 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 07:53 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 07:57 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 08:05 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 08:11 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 08:20 \t\t CSMT \n\n");
                    break;
            case 4: printf("\n\t 08:34 \t\t KALYAN \t PF 6|7\n"
                           "\t 08:40 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 08:53 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 08:57 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:09 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:13 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:21 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:27 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:35 \t\t CSMT \n\n");
                    break;
            case 5: printf("\n\t 09:00 \t\t THANE \t\t PF 7 \t LEFT \n"
                           "\t 09:06 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 09:17 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 09:21 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 09:29 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 09:35 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 09:45 \t\t CSMT \n\n");
                    break;
            case 6: printf("\n\t 09:54 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 09:59 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 10:11 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 10:15 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 10:23 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 10:29 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 10:37 \t\t CSMT \n\n");
                    break;
            case 7: printf("\n\t 09:47 \t\t KALYAN \t PF 6|7\n"
                           "\t 09:55 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 10:07 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 10:24 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 10:28 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 10:37 \t\t DADAR \t\t PF 5 \t RIGHT \n\n");
                    break;
            case 8: printf("\n\t 10:49 \t\t THANE \t\t PF 1|3  LEFT \n"
                           "\t 10:55 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 11:07 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 11:11 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 11:19 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 11:25 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 11:33 \t\t CSMT \n\n");
                    break;
            case 9: printf("\n\t 11:46 \t\t KALYAN \t PF 6|7\n"
                           "\t 11:54 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 12:08 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 12:21 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 12:25 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 12:33 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 12:39 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 12:48 \t\t CSMT \n\n");
                    break;
            case 10: printf("\n\t 14:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 14:13 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 14:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 14:40 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 14:44 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 14:52 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 14:58 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 15:07 \t\t CSMT \n\n");
                    break;
            case 11: printf("\n\t 16:31 \t\t KALYAN \t PF 6|7\n"
                           "\t 16:39 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 16:52 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:08 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:12 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:20 \t\t DADAR \t\t PF 5 \t RIGHT \n\n");
                    break;
            case 12: printf("\n\t 16:46 \t\t KALYAN \t PF 6|7 \n"
                           "\t 16:53 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 17:05 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 17:09 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 17:20 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 17:24 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 17:32 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 17:38 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 17:46 \t\t CSMT \n\n");
                    break;
            case 13: printf("\n\t 18:22 \t\t KALYAN \t PF 6|7 \n"
                           "\t 18:29 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 18:43 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 18:58 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 19:02 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 19:10 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 19:16 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 19:24 \t\t CSMT \n\n");
                    break;
            case 14: printf("\n\t 20:41 \t\t KALYAN \t PF 6|7 \n"
                           "\t 20:48 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 21:01 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 21:16 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 21:20 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 21:28 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 21:34 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 21:44 \t\t CSMT \n\n");
                    break;
            case 15: printf("\n\t 23:05 \t\t KALYAN \t PF 6|7 \n"
                           "\t 23:12 \t\t DOMBIVLI \t PF 5 \t LEFT \n"
                           "\t 23:25 \t\t THANE \t\t PF 6 \t RIGHT \n"
                           "\t 23:29 \t\t MULUND \t PF 4 \t LEFT \n"
                           "\t 23:39 \t\t GHATKOPAR \t PF 4 \t LEFT \n"
                           "\t 23:43 \t\t KURLA \t\t PF 6 \t RIGHT \n"
                           "\t 23:51 \t\t DADAR \t\t PF 6 \t LEFT \n"
                           "\t 23:57 \t\t BYCULLA \t PF 4 \t LEFT \n"
                           "\t 00:05 \t\t CSMT \n\n");
                    break;
        }
}
void ftgmulund(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 09:48 \t\t CSMT \n"
                       "\t 10:01 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 10:08 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:12 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 10:24 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 10:30 \t\t THANE  \n");
                break;
        case 3: printf("\n\t 17:30 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 17:37 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 17:41 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 17:53 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 17:57 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 18:10 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 18:17 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 4: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 5: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftgthane(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 08:04 \t\t CSMT \n"
                       "\t 08:11 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 08:28 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 08:46 \t\t THANE \n");
                break;
        case 3: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 4: printf("\n\t 09:48 \t\t CSMT \n"
                       "\t 10:01 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 10:08 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:12 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 10:24 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 10:30 \t\t THANE  \n");
                break;
        case 5: printf("\n\t 10:45 \t\t DADAR \t\t PF 5 \t RIGHT \n"
                       "\t 10:53 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:57 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 11:15 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 11:28 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 11:36 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 6: printf("\n\t 11:37 \t\t CSMT \n"
                       "\t 11:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 11:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 11:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 12:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 12:17 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 12:29 \t\t DOMBIVLI \t PF 4 \t LEFT \n");
                break;
        case 7: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 8: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 9: printf("\n\t 17:30 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 17:37 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 17:41 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 17:53 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 17:57 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 18:10 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 18:17 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 10: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 11: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftgdombivli(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 3: printf("\n\t 10:45 \t\t DADAR \t\t PF 5 \t RIGHT \n"
                       "\t 10:53 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:57 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 11:15 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 11:28 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 11:36 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 4: printf("\n\t 11:37 \t\t CSMT \n"
                       "\t 11:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 11:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 11:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 12:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 12:17 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 12:29 \t\t DOMBIVLI \t PF 4 \t LEFT \n");
                break;
        case 5: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 6: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 7: printf("\n\t 17:30 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 17:37 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 17:41 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 17:53 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 17:57 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 18:10 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 18:17 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 8: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 9: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftgkalyan(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 3: printf("\n\t 10:45 \t\t DADAR \t\t PF 5 \t RIGHT \n"
                       "\t 10:53 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:57 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 11:15 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 11:28 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 11:36 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 4: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 5: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 6: printf("\n\t 17:30 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 17:37 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 17:41 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 17:53 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 17:57 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 18:10 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 18:17 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 7: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 8: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftkvikhroli(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 08:50 \t\t CSMT \n"
                       "\t 08:57 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 09:04 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:11 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:19 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 09:27 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:33 \t\t THANE  \n");
                break;
    }
}
void ftkbhandup(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 18:10 \t\t CSMT \n"
                       "\t 18:23 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 18:30 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 18:40 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 18:46 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 18:52 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
    }
}
void ftkmulund(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 08:50 \t\t CSMT \n"
                       "\t 08:57 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 09:04 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:11 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:19 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 09:27 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:33 \t\t THANE  \n");
                break;
        case 3: printf("\n\t 09:04 \t\t CSMT \n"
                       "\t 09:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:46 \t\t THANE \n");
                break;
        case 4: printf("\n\t 09:48 \t\t CSMT \n"
                       "\t 10:01 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 10:08 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:12 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 10:24 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 10:30 \t\t THANE  \n");
                break;
        case 5: printf("\n\t 17:30 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 17:37 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 17:41 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 17:53 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 17:57 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 18:10 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 18:17 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 6: printf("\n\t 18:10 \t\t CSMT \n"
                       "\t 18:23 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 18:30 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 18:40 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 18:46 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 18:52 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 7: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 8: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftkthane(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 06:06 \t\t CSMT \n"
                       "\t 06:14 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 06:21 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 06:28 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 06:46 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 06:59 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 07:07 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 3: printf("\n\t 08:04 \t\t CSMT \n"
                       "\t 08:11 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 08:28 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 08:46 \t\t THANE \n");
                break;
        case 4: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 5: printf("\n\t 08:50 \t\t CSMT \n"
                       "\t 08:57 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 09:04 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:11 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:19 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 09:27 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:33 \t\t THANE  \n");
                break;
        case 6: printf("\n\t 09:04 \t\t CSMT \n"
                       "\t 09:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:46 \t\t THANE \n");
                break;
        case 7: printf("\n\t 09:48 \t\t CSMT \n"
                       "\t 10:01 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 10:08 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:12 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 10:24 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 10:30 \t\t THANE  \n");
                break;
        case 8: printf("\n\t 10:45 \t\t DADAR \t\t PF 5 \t RIGHT \n"
                       "\t 10:53 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:57 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 11:15 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 11:28 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 11:36 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 9: printf("\n\t 11:37 \t\t CSMT \n"
                       "\t 11:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 11:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 11:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 12:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 12:17 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 12:29 \t\t DOMBIVLI \t PF 4 \t LEFT \n");
                break;
        case 10: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 11: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 12: printf("\n\t 17:30 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 17:37 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 17:41 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 17:53 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 17:57 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 18:10 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 18:17 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 13: printf("\n\t 18:10 \t\t CSMT \n"
                       "\t 18:23 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 18:30 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 18:40 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 18:46 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 18:52 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 14: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 15: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftdrkurla(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 06:06 \t\t CSMT \n"
                       "\t 06:14 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 06:21 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 06:28 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 06:46 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 06:59 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 07:07 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 3: printf("\n\t 08:04 \t\t CSMT \n"
                       "\t 08:11 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 08:28 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 08:46 \t\t THANE \n");
                break;
        case 4: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 5: printf("\n\t 08:50 \t\t CSMT \n"
                       "\t 08:57 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 09:04 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:11 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:19 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 09:27 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:33 \t\t THANE  \n");
                break;
        case 6: printf("\n\t 09:04 \t\t CSMT \n"
                       "\t 09:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:46 \t\t THANE \n");
                break;
        case 7: printf("\n\t 09:48 \t\t CSMT \n"
                       "\t 10:01 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 10:08 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:12 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 10:24 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 10:30 \t\t THANE  \n");
                break;
        case 8: printf("\n\t 10:45 \t\t DADAR \t\t PF 5 \t RIGHT \n"
                       "\t 10:53 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:57 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 11:15 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 11:28 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 11:36 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 9: printf("\n\t 11:37 \t\t CSMT \n"
                       "\t 11:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 11:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 11:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 12:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 12:17 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 12:29 \t\t DOMBIVLI \t PF 4 \t LEFT \n");
                break;
        case 10: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 11: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 12: printf("\n\t 17:30 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 17:37 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 17:41 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 17:53 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 17:57 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 18:10 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 18:17 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 13: printf("\n\t 18:10 \t\t CSMT \n"
                       "\t 18:23 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 18:30 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 18:40 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 18:46 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 18:52 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 14: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 15: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftdrthane(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 06:06 \t\t CSMT \n"
                       "\t 06:14 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 06:21 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 06:28 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 06:46 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 06:59 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 07:07 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 3: printf("\n\t 08:04 \t\t CSMT \n"
                       "\t 08:11 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 08:28 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 08:46 \t\t THANE \n");
                break;
        case 4: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 5: printf("\n\t 08:50 \t\t CSMT \n"
                       "\t 08:57 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 09:04 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:11 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:19 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 09:27 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:33 \t\t THANE  \n");
                break;
        case 6: printf("\n\t 09:04 \t\t CSMT \n"
                       "\t 09:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:46 \t\t THANE \n");
                break;
        case 7: printf("\n\t 09:48 \t\t CSMT \n"
                       "\t 10:01 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 10:08 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:12 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 10:24 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 10:30 \t\t THANE  \n");
                break;
        case 8: printf("\n\t 10:45 \t\t DADAR \t\t PF 5 \t RIGHT \n"
                       "\t 10:53 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:57 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 11:15 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 11:28 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 11:36 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 9: printf("\n\t 11:37 \t\t CSMT \n"
                       "\t 11:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 11:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 11:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 12:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 12:17 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 12:29 \t\t DOMBIVLI \t PF 4 \t LEFT \n");
                break;
        case 10: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 11: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 12: printf("\n\t 17:30 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 17:37 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 17:41 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 17:53 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 17:57 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 18:10 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 18:17 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 13: printf("\n\t 18:10 \t\t CSMT \n"
                       "\t 18:23 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 18:30 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 18:40 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 18:46 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 18:52 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 14: printf("\n\t 19:02 \t\t CSMT \n"
                       "\t 19:16 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:30 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 19:35 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 19:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 19:46 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 15: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 16: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftbykalyan(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 06:06 \t\t CSMT \n"
                       "\t 06:14 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 06:21 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 06:28 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 06:46 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 06:59 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 07:07 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 3: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 4: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 5: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                        "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 6: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 7: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftbydombivli(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 06:06 \t\t CSMT \n"
                       "\t 06:14 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 06:21 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 06:28 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 06:46 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 06:59 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 07:07 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 3: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 4: printf("\n\t 11:37 \t\t CSMT \n"
                       "\t 11:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 11:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 11:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 12:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 12:17 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 12:29 \t\t DOMBIVLI \t PF 4 \t LEFT \n");
                break;
        case 5: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 6: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                        "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 7: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 8: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftbymulund(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 08:50 \t\t CSMT \n"
                       "\t 08:57 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 09:04 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:11 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:19 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 09:27 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:33 \t\t THANE \n");
                break;
        case 3: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 4: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftbybhandup(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftbyvikhroli(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 08:50 \t\t CSMT \n"
                       "\t 08:57 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 09:04 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:11 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:19 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 09:27 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:33 \t\t THANE \n");
                break;
    }
}
void ftbyghatkopar(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 08:04 \t\t CSMT \n"
                       "\t 08:11 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 08:28 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 08:46 \t\t THANE \n");
                break;
        case 3: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 4: printf("\n\t 11:37 \t\t CSMT \n"
                       "\t 11:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 11:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 11:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 12:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 12:17 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 12:29 \t\t DOMBIVLI \t PF 4 \t LEFT \n");
                break;
        case 5: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 6: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                        "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 7: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 8: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftbydadar(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 06:06 \t\t CSMT \n"
                       "\t 06:14 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 06:21 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 06:28 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 06:46 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 06:59 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 07:07 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 3: printf("\n\t 08:04 \t\t CSMT \n"
                       "\t 08:11 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 08:28 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 08:46 \t\t THANE \n");
                break;
        case 4: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 5: printf("\n\t 08:50 \t\t CSMT \n"
                       "\t 08:57 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 09:04 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:11 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:19 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 09:27 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:33 \t\t THANE \n");
                break;
        case 6: printf("\n\t 11:37 \t\t CSMT \n"
                       "\t 11:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 11:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 11:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 12:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 12:17 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 12:29 \t\t DOMBIVLI \t PF 4 \t LEFT \n");
                break;
        case 7: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 8: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                        "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 9: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 10: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftcmulund(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 08:50 \t\t CSMT \n"
                       "\t 08:57 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 09:04 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:11 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:19 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 09:27 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:33 \t\t THANE  \n");
                break;
        case 3: printf("\n\t 09:04 \t\t CSMT \n"
                       "\t 09:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:46 \t\t THANE \n");
                break;
        case 4: printf("\n\t 09:48 \t\t CSMT \n"
                       "\t 10:01 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 10:08 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:12 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 10:24 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 10:30 \t\t THANE  \n");
                break;
        case 5: printf("\n\t 18:10 \t\t CSMT \n"
                       "\t 18:23 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 18:30 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 18:40 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 18:46 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 18:52 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 6: printf("\n\t 19:02 \t\t CSMT \n"
                       "\t 19:16 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:30 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 19:35 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 19:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 19:46 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 7: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 8: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftcghatkopar(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 08:04 \t\t CSMT \n"
                       "\t 08:11 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 08:28 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 08:46 \t\t THANE \n");
                break;
        case 3: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 4: printf("\n\t 09:48 \t\t CSMT \n"
                       "\t 10:01 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 10:08 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:12 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 10:24 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 10:30 \t\t THANE  \n");
                break;
        case 5: printf("\n\t 11:37 \t\t CSMT \n"
                       "\t 11:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 11:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 11:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 12:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 12:17 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 12:29 \t\t DOMBIVLI \t PF 4 \t LEFT \n");
                break;
        case 6: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 7: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 8: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 9: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftckurla(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 06:06 \t\t CSMT \n"
                       "\t 06:14 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 06:21 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 06:28 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 06:46 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 06:59 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 07:07 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 3: printf("\n\t 08:04 \t\t CSMT \n"
                       "\t 08:11 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 08:28 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 08:46 \t\t THANE \n");
                break;
        case 4: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 5: printf("\n\t 08:50 \t\t CSMT \n"
                       "\t 08:57 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 09:04 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:11 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:19 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 09:27 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:33 \t\t THANE  \n");
                break;
        case 6: printf("\n\t 09:04 \t\t CSMT \n"
                       "\t 09:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:46 \t\t THANE \n");
                break;
        case 7: printf("\n\t 09:48 \t\t CSMT \n"
                       "\t 10:01 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 10:08 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:12 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 10:24 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 10:30 \t\t THANE  \n");
                break;
        case 8: printf("\n\t 11:37 \t\t CSMT \n"
                       "\t 11:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 11:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 11:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 12:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 12:17 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 12:29 \t\t DOMBIVLI \t PF 4 \t LEFT \n");
                break;
        case 9: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 10: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 11: printf("\n\t 18:10 \t\t CSMT \n"
                       "\t 18:23 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 18:30 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 18:40 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 18:46 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 18:52 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 12: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 13: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
void ftcdadar(ft)
{
    switch(ft)
    {
        case 1: printf("\n\t 06:06 \t\t CSMT \n"
                       "\t 06:14 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 06:21 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 06:28 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 06:46 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 06:59 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 07:07 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 2: printf("\n\t 07:25 \t\t CSMT \n"
                       "\t 07:32 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 07:38 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 07:45 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 07:49 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 07:57 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 08:05 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 08:17 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 08:25 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 3: printf("\n\t 08:04 \t\t CSMT \n"
                       "\t 08:11 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 08:28 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 08:46 \t\t THANE \n");
                break;
        case 4: printf("\n\t 08:36 \t\t CSMT \n"
                       "\t 08:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 08:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 08:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 09:14 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:18 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 09:30 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 09:37 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 5: printf("\n\t 08:50 \t\t CSMT \n"
                       "\t 08:57 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 09:04 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:11 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:19 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 09:27 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:33 \t\t THANE  \n");
                break;
        case 6: printf("\n\t 09:04 \t\t CSMT \n"
                       "\t 09:17 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 09:24 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 09:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 09:46 \t\t THANE \n");
                break;
        case 7: printf("\n\t 09:48 \t\t CSMT \n"
                       "\t 10:01 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 10:08 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 10:12 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 10:24 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 10:30 \t\t THANE  \n");
                break;
        case 8: printf("\n\t 11:37 \t\t CSMT \n"
                       "\t 11:45 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 11:51 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 11:58 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 12:02 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 12:17 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 12:29 \t\t DOMBIVLI \t PF 4 \t LEFT \n");
                break;
        case 9: printf("\n\t 12:55 \t\t CSMT \n"
                       "\t 13:03 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 13:09 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 13:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 13:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 13:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 13:49 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 13:57 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 10: printf("\n\t 15:17 \t\t CSMT \n"
                       "\t 15:25 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 15:31 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 15:38 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 15:42 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 15:58 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 16:11 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 16:19 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 11: printf("\n\t 18:10 \t\t CSMT \n"
                       "\t 18:23 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 18:30 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 18:40 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 18:46 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 18:52 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 12: printf("\n\t 19:02 \t\t CSMT \n"
                       "\t 19:16 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:30 \t\t VIKHROLI \t PF 3 \t LEFT \n"
                       "\t 19:35 \t\t BHANDUP \t PF 3 \t LEFT \n"
                       "\t 19:40 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 19:46 \t\t THANE \t\t PF 1|3  RIGHT \n");
                break;
        case 13: printf("\n\t 19:28 \t\t CSMT \n"
                       "\t 19:37 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 19:43 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 19:51 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 19:55 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 20:05 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 20:09 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 20:21 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 20:31 \t\t KALYAN \t PF 6|7 \n");
                break;
        case 14: printf("\n\t 21:54 \t\t CSMT \n"
                       "\t 22:02 \t\t BYCULLA \t PF 3 \t LEFT \n"
                       "\t 22:08 \t\t DADAR \t\t PF 4 \t LEFT \n"
                       "\t 22:16 \t\t KURLA \t\t PF 5 \t RIGHT \n"
                       "\t 22:20 \t\t GHATKOPAR \t PF 3 \t LEFT \n"
                       "\t 22:32 \t\t MULUND \t PF 3 \t LEFT \n"
                       "\t 22:36 \t\t THANE \t\t PF 5 \t RIGHT \n"
                       "\t 22:48 \t\t DOMBIVLI \t PF 4 \t LEFT \n"
                       "\t 22:57 \t\t KALYAN \t PF 6|7 \n");
                break;
    }
}
