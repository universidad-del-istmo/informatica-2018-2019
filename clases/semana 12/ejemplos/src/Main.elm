module Main exposing (..)

import Browser
import Html exposing (Html)
import Html.Attributes exposing (src, width, height, value)
import Html.Events exposing (onClick, onInput)

type alias Modelo = {url : String, imagenes: List String}

modeloInicial : Modelo
modeloInicial = {url = "", imagenes = []}

type Mensaje = Url String | Agregar

actualizador : Mensaje -> Modelo -> Modelo
actualizador mensaje modelo =
    case mensaje of
        Url url -> {modelo | url = url}
        Agregar -> {url = "", imagenes = modelo.url :: modelo.imagenes}

crearImagen imagen = Html.img [width 300, height 300, src imagen] []

vista : Modelo -> Html Mensaje
vista modelos = Html.div
    []
    [
        Html.div [] (List.map crearImagen modelos.imagenes),
        Html.div [] [],
        Html.div [] [
            Html.input [onInput (\url -> Url url)] [],
            Html.button [onClick Agregar] [Html.text "Agregar"]
        ]
    ]

main = Browser.sandbox {
        init = modeloInicial,
        view = vista,
        update = actualizador
    }