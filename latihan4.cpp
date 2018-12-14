#include <iostream>
 
using namespace std;

int main(){

char A[10][10];
int baris,kolom;


cout<<"Masukan Jumlah Baris : ";
cin>>baris;
cout<<"Masukan Jumlah Kolom : ";
cin>>kolom;
cout<<endl;

	for (int b=0;b<baris;b++){
		for (int c=0;c<kolom;c++){
			cout<<"Matriks ["<<b+1<<","<<c+1<<"] = ";
			cin>>A[b][c];
		}
	}

cout<<endl<<endl;
cout<<"Matriks Awal : "<<endl<<endl;
	for (int b=0;b<baris;b++){
		for (int c=0;c<kolom;c++){
			cout<<" "<<A[b][c]<<" ";
		}
		cout<<endl<<endl;
	}

cout<<"Hasil Matriks Transpose : "<<endl<<endl;
	for (int b=0;b<kolom;b++){
		for (int c=0;c<baris;c++){
			cout<<" "<<A[c][b]<<" ";
		}
		cout<<endl;
		cout<<endl;
	}


return 0;
}