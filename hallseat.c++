#include <iostream> 
using namespace std;
class IIUC_Auditorium {
private: float area;
float totalFloorSpace;
int hallID; 
int maxSeatingCapacity;
public:
IIUC_Auditorium(float a, float tfs, int id, int capacity)
{
  area = a; totalFloorSpace = tfs; hallID = id; maxSeatingCapacity = capacity;
}
IIUC_Auditorium(const IIUC_Auditorium &aud) { area = aud.area; totalFloorSpace = aud.totalFloorSpace; hallID = aud.hallID;maxSeatingCapacity = aud.maxSeatingCapacity; }
void display() {
  cout << "Hall ID: " << hallID << endl; cout << "Area: " << area << " sq ft" << endl; cout << "Total Floor Space: " << totalFloorSpace << " sq ft" << endl; cout << "Maximum Seating Capacity: " << maxSeatingCapacity << " participants"
<< endl; cout << "---" << endl;
} };
int main() { // Creating objects using parameterized constructor IIUC_Auditorium hall1(5000.5, 8000.0, 101, 600); IIUC_Auditorium hall2(3500.0, 5000.0, 102, 400);
cout << "Hall 1 Details:\n"; hall1.display();
cout << "Hall 2 Details:\n"; hall2.display();
return 0;
}
