def drawSpacing():
	print('\n')

print('Welcome to Layne Norton\'s Ultimate Cutting Diet!')
drawSpacing()
bodyWeightLbs = float(input('Enter body weight: '))
drawSpacing()
print('Mesomorphs - bodyweight x 15')
print('Ectomorphs - bodyweight x 16 - 17')
print('Endomorphs - bodyweight x 13 - 14')
caloricBaselineMultiplier = float(input('Enter caloric baseline multiplier:'))
drawSpacing()
caloricDeficitPerWeekCal = float(input('Enter caloric deficit in calories:'))
drawSpacing()
print('Mesomorphs - 1.2g / lb - 1.3g / lb')
print('Ectomorphs - 1.4g / lb - 1.6g / lb')
print('Endomorphs - 1.4g / lb - 1.5g / lb')
proteinIntakeGramsPerLb = float(input('Enter protein intake in grams:'))
drawSpacing()
caloriesToAllocate = (bodyWeightLbs * caloricBaselineMultiplier) - caloricDeficitPerWeekCal
proteinGrams = bodyWeightLbs * proteinIntakeGramsPerLb
proteinCalories = proteinGrams * 4
print("Mesomorphs - 17% - 23% of total calories.")
print("Ectomophs - 24 % - 28 % of total calories.")
print("Endomorphs - 23 % - 28 % of total calories.")
fatPercentOfTotalCalores = float(input('Fat intake in %?'))
drawSpacing()
fatCalories = caloriesToAllocate * fatPercentOfTotalCalores * 0.01;
carbCalories = caloriesToAllocate - proteinCalories - fatCalories;


drawSpacing()
print("Grams")
print("------")
print("{} grams protein ".format(proteinGrams))
print("{} grams carbs ".format(carbCalories / 4))
print("{} grams fat ".format(fatCalories / 9))


drawSpacing()
print("Calories")
print("------")
print("{} kcal protein ".format(proteinCalories))
print("{} kcal carbs ".format((carbCalories)))
print("{} kcal fat ".format(fatCalories))



drawSpacing()
print("Percent from protein:{}%".format(proteinCalories/caloriesToAllocate*100))
print("Percent from fat:{}%".format(fatCalories/caloriesToAllocate*100))
print("Percent from carbs:{}%".format(carbCalories/caloriesToAllocate*100))
drawSpacing()
print("Total calories to eat {}:".format(caloriesToAllocate))
