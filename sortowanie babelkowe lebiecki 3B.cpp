#include<iostream>
using namespace std;

void sortowanie_babelkowe(int tab[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 1; j < n - i; j++) 
        {
            if (tab[j - 1] > tab[j])
            {
                
                int tymczasowy = tab[j];
                tab[j] = tab[j - 1];
                tab[j - 1] = tymczasowy;
            }

        }

}

int main()
{
    int* tab, n;

    cout << "Ile liczb bedziesz chcial posortowac? ";
    cin >> n;

    tab = new int[n]; 
    for (int i = 0; i < n; i++)
        cin >> tab[i];

    sortowanie_babelkowe(tab, n);

 
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";

    cout << endl;
    system("pause");
    return 0;
}