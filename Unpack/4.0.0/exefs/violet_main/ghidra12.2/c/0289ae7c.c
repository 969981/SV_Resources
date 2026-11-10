/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289ae7c; name: FUN_0289ae7c
 */


void FUN_0289ae7c(long *param_1)

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
    FUN_019b5bd8(lVar5 + -8);
    if ((lVar5 + -8 != lVar4) && (FUN_019b5bd8(lVar5 + -0x10), lVar5 + -0x10 != lVar4)) {
      do {
        FUN_019b5bd8(lVar5 + -0x18);
        lVar5 = lVar5 + -8;
      } while (lVar4 + 0x10 != lVar5);
    }
    lVar3 = *param_1;
  }
  param_1[1] = lVar4;
  lVar4 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0289af18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar4 - lVar3,8);
    return;
  }
  FUN_00c48fe8(plVar1,lVar3,lVar4 - lVar3,8);
  return;
}


