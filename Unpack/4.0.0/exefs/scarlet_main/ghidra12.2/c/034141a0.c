/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034141a0; name: FUN_034141a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_034141a0(long *param_1)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  
  if ((int)param_1[1] != 0) {
    plVar12 = *(long **)*param_1;
    if (plVar12 == (long *)0x0) {
      uVar11 = 0;
      do {
        if ((int)param_1[1] - 1 == uVar11) goto LAB_034143f0;
        uVar11 = uVar11 + 1;
        plVar12 = (long *)((undefined8 *)*param_1)[uVar11 & 0xffffffff];
      } while (plVar12 == (long *)0x0);
    }
    else {
      uVar11 = 0;
    }
    do {
      plVar8 = (long *)plVar12[0xf];
      uVar6 = uVar11 & 0xffffffff;
      plVar10 = (long *)plVar12[0x15];
      plVar13 = plVar8;
      if (plVar8 == (long *)0x0) {
        uVar4 = *(uint *)(param_1 + 1);
        uVar9 = uVar11 & 0xffffffff;
        uVar3 = uVar4;
        if (uVar4 <= (int)uVar11 + 1U) {
          uVar3 = (int)uVar11 + 1;
        }
        uVar11 = (ulong)uVar3;
        do {
          uVar3 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar3;
          if (uVar4 <= uVar3) {
            plVar13 = (long *)0x0;
            goto LAB_0341425c;
          }
          plVar13 = *(long **)(*param_1 + (ulong)uVar3 * 8);
        } while (plVar13 == (long *)0x0);
        uVar11 = uVar9;
      }
LAB_0341425c:
      *(long **)(*param_1 + uVar6 * 8) = plVar8;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      FUN_0341e9a0(plVar12);
      plVar8 = (long *)param_1[0xb];
      if (plVar8 == (long *)0x0) {
LAB_034142d0:
        if (_DAT_00003010 == (long *)0x0) {
          _DAT_00003010 = plVar12;
          *plVar12 = 0;
        }
        else {
          *plVar12 = (long)_DAT_00003010;
          _DAT_00003010 = plVar12;
        }
        _DAT_00003008 = _DAT_00003008 + 1;
      }
      else {
        if ((plVar12 < plVar8) || (plVar8 + 0x600 <= plVar12)) {
          do {
            plVar7 = plVar8;
            plVar8 = (long *)plVar7[0x600];
            if (plVar8 == (long *)0x0) goto LAB_034142d0;
          } while ((plVar12 < plVar8) || (plVar8 + 0x600 <= plVar12));
        }
        else {
          plVar7 = (long *)0x0;
        }
        if (plVar8[0x602] == 0) {
          plVar8[0x602] = (long)plVar12;
          *plVar12 = 0;
        }
        else {
          *plVar12 = plVar8[0x602];
          plVar8[0x602] = (long)plVar12;
        }
        iVar1 = (int)plVar8[0x601] + 1;
        *(int *)(plVar8 + 0x601) = iVar1;
        if (iVar1 == 0x40) {
          plVar12 = param_1 + 0xb;
          if ((long *)param_1[0xb] != plVar8) {
            plVar12 = plVar7 + 0x600;
          }
          *plVar12 = plVar8[0x600];
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
        }
      }
      if ((plVar10 != (long *)0x0) && ((int)plVar10[7] == 0)) {
        if (plVar10[2] != 0) {
          FUN_03415768(plVar10 + 1);
          plVar10[2] = 0;
        }
        plVar7 = (long *)param_1[0x10];
        plVar8 = (long *)0x0;
        plVar12 = plVar7;
        if ((plVar7 != (long *)0x0) && (plVar10 != plVar7)) {
          do {
            plVar8 = plVar12;
            plVar12 = (long *)*plVar8;
          } while (plVar12 != (long *)0x0 && plVar10 != plVar12);
        }
        if (plVar12 != (long *)0x0) {
          plVar2 = param_1 + 0x10;
          if (plVar7 != plVar12) {
            plVar2 = plVar8;
          }
          *plVar2 = *plVar12;
        }
        if (plVar10[2] != 0) {
          FUN_03415768(plVar10 + 1);
          plVar10[2] = 0;
        }
        plVar10[1] = (long)&PTR_FUN_047bf4e0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,plVar10);
      }
      plVar12 = plVar13;
    } while (plVar13 != (long *)0x0);
  }
