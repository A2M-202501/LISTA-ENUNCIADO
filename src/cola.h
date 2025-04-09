#ifndef COLA_H_
#define COLA_H_
#include <stdlib.h>
#include <stdbool.h>

typedef struct cola cola_t;

/**
 * Crea una cola vacía.
 *
 * Devuelve NULL si no se pudo crear la cola.
 */
cola_t *cola_crear();

/**
 * Encola un elemento en la cola.
 *
 * Devuelve true si pudo encolar o false si no pudo.
 */
bool cola_encolar(cola_t *cola, void *elemento);

/**
 * Desencola un elemento de la cola y lo devuelve.
 *
 * Devuelve NULL si no hay elementos en la cola.
 */
void *cola_desencolar(cola_t *cola);

/**
 * Devuelve true si la cola está vacía.
 *
 * Devuelve false si no lo está.
 */
bool cola_vacia(cola_t *cola);

/**
 * Devuelve la cantidad de elementos presentes en la cola.
 *
 * Devuelve 0 si no existe la cola.
 */
size_t cola_tamanio(cola_t *cola);

/**
 * Devuelve el elemento en el frente de la cola sin desencolarlo.
 *
 * Devuelve NULL si no hay elementos en la cola.
 */
void *cola_frente(cola_t *cola);

/**
 * Destruye la cola.
 */
void cola_destruir(cola_t *cola);

#endif // COLA_H_
