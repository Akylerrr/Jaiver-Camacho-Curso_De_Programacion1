notas= float(input("Introduce una nota: "))
a= 100-90
b= 90-80
c= 80-70
d= 70-60
f= 60-0
if notas >= 90 and notas <= 100:
    print("felicidades, tienes una A")
elif notas >= 80 and notas < 90:
    print("felicidades, tienes una B")
elif notas >= 70 and notas < 80:
    print("felicidades, tienes una C")
elif notas >= 60 and notas < 70:
    print("felicidades, tienes una D")
elif notas < 60 and notas >= 0:
    print("lo siento, tienes una F")
else:
    print("ERROR, tu nota no es valida")