/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275a6b0; name: FUN_0275a6b0
 */


void FUN_0275a6b0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
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
      lVar3 = lVar3 + -8;
      FUN_0275a030(lVar3);
    } while (lVar4 != lVar3);
    lVar3 = *param_1;
  }
  param_1[1] = lVar4;
  lVar4 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = FUN_00c4e564(plVar1);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0275a72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar4 - lVar3,8);
    return;
  }
  FUN_00c48fe8(plVar1,lVar3,lVar4 - lVar3,8);
  return;
}


