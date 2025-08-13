monto= float(input("cuenta (monto):"))
propina= float(input("propina (%)"))
propina = monto*(propina/100)
pago_final= monto + propina

print("monto:", monto)
print("Cuenta Final:", pago_final)