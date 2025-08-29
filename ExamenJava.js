
//Primer Ejercicio
function calculadora(num1, num2, operador) {
    switch (operador) {
      case '+':
        return num1 + num2;
      case '-':
        return num1 - num2;
      case '*':
        return num1 * num2;
      case '/':
        if (num2 === 0) {
          return "Error: No se puede dividir por cero.";
        }
        return num1 / num2;
      default:

        return "Error: Operador no válido. Use '+', '-', '*' o '/'.";
    }
  }
  
  console.log(calculadora(10, 5, '+'));
  console.log(calculadora(20, 4, '-')); 
  console.log(calculadora(3, 7, '*')); 
  console.log(calculadora(50, 10, '/'));
  console.log(calculadora(10, 0, '/')); 
  console.log(calculadora(8, 2, 'x')); 

//SegundoEjercicio

function filtrarPropiedad(array, propiedad, valor) {
  return array.filter(objeto => objeto[propiedad] === valor);
}

const personas = [
  { nombre: 'Karla', edad: 30, ciudad: 'Maracaibo' },
  { nombre: 'Pedro', edad: 25, ciudad: 'New York' },
  { nombre: 'Javier', edad: 35, ciudad: 'Los Angeles' },
  { nombre: 'David', edad: 25, ciudad: 'Denver' }
];

const personasEnNewYork = filtrarPropiedad(personas, 'ciudad', 'Maracaibo');
console.log(personasEnNewYork);

const personasDe25Anios = filtrarPropiedad(personas, 'edad', 25);
console.log(personasDe25Anios);

//TercerEjercicio
function encontrarMaximo(numeros) {
  if (numeros.length === 0) {
    return undefined; 
  }

  let maximo = numeros[0];

  for (let i = 1; i < numeros.length; i++) {
    if (numeros[i] > maximo) {
      maximo = numeros[i];
    }
  }

  return maximo;
}


const numeros = [5, 12, 9, 23, 7];
const maximoNumero = encontrarMaximo(numeros);
console.log(`El numero maximo es: ${maximoNumero}`);

const numeros2 = [15, 8, 30, 2];
const maximoNumero2 = encontrarMaximo(numeros2);
console.log(`El numero maximo es: ${maximoNumero2}`);

//Cuarto Ejercicio 
const transacciones = [
  { tipo: 'ingreso', monto: 1000 },
  { tipo: 'gasto', monto: 250 },
  { tipo: 'ingreso', monto: 500 },
  { tipo: 'gasto', monto: 150 }
];

const balanceFinal = transacciones.reduce((acumulador, transaccion) => {
  if (transaccion.tipo === 'ingreso') {
    return acumulador + transaccion.monto;
  } else if (transaccion.tipo === 'gasto') {
    return acumulador - transaccion.monto;
  }
  return acumulador;
}, 0);

console.log('El balance final es:', balanceFinal);

//Quinto Ejercicio 

const concatenarArrays = (arr1, arr2) => {
  return [...arr1, ...arr2];
};

const arrayOriginal1 = [1, 2, 3];
const arrayOriginal2 = ['a', 'b', 'c'];

const nuevoArrayConcatenado = concatenarArrays(arrayOriginal1, arrayOriginal2);

console.log('Array concatenado:', nuevoArrayConcatenado);
console.log('Array original 1:', arrayOriginal1); 
console.log('Array original 2:', arrayOriginal2); 

