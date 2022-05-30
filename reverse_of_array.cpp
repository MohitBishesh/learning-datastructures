# include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int marks[n];
    for(int i=0; i<n;i++)
    {
        cin>>marks[i];
    }
    for(int j = 0; j<n/2; j++)
    {
        swap(marks[j], marks[n-j-1]);
    }
     for(int i=0; i<n;i++)
    {
        cout<<marks[i];
    }

}