/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045ad70; name: FUN_0045ad70
 */


long FUN_0045ad70(undefined1 *param_1,char *param_2,ulong param_3)

{
  size_t sVar1;
  long lVar2;
  
  if (param_3 < 2) {
    lVar2 = 0;
    if (param_3 == 0) goto LAB_0045adc4;
  }
  else {
    lVar2 = 0;
    do {
      if (param_2[lVar2] == '\0') {
        param_2 = param_2 + lVar2;
        param_1 = param_1 + lVar2;
        goto LAB_0045adc0;
      }
      param_1[lVar2] = param_2[lVar2];
      lVar2 = lVar2 + 1;
    } while (param_3 - 1 != lVar2);
    param_2 = param_2 + lVar2;
    param_1 = param_1 + lVar2;
    lVar2 = param_3 - 1;
  }
LAB_0045adc0:
  *param_1 = 0;
LAB_0045adc4:
  sVar1 = strlen(param_2);
  return sVar1 + lVar2;
}