LAB_034143f0:
  puVar5 = PTR_DAT_047e2fd0;
  if ((int)param_1[4] != 0) {
    plVar12 = *(long **)param_1[3];
    if (plVar12 == (long *)0x0) {
      uVar11 = 0;
      do {
        if ((int)param_1[4] - 1 == uVar11) goto LAB_03414578;
        uVar11 = uVar11 + 1;
        plVar12 = (long *)((undefined8 *)param_1[3])[uVar11 & 0xffffffff];
      } while (plVar12 == (long *)0x0);
    }
    else {
      uVar11 = 0;
    }
    do {
      plVar8 = (long *)plVar12[0xe];
      uVar6 = uVar11 & 0xffffffff;
      plVar13 = plVar8;
      if (plVar8 == (long *)0x0) {
        uVar4 = *(uint *)(param_1 + 4);
        uVar9 = uVar11 & 0xffffffff;
        uVar3 = uVar4;
        if (uVar4 <= (int)uVar11 + 1U) {
          uVar3 = (int)uVar11 + 1;
        }
        uVar11 = (ulong)uVar3;
        do {
          uVar3 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar3;
          if (uVar4 <= uVar3) {
            plVar13 = (long *)0x0;
            goto LAB_03414494;
          }
          plVar13 = *(long **)(param_1[3] + (ulong)uVar3 * 8);
        } while (plVar13 == (long *)0x0);
        uVar11 = uVar9;
      }
LAB_03414494:
      *(long **)(param_1[3] + uVar6 * 8) = plVar8;
      *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      FUN_03415fd0(plVar12);
      plVar8 = (long *)param_1[0xc];
      if (plVar8 == (long *)0x0) {
LAB_03414508:
        if (_DAT_0001a410 == (long *)0x0) {
          _DAT_0001a410 = plVar12;
          *plVar12 = 0;
        }
        else {
          *plVar12 = (long)_DAT_0001a410;
          _DAT_0001a410 = plVar12;
        }
        _DAT_0001a408 = _DAT_0001a408 + 1;
      }
      else {
        if ((plVar12 < plVar8) || (plVar8 + 0x3480 <= plVar12)) {
          do {
            plVar10 = plVar8;
            plVar8 = (long *)plVar10[0x3480];
            if (plVar8 == (long *)0x0) goto LAB_03414508;
          } while (plVar12 < plVar8 || plVar8 + 0x3480 <= plVar12);
        }
        else {
          plVar10 = (long *)0x0;
        }
        if (plVar8[0x3482] == 0) {
          plVar8[0x3482] = (long)plVar12;
          *plVar12 = 0;
        }
        else {
          *plVar12 = plVar8[0x3482];
          plVar8[0x3482] = (long)plVar12;
        }
        iVar1 = (int)plVar8[0x3481] + 1;
        *(int *)(plVar8 + 0x3481) = iVar1;
        if (iVar1 == 0x40) {
          plVar12 = param_1 + 0xc;
          if ((long *)param_1[0xc] != plVar8) {
            plVar12 = plVar10 + 0x3480;
          }
          *plVar12 = plVar8[0x3480];
          (**(code **)(puVar5 + 0x30))(10);
        }
      }
      plVar12 = plVar13;
    } while (plVar13 != (long *)0x0);
  }
