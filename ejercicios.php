<?php
for ($i = 1; $i <= 10; $i++) {
    echo "8 x " . $i . " = " . (8 * $i) . "\n";
}
echo "\n";
?>
<?php
$pares = 0;
$impares = 0;

for ($i = 1; $i <= 50; $i++) {
    if ($i % 2 == 0) {
        $pares++;
    } else {
        $impares++;
    }
}

echo "pares: " . $pares . "";
echo "impares: " . $impares . "";
?>
<?php

$numero_secreto = 7;
$intento = 1;
$contador_intentos = 0;

echo "adivina el numero secreto...\n";
echo "el numero secreto esta entre 1 y 10.\n\n";

while ($intento != $numero_secreto) {
    echo "Intento #" . $intento . "\n";
    $intento++;
    $contador_intentos++;
}

echo "\nFelicidades adivinaste el numero.\n";
echo "el numero secreto era: " . $numero_secreto . "\n";
echo "te tomo " . $contador_intentos . " intentos.\n";

?>

<?php

$suma_impares = 0;

for ($i = 1; $i <= 100; $i++) {
    if ($i % 2 != 0) {
        $suma_impares += $i;
    }
}

echo "La suma de todos los números impares del 1 al 100 es: " . $suma_impares;

?>

<?php

$edad = 25; 

if ($edad >= 18 && $edad <= 65) {
    echo "¡Felicidades! Cumples con los requisitos de edad para obtener una licencia de conducir.";
} else {
    echo "Lo sentimos, no cumples con los requisitos de edad para obtener una licencia de conducir.";
}

?>

<?php

$lado = 5;

for ($fila = 1; $fila <= $lado; $fila++) {
    for ($columna = 1; $columna <= $lado; $columna++) {
        echo "# ";
    }
    echo "\n";
}

?>