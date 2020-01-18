// LayneNortonUltimateCuttingDiet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

double bodyWeightLbs{};
double caloricBaselineMultiplier = 1;
double caloricDeficitPerWeekCal{};
double proteinIntakeGramsPerLb{};
double fatPercentOfTotalCalores{};

void DrawSpacing()
{
	cout << endl;
	cout << endl;
}

int main()
{
	cout << "Enter body weight" << endl;
	cin >> bodyWeightLbs;
	DrawSpacing();
	cout << "Enter caloric baseline" << endl;
	cout << "Mesomorphs - bodyweight x 15." << endl;
	cout << "Ectomorphs - bodyweight x 16 - 17." << endl;
	cout << "Endomorphs - bodyweight x 13 - 14." << endl;
	cin >> caloricBaselineMultiplier;
	DrawSpacing();
	cout << "Enter caloric deficit" << endl;
	cin >> caloricDeficitPerWeekCal;
	DrawSpacing();
	cout << "Enter protein intake" << endl;
	cout << "Mesomorphs - 1.2g / lb - 1.3g / lb." << endl;
	cout << "Ectomorphs - 1.4g / lb - 1.6g / lb." << endl;
	cout << "Endomorphs - 1.4g / lb - 1.5g / lb.*" << endl;
	cin >> proteinIntakeGramsPerLb;
	double caloriesToAllocate = (bodyWeightLbs * caloricBaselineMultiplier) - caloricDeficitPerWeekCal;
	double proteinGrams = bodyWeightLbs * proteinIntakeGramsPerLb;
	double proteinCalories = proteinGrams * 4;
	DrawSpacing();
	DrawSpacing();
	cout << "Fat intake?" << endl;
	cout << "Mesomorphs - 17% - 23% of total calories." << endl;
	cout << "Ectomophs - 24 % - 28 % of total calories." << endl;
	cout << "Endomorphs - 23 % - 28 % of total calories." << endl;
	cin >> fatPercentOfTotalCalores;
	double fatCalories = caloriesToAllocate * fatPercentOfTotalCalores * 0.01;
	double carbCalories = caloriesToAllocate - proteinCalories - fatCalories;
	DrawSpacing();
	cout << "Protein to consume in grams : " << proteinGrams << endl;
	cout << "Protein to consume in calories : " << proteinCalories << endl;
	cout << "Eat " << fatCalories << " calories from fat " << endl;
	cout << "Eat " << fatCalories / 9 << " grams of fat " << endl;
	cout << "Eat " << carbCalories << " calories from carbs " << endl;
	cout << "Eat " << carbCalories / 4 << " grams of carbs " << endl;
	cout << "Total calories to eat: " << caloriesToAllocate << endl;
	DrawSpacing();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
