/*

1) Make base functions
2) do the meat of the of the fucntions
3) Send over Base to james
4) recieve base from James and Create a derived class from james base
5) test both functions and run
6) sumbit


Default constructor
Constructor copy
Deconstructor
Getters and Setters
Overloaded = copy
Overloaded = move
*/


#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Person
{
private:

    string firstName;
    string lastName;
    int age=0;
    char gender;

public:
    // Default constructor
    Person() {}

    // Parameterized constructor
    Person(string& firstName, string& lastName, int age, char& gender)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
        this->gender = gender;
    }

    // Copy constructor {
    Person(const Person& copy)
    {
        this->firstName = copy.firstName;
        this->lastName = copy.lastName;
        this->age = copy.age;
        this->gender = copy.gender;
    }

    // Move constructor
    Person(Person&& move) noexcept
    {
        Person(Move);

        // Call move destructor
        move.~Person();
    }
    
    // Destructor
    ~Person()
    {
   
    }


    // Getters 
    string getFirstName() 
    {
        return this->firstName; 
    }
    string getLastName() 
    {
        return this->lastName; 
    }
    int getAge() 
    {
        return this->age;
    }
    char getGender()
    {
        return this->gender; 
    }

    // Setters
    void setFirstName(string firstName) 
    {
        this->firstName = firstName;
    }

    void setLastName(string lastName) 
    {
        this->lastName = lastName;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setGender(char gender)
    {
        this->gender = gender;
    }

    // Overload copy operator
    Person& operator=(Person& copy)  
    {
        this->firstName = copy.firstName;
        this->lastName = copy.lastName;
        this->age = copy.age;
        this->gender = copy.gender;

        return *this;
    }


    // Overload move operator
    Person& operator=(Person&& move) noexcept
    {
  
        *this = move;
        // Delete other
        move.~Person();
        return *this;
    }

};

int main()
{
    Person p1;
 
    p1.setFirstName("Freddy");
    p1.setLastName("Hernandez");
    p1.setAge(18);
    p1.setGender('M');



    cout << "First Name: "<< p1.getFirstName() << endl;
    cout << "Last Name: "<< p1.getLastName() << endl;
    cout << "Age: "<< p1.getAge() << endl;
    cout << "Gender: "<< p1.getGender() << endl;



}
