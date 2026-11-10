/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01664b40; name: FUN_01664b40
 */


char * FUN_01664b40(char *param_1,char *param_2,char *param_3,byte *param_4)

{
  if (param_1 != param_2) {
    do {
      if (((*param_1 == *param_3) && (param_1[1] == param_3[1])) &&
         ((*(ulong *)(param_1 + 8) >> ((ulong)*param_4 & 0x3f) & 1) != 0)) {
        return param_1;
      }
      param_1 = param_1 + 0x18;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


