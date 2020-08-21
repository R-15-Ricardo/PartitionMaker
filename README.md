# Uso
Aún no me doy a la tarea de hacer que esta cosa funcione directamente. Probablemente nunca lo vaya a hacer.

Para generar todas las particiones de un conjunto con $n$ elementos, ejecutar el comando `python partitions.py` en la terminal. Luego, para pasarlas a LaTeX, copias el output de la terminal y lo copias en el archivo `particionesin.txt` (si el archivo no existe, simplemente lo creas).

Luego, compilas `particiones.cpp` (en el compilador gcc) con `g++ particiones.cpp -o particiones`. Finalmente ejecutas `./particiones` en la terminal y esto debería generar el archivo `particionesout.txt` ya en formato latex.
