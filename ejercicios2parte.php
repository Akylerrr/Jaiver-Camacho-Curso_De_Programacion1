<?php
$numero = readline("Introduce un número: ");

if ($numero > 0) {
    echo "El número es positivo.\n";
} elseif ($numero < 0) {
    echo "El número es negativo.\n";
} else {
    echo "El número es cero.\n";
}

echo "El número introducido es: " . $numero . "\n";

?>

<?php

for ($i = 1; $i <= 30; $i++) {

    $output = "";


    if ($i % 3 == 0) {
        $output .= "Mar";
    }


    if ($i % 5 == 0) {
        $output .= "Tierra";
    }

    if ($output == "") {
        $output = $i;
    }

    echo $output . "\n";
}

?>
<?php

$temperatura = 15;

if ($temperatura < 10) {
    echo "fria \n";
} elseif ($temperatura >= 10 && $temperatura <= 25) {
    echo "templada\n";
} else {
    echo "calurosa \n";
}

?>
<?php
for ($i = 10; $i >= 1; $i--) {
    echo $i . "\n";
    sleep(1);
}


echo "feliz año nuevo \n";

?>