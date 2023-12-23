#include "Campers.h"
#include "CampersList.h"
#include "Donations.h"
#include "DonationsList.h"

int main() {

  CampersList registry;
  DonationsList donations;
  string fullName, email, campersName, city;
  int id, age;
  double donation;
  int choice = 0;

  do {
    cout << "************************************************************************\n";
    cout << "**                                                                    **\n";
    cout << "**                             Camp Kesem                             **\n";
    cout << "**                       Registry and Donations                       **\n";
    cout << "**                                                                    **\n";
    cout << "************************************************************************\n";
    cout << "** Please make a choice from the following options:               "
            "  "
            "  **\n";
    cout << "** 1)  Register your child as a camper                            "
            "  "
            "  **\n";
    cout << "** 2)  Remove your child from the registry                        "
            "  "
            "  **\n";
    cout << "** 3)  Display camper registry                                    "
            "  "
            "  **\n";
    cout << "** 4)  Donate HERE                                                "
            "  "
            "  **\n";
    cout << "** 5)  Remove your donation                                       "
            "  "
            "  **\n";
    cout << "** 6)  Display Donations                                              **\n";
    cout << "** 7)  Exit                                                           **\n";
    cout << "******************************************************************"
            "**"
            "****\n";
    cout << ">> ";
    cin >> choice;
    cin.ignore();
    switch (choice) {
    case 1:
      cout << "Enter your full name(Parent/Guardian): ";
      getline(cin, fullName);
      cout << "Enter Email: ";
      getline(cin, email);
      cout << "Enter your childs name: ";
      getline(cin, campersName);
      cout << "Enter your city: ";
      getline(cin, city);
      cout << "Enter your childs age: ";
      cin >> age;

      registry.addCamper(Campers(fullName, email, campersName, age, city));
      cout << "~~~Your child has been added to our registry!~~~\n" << endl;

      break;
    case 2:
      cout << registry << endl;
      cout << "To remove a camper please enter their assigned ID(or enter 0 to "
              "exit): ";
      cin >> id;
      if (registry.removeCamper(id))
        cout << "~~~Camper " << campersName
             << " successfully removed from the registry~~~\n\n";
      else if (id == 0)
        cout << "~~~Exiting...~~~";
      else
        cout << "~~~Camper ID: " << id << " not found~~~\n\n";

      break;
    case 3:
      cout << registry << endl;
      break;
    case 4:
      cout << "Enter your full name: ";
        getline(cin, fullName);
      cout << "Enter Email: ";
        getline(cin, email);
      cout << "Enter Donation: $";
        cin >> donation;
      donations.addDonation(Donations(fullName, email, donation));
      cout << "Thank you for your donation of $" << donation << "!!\n\n";
      
      break;
    case 5:
      cout << donations << endl;
      cout << "To refund your donation please enter your assigned ID from the list above(or enter 0 to exit): ";
      cin >> id;
      if (donations.removeDonation(id))
        cout << "~~~Your donation of $" << donation << " has been refunded~~~\n\n";
      else if (id == 0)
        cout << "~~~Exiting...~~~";
      else
        cout << "~~~Donator ID: " << id << " not found~~~\n\n";
      break;
    case 6:
        cout << donations << endl;
      break;
    case 7:
      cout << "Thank you, Exiting...\n";
      break;
    }
  } while(choice != 7);
  
  return EXIT_SUCCESS;
}