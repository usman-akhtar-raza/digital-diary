#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Data structure to represent a diary page
struct DiaryPage {
    string date;
    string notes;
};

// Data structure to represent the diary
struct Diary {
    vector<DiaryPage> pages;
    size_t currentPage;
};

// Function to display the current diary page
void displayPage(const Diary& diary) {
    const DiaryPage& currentPage = diary.pages[diary.currentPage];

    cout << "Date: " << currentPage.date << endl;
    cout << "------------------------" << endl;
    cout << currentPage.notes << endl;
    cout << "------------------------" << endl;
}

// Function to add a new diary page
void addPage(Diary& diary) {
    DiaryPage newPage;
    cout << "Enter notes for the day:" << endl;
    getline(cin, newPage.notes);

    // Get the current date (you may need to include appropriate headers for your system)
    time_t now = time(0);
    tm* date = localtime(&now);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d", date);
    newPage.date = buffer;

    diary.pages.push_back(newPage);
    diary.currentPage = diary.pages.size() - 1;

    cout << "Page added successfully." << endl;
}

// Function to navigate to the previous page
void prevPage(Diary& diary) {
    if (diary.currentPage > 0) {
        diary.currentPage--;
        displayPage(diary);
    } else {
        cout << "You are already on the first page." << endl;
    }
}

// Function to navigate to the next page
void nextPage(Diary& diary) {
    if (diary.currentPage < diary.pages.size() - 1) {
        diary.currentPage++;
        displayPage(diary);
    } else {
        cout << "You are already on the last page." << endl;
    }
}

int main() {
    Diary myDiary;
    char choice;

    do {
        displayPage(myDiary);

        cout << "Options:" << endl;
        cout << "1. Add a new page" << endl;
        cout << "2. Go to the previous page" << endl;
        cout << "3. Go to the next page" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the input buffer

        switch (choice) {
            case '1':
                addPage(myDiary);
                break;
            case '2':
                prevPage(myDiary);
                break;
            case '3':
                nextPage(myDiary);
                break;
            case '4':
                cout << "Exiting the diary program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != '4');

    return 0;
}
