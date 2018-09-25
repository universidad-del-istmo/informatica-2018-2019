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