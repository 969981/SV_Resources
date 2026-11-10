/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eaa4c8; name: FUN_01eaa4c8
 */


void FUN_01eaa4c8(long *param_1)

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
      lVar3 = lVar3 + -0x40;
      FUN_01946c30(lVar3);
    } while (lVar4 != lVar3);
    lVar3 = *param_1;
  }
  param_1[1] = lVar4;
  lVar4 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = FUN_00c4e564(plVar1);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01eaa544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar4 - lVar3,8);
    return;
  }
  FUN_00c48fe8(plVar1,lVar3,lVar4 - lVar3,8);
  return;
}


