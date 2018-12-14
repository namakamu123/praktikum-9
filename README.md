# praktikum-9
## latihan1.cpp : program menentukan nilai minimum dan maksimum menggunakan array
1. mendeklarasikan variable array[50],n,i,max,min;
2. menginputkan nilai ke variable n "cin >> n;"
3. membuat perulangan menggunakan for dengan kondisi (i=0;i<n;i++)
    - menginputkan nilai ke variable array[i] di dalam for
4. membuat pemrosesan max = array[0]
5. membuat perulangan menggunakan for dengan kondisi (i=0;i<n;i++)
    - terdapat if statment di dalam for dengan kondisi if (max < array[i])
    - jika nilai nya true maka akan melakukan pemrosesan max = array [i]
    - membuat if yang kedua dengan kondisi else if (min > array[i])
    - jika nilai nya true maka akan melakukan pemrosesan min = array[i]
6. memcetakan nilai maksimum dan minimum ke consol
7. selesai.

berikut kode lengkapnya :
#include <iostream>
using namespace std;


int main (){   
    int array[50];
    int n, i, max, min;
    
    cout << "Masukan Jumlah array : ";
    cin >> n;
    for (i = 0; i < n; i++)  
    {
        cout << "Masukan nilai ke " << i + 1 << " : ";
        cin >> array[i];
    }

    max = array[0];
    for (i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
        else if (min > array[i])
        {
            min = array[i];
        }
    }

    cout << "\nNilai terbesar adalah : " << max << endl;
    cout << "Nilai terkecil adalah : " << min << endl;

    return 0;
}
  
