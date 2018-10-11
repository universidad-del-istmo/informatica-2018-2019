module Main exposing (main)

import Browser
import Canvas
import CanvasColor as Color exposing (Color)
import Html exposing (Html)
import Html.Attributes exposing (class, style)

-- Las coordenadas de cada una de las esquinas del
-- poligono que se dibujara
fractal = [
    (300, 200),
    (400, 400),
    (250, 250),
    (200, 400),
    (300, 500)]

koch reps = fractal

-- Dada una lista de coordenadas, esta funcion
-- genera los comandos necesarios para dibujar
-- las lineas que connectan dichas coordenadas
dibujar triangulo context =
    let
        acc (x0,y0) (x,y) s = s |> Canvas.moveTo x0 y0 |> Canvas.lineTo x y
    in
        case triangulo of
            (x0,y0)::xs ->
                List.foldl (acc (x0,y0)) (Canvas.moveTo x0 y0 context) xs
                |> Canvas.lineTo x0 y0
            _ -> context

-- Funcion que genera el html que corresponde al
-- poligono siendo dibujado
view : Html msg
view =
    let
        width = 600
        height = 600
        poligono ctx = dibujar (koch 5) ctx
    in
        Canvas.element
            width
            height
            [ style "border" "5px solid yellow" ]
            (
                Canvas.empty
                |> Canvas.clearRect 0 0 width height
                |> poligono
                |> Canvas.stroke
            )

main = view