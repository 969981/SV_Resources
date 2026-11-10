/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0056d254; name: FUN_0056d254
 */


void FUN_0056d254(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar3 = param_1[1];
  if (lVar3 == lVar4) {
    lVar3 = lVar4;
  }
  else {
    do {
      puVar1 = (undefined8 *)(lVar3 + -0x18);
      lVar2 = lVar3 + -0x20;
      lVar3 = lVar3 + -0x28;
      FUN_01f6f680(lVar2,*puVar1);
    } while (lVar4 != lVar3);
    lVar3 = *param_1;
  }
  param_1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x0056d2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar3,param_1[2] - lVar3,8);
  return;
}


