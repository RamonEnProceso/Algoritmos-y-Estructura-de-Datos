#Lista de Estudiantes

#Librería para importar números aleatorio
import random

#Se declaran las personas y se les asigna un número al azar del 1 al 100 a cada una
Ale = {"nombre": "Ale Sergi", "num":random.randint(1,100)}
Julieta = {"nombre": "Julieta Gattas", "num":random.randint(1,100)}
Chano = {"nombre": "Chano", "num":random.randint(1,100)}
Pachano = {"nombre": "Pachano", "num":random.randint(1,100)}
Ricardo =  {"nombre": "Ricardo Fort", "num":random.randint(1,100)}

lista = [Ale, Julieta, Chano, Pachano, Ricardo] #Se crea la lista con las personas
orden = "desc" #o "asc" para Ascendente

def buscarMayorNum(lista):
    mayorPersona = lista[0] #Por default, la mayor va a ser la primera persona
    
    for persona in lista: #Se itera la lista
            if mayorPersona["num"] < persona["num"]: #Si el número de la persona mayor es menor a la persona seleccionada
                mayorPersona = persona #La persona mayor número ahora es la persona seleccionada
            else:
                continue #Sino, continua

    return mayorPersona #Devuelve la persona con mayor número

def buscarMinNum(lista):
    menorPersona = lista[0] #Por default, la menor va a ser la primera persona
    
    for persona in lista:
            if menorPersona["num"] > persona["num"]: #Si el número de la persona menor es mayor a la persona seleccionada
                menorPersona = persona #La persona con menor número ahora es la persona seleccionada
            else:
                continue #Sino, continua

    return menorPersona #Devuelve la persona con menor número
            

def ordenarLista (lista, orden):
    listaOrdenada = []
    
    if (orden == "desc"): #Si el orden es descendiente
        
        while (len(lista) > 0): #Mientras hayan personas en la lista original
            listaOrdenada.append(buscarMayorNum(lista)) #Buscar la mayor y ponerla en la lista nueva
            lista.remove(buscarMayorNum(lista)) #Quitar la mayor de la lista original
        return listaOrdenada 
    
    if (orden == "asc"): #Si el orden es ascendente
        
        while (len(lista) > 0): #Mientras hayan personas en la lista original
            listaOrdenada.append(buscarMinNum(lista)) #Buscar la mayor y ponerla en la lista nueva
            lista.remove(buscarMinNum(lista)) #Quitar la mayor de la lista original
        return listaOrdenada
    
print(lista) #Imprime en consola la lista original
print(ordenarLista(lista,orden)) #Imprime en consola la lista ordenada