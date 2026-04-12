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
    mayorPersona = lista[0]
    
    for persona in lista:
            if mayorPersona["num"] < persona["num"]:
                mayorPersona = persona;
            else:
                continue

    return mayorPersona

def buscarMinNum(lista):
    menorPersona = lista[0]
    
    for persona in lista:
            if menorPersona["num"] > persona["num"]:
                menorPersona = persona;
            else:
                continue

    return menorPersona
            

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