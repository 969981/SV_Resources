/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c59f4; name: FUN_001c59f4
 */


char * FUN_001c59f4(char *param_1,char param_2,long param_3)

{
  char *pcVar1;
  
  if ((param_3 != 0) && (-1 < param_3 + -1)) {
    pcVar1 = param_1 + param_3 + -1;
    do {
      if (*pcVar1 == param_2) {
        return pcVar1;
      }
      pcVar1 = pcVar1 + -1;
    } while (param_1 <= pcVar1);
  }
  return (char *)0x0;
}


