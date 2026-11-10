/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01118d3c; name: FUN_01118d3c
 */


void FUN_01118d3c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_2[7];
  if (lVar5 != 0) {
    lVar1 = param_2[9];
    plVar2 = (long *)param_2[10];
    param_2[8] = lVar5;
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,4);
        goto LAB_01118d94;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,4);
  }
LAB_01118d94:
  lVar5 = *param_2;
  if (lVar5 == 0) {
    return;
  }
  lVar1 = param_2[2];
  plVar2 = (long *)param_2[3];
  param_2[1] = lVar5;
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01118de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,4);
  return;
}


