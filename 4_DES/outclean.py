fo = open("outpair.txt", "a")
fi = open("/media/adi/Adi/Study/Semester_4/CS641/Assignment/4_DES/gameoutput.log")

content = fi.readlines()

j=60
for i in range(0,262144):
    fo.write(content[j])
    j+=17
fo.close()
fi.close()
