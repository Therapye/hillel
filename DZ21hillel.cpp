#include <iostream>
using namespace std;
#include <string>

class Student {
public:

	string name;
	int grade = 0;

	static int count;
	static int totalGrade;
	Student(string NICK, int GRADE)
	{
		name = NICK;
		grade = GRADE;
		count++;
		totalGrade += grade;
	}

	static double getAverageGrade()
	{
		if (count == 0)
		{
			return 0.0;
		}
		
		return (double)totalGrade / count;
	}

};
	
	int Student::totalGrade = 0;
	int Student::count = 0;


int main() {

	Student s1("Alice", 90);
	Student s2("John", 70);
	cout << "Count of students: " << Student::count << endl;
	cout << "Average grade: " << Student::getAverageGrade() << endl;

	return 0;
}
