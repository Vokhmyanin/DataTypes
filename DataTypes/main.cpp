#include<iostream>
using namespace std;
#define LOGICAL_TYPES 
void main()
{
	setlocale(LC_ALL, "Russian");// ��� ������ ����� ��� ������ ��������� � �������
#if defined LOGICAL_TYPES
	cout << "DataTypes" << endl ;
	cout << true << endl;
	cout << false << endl;
#endif
	cout << "INT �������� " << sizeof(int) << "���� ������"<< endl;
	cout << "��������� ��������" <<INT_MIN << " ... " << INT_MAX << endl;
	cout << "UINT ��������� ��������"   << 0 << "..." <<UINT_MAX << endl;
	cout << "SHORT ��������"<< sizeof(short) << "���� ������"<< endl;
	cout << "��������� ��������"<< SHRT_MIN << " ... " << SHRT_MAX << endl;
	cout << "Unsigned short ��������� �������� " << 0 << "..." << USHRT_MAX << endl;
	cout << "LONG �������� " << sizeof(long) << "���� ������" << endl;
	cout << "LONG ��������� �������� " << LONG_MIN << " ... " << LONG_MAX << endl;
	cout << ULONG_MAX << endl;
	cout << "LONG LONG �������� " << sizeof(long long) << "���� ������" << endl;
	cout << "LONG LONG ��������� ��������  " << LLONG_MIN << "..." << LLONG_MAX << endl;
	cout << ULLONG_MAX << endl;

	
}