key = 'XX1XX1XXX10X1X10XXX11XX11X0X1100101X00001000X01X0111X001'

file = open("finalkeys.txt", "w")
temp = ""

for i in range(2**20):
    bits = format(i, '0>20b')
    curr = 0
    for char in key:
        if char == 'X':
            temp += bits[curr]
            curr += 1
        else:
            temp += char
    file.write(temp)
    file.write('\n')
    temp = ""

file.close()
