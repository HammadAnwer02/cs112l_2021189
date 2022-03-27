#include <iostream>
#include <string>

using namespace std;


class Coordinator; // Prototype Class
class Person {

    // private attributes
    string uniName; 
    string competitionName;
    public:

    /**
     * @brief Construct a new Person object
     * 
     */
    Person () {
        uniName = "";
        competitionName = "";
    }

    /**
     * @brief Setter function for the Person Class attributes
     * 
     * @param uName Stores the name of the university  
     * @param compName  Stores the name of the competition
     */
    void setter (string uName, string compName) {
        uniName = uName;
        competitionName = compName;
    }

    /**
     * @brief Destroy the Person object
     * 
     */
    ~Person() {
        
    }

    /**
     * @brief Declare a friend function to take input a friend function
     * @brief Declare a friend class Coordinator
     * 
     * @return Person 
     */
    friend Person inputPerson();
    friend class Coordinator;
};



/**
 * @brief Break the string to strings seperated by the deliminator passed as a parameter
 * 
 * @param inp the text which will be broken into parts
 * @param delim the deliminator with which the text is to be broken down
 * @return The extracted string from the original text
 */

string token (string inp, char delim) {
    string temp = ""; // A temp string to store the extracted string
    static int i = 0; // Static int to keep track of the character index we are at in the text
    for (int j = 0; inp[i] != delim && inp[i] != '\0' ; i++, j++) 
    {
        temp.push_back(inp[i]); // Add the extracted character from the input text to end of the temp string
    }
    if ( inp[i] == '\0') // If we have reached the end of the string then reset the character index                     //
    {                    // For tokenizing the next string
        i = 0;
    }
    else 
    {
        i++;
    }
    return temp; // Return the extracted string
}


/**
 * @brief Take input of an instance for the Person class
 * 
 * 
 * @return An instance of the Person class
 */
Person inputPerson() {
    Person p1; // The instance of the class Person
    string text; // The one line input from the user
    string uName = "", compName = ""; 
    cout << "Enter the competition and University Name: ";
    getline(cin, text); // Take input from the user
    compName = token(text, ' '); // Get the first part of the string from user's input 
    uName = token(text, ' '); // Get second part of the string from the user's input 
    // Set the value of extracted string to the class attributes
    p1.uniName = uName; 
    p1.competitionName = compName;
    return p1; // Return the instance of the Person class

}



class Coordinator {
        Person p1;
        Person p2;
    public:
        /**
         * @brief Construct a new Coordinator object
         * 
         */
        Coordinator () { 
        }
    
        /**
         * @brief Set the Persons object
         * 
         */
        void setPersons() {
            p1 = inputPerson();
            p2 = inputPerson();
        }

        /**
         * @brief Check if the two people are from the same Uni 
         * 
         */
        void checkUni () 
        {
            // Store the length of both strings 
            int p1cnl = p1.competitionName.length();
            int p2cnl = p2.competitionName.length();
            
            if(p1.uniName.compare(p2.uniName) == 0) // A lot same room if same Uni
            {
                // The room number is allocated based on which competition name has longer text
                cout << "Message from the coordinator Person1 and Person2 are room mates, and the room" << \
                " number is " << ((p1cnl >= p2cnl) ? p1cnl : p2cnl) << endl;
            }
            else {
                cout << "Message from the coordinator Person1 and Person2 are not room mates." << endl;
            }
        }

};

// Driver Code
int main() {

    // Create an instance of the class Coordinator
    Coordinator c1;
    // Set the values for the two instances of the Person class in Coordinator Class
    c1.setPersons();
    // Check and output if the people are from the same University
    c1.checkUni();
    return 0;
}