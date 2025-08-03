/*Application: When playing card games, players often use an approach similar to insertion sort to organize their 
 cards. They pick one card at a time and insert it into the correct position in their hand, maintaining a
  sorted sequence. Write a program that demonstrates how to organize (sort) cards in a hand using insertion sort*/

  #include<iostream>
  using namespace std;
int main()
{
  cout<<"Arya Joshi-B24CE1096";
  int i,n,j;
  cout<<"\nEnter number of cards in hand:";   //input no of cards(array size)
   cin>>n;
  int arr[n];
  cout<<"Enter sequence of cards in hand:";   //input unsorted sequence(unsorted array)
 for (i=0;i<n;i++)
   {
    cin>>arr[i];
   }
 for(i=1;i<n;i++)
 {
   j=i-1;            //assign no of index to be compared in sorted array with unsorted one
   int key=arr[i];   //store value of no to be compared in unsorted array in a temp variable

    while(j>=0 && key<arr[j])   //while loop executed if value in unsorted array is less than last value of sorted
    {
         arr[j+1]=arr[j];     
         j--;
    }
    arr[j+1]=key;        //else value of key is stored in last index of sorted array 
     }
    cout<<"\nSORTED SEQUENCE OF CARDS IS:";   //printing sorted array
     for(int k=0;k<n;k++)
    {
    cout<<arr[k]<<" ";
    }
}
