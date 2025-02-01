import array as arr

संग्रह = arr.array('i', [1, 2, 3, 4, 5])

def प्रदर्शयति(संग्रह):
    for तत्व in संग्रह:
        print(तत्व, end=' ')
    print()

print("मूल संग्रहः (Original Array):")
प्रदर्शयति(संग्रह)

संग्रह.append(6)
print("संशोधित संग्रहः (Modified Array):")
प्रदर्शयति(संग्रह)

संग्रह.insert(2, 10)
print("परिवर्तित संग्रहः (Changed Array):")
प्रदर्शयति(संग्रह)

संग्रह.remove(3)
print("नवीन संग्रहः (New Array):")
प्रदर्शयति(संग्रह)
