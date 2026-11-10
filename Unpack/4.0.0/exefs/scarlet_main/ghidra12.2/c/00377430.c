/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00377430; name: FUN_00377430
 */


long FUN_00377430(long *param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_1[(ulong)param_3 + 4] == 0) {
    param_1[1] = param_1[1] + 1;
    param_1[(ulong)param_3 + 4] = (long)param_2;
  }
  else {
    lVar2 = FUN_00377cc0(*param_2);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  lVar2 = param_1[3];
  param_2[1] = 0;
  param_2[2] = lVar2;
  plVar1 = param_1 + 2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
  }
  param_2[3] = 0;
  *plVar1 = (long)param_2;
  param_1[3] = (long)param_2;
  *param_1 = *param_1 + 1;
  return 0;
}


