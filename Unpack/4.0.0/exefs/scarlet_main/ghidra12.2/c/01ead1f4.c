/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ead1f4; name: FUN_01ead1f4
 */


void FUN_01ead1f4(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_1[1];
  lVar3 = lVar4;
  if (lVar5 != lVar4) {
    FUN_00dea7e0(lVar5 + -0x68);
    if ((lVar5 + -0x68 != lVar4) && (FUN_00dea7e0(lVar5 + -0xd0), lVar5 + -0xd0 != lVar4)) {
      do {
        FUN_00dea7e0(lVar5 + -0x138);
        lVar5 = lVar5 + -0x68;
      } while (lVar4 + 0xd0 != lVar5);
    }
    lVar3 = *param_1;
  }
  param_1[1] = lVar4;
  lVar4 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01ead290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar4 - lVar3,8);
    return;
  }
  FUN_00c48fe8(plVar1,lVar3,lVar4 - lVar3,8);
  return;
}


