/*
	Minimum aby program się skompilował
*/

//Deklaracja funkcji o nazwie main zwracającej int
// { } - definiują nam blok kodu, ważne aby kod który piszemy znajdował się pomiędzy nimi
int main()
{

	//Skoro coś zwracamy, to musi się w funkcji znaleźć return, a że zwracamy int to możemy zwrócic 0
	return 0;
}


/*
	Hello world, pisanie po konsoli - cout
*/
#include <iostream> //Dołączenie do naszego kodu biblioteki "input output stream"
//Dzięki niej możemy użyć cout, cin

using namespace std; //Dzięki tej linijce nie musimy pisać std:: przed każdym cin, cout ( np std::cout << "320";)
int main()
{
	// cout - Console Out
	// << - Każdy element jaki chcemy wyprintować, nalezy oddzielić tymi symbolami np "Witaj " << zmienna_imie << "!\n"
	// endl zamiennie z '\n' - Nowa linia
	cout << "Hello world!" << endl;
	return 0;
}






/*
	Deklaracja zmiennych
*/
#include <iostream>
using namespace std;
int main()
{
	// Więcej znajdziesz w images/Types.webp
	// typ nazwa = wartosc;
	int liczbabezwartosic;
	int liczba = 5;
	int druga = liczba; 

	float przecinek = 4.2f; // dla floata, dopisujemy 'f' na koncu aby kompilator nie traktował tego jako double
	double przecinek2 = -4.2;

	unsigned char x = 6;

	char litera = 'D';
	bool prawda = true;

	cout<<"Wartość zmiennej liczbabezwartosci" << liczbabezwartosic<<'\n';
	cout<<"Wartość zmiennej liczba" << liczba<<'\n';
	cout<<"Wartość zmiennej druga" << druga<<'\n';
	cout<<"Wartość zmiennej przecinek" << przecinek<<'\n';
	cout<<"Wartość zmiennej przecinek2" << przecinek2<<'\n';
	cout<<"Wartość zmiennej x" << x<<'\n';
	cout<<"Wartość zmiennej litera" << litera<<'\n';
	cout<<"Wartość zmiennej prawda" << prawda<<'\n';
	return 0;
}




/*
	Operacje matematyczne na liczbach i zmiennych
*/
#include <iostream>
using namespace std;
int main()
{
	//Operatory matematyczne 
	//Dodawanie +
	//Odejmowanie -
	//Mnozenie *
	//Dzielenie /
	//Modulo %

	int a = 5;
	int b = 3;
	
	cout << "a+b = " << a + b << endl;
	cout << "a-b = " << a - b << endl;
	cout << "a*b = " << a * b << endl;
	cout << "a/b = " << (float)a / b << endl; // (float) przed 'a' oznacza, że zmieniamy lokalnie typ zmiennej - Rzutowanie
	// W tym przypadku rzutujemy int na float, aby dostać poprawny wynik dzielenia, bez uciętej części dziesiętnej
	cout << "a%b = " << a % b << endl;

	return 0;
}





/*
	Interakcja z użytkownikiem - cin
*/
#include <iostream>
using namespace std;
int main()
{
	int wiek;
	float wzrost;
	float waga;
	cout << "Podaj ile masz wzrostu: ";
	//Pobieranie inputu od użytkownika
	// cin >> zmienna
	// cin - Console in
	// >> - Każdy element jaki chcemy wczytać należy oddzielić tymi znakami np. cin >> liczba1 >> liczba2
	cin >> wzrost;
	cout << "Podaj ile masz lat: ";
	cin >> wiek;
	cout << "Podaj wage: ";
	cin >> waga;
	cout << "Masz " << wzrost << " cm wzrostu i " << wiek << " lat!\n";
	
	//Wzor na BMI = masa / (wzrost*wzrost)
	float bmi = waga / (wzrost * wzrost); //Wynik działania przypisuje do zmiennej bmi
	cout << "A twoje BMI to " << bmi;
	
	return 0;
}





