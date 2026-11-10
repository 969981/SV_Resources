/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02899ea0; name: FUN_02899ea0
 */


long * FUN_02899ea0(long *param_1,long *param_2,char *param_3)

{
  char *pcVar1;
  
  if (param_1 != param_2) {
    do {
      if (((*param_1 != 0) && (pcVar1 = (char *)FUN_019462f4(), *pcVar1 == *param_3)) &&
         (pcVar1[1] == param_3[1])) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


