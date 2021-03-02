Пусть имеется определение следующего простого класса:

class Person
{
private:
	static const LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person() {lname = ""; fname[0] = '\0';}
	Person(const string & ln, const char * fn = "Heyyou");
	void Show() const; // Форма имя фамилия
	void FormalShow() const // Формат: фамилия, имя
}
(В нём используется объект стринг и символьный массив, так что вы сможете сравнить
применение этих двух форм). Напишите программу, которая дополнит реализацию за счёт предоставления кода
для пока еще не определенных методов. В программе, использующей класс, должны присутствовать
вызовы трёз возможных конструкторов (без аргументов, с одним аргументом, с двумя аргументами) и двух
методов отображения. Ниже приведен пример применения этих конструкторов и методов:

Person one; // default constructor
Person two("Smythecraft"); // with one default argument 
Person three("Dimwiddy", "Sam"); // without default argument

one.Show();
cout << endl;
one.FormalShow();
// and e.c. for two and three objects