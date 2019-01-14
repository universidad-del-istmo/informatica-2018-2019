module Main exposing (..)

import Browser
import Html exposing (Html)
import Html.Events exposing (onClick)

type alias Persona = {nombre: String, apellido: String}
type alias Otra = {apellido: String, nombre: String}

otraPersona : Otra
otraPersona = {apellido="Juan", nombre="Perez"}

type Raza = Labrador | Coquer
type alias Perro = {
        nombre: String,
        raza: Raza
    }

unPerro : Perro
unPerro = {nombre="perro1", raza=Labrador}

nombreCompleto : Persona -> String
nombreCompleto persona = persona.nombre ++ " " ++ persona.apellido

type alias Modelo = Int

modeloInicial : Modelo
modeloInicial = 42

type alias Mensaje = Int

actualizador : Mensaje -> Modelo -> Modelo
actualizador mensaje modelo = modelo + mensaje

vista : Modelo -> Html Mensaje
vista modelo = Html.div
    []
    [
        Html.button [onClick 5] [Html.text "+5"],
        Html.text (String.fromInt modelo),
        Html.button [onClick (-5)] [Html.text "-5"]
    ]

main = Browser.sandbox {
        init = modeloInicial,
        view = vista,
        update = actualizador
    }