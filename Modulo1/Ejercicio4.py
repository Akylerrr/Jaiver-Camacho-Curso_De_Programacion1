fecha_de_nacimiento= input("Introduce tu fecha de nacimiento (AAAA):")
fecha_de_nacimiento= int(fecha_de_nacimiento) 

año_actual= 2025
edad= año_actual - fecha_de_nacimiento
mayor_de_edad= edad >= 18
if mayor_de_edad:
    print("Eres mayor de edad")
else:
    print("Eres menor de edad")
print("Tu edad es:", edad)