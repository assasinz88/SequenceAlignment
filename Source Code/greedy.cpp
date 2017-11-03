#include <iostream>
#include <vector>

using namespace std;

vector<char> alignedS;

void print(vector<char> a){

    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }

}

void alignS(vector<char> a, vector<char> b){

    int n;

    if(a.size()>b.size()){
        n=a.size();
    } else{
        n=b.size();
    }

    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            alignedS.push_back(a[i]);
        }
    }
}

int main(){

    string a,b;

    int matches,mismatches,indels;

    a = "TACGTGGCTA";
    b = "TCGTGGCTA";

    vector<char> sequenceA(a.begin(),a.end());
    vector<char> sequenceB(b.begin(),b.end());

    cout<<"Sequence A: ";
    print(sequenceA);
    cout<<endl;

    cout<<"Sequence B: ";
    print(sequenceB);
    cout<<endl;

    alignS(sequenceA,sequenceB);
    cout<<"Aligned: ";
    print(alignedS);
    cout<<endl;
}
