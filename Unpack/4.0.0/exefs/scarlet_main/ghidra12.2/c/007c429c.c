/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c429c; name: FUN_007c429c
 */


char * FUN_007c429c(char *param_1,char param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_1;
    if (cVar1 == param_2) {
      return param_1;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return (char *)0x0;
}


