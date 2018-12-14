
#include <iostream>
 
using namespace std;
 
int main(){

  int A[2][3],B[3][1],C[2][2],i,j,k;

  cout<<"\nMasukan Nilai matrik A : \n";
  cout<<"------------------------- \n";
 
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      cout<<"Elemen ke "<<(i+1)<<","<<(j+1)<<" : ";
      cin>>A[i][j];
    }
  }
 
  cout<<"\nMatrik A : \n";;
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      cout<<A[i][j];
    }
    cout<<endl;
  }
 
  cout<<endl;
 
  cout<<"Masukan Nilai matrik B : \n";
  cout<<"------------------------ \n";
 
  for(i=0;i<3;i++){
    for(j=0;j<1;j++){
      cout<<"Elemen ke "<<(i+1)<<","<<(j+1)<<" : ";
      cin>>B[i][j];
    }
  }
 
  cout<<"\nMatrik B \n";
  for(i=0;i<3;i++){
    for(j=0;j<1;j++){
      cout<<B[i][j];
    }
    cout<<endl;
  }
 
  for (i=0;i<3;i++){
    for (j=0;j<3;j++){
      C[i][j]=0;
        for (k=0;k< 3;k++){
          C[i][j]+= A[i][k]*B[k][j];
        }
    }
  }
 
  cout<<"\nHasil Perkalian Matrik A & B : \n";
  for(i=0;i<2;i++){
    for(j=0;j<1;j++){
      cout<<C[i][j];
    }
    cout<<endl;
  }
 
  return 0;
}