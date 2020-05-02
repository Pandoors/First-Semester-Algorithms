//
// Created by Bartosz Kruczek on 26/11/2019.
//

#include <cstdio>
#include <iostream>

using namespace std;

void probuj_tak(int values, int indexes, int pos, int chosen, int *minimal_chosen_value, int *minimal_chosen, int arr[],
                int array_length) {
    if (pos == array_length) // Jeśli doszliśmy do końca tablicy
    {
        if (values == indexes && chosen > 0 && values >
                                               0) // a nasz podzbiór spełnia warunki zadania (values > 0, bo zabezpieczamy się przed cwanym wybraniem tylko nicnieznaczącego zera)
        {
            printf("Match for values = indexes = %d, %d chosen\n", values, chosen);
            if (*minimal_chosen > chosen) // oraz wybraliśmy mniej liczb niż kiedykolwiek
            {
                *minimal_chosen = chosen; // zapisujemy ile liczb udało nam się wybrać
                *minimal_chosen_value = values; // zapisujemy sumę podzbioru
            }
        }
        return;
    } else {
        probuj_tak(values, indexes, pos + 1, chosen, minimal_chosen_value, minimal_chosen, arr,
                   array_length); // Sprawdzam co by było, gdybym nie brał aktualnego elementu
        probuj_tak(values + (arr[pos]), indexes + pos, pos + 1, chosen + 1, minimal_chosen_value, minimal_chosen, arr,
                   array_length); // Sprawdzam co by było, gdybym wziął aktualny element
    }
}

int minimal_chosen(int arr[], int array_length) {
    int minimal_chosen = array_length + 1; // Na pewno więcej niż długość tablicy nie wybierzemy
    int minimal_chosen_value = 0; // Byle co, to używamy jako zmienną do zwracania
    probuj_tak(0, 0, 0, 0, &minimal_chosen_value, &minimal_chosen, arr, array_length);
    return minimal_chosen_value; // Zwracamy co funkcja zwróciła
}

int main() {
    int arr[] = {0, 7, 3, 5, 11, 2};
    int array_length = 6;

    printf("%d\n", minimal_chosen(arr, array_length));

    return 0;
}



//bool zadanie_6_cwicz_7(bool t[], int rozmiar, int aktualny_element, int aktualna_dlugosc,bool czy_poprzedni) //<---- (t,rozmiar,rozmiar-1,1,false)
//{
//    if(aktualny_element == -1)
//        return czy_poprzedni;
//
//    if(aktualna_dlugosc > 30)
//        return false;
//
//    int liczba=0;
//    for(int i=aktualny_element+aktualna_dlugosc-1, mnoznik=1 ; i>=aktualny_element ; i--, mnoznik*=2)
//        liczba+=t[i]*mnoznik;
//
//    cout<<aktualny_element<<" "<<aktualna_dlugosc<<" "<<liczba<<" "<<czy_pierwsza_cwicz_7(liczba)<<"    "<<czy_poprzedni<<endl;
//
//    if(aktualna_dlugosc>=2 and liczba==0 and !czy_poprzedni) // <--------------------------------------------------------jak wiecej niz 2 zera na poczatku to automatycznie false
//        return false;
//
//    czy_poprzedni=czy_pierwsza_cwicz_7(liczba);
//
//    if(czy_poprzedni)
//    {
//        return zadanie_6_cwicz_7(t,rozmiar,aktualny_element-1,1, czy_poprzedni) or
//               zadanie_6_cwicz_7(t,rozmiar,aktualny_element-1,aktualna_dlugosc+1, czy_poprzedni);
//    } else {
//        return zadanie_6_cwicz_7(t,rozmiar,aktualny_element-1,aktualna_dlugosc+1, czy_poprzedni);
//    }
//}