/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f4300; name: FUN_018f4300
 */


void FUN_018f4300(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0xf8);
  if (lVar4 != 0) {
    plVar1 = *(long **)(param_1 + 0x110);
    *(long *)(param_1 + 0x100) = lVar4;
    lVar5 = *(long *)(param_1 + 0x108) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_018f4358;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_018f4358:
  lVar4 = *(long *)(param_1 + 0xc0);
  if (lVar4 != 0) {
    plVar1 = *(long **)(param_1 + 0xd8);
    *(long *)(param_1 + 200) = lVar4;
    lVar5 = *(long *)(param_1 + 0xd0) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_018f439c;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_018f439c:
  lVar4 = *(long *)(param_1 + 0x78);
  if (lVar4 != 0) {
    plVar1 = *(long **)(param_1 + 0x90);
    *(long *)(param_1 + 0x80) = lVar4;
    lVar5 = *(long *)(param_1 + 0x88) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_018f43e0;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_018f43e0:
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    plVar1 = *(long **)(param_1 + 0x58);
    lVar5 = *(long *)(param_1 + 0x50) << 3;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,1);
        goto LAB_018f43e8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,1);
  }
LAB_018f43e8:
  FUN_01f9004c(param_1 + 8);
  return;
}


