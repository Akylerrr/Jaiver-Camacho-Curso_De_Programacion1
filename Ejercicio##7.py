edad = int(input("Introduce tu edad: "))
nombre = input("Introduce tu nombre: ")
lista_de_invitados = [ "Diego", "Yessica", "Tara","Jose"]
esta_en_lista = nombre in lista_de_invitados
if edad >= 18 and esta_en_lista:
    print("acceso permitido a la fiesta") 
else:
    print("acceso denegado")
