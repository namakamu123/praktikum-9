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