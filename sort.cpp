#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
void bubbleSort(auto&data);//prototype


int main()
{
  vector<string> inputs;
  string input;

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
for(int k=0;k<inputs.size();k++)
{
        bubbleSort(inputs);
 cout<<inputs[k]<<endl;
}
    return 0;

}

void bubbleSort(auto&data)
{
for(int i=0;i<data.size()-1;i++)
{
for(int j=0;j<data.size()-1;j++)
{
if(data[j]>data[j+1])
{
swap(data[j],data[j+1]);
}
}
}
}
