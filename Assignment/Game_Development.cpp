/*PROBLEM STATEMENT:
Game Development:
write a game development program that implements the Bubble Sort algorithm. The program will simulate a simple game where the player can input a set of numbers, and the numbers will be sorted using Bubble Sort to simulate a "level-up" scenario where the player's scores are sorted in ascending order.
*/
#include<iostream>
using namespace std;
int main()
{
int pass,temp,n,j,p;
int A[5],B[5];
cout<<"B24CE1096";
cout<<"\nEnter scores for player1:";    //Input scores of player 1
for (n=0;n<5;n++)
    {
        cin>>A[n];
    }
cout<<"\nEnter scores for player2:";    //Input scores of player 2
for (n=0;n<5;n++)
    {
        cin>>B[n];
    }
for (pass=0;pass<n-1;pass++)     //Initialize for loop for passes
    {
        for(j=0;j<n-pass-1;j++)    //for loop for comparision
            {
                if (A[j]<A[j+1])
                    {
                    temp=A[j];       //store value in temp variable
                    A[j]=A[j+1];
                    A[j+1]=temp;
                    }  
            }
    }
for (pass=0;pass<n-1;pass++)       //same for player 2
    {
        for(j=0;j<n-pass-1;j++)
            {
                if (B[j]<B[j+1])
                    {
                    temp=B[j];
                    B[j]=B[j+1];
                    B[j+1]=temp;
                    }  
            }
    }    

cout<<"\n\nAfter Swapping sorted scores of player1:"; //print sorted scores of player 1
for (p=0;p<5;p++)
    {
    cout<<A[p]<<" ";
    }
cout<<"\n\nAfter Swapping sorted scores of player2:";   //print sorted scores of player 2
for (p=0;p<5;p++)
    {
    cout<<B[p]<<" ";
    }
//comparing scores of two players
if(A[0]>B[0])
    {
    cout<<"\n\n------Player 1 is the winner!-------";
    }
else if(A[0]<B[0])
    {
    cout<<"\n\n------Player 2 is the winner!-------";
    }
else
    { cout<<"\n\n------It's a tie-------";
    }


return 0;

}