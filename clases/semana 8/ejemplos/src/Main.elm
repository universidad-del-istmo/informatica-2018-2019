module Main exposing (..)

type Natural = Suc Natural | Cero

enteroANatural : Int -> Natural
enteroANatural i = if i == 0
    then Cero
    else Suc (enteroANatural (i - 1))

naturalAEntero : Natural -> Int
naturalAEntero n = case n of
    Cero -> 0
    Suc i -> 1 + naturalAEntero i

sumar n1 n2 = case (n1,n2) of
    (Cero, n2_) -> n2_
    (n1_, Cero) -> n1_
    (Suc n1_, n2_) -> Suc (sumar n1_ n2_)

mult n1 n2 = case (n1, n2) of
    (Cero, n2_) -> Cero
    (n1_, Cero) -> Cero
    (Suc n1_, n2_) -> sumar n2_ (mult n1_ n2_)

type Figura = Circulo Float
    | Cuadrado Float
    | Triangulo Float Float

area : Figura -> Float
area figura = case figura of
    Circulo r -> Basics.pi * r * r
    Cuadrado l -> l*l
    Triangulo l1 l2 -> l1 * (sqrt ((l1/2)*(l1/2) + l2*l2)) 

type MiList a = Cons a (MiList a) | Nil

crearLista : List a -> MiList a
crearLista l = case l of
    [] -> Nil
    x::xs -> Cons x (crearLista xs)


type alias IntList = MiLista Int

crearIntList : List Int -> IntList





