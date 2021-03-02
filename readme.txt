����� ������� ����������� ���������� �������� ������:

class Person
{
private:
	static const LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person() {lname = ""; fname[0] = '\0';}
	Person(const string & ln, const char * fn = "Heyyou");
	void Show() const; // ����� ��� �������
	void FormalShow() const // ������: �������, ���
}
(� �� ������������ ������ ������ � ���������� ������, ��� ��� �� ������� ��������
���������� ���� ���� ����). �������� ���������, ������� �������� ���������� �� ���� �������������� ����
��� ���� ��� �� ������������ �������. � ���������, ������������ �����, ������ ��������������
������ ��� ��������� ������������� (��� ����������, � ����� ����������, � ����� �����������) � ����
������� �����������. ���� �������� ������ ���������� ���� ������������� � �������:

Person one; // default constructor
Person two("Smythecraft"); // with one default argument 
Person three("Dimwiddy", "Sam"); // without default argument

one.Show();
cout << endl;
one.FormalShow();
// and e.c. for two and three objects