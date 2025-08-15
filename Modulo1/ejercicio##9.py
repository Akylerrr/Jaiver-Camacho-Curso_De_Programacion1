monto=float(input("ingrese el monto a pagar: "))

if monto >= 100:
    descuento = monto *0.20
elif monto >= 50:
    descuento = monto *0.10
else:
    descuento = 0
monto_final = monto - descuento
print("El monto final a pagar es:", monto_final)