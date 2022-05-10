ages = [12, 14, 53, 19, 12, 5, 12, 19, 12, 53, 17, 12]

min_age = 100
min_age_positon = 0
counter = 0
for age in ages:
    if min_age > age:
        min_age = age
        min_age_positon = counter + 1

    counter += 1

print(f"{min_age} is youngest @ {min_age_positon} index")


