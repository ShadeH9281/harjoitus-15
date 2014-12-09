//Made by Toni Pajukanta,Ryhmä IIO14S1
#include <iostream>
using namespace std;
int main()
{
	/*
	char jono[17+1];
	char jono2[17 + 1];
	cout << "Anna 17 merkkiä pitka jono: ";
	cin >> jono;
	cout << jono << endl << endl;
	
	// a kohta
	int ind;
	for (ind = 16; ind >= 0; ind--)
		cout << jono[ind];

	//b kohta
	int i, j;
	cout << endl;
	for (i = 0, j = 16; j >= 0; i++, j--)
	jono2[i] = jono[j];
	
	
	jono2[i] = '\0';
	cout << jono2;
	cout << endl;
	*/

	//c kohta
	char jono3[100 + 1];
	char jono4[100 + 1];
	int ind, mpituus, j, i;
	cout << "Anna max 100 merkkia: ";
	cin.getline(jono3, 101);
	cout << endl;
	for (ind = 0; jono3[ind] != 0; ind++);
	cout << "Pituus: " << ind << endl;
	mpituus = ind;
	for (i = 0, j = mpituus-1; j >= 0; i++, j--)
		jono4[i] = jono3[j];
		
	jono4[i] = '\0';
	cout << jono4 << endl;
	if (strcmp(jono3, jono4) == 0)
		cout << "Palindromi" << endl;
	else
		cout << "Ei palindromia" << endl;

	
	

}