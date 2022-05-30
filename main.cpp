# include<iostream>
# include<fstream>
using namespace std;
void write()
{
    ofstream fout;
    fout.open("main.txt",ios::out);
    fout<<"I am in Main function"<<endl;
    fout.close();
}
void read()
{
    char ch;
    ifstream fin;
    fin.open("main.txt", ios::in);
    if(!fin)
    {
        cout<<"main.txt file not found : "<<endl;
    }
    else
    {
        fin.seekg(5);
        while(!fin.eof())
        {
             cout<<fin.tellg();
             ch=fin.get();
             cout<<" - "<<ch<<endl;
        }
    }
    fin.close();
}
int main()
{
    write();
    read();
}
