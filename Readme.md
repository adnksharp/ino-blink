# Blink
[![Blink-bb.png](https://i.postimg.cc/nhTYnpyq/Untitled-Sketch-bb.png)]()
### Parpadeo de salidas digitales usando la función ```millis()```

## Hardware y software necesarios
- Placa de desarrollo
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/)

Para el funcionamiento del programa se utilizan:

| Variable | [Tipo](https://docs.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170) | Descripción |
| -------- | ---- | ----------- |
| Millis | unsigned long long | Constante que marca la última vez que el LED ha cambiado de estado |
| Delay | short | Tiempo de espera entre cambios de estado |
| Out | boolean | Estado actual del LED |

| Componente |
| ----------- |
| Arduino |
| LED integrado en la placa |

## Funcionamiento
Usando la función ```millis()``` y la variable Millis, se puede controlar el estado del LED comparando la diferencia de estos dos valores respecto a la variable Delay.

Si la diferencia es mayor que la variable Delay, el LED cambia de estado usando la variable Out.