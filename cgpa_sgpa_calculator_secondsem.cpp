#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int getGradePoint(const string& grade) {
    if (grade == "A+")
    { return 10;}
    if (grade == "A")
      {return 9;}
    if (grade == "B+") 
   { return 8;}
    if (grade == "B") 
    { return 7;}
    if (grade == "C")
     { return 6;}
    if (grade == "D") 
     {return 5;}
    return 0;
}

int main() {
    const int N = 11;
    string subjects[N] = {
        "Basic Electronics Engineering",
        "Mathematics",
        "Electronics Communication",
        "Engineering Drawing",
        "Chemistry",
        "Chemistry Lab",
        "Language Lab",
        "Engineering Drawing Lab",
        "Universal Human Values (UHV)",
        "MIL",
        "Basic Electronics Engg. Lab"
    };
    int credits[N] = { 3, 4, 3, 2, 2, 1, 1, 1, 2, 2, 1 };

    string grades[N];
    int gp[N];

    cout << "\n================================================\n";
    cout << "       SGPA / CGPA CALCULATOR\n";
    cout << "  A+(10)  A(9)  B+(8)  B(7)  C(6)  D(5)\n";
    cout << "================================================\n\n";

    for (int i = 0; i < N; i++) {
        cout << "[" << i+1 << "] " << subjects[i]
        << "  (Credits: " << credits[i] << ")\n";
        cout << "    Grade: ";
        cin >> grades[i];
        gp[i] = getGradePoint(grades[i]);
        if (gp[i] == 0) { cout << "    Invalid! Try again.\n"; i--; continue; }
        cout << "    Points: " << gp[i] << "  | Weighted: " << credits[i]*gp[i] << "\n\n";
    }

    int tw = 0, tc = 0;
    cout << "\n" << string(56,'-') << "\n";
    cout << left << setw(34)<<"Subject" << setw(9)<<"Credits" << setw(7)<<"Grade" << "Pts\n";
    cout << string(56,'-') << "\n";
    for (int i = 0; i < N; i++) {
        tw += credits[i]*gp[i]; tc += credits[i];
        cout << left << setw(34) << subjects[i]
             << setw(9) << credits[i] << setw(7) << grades[i] << gp[i] << "\n";
    }
    cout << string(56,'=') << "\n";
    cout << "Total Credits : " << tc << "\n";
    cout << "Total Points  : " << tw << "\n";
    cout << fixed << setprecision(2);
    cout << "SGPA          : " << (double)tw/tc << "\n";
    cout << string(56,'=') << "\n";
    return 0;
}