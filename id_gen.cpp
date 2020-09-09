#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    ifstream in;
    string st[3];
    in.open("details.txt");
    int i=0;
    while(in.eof()==0){
        getline(in,st[i]);
        i++;
    }


    for(int i=0;i<3;i++){
        if(i==0){
            cout<<"Name: "<<st[i]<<endl;

        }
        else if(i==1){
            cout<<"company: "<<st[i]<<endl;

        }
        else{
            cout<<"Mobile number: "<<st[2]<<endl;   

        }
    }
    in.close();
    
    return 0;
}
