/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e675c; name: FUN_011e675c
 */


void FUN_011e675c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0xd0);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0xd8);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar1 = (long *)(lVar4 + -0x18);
        lVar4 = lVar4 + -0x30;
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
        FUN_00c48fe8(plVar1,lVar4,lVar5,0x10);
        goto LAB_011e67f8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,0x10);
  }
LAB_011e67f8:
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0xa0);
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
        goto LAB_011e6878;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_011e6878:
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}


