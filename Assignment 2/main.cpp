
#include "Student.h" // derived class definition

int main()
{
    // default
    cout << "Default: \n\n";
    Student obj;
    obj.display();

    cout << "\n";

    // instantiating an object
    cout << "After instantiating: \n\n";
    Student obj2{ "Jasurbek", "Ergashev", "AC2303018", 19, "21SE026", 67.8 };
    Student* obj2Ptr{ &obj2 }; // using pointer
    obj2Ptr->display();

    return 0;
}

// Jasurbek Ergashev 
// 21SE026
// Thanks
