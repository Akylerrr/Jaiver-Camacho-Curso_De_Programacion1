#Primer Ejercicio 
def transformar_matriz(matriz: list[list[int]], numero: int) -> list[list[int]]:

    return [[elemento * numero for elemento in fila] for fila in matriz]

matriz_original = [[1, 2, 3], 
                   [4, 5, 6], 
                   [7, 8, 9]]
multiplicador = 2

matriz_multiplicada = transformar_matriz(matriz_original, multiplicador)

print(f"Matriz original: {matriz_original}")
print(f"Matriz multiplicada: {matriz_multiplicada}")


#Segundo Ejercicio
def ordenar_por_puntuacion(lista_de_tuplas):
    return sorted(lista_de_tuplas, key=lambda item: item[1], reverse=True)

jugadores = [('Diego', 52), ('Jose', 40), ('Kairy', 100), ('Yessica', 10)]

jugadores_ordenados = ordenar_por_puntuacion(jugadores)

print("Lista original:", jugadores)
print("Lista ordenada:", jugadores_ordenados)

#Tercer Ejercicio
def producto_devolver(lista):
    if not lista:
        return 1
    
    else:
        return lista[0] * producto_devolver(lista[1:])

numeros = [2, 3, 4, 5]
resultado = producto_devolver(numeros)
print(f"La lista es: {numeros}")
print(f"El producto de los numeros es: {resultado}")

lista_vacia = []
resultado_vacio = producto_devolver(lista_vacia)
print(f"La lista es: {lista_vacia}")
print(f"El producto de los numeros es: {resultado_vacio}")

#Cuarto Ejercicio
def aplanar_listas(*listas):
    return sum(listas, [])

lista1 = [1, 2, 3]
lista2 = ['a', 'b']
lista3 = [4, 5, 6]

lista_aplanada = aplanar_listas(lista1, lista2, lista3)
print(f"Listas originales: {lista1}, {lista2}, {lista3}")
print(f"Lista aplanada: {lista_aplanada}")

lista_unica = [7, 8, 9]
lista_aplanada_unica = aplanar_listas(lista_unica)
print(f"\nLista original: {lista_unica}")
print(f"Lista aplanada: {lista_aplanada_unica}")

#Quinto Ejercicio
def filtrar_palabras(lista_palabras, longitud_minima):

    return [palabra for palabra in lista_palabras if len(palabra) > longitud_minima]

mis_palabras = ["telefono", "toro", "tablet", "luna", "elefante", "pez"]


longitud_corte = 5


palabras_filtradas = filtrar_palabras(mis_palabras, longitud_corte)


print(f"Lista original de palabras: {mis_palabras}")
print(f"Longitud minima de corte: {longitud_corte}")
print(f"Palabras cuya longitud es mayor que {longitud_corte}: {palabras_filtradas}")
