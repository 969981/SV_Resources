/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010e0b2c; name: FUN_010e0b2c
 */


void FUN_010e0b2c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x178);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x180);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar1 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x178);
    }
    plVar1 = *(long **)(param_1 + 400);
    *(long *)(param_1 + 0x180) = lVar5;
    lVar5 = *(long *)(param_1 + 0x188) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_010e0bc8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_010e0bc8:
  lVar5 = *(long *)(param_1 + 0x140);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x148);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar1 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x140);
    }
    plVar1 = *(long **)(param_1 + 0x158);
    *(long *)(param_1 + 0x148) = lVar5;
    lVar5 = *(long *)(param_1 + 0x150) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_010e0c50;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_010e0c50:
  lVar5 = *(long *)(param_1 + 0x108);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x110);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar1 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x108);
    }
    plVar1 = *(long **)(param_1 + 0x120);
    *(long *)(param_1 + 0x110) = lVar5;
    lVar5 = *(long *)(param_1 + 0x118) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_010e0cd8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_010e0cd8:
  lVar5 = *(long *)(param_1 + 0xd0);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0xd8);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar1 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0xd0);
    }
    plVar1 = *(long **)(param_1 + 0xe8);
    *(long *)(param_1 + 0xd8) = lVar5;
    lVar5 = *(long *)(param_1 + 0xe0) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_010e0d60;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_010e0d60:
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0xa0);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar1 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x98);
    }
    plVar1 = *(long **)(param_1 + 0xb0);
    *(long *)(param_1 + 0xa0) = lVar5;
    lVar5 = *(long *)(param_1 + 0xa8) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_010e0de8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_010e0de8:
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 != 0) {
    plVar1 = *(long **)(param_1 + 0x70);
    *(long *)(param_1 + 0x60) = lVar5;
    lVar4 = *(long *)(param_1 + 0x68) - lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar4,4);
        goto LAB_010e0e2c;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,4);
  }
LAB_010e0e2c:
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar1 = (long *)(lVar4 + -0x10);
        lVar4 = lVar4 + -0x28;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x20);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    *(long *)(param_1 + 0x28) = lVar5;
    lVar5 = *(long *)(param_1 + 0x30) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_010e0eac;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_010e0eac:
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010e0ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


