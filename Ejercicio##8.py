A= 90-100
b= 80-89
c= 70-79
d= 60-69
f= 0-59

nota=int(input("Ingrese su nota: "))

if nota >= 90 and nota <= 100:
    print("su nota es A")
elif nota >= 80 and nota <= 89:
    print("su nota es B")
elif nota >= 70 and nota <= 79:
    print("su nota es C")
elif nota >= 60 and nota <= 69:
    print("su nota es D")
elif nota >= 0 and nota <= 59:
    print("su nota es F")
else:
    print("ERROR, Ingrese una nota valida")