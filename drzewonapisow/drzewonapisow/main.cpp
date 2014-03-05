#include <iostream>

using namespace std;

class cLisc
{
private:
	char* tekst;
	cLisc* rodzic;
	cLisc* dzieckoL;
	cLisc* dzieckoP;

public:
	cLisc();
	cLisc(cLisc* rodzic, char* wyraz);
	~cLisc();
};

cLisc::cLisc()
{
}

cLisc::cLisc(cLisc* rodzic, char* wyraz)
{
	dzieckoL = NULL;
	dzieckoP = NULL;
	this->rodzic = rodzic;
	tekst = new char[strlen(wyraz)+1];
	strcpy(tekst, wyraz);
}

cLisc::~cLisc()
{
	delete [] tekst;
	if (dzieckoL != NULL) delete dzieckoL;
	if (dzieckoP != NULL) delete dzieckoP;
}


int main()
{
	FILE* odczyt = fopen ("koo.txt", "r");


	char wyraz[100];
	fscanf(odczyt, "%s", wyraz);
	cout << wyraz;

	fclose(odczyt);


	cout << endl;
	system ("pause");
	return 0;
}