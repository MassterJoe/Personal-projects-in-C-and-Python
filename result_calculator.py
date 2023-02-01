"""
This code recieves scores as input and calculates the total and average
Author: Salawu O. Joseph (Master Joe)
"""

def average_calc():
    x = int(input("How many scores do you want to enter?"))
    scores = []
    sum = 0
    for i in range(x):
        score = int(input("Enter the scores "))
        scores.append(score)
    scores = scores
    print("The scores you entered are: ")
    for i in range(len(scores)):
        print(scores[i])
        sum = sum + scores[i]
    print(f"The total score is {sum}")
    average = sum/len(scores)
    print(f"The average is {average}")

average_calc()
