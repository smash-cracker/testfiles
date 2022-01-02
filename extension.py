s1 = input("Enter string 1: ")
s2 = input("Enter string 2: ")
s1 = list(s1)
s2 = list(s2)
s1[0],s2[0] = s2[0],s1[0]
s1 = "".join(s1)
s2 = "".join(s2)
s3 = s1+" "+s2
print(s3)
