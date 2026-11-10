/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f1460; name: FUN_026f1460
 */


long * FUN_026f1460(long *param_1,long *param_2,long *param_3)

{
  if (param_1 != param_2) {
    do {
      if (((((char)param_1[3] != '\0') && (*param_1 == *param_3)) &&
          ((short)param_1[1] == (short)param_3[1])) && ((int)param_1[2] == 0)) {
        return param_1;
      }
      param_1 = param_1 + 4;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


