### Instructions for the Code

This code demonstrates a simple character-based encryption and decryption mechanism using a custom algorithm. It allows the user to encrypt a message with a given key and decrypt it back to the original message.

---

### **Components of the Code**

1. **Header Files**

   - `#include<iostream>`: Used for input/output operations.
   - `#include<string>`: Enables the use of the `std::string` class for storing and manipulating text.

2. **Encryption Function**

   - **Name**: `encrypt`
   - **Purpose**: Encrypts a given text using a key.
   - **Logic**:
     - Each character in the text is shifted by the encryption key.
     - Characters are wrapped around if they exceed the ASCII printable range (32–126).
   - **Parameters**:
     - `string text`: The input text to encrypt.
     - `int key`: The key used for encryption (a number between 1 and 94).
   - **Return Value**: Encrypted string.

3. **Decryption Function**

   - **Name**: `dencrypt`
   - **Purpose**: Decrypts an encrypted text back to its original form using the same key.
   - **Logic**:
     - Each character in the encrypted text is shifted backward by the key.
     - Characters are wrapped around if they go below the ASCII printable range.
   - **Parameters**:
     - `string text`: The encrypted text to decrypt.
     - `int key`: The key used for decryption.
   - **Return Value**: Decrypted string.

4. **Main Function**
   - Accepts a message and an encryption key from the user.
   - Validates the key to ensure it is between 1 and 94 (inclusive).
   - Performs the following operations:
     1. Encrypts the message using the `encrypt` function.
     2. Displays the encrypted message.
     3. Decrypts the message using the `dencrypt` function.
     4. Displays the decrypted message.

---

### **How to Use the Code**

1. **Compile the Code**:

   - Use a C++ compiler such as `g++`.
   - Example:
     ```bash
     g++ -o encryption_program encryption_program.cpp
     ```

2. **Run the Program**:

   - Execute the compiled binary.
   - Example:
     ```bash
     ./encryption_program
     ```

3. **Input Data**:

   - Enter the message to be encrypted when prompted.
   - Enter an encryption key (a number between 1 and 94).

4. **Output**:
   - The program will display:
     - The encrypted message.
     - The decrypted message.

---

### **Example Execution**

**Input**:

```
Enter Message to Encrepti: Hello, World!
Enter Encreprion Key 1-94: 5
```

**Output**:

```
Encrepted Message: Mjqqt,1%twqi&
Dencrepted Message : Hello, World!
```

---

### **Key Points**

1. **Key Range**:

   - The key must be between 1 and 94 to ensure proper wrapping within the ASCII printable range.

2. **Wrapping Logic**:

   - If the ASCII value exceeds 126 during encryption, it wraps back to 32.
   - If it goes below 32 during decryption, it wraps back to 126.

3. **Validation**:

   - The program validates the key and exits if it is outside the allowed range.

4. **Use Cases**:
   - This simple encryption system is not secure for critical applications but serves well for educational purposes or simple data obfuscation.
