function keygen(){
        var passwordArray = [];
        "48 8D 05 F9 FF FF FF 48 89 C6 48 8D 0D".split(' ').forEach(x => passwordArray.push("BGOTHXIY"[parseInt('0x'+x) & 7]));
        return passwordArray.join('');
    }
keygen();