// Primer Ejercicio 
<?php

$usuario = [
    'id' => 12345,
    'nombre' => 'Diego Espina',
    'email' => 'diego.e@gmail.com',
    'roles' => ['administrador', 'editor']
];

$json_usuario = json_encode($usuario);

header('Content-Type: application/json');
echo $json_usuario;

?>
//segundo ejercicio 
<?php

function contarFrecuenciaPalabras(string $texto): array
{
    
    $textoLimpio = strtolower($texto);
  
    $textoLimpio = str_replace(['.', ',', '!', '?', ';', ':'], ' ', $textoLimpio);
    
  $palabras = explode(' ', $textoLimpio);

    $frecuencias = array_count_values(array_filter($palabras));

    return $frecuencias;
}

$textoDeEjemplo = "Hola, mundo Esto es un ejemplo. Hola, mundo.";
$frecuencias = contarFrecuenciaPalabras($textoDeEjemplo);

print_r($frecuencias);

?>
//Tercer ejercicio

<?php

function esPrimo(int $numero): bool
{
    if ($numero <= 1) {
        return false;
    }

    if ($numero === 2) {
        return true;
    }

    if ($numero % 2 === 0) {
        return false;
    }

    $limite = sqrt($numero);
    for ($i = 3; $i <= $limite; $i += 2) {
        if ($numero % $i === 0) {
            return false;
        }
    }

    return true;
}

echo "El numero 7 es primo? " . (esPrimo(7) ? "Sí" : "No") . "\n";    
echo "El numero 10 es primo? " . (esPrimo(10) ? "Sí" : "No") . "\n";      
echo "El numero 2 es primo? " . (esPrimo(2) ? "Sí" : "No") . "\n";       
echo "El numero 1 es primo? " . (esPrimo(1) ? "Sí" : "No") . "\n";      
echo "El numero 29 es primo? " . (esPrimo(29) ? "Sí" : "No") . "\n";      

?>
//cuarto ejercicio
<?php


function invertirCadena(string $cadena): string
{
    return strrev($cadena);
}

$textoOriginal = "HELLOOO";
$textoInvertido = invertirCadena($textoOriginal);

echo "Cadena original: " . $textoOriginal . "\n";
echo "Cadena invertida: " . $textoInvertido . "\n";

?>
//quinto ejercicio
<?php

function generarContrasena(int $longitud, bool $incluirEspeciales = false): string
{
    $caracteres = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789';

    if ($incluirEspeciales) {
        $caracteres .= '!@#$%^&*()_+-=[]{}|;:,.<>?';
    }

    $contrasena = '';
    $longitudCaracteres = strlen($caracteres);

    for ($i = 0; $i < $longitud; $i++) {
        
        $contrasena .= $caracteres[rand(0, $longitudCaracteres - 1)];
    }

    return $contrasena;
}

$contrasena1 = generarContrasena(12);
echo "Contraseña generada (sin especiales): " . $contrasena1 . "\n";

$contrasena2 = generarContrasena(16, true);
echo "Contraseña generada (con especiales): " . $contrasena2 . "\n";

?>
