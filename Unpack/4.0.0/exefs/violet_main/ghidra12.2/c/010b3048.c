/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010b3048; name: FUN_010b3048
 */


void FUN_010b3048(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x158);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x160);
    if (lVar5 == lVar4) {
      lVar5 = lVar4;
    }
    else {
      do {
        lVar5 = lVar5 + -0x90;
        FUN_00ed55e0(lVar5);
      } while (lVar4 != lVar5);
      lVar5 = *(long *)(param_1 + 0x158);
    }
    plVar1 = *(long **)(param_1 + 0x170);
    *(long *)(param_1 + 0x160) = lVar4;
    lVar4 = *(long *)(param_1 + 0x168) - lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar4,8);
        goto LAB_010b3064;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,8);
  }
LAB_010b3064:
  lVar4 = *(long *)(param_1 + 0x120);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x128);
    if (lVar5 == lVar4) {
      lVar5 = lVar4;
    }
    else {
      do {
        plVar1 = (long *)(lVar5 + -0x10);
        lVar5 = lVar5 + -0x30;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar4 != lVar5);
      lVar5 = *(long *)(param_1 + 0x120);
    }
    plVar1 = *(long **)(param_1 + 0x138);
    *(long *)(param_1 + 0x128) = lVar4;
    lVar4 = *(long *)(param_1 + 0x130) - lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar4,8);
        goto LAB_010b306c;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,8);
  }
LAB_010b306c:
  lVar4 = *(long *)(param_1 + 0xe8);
  if (lVar4 != 0) {
    plVar1 = *(long **)(param_1 + 0x100);
    *(long *)(param_1 + 0xf0) = lVar4;
    lVar5 = *(long *)(param_1 + 0xf8) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,4);
        goto LAB_010b30b0;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,4);
  }
LAB_010b30b0:
  lVar4 = *(long *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0xb8);
    lVar5 = lVar4;
    if (lVar3 != lVar4) {
      do {
        plVar1 = (long *)(lVar3 + -0x10);
        lVar3 = lVar3 + -0x38;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar4 != lVar3);
      lVar5 = *(long *)(param_1 + 0xb0);
    }
    plVar1 = *(long **)(param_1 + 200);
    *(long *)(param_1 + 0xb8) = lVar4;
    lVar4 = *(long *)(param_1 + 0xc0) - lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar4,8);
        goto LAB_010b3134;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,8);
  }
LAB_010b3134:
  lVar4 = *(long *)(param_1 + 0x78);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x80);
    if (lVar5 == lVar4) {
      lVar5 = lVar4;
    }
    else {
      do {
        lVar5 = lVar5 + -0x70;
        FUN_01118d3c(param_1 + 0x90,lVar5);
      } while (lVar4 != lVar5);
      lVar5 = *(long *)(param_1 + 0x78);
    }
    *(long *)(param_1 + 0x80) = lVar4;
    plVar1 = *(long **)(param_1 + 0x90);
    lVar4 = *(long *)(param_1 + 0x88) - lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar4,8);
        goto LAB_010b31ac;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,8);
  }
LAB_010b31ac:
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010b3228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


