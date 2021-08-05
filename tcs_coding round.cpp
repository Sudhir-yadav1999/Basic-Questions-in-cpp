Selection of MPCS exams include a fitness test which is conducted on ground. There will be a batch of 3 trainees, appearing for running test in track for 3 rounds. You need to record their oxygen level after every round. After trainee are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and select one with highest oxygen level as the most fit trainee. If more than one trainee attains the same highest average level, they all need to be selected.

Display the most fit trainee (or trainees) and the highest average oxygen level.

Note:

The oxygen value entered should not be accepted if it is not in the range between 1 and 100.
If the calculated maximum average oxygen value of trainees is below 70 then declare the trainees as unfit with meaningful message as “All trainees are unfit.
Average Oxygen Values should be rounded.
Example 1:

INPUT VALUES
            95

            92

            95

            92

            90

            92

            90

            92

            90

OUTPUT VALUES
Trainee Number : 1
Trainee Number : 3
Note:

Input should be 9 integer values representing oxygen levels entered in order as

Round 1

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 2

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 3

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Output must be in given format as in above example. For any wrong input final output should display “INVALID INPUT”


code
----
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10][10];
    int num;
    int average[3]={0};
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cin>>num;
           if(num<100 && num>1)
           {
             arr[i][j]=num;
             
          
            }
     
      
        }
    }
    
    int i,j;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           
           average[i] += arr[j][i];
           
       }
       average[i] = average[i]/3;
   }
   
   int max=0;

   for(int k=0;k<3;k++)
   {
       if(average[k]>max)
       {
           max=average[k];
       }
       cout<<"THe value of average :"<<average[k]<<endl;
   }
    cout<<endl;
    
    
    for(int i=0;i<3;i++)
    {
       
           if(average[i]==max)
            {
                cout<<"Trainee no :"<<i+1;
            }
            if(average[i]<70)
            {
                cout<<"ALL trainee unfit"<<endl;
            }
       
    }
    
    
    
    return 0;
}



