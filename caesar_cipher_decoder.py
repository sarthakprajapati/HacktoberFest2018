#Caesar Cipher
def encrypt(text,s):
    result = ""
 
    # traverse text
    for i in range(len(text)):
        char = text[i]
 
        # Encrypt uppercase characters
        if (char.isupper()):
            result += chr((ord(char) + s-65) % 26 + 65)
 
        # Encrypt lowercase characters
        else:
            result += chr((ord(char) + s - 97) % 26 + 97)
 
    return result
 
#check the above function
text = "CAESARCIPHER"
s = 4
print "Text     : " + text
print "Shift    : " + str(s)
print "Cipher   : " + encrypt(text,s)

#Cipher(n) = De-cipher(26-n)
print "Decipher : " + encrypt(encrypt(text,s),26-s)

#Brute force Attack
for key in range(1, 26 + 1):
    result=encrypt(encrypt(text,s),26-key)
    if text ==result:
        print "Cipher Cracked"
        print "Key is " + str(key)
        print "Deciphered Text is: "  + encrypt(encrypt(text,key),26-key)            
