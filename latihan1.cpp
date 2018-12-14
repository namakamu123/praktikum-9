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
  
