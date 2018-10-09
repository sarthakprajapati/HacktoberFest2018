// Methods to implement Caesar' encryption and decryption with the key of your choice in Java

private String encryptMessage(String talk, int k){

        k = k % 26 + 26;
        StringBuilder encoded = new StringBuilder();
        for (char i : talk.toCharArray()) {
            if (Character.isLetter(i)) {
                if (Character.isUpperCase(i)) {
                    encoded.append((char) ('A' + (i - 'A' + k) % 26 ));
                }
                else {
                    encoded.append((char) ('a' + (i - 'a' + k) % 26 ));
                }
            }
            else {
                encoded.append(i);
            }
        }
        return encoded.toString();
    }

    private String decryptMessage(String m, int key){
       return encryptMessage(m,26-key);
       
    }
