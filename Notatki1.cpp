#include <iostream>

using namespace std;
//cout << "Hello world!" << endl;
//
//// typ nazwa = wartosc;
//int liczbabezwartosic;
//int liczba = 5;
//int druga = liczba; \
//
//float przecinek = 4.2f;
//double przecinek2 = -4.2;
//
//unsigned char x = 6;
//
//char litera = 'D';
//bool prawda = true;
//
//
//// + - / * % 
//int a = 5;
//int b = 3;
//
//cout << "a+b = " << a + b << endl;
//cout << "a-b = " << a - b << endl;
//cout << "a*b = " << a * b << endl;
//cout << "a/b = " << (float)a / b << endl;
//cout << "a%b = " << a % b << endl;
//

//int wiek;
//float wzrost;
//float waga;
//cout << "Podaj ile masz wzrostu: ";
//cin >> wzrost;
//cout << "Podaj ile masz lat: ";
//cin >> wiek;
//cout << "Podaj wage: ";
//cin >> waga;
//cout << "Masz " << wzrost << " cm wzrostu i " << wiek << " lat!\n";
//std::cout << "A twoje BMI to " << waga / (wzrost * wzrost);
//
////Wzor na BMI = masa / (wzrost*wzrost)

int main()
{
	
	//int wiek;
	//cout << "Podaj swoj wiek: ";
	//cin >> wiek;
	//float money;
	//cout << "Podaj ile masz kasy: ";
	//cin >> money;

	//if (wiek >= 18   &&   money >= 20.f)
	//{
	//	cout << "OK, mozesz wejsc na film\n";
	//}
	//else if (wiek < 18)
	//{
	//	cout << "Nie mozesz wejsc na film, bo jestes za mlody\n";
	//}
	//else if (money < 20.f)
	//{
	//	cout << "Nie mozesz wejsc na film, bo Cie nie stac\n";
	//}
	//else
	//{
	//	cout << "Niestety, jestes za mlody i Cie nie stac!\n";
	//}



	//Program pyta o wiek
	//Nastepnie mowi czy jestesmy pelnoletni, czy nie
	// oraz czy mozemy zostac prezydentem ( 35 )


	/*int wiek;
	cout << "Ile masz lat: ";
	cin >> wiek;
	if (wiek >= 18 && wiek < 35)
	{
		cout << "Jestes pelnoletni, ale nie bedziesz prezydentem";
	}
	else if (wiek >= 35)
	{
		cout << "Jestes pelnoletni i mozesz byc prezydentem";
	}
	else
	{
		cout << "Jestes niepelnoletni";
	}*/



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
			if (i == 0 || i == size - 1 || j == 0 || j == size - 1) cout << '*';
			else cout << " ";
		}
		cout << endl;
	}
	








	return 69;
}