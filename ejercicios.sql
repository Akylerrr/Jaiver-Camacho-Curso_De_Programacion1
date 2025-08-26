CREATE TABLE Estudiantes (
    estudiantes INT PRIMARY KEY,
    nombre VARCHAR(100),
    apellido VARCHAR(100),
    edad INT,
    telefono VARCHAR(50)
);




INSERT INTO Estudiantes (estudiantes, nombre, apellido, edad, telefono) 

VALUES
(1, 'Carlos', 'Bruzual', 28, +58406387116),
(2, 'Jose', 'Colina', 34, +58446816856),
(3, 'Miguel', 'Gomez', 45, +58477742845),
(4, 'Victor', 'Rodriguez', 22, +58426540682),
(5, 'Eliezer', 'Zambrano', 52, +58429980831),
(6, 'Jean', 'Vargas', 28, +58467744660),
(7, 'Diego', 'Andres', 34, +58440602415),
(8, 'Carlos', 'Rodriguez', 45, +58437445487),
(9, 'Nestor', 'Nuñez', 22, +58437445487),
(10, 'Luis', 'Martinez', 52, +58434418611);
(11, 'Juan', 'Perez', 28, +58434418611),
(12, 'Ana', 'García', 34, +58415324114);

SELECT estudiantes ,nombre, apellido, edad, telefono FROM Estudiantes

SELECT * FROM Estudiantes ORDER BY nombre ASC;