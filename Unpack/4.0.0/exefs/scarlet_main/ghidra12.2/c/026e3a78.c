/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e3a78; name: FUN_026e3a78
 */


void FUN_026e3a78(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar3) {
    param_1[2] = lVar2 + -0x10;
    FUN_01751d6c(lVar2 + -8);
    lVar2 = param_1[2];
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar2 = param_1[3];
  plVar4 = *(long **)param_1[4];
  uVar1 = FUN_00c4e564(plVar4);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x026e3af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar2 - lVar3,8);
    return;
  }
  FUN_00c48fe8(plVar4,lVar3,lVar2 - lVar3,8);
  return;
}


