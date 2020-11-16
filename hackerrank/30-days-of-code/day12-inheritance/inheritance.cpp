#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
private:
    vector<int> testScores;

public:
    Student(string firstName, string lastName, int id, vector<int> s) : Person(firstName, lastName, id)
    {
        testScores = s;
    }

    char calculate()
    {
        double average = 0;

        if (testScores.size() > 0)
        {
            for (int &n : testScores)
                average += n;

            average /= testScores.size();
        }

        if (average < 40)
            return 'T';
        else if (average < 55)
            return 'D';
        else if (average < 70)
            return 'P';
        else if (average < 80)
            return 'A';
        else if (average < 90)
            return 'E';
        else
            return 'O';
    }
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}
