#include <iostream>
#include <vector>

using namespace std;


void print2D(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

void lcs(vector<int> a,vector<int> b,vector<int> c){ //vector c untuk menampung subsequence yang common

/*
    if(a.size()!=b.size()){
        cout<<"Size is not same"<<endl;
        return;
    }
*/

    for(int i=0;i<a.size();i++){ //looping sebanyak panjang vektor pertama

        for(int j=0;j<b.size();j++){ //looping sebanyak panjang vektor kedua
            if(a[i]!=b[j]){ //jika elemen vektor pertama tidak sama dengan elemen vektor kedua
                b.erase(b.begin()+j); //menghapus elemen vektor kedua yg tidak sama dgn elemen vektor kedua
                j=0; //reset iterasi kembali ke 0 agar semua elemen tercover
            } else if(a[i]==b[j]){ //jika mendapat elemen vektor yg sama
                c.push_back(a[i]); //masukkan ke dalam vektor c
                break; //skip iterasi ke iterasi selanjutnya
            }
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
