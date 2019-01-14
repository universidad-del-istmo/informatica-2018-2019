module Main exposing (..)

comp f g x = g (f x)

duplicar ns = case ns of
    [] -> []
    x::xs -> 2*x::duplicar xs

negar ns = case ns of
    [] -> []
    x::xs -> not x :: negar xs

map f ns = case ns of
    [] -> []
    x::xs -> f x :: map f xs

multiplicar : Int -> List Int -> List Int
multiplicar factor ns =
    let
        operacion x = factor * x
        respuesta = map operacion ns
    in
        respuesta

multiplicar2 : Int -> List Int -> List Int
multiplicar2 factor ns = map (\x -> factor * x) ns

fold : (b -> a -> b) -> b -> List a -> b
fold acc base lista =
    case lista of
        [] -> base
        x::xs -> acc (fold f base xs) x

promedio lista =
    let
        (sum_, count_) = fold (\(sum, count) valor -> (sum +valor, count + 1)) (0,0) lista
    in
        sum_/count_

map2 f = fold (\p e -> f e :: p) []

filtrar : (a -> Bool) -> List a -> List a
filtrar filtro valores =
    let
        acc previo valor =
            if filtro previo
            then valor::previo
            else previo
    in
        fold acc [] valores

takeR : Int -> List a -> List a
takeR n valores =
    if n == 0
    then []
    else case valores of
        [] -> []
        x::xs -> x::take (n-1) xs

reverseF xs =
    fold (\s valor -> ) [] xs

takeF : Int -> List a -> List a
takeF n valores =
    let
        acc (n, previos) valor = if n == 0 then (n, previos) else (n-1, valor::previos)
        (_, resultado) = fold acc (n,[]) valores
    in
        resultado


