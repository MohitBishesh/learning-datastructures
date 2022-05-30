#include<iostream>
using namespace std;

void input_array(int marks[],int size)
{
    for(int i=0; i<size; i++)
    {
        cin>>marks[i];
    }
}
void alt_reverse(int marks[], int size)
{
    int first = 0;
    int second = 1;
    while(second<=size)
    {
        swap(marks[first], marks[second]);
        first = first +2;
        second = second +2;
    }
}
void print_array(int marks[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<marks[i]<<"  ";
    }
}
int main()
{
    int marks[100];
    int size;
    cin>>size;
    input_array(marks,size);
    alt_reverse(marks, size);
    print_array(marks, size);
    return 0;
}

