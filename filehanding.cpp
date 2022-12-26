#include<iostream>
#include<fstream>
using namespace std;

int main(){
  string name;

   cout<<"Enter your name "<<endl;
   getline(cin,name);

  //  ofstream out("sample.txt");
  //  out<< "your name is "+name;

   ofstream out1;
   out1.open("sample.txt");
    out1<< "\t your name is >>" +name<< "\n"<<" this is test \n ";
    out1<<" this is test again ";
  out1.close();
   

// istekhar khan is besttt
   string content;
   ifstream in("sample.txt");
   in>>content;
while (in.eof()==0){
   getline(in,content);
   cout<<content<<"\n";
}
   in.close();

    return 0;
}
