#include <iostream>

using namespace std;
int main()
{
	int a,b,c;

	cout << "masukan nilai pertama : ";
	cin >> a ;
	cout << "masukan nilai kedua : ";
	cin >> b ;
	cout << "masukan nilai ketiga : ";
	cin >> c ;



	if (a<b){
		if (b<c)
		cout << "urutan dari nilai yang terkecil sampai terbesarnya adalah : " 
		<< a << " "<< b << " " <<c ;
		else{
			if (a<c)
				cout << "urutan dari nilai yang terkecil sampai terbesarnya adalah : "
				<< a << " "<< c << " " <<b ;
			else
				cout << "urutan dari nilai yang terkecil sampai terbesarnya adalah : " 
				<< c << " "<< a << " " <<b ;
		}
	}

	else
	{
		if (a<c)
			cout << "urutan dari nilai yang terkecil sampai terbesarnya adalah : " 
			<< b << " "<< a << " " <<c ;
		else
		{
			if(b<c)
			cout << "urutan dari nilai yang terkecil sampai terbesarnya adalah : " 
			<< b << " "<< c << " " <<a;
			else
			cout << "urutan dari nilai yang terkecil sampai terbesarnya adalah : " 
			<< c << " "<< b << " " <<a ;
		}
	}

	
	return 0;
}