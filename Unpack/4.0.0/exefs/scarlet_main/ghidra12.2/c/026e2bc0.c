/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e2bc0; name: FUN_026e2bc0
 */


void FUN_026e2bc0(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar4 = param_1[1];
  lVar2 = lVar5;
  if (lVar4 != lVar5) {
    do {
      lVar2 = lVar4 + -8;
      lVar4 = lVar4 + -0x10;
      FUN_01751d6c(lVar2);
    } while (lVar5 != lVar4);
    lVar2 = *param_1;
  }
  param_1[1] = lVar5;
  lVar5 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar3 = FUN_00c4e564(plVar1);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x026e2c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2,lVar5 - lVar2,8);
    return;
  }
  FUN_00c48fe8(plVar1,lVar2,lVar5 - lVar2,8);
  return;
}


