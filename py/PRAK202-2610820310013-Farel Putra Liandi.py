nilai = int(input(""))

if nilai < 50 :
    grade = "E"
elif nilai < 60:
    grade = "D"
elif nilai < 70:
    grade = "C"
elif nilai < 80 :
    grade = "B"
else :
    grade = "A"

print(grade)