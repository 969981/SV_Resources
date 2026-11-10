/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02752a30; name: FUN_02752a30
 */


void FUN_02752a30(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_02752d64();
    lVar4 = *(long *)(param_1 + 0x40);
    plVar1 = *(long **)(param_1 + 0x58);
    lVar5 = *(long *)(param_1 + 0x50) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_02752a8c;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_02752a8c:
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  FUN_02bc71a0();
  lVar5 = *(long *)(param_1 + 8);
  plVar1 = *(long **)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x18) - lVar5;
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar5,lVar4,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02752ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,8);
  return;
}


