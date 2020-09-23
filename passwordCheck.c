void passwordCheck(){
    char userInput[] = { 'a', 'b', 'c' };
    int rax = 0; // our index
	char r8[] = { 'B', 'G', 'O', 'T', 'H', 'X', 'I', 'Y' }; //'random string'
	char ecx[] = { 0x48, 0x8D, 0x05, 0xF9, 0xFF, 0xFF, 0xFF, 0x48, 0x89, 0xC6, 0x48, 0x8D, 0x0D };
	while (rax < 13) {
        if (userInput[rax] != r8[ecx[rax]&7]) {
            goto invalid_password;
		}
		rax++;
	}
    goto success;
}