# cs50_substitution
Implemented a substitution cipher per CS50 Problem Set 2

1. Get a key from the user via command-line arguments
2. Validated the Key
3. Prompted for plaintext
4. Encrypted plaintext

Used function 'validate_key' to:
1. check if the length of the key was 26
2. stored the characters in an arry for tracking
3. checked if the characters were alphabetical
4. checked if the characters were repeat characters

Used function 'substitute' to implement the substitution of the characters based on the key provided. 

tested code with:

"A" as "Z" using ZYXWVUTSRQPONMLKJIHGFEDCBA as key
"a" as "z" using ZYXWVUTSRQPONMLKJIHGFEDCBA as key
"ABC" as "NJQ" using NJQSUYBRXMOPFTHZVAWCGILKED as key
"XyZ" as "KeD" using NJQSUYBRXMOPFTHZVAWCGILKED as key
"This is CS50" as "Cbah ah KH50" using YUKFRNLBAVMWZTEOGXHCIPJSQD as key
"This is CS50" as "Cbah ah KH50" using yukfrnlbavmwzteogxhcipjsqd as key
"This is CS50" as "Cbah ah KH50" using YUKFRNLBAVMWZteogxhcipjsqd as key
encrypts all alphabetic characters using DWUSXNPQKEGCZFJBTLYROHIAVM as key
does not encrypt non-alphabetical characters using DWUSXNPQKEGCZFJBTLYROHIAVM as key

