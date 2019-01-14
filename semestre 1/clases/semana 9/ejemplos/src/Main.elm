module Main exposing (..)

type Operacion =
    And Operacion Operacion
    | Or Operacion Operacion
    | Valor Bool


reducir : (Bool -> Bool -> Bool, Bool -> Bool -> Bool) -> Operacion -> Bool
reducir (iAnd, iOr) oper =
    case oper of
        And op1 op2 -> iAnd (reducir (iAnd, iOr) op1) (reducir (iAnd, iOr) op2)
        Or op1 op2 -> iOr (reducir (iAnd, iOr) op1) (reducir (iAnd, iOr) op2)
        Valor bool -> bool

diverge a = diverge a

toStringOtro str = case  (String.toInt (String.fromList str)) of
    Just valor -> valor
    Nothing -> 0

lista = String.toList "1+2*3" 