/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0056816c; name: FUN_0056816c
 */


void FUN_0056816c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar1 = param_1[1];
  if (lVar1 == lVar2) {
    lVar1 = lVar2;
  }
  else {
    do {
      lVar1 = lVar1 + -8;
      FUN_0056b3f0(lVar1);
    } while (lVar2 != lVar1);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x005681d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar1,param_1[2] - lVar1,8);
  return;
}


