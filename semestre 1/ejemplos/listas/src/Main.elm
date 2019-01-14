module Main exposing (..)

-- Tipo Polimorfico
-- concat : List a -> List a -> List b

-- Tipo Monomorfico
-- concat : List Int -> List Int -> List Int
-- concat bs cs =
--    case (bs,cs) of
--        ([], _) -> cs
--        (_, []) -> bs
--        (b::bss, _) -> b::concat bss cs

zip : List a -> List b -> List (a,b)
zip bss css =
    case (bss, css) of
        ([], _) -> []
        (_, []) -> []
        (a::bs, b::cs) -> (a,b)::zip bs cs 

diverge a = diverge a

type Maybe a = Some a | None 

get : List a -> Int -> Maybe a
get bss i =
    case (i,bss) of
        (_, []) -> None
        (0, b::_) -> Some b
        (ix, b::bs) -> get bs (ix-1)

