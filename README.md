# praktikum3

##latihan-1 : mencari bilangan terbesar dari sejumlah bilangan
1. mendeklarasikan variable (int) i=0, max=0, a dan x
2. memasukan jumlah bilangan yang di inginkan 
3. memasukan bilangan ke dalam sejumlah variable input dengan nilai tertentu menggunakan "for (i;i<a;i++)"
4. mencari nilai terbesar dari sejumlah variable menggunakan "if (x>max) max=x"
5. mencetak nilai terbesar dari sejumlah variable yang telah di masukan ke dalam variable input tersebut ke layar

berikut kode lengkapnya :
#include <iostream>

int main()
{
	int i= 0;
	int max = 0;

	int a,x;
	std::cout << "masukan jumlah bilangan : ";

	std::cin >> a;

	for (i;i<a;i++)
	{
		std::cout << "masukan bilangan ke - " << i+1 << ": " ;
		std::cin >> x;
		if (x>max)
			max=x;
	}

	std::cout << "bilangan terbesarnya adalah : " << max;
	return 0;
}

##latihan-2 : mengurutkan bingan dari nilai yang terkecil sampai nilai terbesar
1. mendeklarasikan variable a, b dan c
2. memasukan nilai kedalam variable input (a, b dan c) dengan nilai tertentu
3. mencari urutan nilai terkecil sampai nilai terbesar dari sejumlah variable menggunakan "if dan else"
4. mencetak nilai terkecil sampai nilai terbesar secara terurut dari sejumlah variable yang telah di masukan ke dalam variable input tersebut ke layar.

berikut kode lengkapnya :
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
		cout << "urutan dari nilai yang terkecil sampai terbesarnya adalah : " << a << " "<< b << " " <<c ;
		else{
			if (a<c)
				cout << "urutan dari nilai yang terkecil sampai terbesarnya adalah : "<< a << " "<< c << " " <<b ;
			else
				cout << "urutan dari nilai yang terkecil sampai terbesarnya adalah : " << c << " "<< a << " " <<b ;
		}
	}

	else
	{
		if (a<c)
			cout << "urutan dari nilai yang terkecil sampai terbesarnya adalah : " << b << " "<< a << " " <<c ;
		else
		{
			if(b<c)
			cout << "urutan dari nilai yang terkecil sampai terbesarnya adalah : " << b << " "<< c << " " <<a;
			else
			cout << "urutan dari nilai yang terkecil sampai terbesarnya adalah : " << c << " "<< b << " " <<a ;
		}
	}

	
	return 0;
}

##latihan-3 : mencari nilai tengah dari 3 bilangan
1. mendeklarasikan variable a, b dan c
2. memasukan nilai kedalam variable input (a, b dan c) dengan nilai tertentu
3. mencari nilai tengah dari sejumlah variable yang di inputkan menggunakan "if dan else"
4. mencetak nilai tengah dari sejumlah variable yang telah di masukan ke dalam variable input tersebut ke layar.

berikut code lengkapnya :
#include <iostream>

using namespace std;
int main()
{
	int a,b,c;

	cout << " masukan nilai pertama : ";
	cin >> a ;
	cout << " masukan nilai kedua : ";
	cin >> b ;
	cout << " masukan nilai ketiga : ";
	cin >> c ; 


	if (a<b){
		if (b<c)
		cout << "nilai tengahnya adalah : "<< b ;
		else{
			if (a<c)
				cout << "nilai tengahnya adalah : "<<  c ;
			else
				cout << "nilai tengahnya adalah : "<< a ;
		}
	}

	else
	{
		if (a<c)
			cout << "nilai tengahnya adalah : "<< a ;
		else
		{
			if(b<c)
			cout << "nilai tengahnya adalah : "<< c ;
			else
			cout << "nilai tengahnya adalah : "<< b ;
		}
	}

	
	return 0;
