# RAMFood
Este es el proyecto Mejoramiento del servicio de un restaurante mediante el uso de aplicativos digitales y mecanismos.

## Indicaciones para los desarrolladores
---
* Se agregó el atributo estado a la clase plato y bebida.
* Para obtener información del producto se debe usar el metodo ` buscarProductoxId(int id)` de la clase ProductoController,
```
productoController = gcnew ProductoController();
Producto ^ objProducto = productoController->buscarProductoxId(id);
```
* Se obtiene el tipo del producto con ` objProducto->>GetTipo()`, retorna 1 o 2. `1` para `Bebida` y `2` para `Plato`

* Se  trabajará con el siguiente formato para leer los archivos de los pedidos.
``` 
ID;CANTIDAD PEDIDAD; ESTADO
```
* Entrar al archivo plato.h para conocer más acerca de los estados.


---
1. Clonar el repositorio en su computadora. 
2. Crear una rama con su nombre.
3. Realizar los cambios en su rama.
4. Hacer un commit y push a su **rama**. 
	- Opción 1: Desde la consola de comandos.
		- `git add .`
		- `git commit -m "Mensaje"`
		- `git push origin <nombre_rama>`
	- Opción 2: Desde Visual Studio.
		- Click derecho sobre el proyecto.
			- Seleccionar la opción "Team Explorer".
			- Seleccionar la opción "Changes".
			- Escribir un mensaje en el cuadro de texto "Message".
			- Click en el botón "Commit All and Push".

5. Crear un pull request a la rama master.
6. Esperar a que se apruebe el pull request.
