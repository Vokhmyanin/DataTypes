#include<iostream>
using namespace std;
#define LOGICAL_TYPES 
void main()
{
	setlocale(LC_ALL, "Russian");// Эта строка нужна для вывода кириллицы в консоль
#if defined LOGICAL_TYPES
	cout << "DataTypes" << endl ;
	cout << true << endl;
	cout << false << endl;
#endif
	cout << "INT занимает " << sizeof(int) << "байт памяти"<< endl;
	cout << "Принимает значения" <<INT_MIN << " ... " << INT_MAX << endl;
	cout << "UINT принимает значения"   << 0 << "..." <<UINT_MAX << endl;
	cout << "SHORT занимает"<< sizeof(short) << "байт памяти"<< endl;
	cout << "Принимает значения"<< SHRT_MIN << " ... " << SHRT_MAX << endl;
	cout << "Unsigned short принимает значения " << 0 << "..." << USHRT_MAX << endl;
	cout << "LONG занимает " << sizeof(long) << "байт памяти" << endl;
	cout << "LONG принимает значения " << LONG_MIN << " ... " << LONG_MAX << endl;
	cout << ULONG_MAX << endl;
	cout << "LONG LONG занимает " << sizeof(long long) << "байт памяти" << endl;
	cout << "LONG LONG принимает значения  " << LLONG_MIN << "..." << LLONG_MAX << endl;
	cout << ULLONG_MAX << endl;

	
}