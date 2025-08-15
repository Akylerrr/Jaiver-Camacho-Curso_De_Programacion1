numero = 3
intentos = 0
print("intenta adivinar el numero con 4 intentos")
while intentos < 4:
    print(f"intentos {intentos}")
    adivinar = int(input("adivina el numero: "))
    intentos += 1

    if adivinar < numero:
        print("muy bajo")
    elif adivinar > numero:
        print("muy alto")
    else:
        break

if adivinar == numero:
    print(f"felicidades adivinaste el numero {numero}")

else:
    print(f"fallaste el numero era {numero}")