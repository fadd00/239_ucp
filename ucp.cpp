#include <iostream>
using namespace std;

// 1. cara kerjanya dengan cara melakukan scan dan compare array lalu mengurutkan data tersebut
// 2. pertama dengan inisiasi jarak nya, jaraknya diisi dengan angka lebih besar dari 1. lalu membagi array kedalam subarray. lalu mengurutkan setiap sub array dengan insertion sort. lalu mngurangi jarak.
// 3. insertion sort, karena insertion sort bekerja dengan memasukan setiap array kedalam urutannya yang benar tergantung dengan data sebelummnya.

int dika[39];
int i, j, n;

void input()
{
    while (true)
    {
        cout << "masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 39)
            break;
        else
        {
            cout << "\nArray dapat mempunyai maksimal 39 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> dika[i];
    }
}
void ucp()
{ 
    for (j = 0; j < n - 1; j++)
    {                      
        int min_index = j; 
        for (i = j + 1; i <= n - 1; i++)
        { 
            if (dika[i] < dika[min_index])
            {                 
                min_index = i; 
            }
        }
        swap(dika[j], dika[min_index]);
    }
}
void display()
{
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << dika[j] << endl;
    }
    cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
}
int main()
{
    input();
    ucp();
    display();
    system("pause");
}