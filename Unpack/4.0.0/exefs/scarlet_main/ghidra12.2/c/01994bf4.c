/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01994bf4; name: FUN_01994bf4
 */


void FUN_01994bf4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if (*(long *)(param_1 + 0x1f0) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x1c8);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x1d0);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x198) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x198) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x198) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x198) + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x198) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  if (*(long *)(param_1 + 600) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x230);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x238);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x230) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x200) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x200) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x200) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x200) + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x200) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 600) = 0;
  }
  if (*(long *)(param_1 + 0x2c0) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x298);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x2a0);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x270);
    *(undefined8 *)(param_1 + 0x298) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x268) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x268) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x268) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x268) + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x268) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  if (*(long *)(param_1 + 0x328) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x300);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x308);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x2d8);
    *(undefined8 *)(param_1 + 0x300) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x2d0) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x2d0) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x2d0) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x2d0) + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x2d0) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x328) = 0;
  }
  if (*(long *)(param_1 + 0x390) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x368);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x370);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x20,8);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x20,8);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x340);
    *(undefined8 *)(param_1 + 0x368) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x338) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x338) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x338) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x338) + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x338) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x390) = 0;
  }
  if (*(long *)(param_1 + 0x3f8) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x3d0);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x3d8);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x3a8);
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x3a0) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x3a0) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x3a0) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x3a0) + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x3a0) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  if (*(long *)(param_1 + 0x460) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x438);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x440);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x410);
    *(undefined8 *)(param_1 + 0x438) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x408) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x408) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x408) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x408) + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x408) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x460) = 0;
  }
  if (*(long *)(param_1 + 0x4c8) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x4a0);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x4a8);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x478);
    *(undefined8 *)(param_1 + 0x4a0) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x470) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x470) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x470) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x470) + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x470) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x4c8) = 0;
  }
  if (*(long *)(param_1 + 0x530) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x508);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x510);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x20,8);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x20,8);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x4e0);
    *(undefined8 *)(param_1 + 0x508) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x4d8) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x4d8) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x4d8) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x4d8) + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x4d8) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x530) = 0;
  }
  if (*(long *)(param_1 + 0x598) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x570);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x578);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x18,4);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x548);
    *(undefined8 *)(param_1 + 0x570) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x540) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x540) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x540) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x540) + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x540) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x598) = 0;
  }
  if (*(long *)(param_1 + 0x600) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x5d8);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x5e0);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x20,4);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x20,4);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x5b0);
    *(undefined8 *)(param_1 + 0x5d8) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x5a8) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x5a8) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x5a8) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x5a8) + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x5a8) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x600) = 0;
  }
  if (*(long *)(param_1 + 0x668) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x640);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x648);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x20,4);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x20,4);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x618);
    *(undefined8 *)(param_1 + 0x640) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x610) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x610) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x610) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x610) + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x610) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x668) = 0;
  }
  if (*(long *)(param_1 + 0x6d0) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x6a8);
    while (plVar1 != (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x6b0);
      plVar7 = (long *)*plVar1;
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x28,4);
        plVar1 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar6,plVar1,0x28,4);
        plVar1 = plVar7;
      }
    }
    uVar2 = *(ulong *)(param_1 + 0x680);
    *(undefined8 *)(param_1 + 0x6a8) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x678) + uVar4 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x678) + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x678) + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x678) + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x678) + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x6d0) = 0;
  }
  if (*(long *)(param_1 + 0x738) != 0) {
    plVar1 = (long *)(param_1 + 0x6e0);
    FUN_019959e0(plVar1,*(undefined8 *)(param_1 + 0x710));
    uVar2 = *(ulong *)(param_1 + 0x6e8);
    *(undefined8 *)(param_1 + 0x710) = 0;
    if (uVar2 != 0) {
      uVar3 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*plVar1 + uVar4 * 8) = 0;
          *(undefined8 *)(*plVar1 + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*plVar1 + uVar4 * 8 + 0x10) = 0;
          lVar5 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*plVar1 + lVar5 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar3 != 0) {
        lVar5 = uVar4 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar5) = 0;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x738) = 0;
  }
  if (*(code **)(param_1 + 0xb0) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x019959c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xb0))(param_1 + 0xd0);
  return;
}


