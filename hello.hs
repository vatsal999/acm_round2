myFunction :: Int -> Int -> Int
myFunction a b = a + b

squareit :: (Integral a) => a -> a
squareit a = a * a 

--------- LAMBDA FUNCTION -----------

-- squares a list
squareList :: [Int] -> [Int]
squareList (x:xs) = map(\a -> a * a ) (x:xs)

--------- GUARDS -------------

voteOrNot :: Int -> String
voteOrNot a
    | a >= 18   = "Yes, You can vote!"
    | otherwise = "No, You can't vote!"
