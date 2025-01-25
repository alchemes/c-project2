#include <iostream>
#include <string>
#include <limits>

using namespace std;
const string PASSWORD="4321";
const int MAX_PASSWORD_ATTEMPTS=3;

struct Patient {
    string name;
    int age;
    string gender;
    string contact_info;
    string medical_history;
};

const int MAX_PATIENTS = 100;  // Maximum number of patient records
Patient patients[MAX_PATIENTS];  // Array to store patient records
int numPatients = 0;  // Variable to keep track of the number of stored patient records
void searchByname(const string& name)
{
  bool found =false;
  for(int i=0; i<numPatients;++i)
    {
if (patients[i].name==name)
{
    cout<<"patient is found."<<endl;
    cout<<"Name:"<<patients[i].name<<endl;
    cout<<"Age:"<<patients[i].age<<endl;
    cout<<"Gender:"<<patients[i].gender<<endl;
    cout<<"contact Info:"<<patients[i].contact_info<<endl;
    cout<<"Medical History:"<<patients[i].medical_history<<endl;
    found = true;
    break;
}
     if(!found){
    cout<<"No patient is found with this name:"<<name<<endl;}
}
}
void updatePatientInfo(const string& name)
{bool found=false;
for(int i=0; i<numPatients;++i)
    {
        if(patients[i].name == name)
            {cout<<"Enter updated information of patient"<<name<<":"<<endl;
         cout<<"Name:"<<endl;
         cin>>patients[i].name;
        cout<<"Age:"<<endl;
        cin>>patients[i].age;
        cout<<"Gender(M/F):"<<endl;
        cin>>patients[i].gender;
        while(patients[i].gender!="M"&& patients[i].gender !="F")
        {
            cout<<"Invalid gender.please enter 'M' or'F'"<<endl;
            cin>>patients[i].gender;
        }
        cout<<"contact info"<<endl;
        cin>>patients[i].contact_info;
        cout<<"Medical History:"<<endl;
        cin.ignore();
        getline(cin,patients[i].medical_history);
        cout<<"patient information is updated successfully."<<endl;
        found = true;
        break;
        }
    }
    if(!found)
        {cout<<"No patient found with the name:"<<name<<endl;}
}
void deletePatient(const string& name) {
    bool found = false;
    int foundIndex = -1;

    for (int i = 0; i < numPatients; ++i) {
        if (patients[i].name == name) {
            foundIndex = i;
            found = true;
            break;
        }
    }

    if (found) {
        // Shift the remaining elements in the array
        for (int i = foundIndex; i < numPatients - 1; ++i) {
            patients[i] = patients[i + 1];
        }
        numPatients--;

        cout << "Patient " << name << " deleted successfully." << endl;
    } else {
        cout << "No patient found with the name: " << name << endl;
    }
}
int main() {
    for(int attempt =1;attempt<=MAX_PASSWORD_ATTEMPTS;++attempt){
        string passwordAttempt;
        cout<<"Enter the password to access a program:";
        cin>>passwordAttempt;
        if(passwordAttempt == PASSWORD){
            cout<<"password accepted. Access granted."<<endl;
            break;
        }
        else
        {
            cout<<"Incorrect password.you have"<<MAX_PASSWORD_ATTEMPTS-attempt<<"attempt(s) left."<<endl;

        }
        if(attempt == MAX_PASSWORD_ATTEMPTS)
        {
            cout<<"maximum number of attempts reached. Exiting the program."<<endl;
            return 0;
        }
    }
    int i;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\n";
cout<<"\t\t\t\t\t** __________________________________________________________________________________**\n";
cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
cout<<"\t\t\t\t\t**|                                           		                                  |**\n";
cout<<"\t\t\t\t\t**|                                      WELCOME TO                                  |**\n";
cout<<"\t\t\t\t\t**|                                                                                  |**\n";
cout<<"\t\t\t\t\t**|                           MEDICAL INFORMATION RESERVATION SYSTEM                 |**\n";
cout<<"\t\t\t\t\t**|                                                                                  |**\n";
cout<<"\t\t\t\t\t**|                                                                                  |**\n";
cout<<"\t\t\t\t\t**|                                                                                  |**\n";
cout<<"\t\t\t\t\t**|                                                                                  |**\n";
cout<<"\t\t\t\t\t**|                                                                                  |**\n";
cout<<"\t\t\t\t\t**|                                                                                  |**\n";
cout<<"\t\t\t\t\t**|__________________________________________________________________________________|**\n";
system("pause");

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Medical information reservation SYSTEM \n\n";
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _____________________________________________________________\n";
cout<<"\t\t\t\t\t\t|                                           	                |\n";
cout<<"\t\t\t\t\t\t|             1  >> Add New Patient Record                   |\n";
cout<<"\t\t\t\t\t\t|             2  >> Diagnosis Information of patient         |\n";
cout<<"\t\t\t\t\t\t|             3  >> Full History of the Patient              |\n";
cout<<"\t\t\t\t\t\t|             4  >> search by name                           |\n";
cout<<"\t\t\t\t\t\t|             5  >> update patient data                      |\n";
cout<<"\t\t\t\t\t\t|             6  >> delete patient                           |\n";
cout<<"\t\t\t\t\t\t|             7  >> Exit                                     |\n";
cout<<"\t\t\t\t\t\t|____________________________________________________________|\n\n";



    while (true) {
        cout << "Enter your choice: ";
        cin >> i;

        if (i > 7 || i < 1) {
            cout << "Invalid Choice. Try again" << endl;
            cin.clear();  // Clear the error state of cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Skip remaining input
            continue;
        }

        if (i == 1) {
            Patient pa;

            cout << "Enter patient details:" << endl;
            cout << "Name: ";
            cin >> pa.name;

            cout << "Age: ";
            cin >> pa.age;

            cout << "Gender(M/F): ";
            cin >> pa.gender;
            while(pa.gender !="M"&&pa.gender !="F")
            {cout<<"Invalid gender.please only enter 'M' or'F'"<<endl;
            cin>>pa.gender;
            }
            cout << "Contact Info: ";
            cin >> pa.contact_info;


            cout << "Medical History: ";
            cin.ignore();  // Ignore the newline character in the input buffer
            getline(cin, pa.medical_history);

            patients[numPatients] = pa;  // Store the patient details in the array
            numPatients++;  // Increment the number of stored patient records

            cout << "Patient details saved successfully." << endl;
        }

        if (i == 2) {
            int id;
            cout << "Enter patient ID: ";
            cin >> id;

            bool found = false;
            for (int j = 0; j < numPatients; j++) {
                if (j + 1 == id) {
                    cout << "Name: " << patients[j].name << endl;
                    cout << " Medical history:"<< patients[j].medical_history<<endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "No data" << endl;
            }
        }

        if (i == 3) {
            int id;
            cout << "Enter patient ID: ";
            cin >> id;

            bool found = false;
            for (int j = 0; j < numPatients; j++) {
                if (j + 1 == id) {
                    cout << "Full information of " << patients[j].name << ":" << endl;
                    cout << "Name: " << patients[j].name << endl;
                    cout << "Age: " << patients[j].age << endl;
                    cout << "Gender: " << patients[j].gender << endl;
                    cout << "Contact Info: " << patients[j].contact_info << endl;
                    cout << "Medical History: " << patients[j].medical_history << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "No data" << endl;
            }
        }
        if(i==4){
            string name;
            cout<<"Enter the name of the patient to search:";
            cin>>name;
            searchByname(name);
        }
        if(i==5)
        {
        string name;
        cout<<"Enter the name of the patient to update:"<<endl;
        cin>>name;
        updatePatientInfo(name);
        }
        if(i == 6)
        {
            string name;
            cout<<"enter the name of the patient wanted to delete."<<endl;
            cin>>name;
            deletePatient(name);
        }
        if(i==7)
        {
            cout<<"Exiting the program. Goodbye!"<<endl;
            break;
        }
    }

    return 0;
}