LAB_03414578:
  *(undefined1 *)((long)param_1 + 0x8c) = 1;
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (**(code **)(puVar5 + 0x30))(10);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    (**(code **)(puVar5 + 0x30))(10);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  if ((int)param_1[7] != 0) {
    plVar12 = *(long **)param_1[6];
    if (plVar12 == (long *)0x0) {
      uVar11 = 0;
      do {
        if ((int)param_1[7] - 1 == uVar11) goto LAB_03414750;
        uVar11 = uVar11 + 1;
        plVar12 = (long *)((undefined8 *)param_1[6])[uVar11 & 0xffffffff];
      } while (plVar12 == (long *)0x0);
    }
    else {
      uVar11 = 0;
    }
    do {
      uVar6 = uVar11 & 0xffffffff;
      FUN_0341791c(plVar12,param_1 + 0xe);
      plVar8 = (long *)plVar12[8];
      plVar13 = plVar8;
      if (plVar8 == (long *)0x0) {
        uVar4 = *(uint *)(param_1 + 7);
        uVar9 = uVar11 & 0xffffffff;
        uVar3 = uVar4;
        if (uVar4 <= (int)uVar11 + 1U) {
          uVar3 = (int)uVar11 + 1;
        }
        uVar11 = (ulong)uVar3;
        do {
          uVar3 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar3;
          if (uVar4 <= uVar3) {
            plVar13 = (long *)0x0;
            goto LAB_03414664;
          }
          plVar13 = *(long **)(param_1[6] + (ulong)uVar3 * 8);
        } while (plVar13 == (long *)0x0);
        uVar11 = uVar9;
      }
LAB_03414664:
      *(long **)(param_1[6] + uVar6 * 8) = plVar8;
      *(int *)(param_1 + 8) = (int)param_1[8] + -1;
      FUN_0341655c(plVar12);
      plVar8 = (long *)param_1[0xd];
      if (plVar8 == (long *)0x0) {
LAB_034146d8:
        if (_DAT_00001a10 == (long *)0x0) {
          _DAT_00001a10 = plVar12;
          *plVar12 = 0;
        }
        else {
          *plVar12 = (long)_DAT_00001a10;
          _DAT_00001a10 = plVar12;
        }
        _DAT_00001a08 = _DAT_00001a08 + 1;
      }
      else {
        if ((plVar12 < plVar8) || (plVar8 + 0x340 <= plVar12)) {
          do {
            plVar10 = plVar8;
            plVar8 = (long *)plVar10[0x340];
            if (plVar8 == (long *)0x0) goto LAB_034146d8;
          } while ((plVar12 < plVar8) || (plVar8 + 0x340 <= plVar12));
        }
        else {
          plVar10 = (long *)0x0;
        }
        if (plVar8[0x342] == 0) {
          plVar8[0x342] = (long)plVar12;
          *plVar12 = 0;
        }
        else {
          *plVar12 = plVar8[0x342];
          plVar8[0x342] = (long)plVar12;
        }
        iVar1 = (int)plVar8[0x341] + 1;
        *(int *)(plVar8 + 0x341) = iVar1;
        if (iVar1 == 0x40) {
          plVar12 = param_1 + 0xd;
          if ((long *)param_1[0xd] != plVar8) {
            plVar12 = plVar10 + 0x340;
          }
          *plVar12 = plVar8[0x340];
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
        }
      }
      plVar12 = plVar13;
    } while (plVar13 != (long *)0x0);
  }
LAB_03414750:
  *(int *)(param_1[0xf] + 0x38) = *(int *)(param_1[0xf] + 0x38) + -1;
  param_1[0xf] = 0;
  puVar5 = PTR_DAT_047e2fd0;
  plVar13 = param_1 + 0x10;
  plVar12 = (long *)*plVar13;
  while (plVar12 != (long *)0x0) {
    if (plVar12[2] == 0) {
      plVar8 = plVar12;
    }
    else {
      FUN_03415768(plVar12 + 1);
      plVar12[2] = 0;
      plVar8 = (long *)*plVar13;
    }
    plVar10 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar8;
      if (plVar12 != plVar8) {
        do {
          plVar10 = plVar7;
          plVar7 = (long *)*plVar10;
        } while (plVar7 != (long *)0x0 && plVar12 != plVar7);
      }
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar13;
        if (plVar8 != plVar7) {
          plVar2 = plVar10;
        }
        *plVar2 = *plVar7;
      }
    }
    if (plVar12[2] != 0) {
      FUN_03415768(plVar12 + 1);
      plVar12[2] = 0;
    }
    plVar12[1] = (long)&PTR_FUN_047bf4e0;
    (**(code **)(puVar5 + 0x30))(9,plVar12);
    plVar12 = (long *)*plVar13;
  }
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    (**(code **)(puVar5 + 0x30))(10);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1 + 10) = 0;
    (**(code **)(puVar5 + 0x30))(9);
    param_1[9] = 0;
    *(undefined4 *)((long)param_1 + 0x54) = 0;
  }
  return;
}


