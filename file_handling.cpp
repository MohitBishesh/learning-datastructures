// To understand the concept of file handling
// input from file to program and output from program to file both

# include<iostream>
# include<fstream>
using namespace std;
void write()
{
    ofstream fout;
    fout.open("file 1.txt");
    fout<<"Writing in a file to understand the concept of file handling :"<<endl;
    fout.close();
}
void read()
{
    char ch;
    ifstream fin;
    
    if(!fin)
    {
        cout<<"file 1.txt do not exists :"<<endl;
    }
    else
    {
        fin.open("file 1.txt");
        while(!fin.eof())
        {
            cout<<ch;
            fin>>ch;  // This will not consider the spaces between the words. So to consider the spaces we use a predefined function get() as follows
          //  ch = fin.get(); // This will consider the spaces between the words.
        }
        cout<<"\nThis is end of the file"<<endl;
    }
    fin.close();
}
int main()
{
    write();
    read();
    return 0;
}