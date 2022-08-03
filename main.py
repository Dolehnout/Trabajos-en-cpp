import numpy 
def main():
    print("Operaciones Básicas:\n", "1. Suma\n", "2. Resta\n", "3. Multiplicacion\n", "4. Division\n", "5. Potencias\n", "6. Raiz Cuadrada\n")
    elejir = int(input("" ))
    if (elejir == 1):
        arr = []
        a = int(input("Ingrese cuantos valores va a sumar: "))
        for i in range(a):
            arr.append(float(input("Ingrese valor: ")))
        arr = numpy.array(arr)
        print(numpy.sum(arr, axis=0))



main()