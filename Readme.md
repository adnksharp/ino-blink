# Blink
[![Blink-bb.png](https://i.postimg.cc/nhTYnpyq/Untitled-Sketch-bb.png)]()
Parpadeo de salidas digitales.

## Hardware y software necesarios
- Placa de desarrollo Arduino 
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/)

## Funcionamiento
#### Variables
```Out```: Variable tipo bool que define el estado de la salida digital.

```Delay```: Tiempo en milisegundos que tarda la variable **Out** en cambiar de valor.

```Millis```: Variable que guarda la ultima vez que la variable **Out** cambio de valor.

#### Funcionamiento
El microcontrolador revisa si han pasado ```Delay``` milisegundos (usando la función ```millis()``` y la variable ```Millis```). De ser así, actualiza la variable ```Millis```, cambia el valor de ```Out``` y actualiza el estado de la salida digital.
