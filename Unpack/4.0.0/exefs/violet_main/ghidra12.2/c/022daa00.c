/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022daa00; name: FUN_022daa00
 */


void FUN_022daa00(long param_1)

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
        goto LAB_022daa58;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_022daa58:
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
        goto LAB_022daa9c;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_022daa9c:
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
        goto LAB_022daae0;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_022daae0:
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    plVar1 = *(long **)(param_1 + 0x58);
    lVar5 = *(long *)(param_1 + 0x50) << 3;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,1);
        goto LAB_022daae8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,1);
  }
LAB_022daae8:
  FUN_022dabd8(param_1 + 8);
  return;
}