berikut flowchartnya :
![latihan1](https://user-images.githubusercontent.com/44119437/50003741-58f06080-ffd7-11e8-8db6-c37d673793db.jpg)

berikut hasil screenshotnya :
![latihan1](https://user-images.githubusercontent.com/44119437/50003810-8a692c00-ffd7-11e8-9b08-e8ad25dfdbc1.png)


## latihan2.cpp : program mencari modus dengan array
1. mendeklarasikan varibale data [50],jumlah,a,n,k=1;
2. menginputkan nilai ke variable n
3. membuat perulangan menggunakan for dengan kondisi (i = 0; i < n; i++)
    - menginputkan nilai ke variable data[i] di dalam for
4. membuat perulangan menggunakan for dengan kondisi (h = 0; h < n; h++)
    - membuat perulangan menggunakan for dengan kondisi (1 = h+1; i < n; i++) 
        - membuat if statment dengan kondisi (data[h] > data[i])
        - membuat pemrosesan a = data[i]; data[i] = data[h]; data[h] = a;
    - mencetakan variable data[h]
5. membuat perulangan menggunakan for dengan kondisi (h = 0; h < n; h++)
    - membuat pemrosesan jumlah = 0;
    - membuat perulangan menggunakan for dengan kondisi (1 = 0; i < n; i++) 
        - membuat if statment dengan kondisi (data[h] > data[i])
        - membuat pemrosesan jumlah++
    - membuat if statment dengan kondisi (data[h] != data[i])
        - mecetakan nilai ke consol "cout << data[h] << " : " << jumlah <<endl;"
6. membuat perulangan menggunakan for dengan kondisi (1 = 0; i < n; i++) 
    - membuat if statment dengan kondisi (data[i]==data[i])
        - membuat pemrosesan k=data[i];
7. mencetakan modus ke consol
8. selesai

berikut kode lengkapnya :
#include <iostream>
using namespace std;

int main()
{   
    int data[50];
    int jumlah, a, n, k=1;

    cout << "Masukan Banyak Data : ";
    cin >> n;

    for (int i=0;i<n;i++){
        cout << "Data Ke-" << i+1 << " : ";
        cin >> data[i];
    }

    cout << "Data diurutkan : ";

    for(int h=0; h<n; h++)
    {
        for(int i=h+1; i<n; i++)
        {
            if(data[h] > data[i])
            {
                a = data[i];
                data[i] = data[h];
                data[h] = a;
            }
        }
        cout << data[h] << " ";
    }

    cout << "\nBanyak kemunculan data : " << endl;


    for(int h=0; h<n; h++){
        jumlah = 0;
        for(int i=0; i<n; i++){
            if(data[h] == data[i])
                jumlah++;
        }
        if(data[h] != data[h-1])
            cout << data[h] << " : " << jumlah <<endl;
    }

for(int i=0;i<n;i++){
        if(data[i]==data[i]){
            k=data[i];
        }
    }

cout << "Modusnya Adalah : " << k;

}

berikut flowchartnya :

![latihan2](https://user-images.githubusercontent.com/44119437/50005333-9d322f80-ffdc-11e8-9f78-dcacb5ca1e98.jpg)

berikut hasil screenshotnya :

![latihan2](https://user-images.githubusercontent.com/44119437/50005362-b509b380-ffdc-11e8-9357-abb38f7e0a5b.png)

## latihan3.cpp : perkalian matrik menggunakan array
1. mendelarasikan variable A[2][3],B[3][1],C[2][2],i,j,k;
2. peroses menginputkan matrik A dengan membuat perulangan menggunakan for dengan kondisi (i=0;i<2;i++)
    - membuat perulangan menggunakan for dengan kondisi (j=0;j<3;j++)
        - menginputkan nilai ke matrik A[i][j];
3. proses mencetakan matrik A membuat perulangan menggunakan for dengan kondisi (i=0;i<2;i++)
    - membuat perulangan menggunakan for dengan kondisi (j=0;j<3;j++)
        - mencekan nilai A[i][j]; ke consol
4. menginputkan matrik B dengan membuat perulangan menggunakan for dengan kondisi (i=0;i<3;i++)
    - membuat perulangan menggunakan for dengan kondisi (j=0;j<1;j++)
        - menginputkan nilai ke matrik B[i][j];
5. proses mencetakan matrik B membuat perulangan menggunakan for dengan kondisi (i=0;i<3;i++)
    - membuat perulangan menggunakan for dengan kondisi (j=0;j<1;j++)
        - mencekan nilai B[i][j]; ke consol
6. proses mennya :
cetakan hasil perkalian dengan membuat perulangan menggunakan for dengan kondisi (i=0;i<2;i++)
    - membuat perulangan menggunakan for dengan kondisi (j=0;j<1;j++)
        - mencetakan hasil perkalian matrik A dan matrik B ke consol
7. selesai

berikut flowchartnya :
![latihan3](https://user-images.githubusercontent.com/44119437/50006057-09ae2e00-ffdf-11e8-85b3-ea0e4110c7d3.jpg)

berikut hasil screenshot :
![latihan3](https://user-images.githubusercontent.com/44119437/50006128-4da13300-ffdf-11e8-9e92-ff1dbffd1a76.png)

## latihan4.cpp : program transpose matrik menggunakan array
1. mendeklarasika bariable char A[10][10]; int baris,kolom;
2. menginputkan nilai ke variable baris dan kolom
3. membuat perulangan menggunakan for dengan kondisi (int b=0;b<baris;b++)
    - membuat perulangan menggunakan for dengan kondisi (int c=0;c<kolom;c++)
        - mencetakan array A[b][c];
4. mencetakan matrik awal dengan membuat perulangan menggunakan for dengan kondisi (int b=0;b<baris;b++)
    - membuat perulangan menggunakan for dengan kondisi (int c=0;c<kolom;c++)
        - mencetakan array A[b][c];
5. mencetakan matrik transpose dengan membuat perulangan menggunakan for dengan kondisi (int b=0;b<kolom;b++)
    - membuat perulangan menggunakan for dengan kondisi (int c=0;c<baris;c++)
        - mencetakan array A[c][b];
6. selesai

berilut kode lengkapnya :
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

berikut flowchartnya :
![latihan4](https://user-images.githubusercontent.com/44119437/50007018-239d4000-ffe2-11e8-9908-b5797652a977.jpg)

berikut hasil screenshotnya :
![latihan4](https://user-images.githubusercontent.com/44119437/50007047-3d3e8780-ffe2-11e8-93af-f4a80583da6f.png)
