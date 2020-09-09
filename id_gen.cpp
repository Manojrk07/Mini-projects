#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    //ofstream out;
    //out.open("details.txt");
    //out.close();

    ifstream in;
    string st[3];
    in.open("details.txt");
    int i=0;
    while(in.eof()==0){
        getline(in,st[i]);

        //cout<<st[i]<<endl;
        i++;
    }

    // cout<<"Name: "<<st[0]<<endl;
    // cout<<"company: "<<st[1]<<endl;
    // cout<<"Mobile number: "<<st[2]<<endl;

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