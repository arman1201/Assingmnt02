#include <iostream> 
#include <string> 
using namespace std;
class Car_Showroom {
private: string showroomName;
int numberOfCars; 
float showroomArea; 
string showroomID;
public: Car_Showroom(string name, int cars, float area, string id) { showroomName = name; numberOfCars = cars; showroomArea = area; showroomID = id;
} Car_Showroom(const Car_Showroom &showroom) {showroomName = showroom.showroomName; numberOfCars = showroom.numberOfCars; showroomArea = showroom.showroomArea; showroomID = showroom.showroomID;
}
void display() { cout << "Showroom Name: " << showroomName << endl; cout << "Number of Cars Available: " << numberOfCars << endl; cout << "Showroom Area (sq ft): " << showroomArea << endl; cout << "Showroom ID: " << showroomID << endl; cout << "---" << endl;
}
}; 
int main() {
Car_Showroom showroom1("AutoHub Motors", 50, 10000.5, "SRM001"); Car_Showroom showroom2("Speedline Autos", 30, 8000.0, "SRM002");
cout << "Showroom 1 Details:\n"; showroom1.display(); cout << "Showroom 2 Details:\n"; showroom2.display();
return 0;
}
