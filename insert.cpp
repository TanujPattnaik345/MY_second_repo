#include<bits/stdc++.h>
using namespace std;

void sort(int *arr,int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
          {
              if(arr[j]>arr[j+1]){
                  int temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
              }
          }
}


int main()
{
    int arr1[5]={1,5,6,0,0};
    int arr2[2]={4,3};
    int i=0;
    int j=0;
      sort(arr2,2);
    while( i<5 && j<2 )
    {
      if((arr1[i]<=arr2[j]) && (arr1[i]!=0))
       {   
          i++;
         } 
      else if(arr1[i]>=arr2[j]&&(arr1[i]!=0))
          swap(arr1[i],arr2[j]);
      
      else{

          arr1[i++]=arr2[j++];
           }
      

     }
     
      

      cout<<"the final array is ="<<'\n';
      for(int i=0;i<5;i++)
      {
          cout<<arr1[i]<<"  ";
      }



    return 0;
}