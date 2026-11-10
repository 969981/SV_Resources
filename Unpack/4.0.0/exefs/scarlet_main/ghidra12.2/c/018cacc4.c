/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018cacc4; name: FUN_018cacc4
 */


void FUN_018cacc4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  for (plVar9 = *(long **)(param_1 + 0x308); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    if (plVar9[0x11] != 0) {
      puVar6 = (undefined8 *)plVar9[0xc];
      if (puVar6 != (undefined8 *)0x0) {
        plVar8 = (long *)*puVar6;
        if ((long *)puVar6[5] != (long *)0x0) {
          (**(code **)(*(long *)puVar6[5] + 0x20))();
        }
        plVar10 = (long *)plVar9[0xd];
        uVar1 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,puVar6,0x38,8);
        }
        else {
          FUN_00c48fe8(plVar10,puVar6,0x38,8);
        }
        if (plVar8 != (long *)0x0) {
          plVar10 = (long *)*plVar8;
          if ((long *)plVar8[5] != (long *)0x0) {
            (**(code **)(*(long *)plVar8[5] + 0x20))();
          }
          plVar7 = (long *)plVar9[0xd];
          uVar1 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,plVar8,0x38,8);
          }
          else {
            FUN_00c48fe8(plVar7,plVar8,0x38,8);
          }
          while (plVar10 != (long *)0x0) {
            plVar8 = (long *)*plVar10;
            if ((long *)plVar10[5] != (long *)0x0) {
              (**(code **)(*(long *)plVar10[5] + 0x20))();
            }
            plVar7 = (long *)plVar9[0xd];
            uVar1 = (**(code **)(*plVar7 + 0xf8))(plVar7);
            if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
              (**(code **)(*plVar7 + 0x18))(plVar7,plVar10,0x38,8);
              plVar10 = plVar8;
            }
            else {
              FUN_00c48fe8(plVar7,plVar10,0x38,8);
              plVar10 = plVar8;
            }
          }
        }
      }
      lVar4 = plVar9[7];
      plVar9[0xc] = 0;
      if (((((lVar4 != 0) && (*(undefined8 *)plVar9[6] = 0, lVar4 != 1)) &&
           (*(undefined8 *)(plVar9[6] + 8) = 0, lVar4 != 2)) &&
          ((*(undefined8 *)(plVar9[6] + 0x10) = 0, lVar4 != 3 &&
           (*(undefined8 *)(plVar9[6] + 0x18) = 0, lVar4 != 4)))) &&
         ((*(undefined8 *)(plVar9[6] + 0x20) = 0, lVar4 != 5 &&
          ((*(undefined8 *)(plVar9[6] + 0x28) = 0, lVar4 != 6 &&
           (*(undefined8 *)(plVar9[6] + 0x30) = 0, lVar4 != 7)))))) {
        lVar5 = 7;
        do {
          *(undefined8 *)(plVar9[6] + lVar5 * 8) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar4 != lVar5);
      }
      plVar9[0x11] = 0;
    }
  }
  if (*(long *)(param_1 + 0x330) != 0) {
    plVar9 = (long *)*(long *)(param_1 + 0x308);
    while (plVar9 != (long *)0x0) {
      plVar8 = (long *)*plVar9;
      FUN_00e4fbc0(plVar9 + 6);
      if ((long *)plVar9[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar9[5] + 0x20))();
      }
      plVar10 = *(long **)(param_1 + 0x310);
      uVar1 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,plVar9,0x98,8);
        plVar9 = plVar8;
      }
      else {
        FUN_00c48fe8(plVar10,plVar9,0x98,8);
        plVar9 = plVar8;
      }
    }
    uVar1 = *(ulong *)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x308) = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x2d8) + uVar3 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x2d8) + uVar3 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x2d8) + uVar3 * 8 + 0x10) = 0;
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x2d8) + lVar4 + 0x18) = 0;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar3);
      }
      if (uVar2 != 0) {
        lVar4 = uVar3 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x2d8) + lVar4) = 0;
          uVar2 = uVar2 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar2 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x330) = 0;
  }
  if (*(long *)(param_1 + 0x2c8) != 0) {
    plVar9 = (long *)(param_1 + 0x270);
    FUN_010f0260(plVar9,*(undefined8 *)(param_1 + 0x2a0));
    uVar1 = *(ulong *)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          *(undefined8 *)(*plVar9 + uVar3 * 8) = 0;
          *(undefined8 *)(*plVar9 + uVar3 * 8 + 8) = 0;
          *(undefined8 *)(*plVar9 + uVar3 * 8 + 0x10) = 0;
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*plVar9 + lVar4 + 0x18) = 0;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar3);
      }
      if (uVar2 != 0) {
        lVar4 = uVar3 << 3;
        do {
          *(undefined8 *)(*plVar9 + lVar4) = 0;
          uVar2 = uVar2 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar2 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  if (*(long *)(param_1 + 0x260) != 0) {
    plVar9 = (long *)*(long *)(param_1 + 0x238);
    while (plVar9 != (long *)0x0) {
      plVar10 = (long *)*plVar9;
      FUN_00e4ff18(plVar9 + 2);
      plVar8 = *(long **)(param_1 + 0x240);
      uVar1 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar9,0x90,8);
        plVar9 = plVar10;
      }
      else {
        FUN_00c48fe8(plVar8,plVar9,0x90,8);
        plVar9 = plVar10;
      }
    }
    uVar1 = *(ulong *)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x238) = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x208) + uVar3 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x208) + uVar3 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x208) + uVar3 * 8 + 0x10) = 0;
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x208) + lVar4 + 0x18) = 0;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar3);
      }
      if (uVar2 != 0) {
        lVar4 = uVar3 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x208) + lVar4) = 0;
          uVar2 = uVar2 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar2 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    plVar9 = (long *)*(long *)(param_1 + 0x1d0);
    while (plVar9 != (long *)0x0) {
      plVar10 = (long *)*plVar9;
      FUN_00e4ff18(plVar9 + 2);
      plVar8 = *(long **)(param_1 + 0x1d8);
      uVar1 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar9,0x90,8);
        plVar9 = plVar10;
      }
      else {
        FUN_00c48fe8(plVar8,plVar9,0x90,8);
        plVar9 = plVar10;
      }
    }
    uVar1 = *(ulong *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar3 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar3 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x1a0) + uVar3 * 8 + 0x10) = 0;
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x1a0) + lVar4 + 0x18) = 0;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar3);
      }
      if (uVar2 != 0) {
        lVar4 = uVar3 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x1a0) + lVar4) = 0;
          uVar2 = uVar2 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar2 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  if (*(long *)(param_1 + 400) != 0) {
    plVar9 = (long *)*(long *)(param_1 + 0x168);
    while (plVar9 != (long *)0x0) {
      plVar10 = (long *)*plVar9;
      FUN_00e4ff18(plVar9 + 2);
      plVar8 = *(long **)(param_1 + 0x170);
      uVar1 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar9,0x90,8);
        plVar9 = plVar10;
      }
      else {
        FUN_00c48fe8(plVar8,plVar9,0x90,8);
        plVar9 = plVar10;
      }
    }
    uVar1 = *(ulong *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x138) + uVar3 * 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x138) + uVar3 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x138) + uVar3 * 8 + 0x10) = 0;
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x138) + lVar4 + 0x18) = 0;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar3);
      }
      if (uVar2 != 0) {
        lVar4 = uVar3 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x138) + lVar4) = 0;
          uVar2 = uVar2 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar2 != 0);
      }
    }
    *(undefined8 *)(param_1 + 400) = 0;
  }
  *(undefined1 *)(param_1 + 0x340) = 1;
  return;
}