/*
	Podejmowanie decyzji w programie - instrukcja warunkowa ( if )
*/
#include <iostream>
using namespace std;
int main()
{
	//Program pobierający dwie liczby od uzytkownika ( np Kasa w kinie )
	int wiek;
	cout << "Podaj swoj wiek: ";
	cin >> wiek;
	float money;
	cout << "Podaj ile masz kasy: ";
	cin >> money;


	/* Jeżeli w środku będzie tylko jedna linijka, można nie pisać { } 
	if(warunek)
	{
		kod
		kod
		kod
	}
	else if(warunek) //Opcjonalnie
	{
		kod
		kod
		kod
	}
	else // Opcjonalnie
	{
		kod
		kod
		kod
	}
	warunek - wartość logiczna prawda/fałsz
	Wartością taką może być to zmienna bool oraz wynik jakiejś operacji z wykorzystaniem operatorów logicznych
	< - mniejszy np zmienna < 20
	<= - mniejszy równy np zmienna <= 20
	> - większy np zmienna > 20
	>= - większy równy np zmienna >= 20
	== - równy np zmienna == 20 ( nie mylić z przypipsaniem '=')
	!= - różny od np liczba != 20

	Możemy sprawdzać kilka warunków na raz, łącząc je odpowiednim operatorem
	&& - logiczne i ( używamy gdy chcemy aby wszystkie warunki zostały spełnione )
	|| - logiczne lub (używmy gdy wystarczy nam zeby jeden ze wszystkich warunków był spełniony)
	Po więcej zobacz images/logical_AND_OR.jpg
	*/

	//Jeżeli w zmiennej wiek, jest liczba wieksza lub równa 18 oraz w money jest liczba wieksza rowna 20
	if (wiek >= 18   &&   money >= 20.f)
	{
		//To wszystko ok, mozemy wejsc na film
		cout << "OK, mozesz wejsc na film\n";
	}
	//Jeżeli nie mamy 18 lat ale wystarczajaco pieniedzy
	else if (wiek < 18 && money >= 20.f)
	{
		//Piszemy odpowiedni komunikat
		cout << "Nie mozesz wejsc na film, bo jestes za mlody\n";
	}
	//Jeżeli wiek się zgadza, ale funduszy brak
	else if (money < 20.f && wiek >= 18)
	{
		//Odpowiedni komunikat
		cout << "Nie mozesz wejsc na film, bo Cie nie stac\n";
	}
	//Jeżeli wszystkie powyzsze warunki zawiodły
	else
	{
		//Odpowiedni komunikat
		cout << "Niestety, jestes za mlody i Cie nie stac!\n";
	}

	
	return 0;
}




/*
	Pisanie po ekranie z wykorzystaniem petli
*/
#include <iostream>
using namespace std;
int main()
{
	/*
	W C++ mamy 3(4*) typy pętli. Pętle służą do powtarzania kawałka kodu określoną liczbę razy.
	Najczęściej wykorzystuje się je do pracy z tablicami

	For
	W Przypadku tej pętli, ilość powtórzeń defuniujem z wykorzystaniem zmiennej w bloku inicjalizacji
	Przed każdym wykonaniem się petli sprawdzany jest warunek, a po każdym wykonaniu pętli modyfikowana jest 
	zmienna z bloku inicjalizacji
	for( blok_inicjalizacji ; warunek ; modyfukacja zmiennej z bloku inicjalizacji)

	Przykładowa pętla wykonująca się 10 razy
	Zmienna i będzie przyjmować kolejno wartości 0,1,2,3,4,5,6,7,8,9 - 10 liczb w sumie
	for( int i=0;i<10;++i)
	{
		kod
		kod
	}

	While
	Ta pętla wykonuje się dopóki warunek jest prawdziwy. Częste wykorzystanie tej pętli to wpisanie w warunek true,
	co daje nam nieskończoną pętle

	while ( warunek )
	{
		kod
		kod
	}

	Do While
	Od pętli while różni się tylko tym, że niezależnie od tego czy warunek jest prawdziwy czy nie, wykona się 1 raz,
	ponieważ najpierw wykonuje się kod w pętli a potem sprawdzany jest warunek

	do
	{

	}while(warunek);

	Każdy rodzaj pętli możemy przerwać w dowolnym momencie używając break np

	while(true)
	{
		int liczba;
		cin >> liczba;
		cout<<"Podales "<<liczba;
		if(liczba == 0) break;
	}

	*Czwarty rodzaj pętli poznamy, gdy bedziemy mówić o kontenerach takich jak std::vector czy std::array
	
	
	*/
	//Program rysujący kwadrat z gwiazdek
	// *****
	// *****
	// *****
	// *****
	// *****
	int size = 5;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	
	return 69;
}