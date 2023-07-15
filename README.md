# Gracias por su apoyo JL!!!!!

- Video de periféricos - **Faja transportadora** [ver grabación](https://drive.google.com/file/d/1ZoJ1UyckL4i2Vgmfosw0o1vvmjCuXmLf/view?usp=sharing)

# RAMFood
Este es el proyecto Mejoramiento del servicio de un restaurante mediante el uso de aplicativos digitales y mecanismos.

## Indicaciones para los desarrolladores
---
* Formato del archivo pedidoMesaGeneral.txt concierne a la clase OrdenMesa.

	``` ID_CUENTA;MESA;CUENTA;ESTADO;FECHA ```

	| ID_CUENTA | MESA | CUENTA | ESTADO_cuenta | FECHA |
	|------------|------|--------|--------|-------|

	* ID_CUENTA: Identificador de la cuenta.
	* MESA: Número de la mesa.
	* CUENTA: Cantidad total a pagar. El comensal al darle a pagar cuenta, se calcula el total de la cuenta.
	* ESTADO_cuenta: Estado de la cuenta.

		| ESTADO_cuenta | SIGNIFICADO |
		|:-----------:|:------|
		| 0 | Vacio. La mesa está vacía |
		| 1 | El comensal está haciendo pedidos |
		| 2 | El comensal ya pagó la cuenta |
	* FECHA: Fecha en formato ```DD/MM/AAAA ```.

* Formato del archivo DetallePedidoMesaGeneral.txt concierne a la clase ProductoPedido.

	``` ID_CUENTA;ID_PRODUCTO_PEDIDO;ID_PRODUCTO;CANTIDAD;ESTADO_PEDIDO ```

	| ID_CUENTA | ID_PRODUCTO_PEDIDO | ID_PRODUCTO | CANTIDAD | ESTADO_PEDIDO |
	|------------|------|--------|--------|-------|

	* ID_CUENTA: Identificador de la cuenta.
	* ID_PRODUCTO_PEDIDO: Identificador del producto pedido.
	* ID_PRODUCTO: Identificador del producto.
	* CANTIDAD: Cantidad del producto.
	* ESTADO_PEDIDO: Estado del pedido. 
		* La interpretación dependerá del rol.

		| ESTADO_PEDIDO | SIGNIFICADO |
		|:-----------:|:------|
		| 0 | Aun no se está preparando |
		| 1 | Se está preparando (un chef tomó el pedido) |
		| 2 | Listo para entregar (el chef terminó de preparar el pedido) |
		| 3 | Entregado (el asistente entregó el pedido) |


* Para obtener información del producto se debe usar el metodo ` buscarProductoxId(int id)` de la clase ProductoController,
```
productoController = gcnew ProductoController();
Producto ^ objProducto = productoController->buscarProductoxId(id);
```

* Se obtiene el tipo del producto con ` objProducto->GetTipo()`

|          | Tipo | 
|----------|:----------:|
| Bebida   |     1    |
| Plato    |	2     |

---
## Indicaciones para subir cambios al repositorio
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
