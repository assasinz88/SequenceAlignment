#include <iostream>
#include <vector>

using namespace std;


void print2D(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

void lcs(vector<int> a,vector<int> b,vector<int> c){

/*
    if(a.size()!=b.size()){
        cout<<"Size is not same"<<endl;
        return;
    }
*/
/*
    for(int i=0;i<a.size();i++){

        for(int j=0;j<b.size();j++){
            if(a[i]!=b[j]){

            }
        }
    }
*/

    for(int i=0;i<a.size();i++){ //looping sebanyak ukuran vektor a atau b. Disini kami mengambil vektor a
        if(a[i]==b[i]){ //jika index vektor pertama dan kedua sama dan nilainya sama
            c.push_back(a[i]); //masukkan ke dalam vektor c
        }
    }
    print2D(c);

}

int main(){

    int n,m,x;

    cin>>n>>m;

    vector<int>a;vector<int>b;vector<int>c;

    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }

    for(int j=0;j<m;j++){

        cin>>x;
        b.push_back(x);
    }
    lcs(a,b,c);

}
