// Primer Ejercicio 
<?php

$usuario = [
    'id' => 12345,
    'nombre' => 'Ana Torres',
    'email' => 'ana.torres@ejemplo.com',
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
