/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a0ff8c; name: FUN_01a0ff8c
 */


void FUN_01a0ff8c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *local_68;
  long *local_48;
  
  puVar6 = (undefined8 *)param_1[0x3f0];
  param_1[0x3f0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3f1];
    uVar7 = param_1[0x3f2];
    uVar9 = param_1[0x3f3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3ec];
  param_1[0x3ec] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3ed];
    uVar7 = param_1[0x3ee];
    uVar9 = param_1[0x3ef];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[1000];
  param_1[1000] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3e9];
    uVar7 = param_1[0x3ea];
    uVar9 = param_1[0x3eb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3e4];
  param_1[0x3e4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3e5];
    uVar7 = param_1[0x3e6];
    uVar9 = param_1[999];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3e0];
  param_1[0x3e0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3e1];
    uVar7 = param_1[0x3e2];
    uVar9 = param_1[0x3e3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3dc];
  param_1[0x3dc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3dd];
    uVar7 = param_1[0x3de];
    uVar9 = param_1[0x3df];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3d8];
  param_1[0x3d8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3d9];
    uVar7 = param_1[0x3da];
    uVar9 = param_1[0x3db];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3d4];
  param_1[0x3d4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3d5];
    uVar7 = param_1[0x3d6];
    uVar9 = param_1[0x3d7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3d0];
  param_1[0x3d0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3d1];
    uVar7 = param_1[0x3d2];
    uVar9 = param_1[0x3d3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3cc];
  param_1[0x3cc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3cd];
    uVar7 = param_1[0x3ce];
    uVar9 = param_1[0x3cf];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3c8];
  param_1[0x3c8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3c9];
    uVar7 = param_1[0x3ca];
    uVar9 = param_1[0x3cb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3c4];
  param_1[0x3c4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3c5];
    uVar7 = param_1[0x3c6];
    uVar9 = param_1[0x3c7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3c0];
  param_1[0x3c0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3c1];
    uVar7 = param_1[0x3c2];
    uVar9 = param_1[0x3c3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3bc];
  param_1[0x3bc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3bd];
    uVar7 = param_1[0x3be];
    uVar9 = param_1[0x3bf];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3b8];
  param_1[0x3b8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3b9];
    uVar7 = param_1[0x3ba];
    uVar9 = param_1[0x3bb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3b4];
  param_1[0x3b4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3b5];
    uVar7 = param_1[0x3b6];
    uVar9 = param_1[0x3b7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3b0];
  param_1[0x3b0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3b1];
    uVar7 = param_1[0x3b2];
    uVar9 = param_1[0x3b3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3ac];
  param_1[0x3ac] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3ad];
    uVar7 = param_1[0x3ae];
    uVar9 = param_1[0x3af];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3a8];
  param_1[0x3a8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3a9];
    uVar7 = param_1[0x3aa];
    uVar9 = param_1[0x3ab];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3a4];
  param_1[0x3a4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3a5];
    uVar7 = param_1[0x3a6];
    uVar9 = param_1[0x3a7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3a0];
  param_1[0x3a0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3a1];
    uVar7 = param_1[0x3a2];
    uVar9 = param_1[0x3a3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x39c];
  param_1[0x39c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x39d];
    uVar7 = param_1[0x39e];
    uVar9 = param_1[0x39f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x398];
  param_1[0x398] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x399];
    uVar7 = param_1[0x39a];
    uVar9 = param_1[0x39b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x394];
  param_1[0x394] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x395];
    uVar7 = param_1[0x396];
    uVar9 = param_1[0x397];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x390];
  param_1[0x390] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x391];
    uVar7 = param_1[0x392];
    uVar9 = param_1[0x393];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x38c];
  param_1[0x38c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x38d];
    uVar7 = param_1[0x38e];
    uVar9 = param_1[0x38f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x388];
  param_1[0x388] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x389];
    uVar7 = param_1[0x38a];
    uVar9 = param_1[0x38b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[900];
  param_1[900] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x385];
    uVar7 = param_1[0x386];
    uVar9 = param_1[0x387];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x380];
  param_1[0x380] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x381];
    uVar7 = param_1[0x382];
    uVar9 = param_1[899];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x37c];
  param_1[0x37c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x37d];
    uVar7 = param_1[0x37e];
    uVar9 = param_1[0x37f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x378];
  param_1[0x378] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x379];
    uVar7 = param_1[0x37a];
    uVar9 = param_1[0x37b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x374];
  param_1[0x374] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x375];
    uVar7 = param_1[0x376];
    uVar9 = param_1[0x377];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x370];
  param_1[0x370] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x371];
    uVar7 = param_1[0x372];
    uVar9 = param_1[0x373];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x36c];
  param_1[0x36c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x36d];
    uVar7 = param_1[0x36e];
    uVar9 = param_1[0x36f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x368];
  param_1[0x368] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x369];
    uVar7 = param_1[0x36a];
    uVar9 = param_1[0x36b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x364];
  param_1[0x364] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x365];
    uVar7 = param_1[0x366];
    uVar9 = param_1[0x367];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x360];
  param_1[0x360] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x361];
    uVar7 = param_1[0x362];
    uVar9 = param_1[0x363];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x35c];
  param_1[0x35c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x35d];
    uVar7 = param_1[0x35e];
    uVar9 = param_1[0x35f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x358];
  param_1[0x358] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x359];
    uVar7 = param_1[0x35a];
    uVar9 = param_1[0x35b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x354];
  param_1[0x354] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x355];
    uVar7 = param_1[0x356];
    uVar9 = param_1[0x357];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x350];
  param_1[0x350] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x351];
    uVar7 = param_1[0x352];
    uVar9 = param_1[0x353];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x34c];
  param_1[0x34c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x34d];
    uVar7 = param_1[0x34e];
    uVar9 = param_1[0x34f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x348];
  param_1[0x348] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x349];
    uVar7 = param_1[0x34a];
    uVar9 = param_1[0x34b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x344];
  param_1[0x344] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x345];
    uVar7 = param_1[0x346];
    uVar9 = param_1[0x347];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x340];
  param_1[0x340] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x341];
    uVar7 = param_1[0x342];
    uVar9 = param_1[0x343];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x33c];
  param_1[0x33c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x33d];
    uVar7 = param_1[0x33e];
    uVar9 = param_1[0x33f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x338];
  param_1[0x338] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x339];
    uVar7 = param_1[0x33a];
    uVar9 = param_1[0x33b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x334];
  param_1[0x334] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x335];
    uVar7 = param_1[0x336];
    uVar9 = param_1[0x337];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x330];
  param_1[0x330] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x331];
    uVar7 = param_1[0x332];
    uVar9 = param_1[0x333];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x32c];
  param_1[0x32c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x32d];
    uVar7 = param_1[0x32e];
    uVar9 = param_1[0x32f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x328];
  param_1[0x328] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x329];
    uVar7 = param_1[0x32a];
    uVar9 = param_1[0x32b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x324];
  param_1[0x324] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x325];
    uVar7 = param_1[0x326];
    uVar9 = param_1[0x327];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[800];
  param_1[800] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x321];
    uVar7 = param_1[0x322];
    uVar9 = param_1[0x323];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x31c];
  param_1[0x31c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x31d];
    uVar7 = param_1[0x31e];
    uVar9 = param_1[799];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x318];
  param_1[0x318] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x319];
    uVar7 = param_1[0x31a];
    uVar9 = param_1[0x31b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x314];
  param_1[0x314] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x315];
    uVar7 = param_1[0x316];
    uVar9 = param_1[0x317];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x310];
  param_1[0x310] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x311];
    uVar7 = param_1[0x312];
    uVar9 = param_1[0x313];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x30c];
  param_1[0x30c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x30d];
    uVar7 = param_1[0x30e];
    uVar9 = param_1[0x30f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x308];
  param_1[0x308] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x309];
    uVar7 = param_1[0x30a];
    uVar9 = param_1[0x30b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x304];
  param_1[0x304] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x305];
    uVar7 = param_1[0x306];
    uVar9 = param_1[0x307];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x300];
  param_1[0x300] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x301];
    uVar7 = param_1[0x302];
    uVar9 = param_1[0x303];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2fc];
  param_1[0x2fc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2fd];
    uVar7 = param_1[0x2fe];
    uVar9 = param_1[0x2ff];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2f8];
  param_1[0x2f8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2f9];
    uVar7 = param_1[0x2fa];
    uVar9 = param_1[0x2fb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2f4];
  param_1[0x2f4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2f5];
    uVar7 = param_1[0x2f6];
    uVar9 = param_1[0x2f7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2f0];
  param_1[0x2f0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2f1];
    uVar7 = param_1[0x2f2];
    uVar9 = param_1[0x2f3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2ec];
  param_1[0x2ec] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2ed];
    uVar7 = param_1[0x2ee];
    uVar9 = param_1[0x2ef];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2e8];
  param_1[0x2e8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2e9];
    uVar7 = param_1[0x2ea];
    uVar9 = param_1[0x2eb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2e4];
  param_1[0x2e4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2e5];
    uVar7 = param_1[0x2e6];
    uVar9 = param_1[0x2e7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2e0];
  param_1[0x2e0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2e1];
    uVar7 = param_1[0x2e2];
    uVar9 = param_1[0x2e3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2dc];
  param_1[0x2dc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2dd];
    uVar7 = param_1[0x2de];
    uVar9 = param_1[0x2df];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2d8];
  param_1[0x2d8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2d9];
    uVar7 = param_1[0x2da];
    uVar9 = param_1[0x2db];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2d4];
  param_1[0x2d4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2d5];
    uVar7 = param_1[0x2d6];
    uVar9 = param_1[0x2d7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2d0];
  param_1[0x2d0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2d1];
    uVar7 = param_1[0x2d2];
    uVar9 = param_1[0x2d3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2cc];
  param_1[0x2cc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2cd];
    uVar7 = param_1[0x2ce];
    uVar9 = param_1[0x2cf];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2c8];
  param_1[0x2c8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2c9];
    uVar7 = param_1[0x2ca];
    uVar9 = param_1[0x2cb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2c4];
  param_1[0x2c4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2c5];
    uVar7 = param_1[0x2c6];
    uVar9 = param_1[0x2c7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2c0];
  param_1[0x2c0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2c1];
    uVar7 = param_1[0x2c2];
    uVar9 = param_1[0x2c3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[700];
  param_1[700] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2bd];
    uVar7 = param_1[0x2be];
    uVar9 = param_1[0x2bf];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2b8];
  param_1[0x2b8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2b9];
    uVar7 = param_1[0x2ba];
    uVar9 = param_1[699];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2b4];
  param_1[0x2b4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2b5];
    uVar7 = param_1[0x2b6];
    uVar9 = param_1[0x2b7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2b0];
  param_1[0x2b0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2b1];
    uVar7 = param_1[0x2b2];
    uVar9 = param_1[0x2b3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2ac];
  param_1[0x2ac] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2ad];
    uVar7 = param_1[0x2ae];
    uVar9 = param_1[0x2af];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2a8];
  param_1[0x2a8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2a9];
    uVar7 = param_1[0x2aa];
    uVar9 = param_1[0x2ab];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2a4];
  param_1[0x2a4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2a5];
    uVar7 = param_1[0x2a6];
    uVar9 = param_1[0x2a7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2a0];
  param_1[0x2a0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2a1];
    uVar7 = param_1[0x2a2];
    uVar9 = param_1[0x2a3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x29c];
  param_1[0x29c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x29d];
    uVar7 = param_1[0x29e];
    uVar9 = param_1[0x29f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x298];
  param_1[0x298] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x299];
    uVar7 = param_1[0x29a];
    uVar9 = param_1[0x29b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x294];
  param_1[0x294] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x295];
    uVar7 = param_1[0x296];
    uVar9 = param_1[0x297];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x290];
  param_1[0x290] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x291];
    uVar7 = param_1[0x292];
    uVar9 = param_1[0x293];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x28c];
  param_1[0x28c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x28d];
    uVar7 = param_1[0x28e];
    uVar9 = param_1[0x28f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x288];
  param_1[0x288] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x289];
    uVar7 = param_1[0x28a];
    uVar9 = param_1[0x28b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x284];
  param_1[0x284] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x285];
    uVar7 = param_1[0x286];
    uVar9 = param_1[0x287];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x280];
  param_1[0x280] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x281];
    uVar7 = param_1[0x282];
    uVar9 = param_1[0x283];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x27c];
  param_1[0x27c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x27d];
    uVar7 = param_1[0x27e];
    uVar9 = param_1[0x27f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x278];
  param_1[0x278] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x279];
    uVar7 = param_1[0x27a];
    uVar9 = param_1[0x27b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x274];
  param_1[0x274] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x275];
    uVar7 = param_1[0x276];
    uVar9 = param_1[0x277];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x270];
  param_1[0x270] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x271];
    uVar7 = param_1[0x272];
    uVar9 = param_1[0x273];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x26c];
  param_1[0x26c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x26d];
    uVar7 = param_1[0x26e];
    uVar9 = param_1[0x26f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x268];
  param_1[0x268] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x269];
    uVar7 = param_1[0x26a];
    uVar9 = param_1[0x26b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x264];
  param_1[0x264] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x265];
    uVar7 = param_1[0x266];
    uVar9 = param_1[0x267];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x260];
  param_1[0x260] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x261];
    uVar7 = param_1[0x262];
    uVar9 = param_1[0x263];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x25c];
  param_1[0x25c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x25d];
    uVar7 = param_1[0x25e];
    uVar9 = param_1[0x25f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[600];
  param_1[600] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x259];
    uVar7 = param_1[0x25a];
    uVar9 = param_1[0x25b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x254];
  param_1[0x254] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x255];
    uVar7 = param_1[0x256];
    uVar9 = param_1[599];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x250];
  param_1[0x250] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x251];
    uVar7 = param_1[0x252];
    uVar9 = param_1[0x253];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x24c];
  param_1[0x24c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x24d];
    uVar7 = param_1[0x24e];
    uVar9 = param_1[0x24f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x248];
  param_1[0x248] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x249];
    uVar7 = param_1[0x24a];
    uVar9 = param_1[0x24b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x244];
  param_1[0x244] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x245];
    uVar7 = param_1[0x246];
    uVar9 = param_1[0x247];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x240];
  param_1[0x240] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x241];
    uVar7 = param_1[0x242];
    uVar9 = param_1[0x243];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x23c];
  param_1[0x23c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x23d];
    uVar7 = param_1[0x23e];
    uVar9 = param_1[0x23f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x238];
  param_1[0x238] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x239];
    uVar7 = param_1[0x23a];
    uVar9 = param_1[0x23b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x234];
  param_1[0x234] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x235];
    uVar7 = param_1[0x236];
    uVar9 = param_1[0x237];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x230];
  param_1[0x230] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x231];
    uVar7 = param_1[0x232];
    uVar9 = param_1[0x233];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x22c];
  param_1[0x22c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x22d];
    uVar7 = param_1[0x22e];
    uVar9 = param_1[0x22f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x228];
  param_1[0x228] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x229];
    uVar7 = param_1[0x22a];
    uVar9 = param_1[0x22b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x224];
  param_1[0x224] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x225];
    uVar7 = param_1[0x226];
    uVar9 = param_1[0x227];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x220];
  param_1[0x220] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x221];
    uVar7 = param_1[0x222];
    uVar9 = param_1[0x223];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x21c];
  param_1[0x21c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x21d];
    uVar7 = param_1[0x21e];
    uVar9 = param_1[0x21f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x218];
  param_1[0x218] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x219];
    uVar7 = param_1[0x21a];
    uVar9 = param_1[0x21b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x214];
  param_1[0x214] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x215];
    uVar7 = param_1[0x216];
    uVar9 = param_1[0x217];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x210];
  param_1[0x210] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x211];
    uVar7 = param_1[0x212];
    uVar9 = param_1[0x213];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x20c];
  param_1[0x20c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x20d];
    uVar7 = param_1[0x20e];
    uVar9 = param_1[0x20f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x208];
  param_1[0x208] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x209];
    uVar7 = param_1[0x20a];
    uVar9 = param_1[0x20b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x204];
  param_1[0x204] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x205];
    uVar7 = param_1[0x206];
    uVar9 = param_1[0x207];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x200];
  param_1[0x200] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x201];
    uVar7 = param_1[0x202];
    uVar9 = param_1[0x203];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1fc];
  param_1[0x1fc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1fd];
    uVar7 = param_1[0x1fe];
    uVar9 = param_1[0x1ff];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1f8];
  param_1[0x1f8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1f9];
    uVar7 = param_1[0x1fa];
    uVar9 = param_1[0x1fb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[500];
  param_1[500] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1f5];
    uVar7 = param_1[0x1f6];
    uVar9 = param_1[0x1f7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1f0];
  param_1[0x1f0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1f1];
    uVar7 = param_1[0x1f2];
    uVar9 = param_1[499];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1ec];
  param_1[0x1ec] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1ed];
    uVar7 = param_1[0x1ee];
    uVar9 = param_1[0x1ef];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1e8];
  param_1[0x1e8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1e9];
    uVar7 = param_1[0x1ea];
    uVar9 = param_1[0x1eb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1e4];
  param_1[0x1e4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1e5];
    uVar7 = param_1[0x1e6];
    uVar9 = param_1[0x1e7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1e0];
  param_1[0x1e0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1e1];
    uVar7 = param_1[0x1e2];
    uVar9 = param_1[0x1e3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1dc];
  param_1[0x1dc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1dd];
    uVar7 = param_1[0x1de];
    uVar9 = param_1[0x1df];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1d8];
  param_1[0x1d8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1d9];
    uVar7 = param_1[0x1da];
    uVar9 = param_1[0x1db];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1d4];
  param_1[0x1d4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1d5];
    uVar7 = param_1[0x1d6];
    uVar9 = param_1[0x1d7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1d0];
  param_1[0x1d0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1d1];
    uVar7 = param_1[0x1d2];
    uVar9 = param_1[0x1d3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1cc];
  param_1[0x1cc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1cd];
    uVar7 = param_1[0x1ce];
    uVar9 = param_1[0x1cf];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1c8];
  param_1[0x1c8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1c9];
    uVar7 = param_1[0x1ca];
    uVar9 = param_1[0x1cb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1c4];
  param_1[0x1c4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1c5];
    uVar7 = param_1[0x1c6];
    uVar9 = param_1[0x1c7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1c0];
  param_1[0x1c0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1c1];
    uVar7 = param_1[0x1c2];
    uVar9 = param_1[0x1c3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1bc];
  param_1[0x1bc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1bd];
    uVar7 = param_1[0x1be];
    uVar9 = param_1[0x1bf];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1b8];
  param_1[0x1b8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1b9];
    uVar7 = param_1[0x1ba];
    uVar9 = param_1[0x1bb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1b4];
  param_1[0x1b4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1b5];
    uVar7 = param_1[0x1b6];
    uVar9 = param_1[0x1b7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1b0];
  param_1[0x1b0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1b1];
    uVar7 = param_1[0x1b2];
    uVar9 = param_1[0x1b3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1ac];
  param_1[0x1ac] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1ad];
    uVar7 = param_1[0x1ae];
    uVar9 = param_1[0x1af];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1a8];
  param_1[0x1a8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1a9];
    uVar7 = param_1[0x1aa];
    uVar9 = param_1[0x1ab];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1a4];
  param_1[0x1a4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1a5];
    uVar7 = param_1[0x1a6];
    uVar9 = param_1[0x1a7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1a0];
  param_1[0x1a0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1a1];
    uVar7 = param_1[0x1a2];
    uVar9 = param_1[0x1a3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x19c];
  param_1[0x19c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x19d];
    uVar7 = param_1[0x19e];
    uVar9 = param_1[0x19f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x198];
  param_1[0x198] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x199];
    uVar7 = param_1[0x19a];
    uVar9 = param_1[0x19b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x194];
  param_1[0x194] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x195];
    uVar7 = param_1[0x196];
    uVar9 = param_1[0x197];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[400];
  param_1[400] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x191];
    uVar7 = param_1[0x192];
    uVar9 = param_1[0x193];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x18c];
  param_1[0x18c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x18d];
    uVar7 = param_1[0x18e];
    uVar9 = param_1[399];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x188];
  param_1[0x188] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x189];
    uVar7 = param_1[0x18a];
    uVar9 = param_1[0x18b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x184];
  param_1[0x184] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x185];
    uVar7 = param_1[0x186];
    uVar9 = param_1[0x187];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x180];
  param_1[0x180] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x181];
    uVar7 = param_1[0x182];
    uVar9 = param_1[0x183];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x17c];
  param_1[0x17c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x17d];
    uVar7 = param_1[0x17e];
    uVar9 = param_1[0x17f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x178];
  param_1[0x178] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x179];
    uVar7 = param_1[0x17a];
    uVar9 = param_1[0x17b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x174];
  param_1[0x174] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x175];
    uVar7 = param_1[0x176];
    uVar9 = param_1[0x177];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x170];
  param_1[0x170] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x171];
    uVar7 = param_1[0x172];
    uVar9 = param_1[0x173];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x16c];
  param_1[0x16c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x16d];
    uVar7 = param_1[0x16e];
    uVar9 = param_1[0x16f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x168];
  param_1[0x168] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x169];
    uVar7 = param_1[0x16a];
    uVar9 = param_1[0x16b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x164];
  param_1[0x164] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x165];
    uVar7 = param_1[0x166];
    uVar9 = param_1[0x167];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x160];
  param_1[0x160] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x161];
    uVar7 = param_1[0x162];
    uVar9 = param_1[0x163];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x15c];
  param_1[0x15c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x15d];
    uVar7 = param_1[0x15e];
    uVar9 = param_1[0x15f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x158];
  param_1[0x158] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x159];
    uVar7 = param_1[0x15a];
    uVar9 = param_1[0x15b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x154];
  param_1[0x154] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x155];
    uVar7 = param_1[0x156];
    uVar9 = param_1[0x157];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x150];
  param_1[0x150] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x151];
    uVar7 = param_1[0x152];
    uVar9 = param_1[0x153];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x14c];
  param_1[0x14c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x14d];
    uVar7 = param_1[0x14e];
    uVar9 = param_1[0x14f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x148];
  param_1[0x148] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x149];
    uVar7 = param_1[0x14a];
    uVar9 = param_1[0x14b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x144];
  param_1[0x144] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x145];
    uVar7 = param_1[0x146];
    uVar9 = param_1[0x147];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x140];
  param_1[0x140] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x141];
    uVar7 = param_1[0x142];
    uVar9 = param_1[0x143];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x13c];
  param_1[0x13c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x13d];
    uVar7 = param_1[0x13e];
    uVar9 = param_1[0x13f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x138];
  param_1[0x138] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x139];
    uVar7 = param_1[0x13a];
    uVar9 = param_1[0x13b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x134];
  param_1[0x134] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x135];
    uVar7 = param_1[0x136];
    uVar9 = param_1[0x137];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x130];
  param_1[0x130] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x131];
    uVar7 = param_1[0x132];
    uVar9 = param_1[0x133];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[300];
  param_1[300] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x12d];
    uVar7 = param_1[0x12e];
    uVar9 = param_1[0x12f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x128];
  param_1[0x128] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x129];
    uVar7 = param_1[0x12a];
    uVar9 = param_1[299];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x124];
  param_1[0x124] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x125];
    uVar7 = param_1[0x126];
    uVar9 = param_1[0x127];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x120];
  param_1[0x120] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x121];
    uVar7 = param_1[0x122];
    uVar9 = param_1[0x123];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x11c];
  param_1[0x11c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x11d];
    uVar7 = param_1[0x11e];
    uVar9 = param_1[0x11f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x118];
  param_1[0x118] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x119];
    uVar7 = param_1[0x11a];
    uVar9 = param_1[0x11b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x114];
  param_1[0x114] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x115];
    uVar7 = param_1[0x116];
    uVar9 = param_1[0x117];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x110];
  param_1[0x110] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x111];
    uVar7 = param_1[0x112];
    uVar9 = param_1[0x113];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x10c];
  param_1[0x10c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x10d];
    uVar7 = param_1[0x10e];
    uVar9 = param_1[0x10f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x108];
  param_1[0x108] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x109];
    uVar7 = param_1[0x10a];
    uVar9 = param_1[0x10b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x104];
  param_1[0x104] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x105];
    uVar7 = param_1[0x106];
    uVar9 = param_1[0x107];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x100];
  param_1[0x100] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x101];
    uVar7 = param_1[0x102];
    uVar9 = param_1[0x103];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xfc];
  param_1[0xfc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xfd];
    uVar7 = param_1[0xfe];
    uVar9 = param_1[0xff];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xf8];
  param_1[0xf8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xf9];
    uVar7 = param_1[0xfa];
    uVar9 = param_1[0xfb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xf4];
  param_1[0xf4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xf5];
    uVar7 = param_1[0xf6];
    uVar9 = param_1[0xf7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xf0];
  param_1[0xf0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xf1];
    uVar7 = param_1[0xf2];
    uVar9 = param_1[0xf3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xec];
  param_1[0xec] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xed];
    uVar7 = param_1[0xee];
    uVar9 = param_1[0xef];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xe8];
  param_1[0xe8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xe9];
    uVar7 = param_1[0xea];
    uVar9 = param_1[0xeb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xe4];
  param_1[0xe4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xe5];
    uVar7 = param_1[0xe6];
    uVar9 = param_1[0xe7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xe0];
  param_1[0xe0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xe1];
    uVar7 = param_1[0xe2];
    uVar9 = param_1[0xe3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xdc];
  param_1[0xdc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xdd];
    uVar7 = param_1[0xde];
    uVar9 = param_1[0xdf];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xd8];
  param_1[0xd8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xd9];
    uVar7 = param_1[0xda];
    uVar9 = param_1[0xdb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xd4];
  param_1[0xd4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xd5];
    uVar7 = param_1[0xd6];
    uVar9 = param_1[0xd7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xd0];
  param_1[0xd0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xd1];
    uVar7 = param_1[0xd2];
    uVar9 = param_1[0xd3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xcc];
  param_1[0xcc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xcd];
    uVar7 = param_1[0xce];
    uVar9 = param_1[0xcf];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[200];
  param_1[200] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xc9];
    uVar7 = param_1[0xca];
    uVar9 = param_1[0xcb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xc4];
  param_1[0xc4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xc5];
    uVar7 = param_1[0xc6];
    uVar9 = param_1[199];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xc0];
  param_1[0xc0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xc1];
    uVar7 = param_1[0xc2];
    uVar9 = param_1[0xc3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xbc];
  param_1[0xbc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xbd];
    uVar7 = param_1[0xbe];
    uVar9 = param_1[0xbf];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xb8];
  param_1[0xb8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xb9];
    uVar7 = param_1[0xba];
    uVar9 = param_1[0xbb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xb4];
  param_1[0xb4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xb5];
    uVar7 = param_1[0xb6];
    uVar9 = param_1[0xb7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xb0];
  param_1[0xb0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xb1];
    uVar7 = param_1[0xb2];
    uVar9 = param_1[0xb3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xac];
  param_1[0xac] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xad];
    uVar7 = param_1[0xae];
    uVar9 = param_1[0xaf];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xa8];
  param_1[0xa8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xa9];
    uVar7 = param_1[0xaa];
    uVar9 = param_1[0xab];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xa4];
  param_1[0xa4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xa5];
    uVar7 = param_1[0xa6];
    uVar9 = param_1[0xa7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xa0];
  param_1[0xa0] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xa1];
    uVar7 = param_1[0xa2];
    uVar9 = param_1[0xa3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x9c];
  param_1[0x9c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x9d];
    uVar7 = param_1[0x9e];
    uVar9 = param_1[0x9f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x98];
  param_1[0x98] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x99];
    uVar7 = param_1[0x9a];
    uVar9 = param_1[0x9b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x94];
  param_1[0x94] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x95];
    uVar7 = param_1[0x96];
    uVar9 = param_1[0x97];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x90];
  param_1[0x90] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x91];
    uVar7 = param_1[0x92];
    uVar9 = param_1[0x93];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x8c];
  param_1[0x8c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x8d];
    uVar7 = param_1[0x8e];
    uVar9 = param_1[0x8f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x88];
  param_1[0x88] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x89];
    uVar7 = param_1[0x8a];
    uVar9 = param_1[0x8b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x84];
  param_1[0x84] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x85];
    uVar7 = param_1[0x86];
    uVar9 = param_1[0x87];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x80];
  param_1[0x80] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x81];
    uVar7 = param_1[0x82];
    uVar9 = param_1[0x83];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x7c];
  param_1[0x7c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x7d];
    uVar7 = param_1[0x7e];
    uVar9 = param_1[0x7f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x78];
  param_1[0x78] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x79];
    uVar7 = param_1[0x7a];
    uVar9 = param_1[0x7b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x74];
  param_1[0x74] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x75];
    uVar7 = param_1[0x76];
    uVar9 = param_1[0x77];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x70];
  param_1[0x70] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x71];
    uVar7 = param_1[0x72];
    uVar9 = param_1[0x73];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x6c];
  param_1[0x6c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x6d];
    uVar7 = param_1[0x6e];
    uVar9 = param_1[0x6f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x68];
  param_1[0x68] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x69];
    uVar7 = param_1[0x6a];
    uVar9 = param_1[0x6b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[100];
  param_1[100] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x65];
    uVar7 = param_1[0x66];
    uVar9 = param_1[0x67];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x60];
  param_1[0x60] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x61];
    uVar7 = param_1[0x62];
    uVar9 = param_1[99];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x5c];
  param_1[0x5c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x5d];
    uVar7 = param_1[0x5e];
    uVar9 = param_1[0x5f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x58];
  param_1[0x58] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x59];
    uVar7 = param_1[0x5a];
    uVar9 = param_1[0x5b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x54];
  param_1[0x54] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x55];
    uVar7 = param_1[0x56];
    uVar9 = param_1[0x57];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x50];
  param_1[0x50] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x51];
    uVar7 = param_1[0x52];
    uVar9 = param_1[0x53];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x4c];
  param_1[0x4c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x4d];
    uVar7 = param_1[0x4e];
    uVar9 = param_1[0x4f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x48];
  param_1[0x48] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x49];
    uVar7 = param_1[0x4a];
    uVar9 = param_1[0x4b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x44];
  param_1[0x44] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x45];
    uVar7 = param_1[0x46];
    uVar9 = param_1[0x47];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x40];
  param_1[0x40] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x41];
    uVar7 = param_1[0x42];
    uVar9 = param_1[0x43];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x3c];
  param_1[0x3c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x3d];
    uVar7 = param_1[0x3e];
    uVar9 = param_1[0x3f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x38];
  param_1[0x38] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x39];
    uVar7 = param_1[0x3a];
    uVar9 = param_1[0x3b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x34];
  param_1[0x34] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x35];
    uVar7 = param_1[0x36];
    uVar9 = param_1[0x37];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x30];
  param_1[0x30] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x31];
    uVar7 = param_1[0x32];
    uVar9 = param_1[0x33];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x2c];
  param_1[0x2c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x2d];
    uVar7 = param_1[0x2e];
    uVar9 = param_1[0x2f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x28];
  param_1[0x28] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x29];
    uVar7 = param_1[0x2a];
    uVar9 = param_1[0x2b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x24];
  param_1[0x24] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x25];
    uVar7 = param_1[0x26];
    uVar9 = param_1[0x27];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x20];
  param_1[0x20] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x21];
    uVar7 = param_1[0x22];
    uVar9 = param_1[0x23];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x1d];
    uVar7 = param_1[0x1e];
    uVar9 = param_1[0x1f];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x18];
  param_1[0x18] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x19];
    uVar7 = param_1[0x1a];
    uVar9 = param_1[0x1b];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x14];
  param_1[0x14] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x15];
    uVar7 = param_1[0x16];
    uVar9 = param_1[0x17];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0x11];
    uVar7 = param_1[0x12];
    uVar9 = param_1[0x13];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[0xc];
  param_1[0xc] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[0xd];
    uVar7 = param_1[0xe];
    uVar9 = param_1[0xf];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[9];
    uVar7 = param_1[10];
    uVar9 = param_1[0xb];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)param_1[4];
  param_1[4] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[5];
    uVar7 = param_1[6];
    uVar9 = param_1[7];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  puVar6 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar4 = FUN_00c4e600();
    iVar3 = *(int *)(lVar4 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (*(int *)(lVar4 + 0x12cc) <= iVar3) {
      *(int *)(lVar4 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar6)(puVar6);
    plVar11 = (long *)param_1[1];
    uVar7 = param_1[2];
    uVar9 = param_1[3];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar6,uVar7,uVar9);
    }
    else {
      FUN_00c48fe8(plVar11,puVar6,uVar7,uVar9);
    }
    lVar4 = FUN_00c4e600();
    iVar1 = *(int *)(lVar4 + 0x12c8) + -1;
    *(int *)(lVar4 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_68 = plVar11 + plVar11[600] * 3;
        local_48 = plVar11;
        FUN_00c4ea30(&local_48,&local_68);
        plVar8 = (long *)*plVar11;
        plVar2 = plVar11;
        if (plVar11[600] != 0) {
          plVar2 = plVar11 + plVar11[600] * 3;
        }
        if (plVar2 == plVar11) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar10 = plVar11;
          do {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar8) {
              (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar10);
              plVar8 = (long *)*plVar10;
              lVar13 = lVar12;
            }
            plVar10 = plVar10 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar10);
        }
        (**(code **)(*plVar8 + 0x100))(plVar8,plVar11 + lVar13 * 3,plVar11 + lVar12 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar4 + 0x12cc) = 0;
    }
  }
  return;
}


