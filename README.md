# 4-bites-Text-Processor

## Introducción

Este repo es un procesador de texto modular y extensible que utiliza el patrón de diseño Factory para gestionar entradas y salidas de texto de múltiples fuentes, siguiendo y adaptando libremente las pautas de estilo establecidas por Steve McConnell. Este proyecto está diseñado para procesar texto de 4 bytes a la vez, proporcionando un ejemplo claro de cómo implementar arquitecturas limpias y sostenibles en C++.

## Características

- Separación clara de las responsabilidades mediante el uso de clases específicas para manejar entradas y salidas de texto.
- Implementación del patrón Factory para facilitar la creación de instancias de manejadores de entrada y salida.
- Fácilidad de extensión para soportar nuevas fuentes de entrada y salida.
- Adherencia a Estándares

## Arquitectura del Proyecto

La arquitectura del proyecto sigue una estructura organizada por carpetas, donde cada componente se coloca en su respectiva carpeta:

```4-bites-Text-Processor/
|-- src/
| |-- InputHandlers/
| | |-- ConsoleInputHandler.cpp
| | |-- FileInputHandler.cpp
| |-- OutputHandlers/
| | |-- ConsoleOutputHandler.cpp
| | |-- FileOutputHandler.cpp
| |-- Factories/
| | |-- InputHandlerFactory.cpp
| | |-- OutputHandlerFactory.cpp
| |-- TextProcessor.cpp
|-- include/
| |-- InputHandlers/
| | |-- ConsoleInputHandler.h
| | |-- FileInputHandler.h
| | |-- InputHandler.h
| |-- OutputHandlers/
| | |-- ConsoleOutputHandler.h
| | |-- FileOutputHandler.h
| | |-- OutputHandler.h
| |-- Factories/
| | |-- InputHandlerFactory.h
| | |-- OutputHandlerFactory.h
| |-- TextProcessor.h
|-- main.cpp
```

### Descripción de los Componentes

#### `InputHandlers`
- **ConsoleInputHandler**: Maneja la entrada de texto desde la consola.
- **FileInputHandler**: Maneja la entrada de texto desde un archivo.

#### `OutputHandlers`
- **ConsoleOutputHandler**: Maneja la salida de texto hacia la consola.
- **FileOutputHandler**: Maneja la salida de texto hacia un archivo.

#### `Factories`
- **InputHandlerFactory**: Crea instancias de `InputHandler` basándose en el tipo de entrada.
- **OutputHandlerFactory**: Crea instancias de `OutputHandler` basándose en el tipo de salida.

#### `TextProcessor`
Esta es la clase principal que se ocupa de coordinar la lectura de texto de entrada y la escritura de texto de salida.

## Uso

Al ejecutar el programa, se solicita que ingrese el nombre del archivo de entrada y de salida. Para usar la consola como entrada o salida, ingresa `-` cuando se pida el nombre del archivo.

## Contribución

Para contribuir a este proyecto, sigue estos pasos:

1. Lee CodeComplete del autor Steve McConnell
2. Haz un fork del repositorio
---
