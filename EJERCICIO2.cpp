#include <iostream>

int suma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = suma(5, 7);
    std::cout << "La suma es: " << resultado << std::endl;
    return 0;
}
#include <iostream>
#include <string>

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;

    void mostrar_info() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << ", Grado: " << grado << std::endl;
    }
};

int main() {
    Estudiante estudiante;
    estudiante.nombre = "Jaime";
    estudiante.edad = 16;
    estudiante.grado = "10mo";
    estudiante.mostrar_info();
    return 0;
}
#include <iostream>

void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    intercambiar(&x, &y);
    std::cout << "Después del intercambio: x = " << x << ", y = " << y << std::endl;
    return 0;
}
#include <iostream>

int main() {
    try {
        throw std::runtime_error("¡Esto es una excepción!");
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
#include <string>

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;

    void registrar_materia(const std::string& materia) {
        materias.push_back(materia);
    }

    void mostrar_materias() {
        std::cout << "Materias registradas: ";
        for (const auto& materia : materias) {
            std::cout << materia << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Estudiante estudiante;
    estudiante.nombre = "Maria";
    estudiante.edad = 15;
    estudiante.grado = "9no";
    estudiante.registrar_materia("Matemáticas");
    estudiante.registrar_materia("Historia");
    estudiante.mostrar_materias();
    return 0;
}
#include <iostream>
#include <vector>

double calcular_promedio(const std::vector<int>& calificaciones) {
    if (calificaciones.empty()) {
        return 0.0;
    }

    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }

    return static_cast<double>(suma) / calificaciones.size();
}

int main() {
    std::vector<int> calificaciones = {90, 85, 92, 88};
    double promedio = calcular_promedio(calificaciones);
    std::cout << "El promedio de calificaciones es: " << promedio << std::endl;
    return 0;
}
#include <iostream>
#include <string>

class RegistroAsistencia {
public:
    std::string fecha;
    std::string estado;

    void mostrar_asistencia() {
        std::cout << "Fecha: " << fecha << ", Estado: " << estado << std::endl;
    }
};

int main() {
    RegistroAsistencia asistencia;
    asistencia.fecha = "2023-11-09";
    asistencia.estado = "Asistió";
    asistencia.mostrar_asistencia();
    return 0;
}
#include <iostream>
#include <vector>
#include <string>

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;

    void mostrar_info() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << ", Grado: " << grado << std::endl;
    }
};

std::vector<Estudiante> filtrar_estudiantes_por_grado(const std::vector<Estudiante>& estudiantes, const std::string& grado) {
    std::vector<Estudiante> estudiantes_filtrados;
    for (const auto& estudiante : estudiantes) {
        if (estudiante.grado == grado) {
            estudiantes_filtrados.push_back(estudiante);
        }
    }
    return estudiantes_filtrados;
}

int main() {
    std::vector<Estudiante> lista_estudiantes = {
            {"Carlos", 17, "11mo"},
            {"Ana", 16, "10mo"},
            {"Pedro", 15, "9no"}
    };

    std::vector<Estudiante> estudiantes_filtrados = filtrar_estudiantes_por_grado(lista_estudiantes, "10mo");

    for (const auto& estudiante : estudiantes_filtrados) {
        estudiante.mostrar_info();
    }

    return 0;
}
#include <iostream>
#include <stdexcept>

class MateriaYaRegistradaException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Materia ya registrada";
    }
};

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;

    void registrar_materia(const std::string& materia) {
        for (const auto& mat : materias) {
            if (mat == materia) {
                throw MateriaYaRegistradaException();
            }
        }
        materias.push_back(materia);
    }

    void mostrar_materias() {
        std::cout << "Materias registradas: ";
        for (const auto& materia : materias) {
            std::cout << materia << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Estudiante estudiante;
    estudiante.nombre = "Jaime";
    estudiante.edad = 16;
    estudiante.grado = "10mo";

    try {
        estudiante.registrar_materia("Matemáticas");
        estudiante.registrar_materia("Historia");
        estudiante.registrar_materia("Matemáticas");  // Intento de registrar una materia duplicada
    } catch (const std::exception& e)
