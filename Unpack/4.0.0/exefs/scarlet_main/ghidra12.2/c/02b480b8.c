/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b480b8; name: FUN_02b480b8
 */


void FUN_02b480b8(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 200);
  if (lVar4 != 0) {
    plVar1 = *(long **)(param_1 + 0xe0);
    *(long *)(param_1 + 0xd0) = lVar4;
    lVar5 = *(long *)(param_1 + 0xd8) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_02b48110;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_02b48110:
  lVar4 = *(long *)(param_1 + 0x78);
  if (lVar4 != 0) {
    plVar1 = *(long **)(param_1 + 0x90);
    *(long *)(param_1 + 0x80) = lVar4;
    lVar5 = *(long *)(param_1 + 0x88) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,0x10);
        goto LAB_02b48154;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,0x10);
  }
LAB_02b48154:
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  FUN_013f0d04();
  lVar5 = *(long *)(param_1 + 0x40);
  plVar1 = *(long **)(param_1 + 0x58);
  lVar4 = *(long *)(param_1 + 0x50) - lVar5;
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar5,lVar4,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b481a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,8);
  return;
}


