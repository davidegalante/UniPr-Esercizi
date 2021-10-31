((oppostoBinario[i] ^ numeroUnoBinario[i]) ^ c); // c is carry
                    c = ((oppostoBinario[i] & numeroUnoBinario[i]) | (oppostoBinario[i] & c)) | (numeroUnoBinario[i] & c);