precio = float(input("Introduce el precio de la compra: "))

if precio >= 100:
    descuento = 0.20
elif precio >= 50:
    descuento = 0.10
else:
    descuento = 0.0

monto_final = precio * (1 - descuento)
print(f"monto final tras descuento: {monto_final}")