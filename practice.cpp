# include<iostream>
using namespace std;
int getmax(int marks[], int size)
{
    int max_result = INT_MIN;
    for(int i=0;i<size;i++)
    {
        max_result = max( max_result,marks[i]);
    }
    return max_result;
}
int main()
{
     int marks[100];
     int size;
     cin>>size;
     for(int j=0 ; j<size; j++)
     {
         cin>>marks[j];
     }
     cout<<" the maximum result is "<< getmax(marks, size)<<endl;
}
