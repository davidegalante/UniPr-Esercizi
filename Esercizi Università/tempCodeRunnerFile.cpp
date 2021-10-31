while (size >= 0 || temp == 1)
                {
                temp += ((size >= 0)? numero[size] - 0: 0);
                temp += ((size >= 0)? uno[size] - 0: 0);
                risultato[size] = temp % 2 + 0;
                temp /= 2;
                size--;
                }