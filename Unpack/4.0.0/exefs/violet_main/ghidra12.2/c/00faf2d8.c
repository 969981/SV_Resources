/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00faf2d8; name: FUN_00faf2d8
 */


void FUN_00faf2d8(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar1 = (long *)*(long *)(param_1 + 0x158);
  while (plVar1 != (long *)0x0) {
    plVar7 = (long *)*plVar1;
    if ((long *)plVar1[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[5] + 0x20))();
    }
    plVar6 = *(long **)(param_1 + 0x160);
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x38,8);
      plVar1 = plVar7;
    }
    else {
      FUN_00c48fe8(plVar6,plVar1,0x38,8);
      plVar1 = plVar7;
    }
  }
  lVar4 = *(long *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  if (lVar4 != 0) {
    FUN_027118f0(param_1 + 0x130);
  }
  lVar4 = *(long *)(param_1 + 0xf0);
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0xf8);
    lVar5 = lVar4;
    if (lVar3 != lVar4) {
      do {
        plVar1 = (long *)(lVar3 + -8);
        lVar3 = lVar3 + -0x20;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar4 != lVar3);
      lVar5 = *(long *)(param_1 + 0xf0);
    }
    plVar1 = *(long **)(param_1 + 0x108);
    *(long *)(param_1 + 0xf8) = lVar4;
    lVar4 = *(long *)(param_1 + 0x100) - lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,8);
    }
    else {
      FUN_00c48fe8(plVar1,lVar5,lVar4,8);
    }
  }
  lVar4 = *(long *)(param_1 + 0xb8);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0xc0);
    if (lVar5 == lVar4) {
      lVar5 = lVar4;
    }
    else {
      do {
        plVar1 = (long *)(lVar5 + -8);
        lVar5 = lVar5 + -0x20;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar4 != lVar5);
      lVar5 = *(long *)(param_1 + 0xb8);
    }
    plVar1 = *(long **)(param_1 + 0xd0);
    *(long *)(param_1 + 0xc0) = lVar4;
    lVar4 = *(long *)(param_1 + 200) - lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,8);
    }
    else {
      FUN_00c48fe8(plVar1,lVar5,lVar4,8);
    }
  }
  lVar4 = *(long *)(param_1 + 0x80);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x88);
    if (lVar5 == lVar4) {
      lVar5 = lVar4;
    }
    else {
      do {
        plVar1 = (long *)(lVar5 + -8);
        lVar5 = lVar5 + -0x20;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar4 != lVar5);
      lVar5 = *(long *)(param_1 + 0x80);
    }
    plVar1 = *(long **)(param_1 + 0x98);
    *(long *)(param_1 + 0x88) = lVar4;
    lVar4 = *(long *)(param_1 + 0x90) - lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,8);
    }
    else {
      FUN_00c48fe8(plVar1,lVar5,lVar4,8);
    }
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00faf454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


