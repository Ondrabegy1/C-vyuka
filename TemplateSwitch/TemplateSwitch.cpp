﻿// TemplateSwitch.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

template <typename T>
void switch_items(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    {
        int a = 5, b = 3;
        std::cout << a << ", " << b << std::endl;
        switch_items(&a, &b);
        std::cout << a << ", " << b << std::endl;
    }
    {
        char a = 'a', b = 'b';
        std::cout << a << ", " << b << std::endl;
        switch_items(&a, &b);
        std::cout << a << ", " << b << std::endl;
    }
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
