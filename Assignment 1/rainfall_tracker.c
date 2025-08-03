/*Temperature Tracker:
Write a program for Tracking daily temperatures of 3 cities for a week . The program calculates the average temperature for each day and for the week.*/
#include<stdio.h>
int main()
{
 int c,m;
 float temp[3][7];
 float total=0.0,avg=0.0;
 float daySum=0,dayAvg[7];
 printf("B24CE1096\n");
 printf("TEmperature data for 3 cities for 7 days (in C)\n"); 
 for (c=0;c<3;c++)
   {
     printf("\nEnter data for city %d\n",c+1);
     for (m=0;m<7;m++)
      {
          printf("\nEnter Temperature for day %d:",m+1);
          scanf("\n %f",&temp[c][m]);
      }  
      printf("\n------------------------");
    }
  for (m=0;m<7;m++)   
     {
       daySum=0;
       for (c=0;c<3;c++)
        { 
          daySum+=temp[c][m];
        }
       dayAvg[m]=daySum/3;
     }
 printf("\n Temperature tracking(in celsius):");
 printf("\n\nSno.\t\tCity name\t\tDay_1\t\t\tDay_2\t\t\tDay_3\t\t\tDay_4\t\t\tDay_5\t\t\tDay_6\t\t\tDay_7\t\t\tAvg_temp");
 printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
 for (c=0;c<3;c++)
    {
       total=0;
       printf("\n%d\t\tcity %d\t",c+1,c+1);
       for (m=0;m<7;m++)
       {
        printf("\t\t%f",temp[c][m]);  
        total+=temp[c][m];
       }
       avg=total/7;
       printf("\t\t%f",avg);
     }
      printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

  printf("\n\t\tdaily averages:");
  for (m=0;m<7;m++)
  {
    printf("\t\t%f", dayAvg[m]);
  }
  return 0;
}
