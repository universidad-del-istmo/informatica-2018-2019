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
fold f base lista =
    case lista of
        [] -> base
        x::xs -> f (fold f base xs) x

promedio lista =
    let
        (sum_, count_) = fold (\(sum, count) valor -> (sum +valor, count + 1)) (0,0) lista
    in
        sum_/count_

map2 f = fold (\p e -> f e :: p) []