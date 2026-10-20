#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
queue<string> printQueue;
int choice;
string document;

do {
cout << "\n================================\n";
cout << " SMART PRINT MANAGER\n";
cout << "================================\n";
cout << "1. Add Print Job\n";
cout << "2. Print Next Document\n";
cout << "3. View Pending Jobs\n";
cout << "4. Exit\n";
cout << "Enter your choice: ";

cin >> choice;

switch (choice) {
case 1:
cout << "Enter document name: ";
cin >> ws;
getline(cin, document);

printQueue.push(document);

cout << "Print job added successfully!\n";
break;

case 2:
if (printQueue.empty()) {
cout << "No documents waiting to be printed.\n";
} else {
cout << "Printing: " << printQueue.front() << endl;
printQueue.pop();

cout << "Print job completed!\n";
}
break;

case 3:
if (printQueue.empty()) {
cout << "The print queue is empty.\n";
} else {
queue<string> temp = printQueue;

cout << "\nDocuments waiting to be printed:\n";

while (!temp.empty()) {
cout << "- " << temp.front() << endl;
temp.pop();
}
}
break;

case 4:
cout << "Exiting Smart Print Manager. Goodbye!\n";
break;

default:
cout << "Invalid choice. Please try again.\n";
}

} while (choice != 4);

return 0;
}