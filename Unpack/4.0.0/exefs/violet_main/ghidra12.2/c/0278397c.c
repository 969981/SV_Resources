/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278397c; name: FUN_0278397c
 */


void FUN_0278397c(long *param_1)

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
      lVar2 = lVar4 + -0x28;
      lVar4 = lVar4 + -0x70;
      FUN_02783744(lVar2,0);
    } while (lVar5 != lVar4);
    lVar2 = *param_1;
  }
  param_1[1] = lVar5;
  lVar5 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar2,lVar5 - lVar2,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02783a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar2,lVar5 - lVar2,8);
  return;
}


