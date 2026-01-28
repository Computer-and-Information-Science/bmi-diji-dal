#include <iostream>
using namespace std;

int main() {
    //imperial height and weight
    const int height = 61;
    const int weight = 130;

    //converts weight and height to metric units
    float kgs = weight * 0.453592;
    float meters = height * 0.0254;

    float BMI = kgs / (meters * meters);

    cout << "The BMI for this person is: " << BMI << endl;

    return BMI;
}
