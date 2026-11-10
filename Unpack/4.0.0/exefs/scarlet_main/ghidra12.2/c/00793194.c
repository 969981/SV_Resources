/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00793194; name: FUN_00793194
 */


long FUN_00793194(undefined8 param_1,short *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((param_2 != (short *)0x0) && (param_3 != 0)) {
    if (param_3 == 2) {
      if (*param_2 == 0) {
        return 0;
      }
      lVar2 = 0;
      do {
        lVar1 = lVar2 + 2;
        lVar2 = lVar2 + 2;
      } while (*(short *)((long)param_2 + lVar1) != 0);
    }
    else {
      if ((char)*param_2 == '\0') {
        return 0;
      }
      lVar2 = 0;
      do {
        lVar1 = lVar2 + 1;
        lVar2 = lVar2 + 1;
      } while (*(char *)((long)param_2 + lVar1) != '\0');
    }
  }
  return lVar2;
}


