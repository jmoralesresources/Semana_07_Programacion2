| <div align="right"><img src="../../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 7 – Práctica semanal

**Contenidos:** Programación genérica (templates), Patrón Iterator.

---

## Actividad 1 (Templates)

- Implemente `maximo(T a, T b)` y `buscar(const std::vector<T>& v, const T& x)`. Pruebe con `int` y `std::string`.
- Implemente clase template `Pila<T>` con `push`, `pop`, `top`. Instancie `Pila<int>` y `Pila<std::string>` y use en un programa.

---

## Actividad 2 (Iteradores STL)

- Recorra un `std::vector<int>` con iterador clásico y con range-for. Escriba en MD las diferencias de sintaxis y cuándo usar cada uno.
- Use `std::vector<T>::iterator` para buscar un elemento y para imprimir el vector.

---

## Actividad 3 (Iterator propio)

- Defina una lista enlazada simple con inserción al frente. Implemente un iterador que cumpla lo necesario para range-for (`begin()`/`end()`, `operator++`, `operator*`, `operator!=`). Recorra la lista con range-for.

---

**Formato de entrega:** Código y explicaciones en **archivo(s) MD (Markdown)**.
