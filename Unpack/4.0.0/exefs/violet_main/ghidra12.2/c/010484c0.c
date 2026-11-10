/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010484c0; name: FUN_010484c0
 */


void FUN_010484c0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *local_68;
  long *local_48;
  
  puVar8 = (undefined8 *)param_1[0x14];
  param_1[0x14] = 0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar5 = FUN_00c4e600();
    iVar4 = *(int *)(lVar5 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (*(int *)(lVar5 + 0x12cc) <= iVar4) {
      *(int *)(lVar5 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar8)(puVar8);
    plVar7 = (long *)param_1[0x15];
    uVar3 = param_1[0x16];
    uVar10 = param_1[0x17];
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,uVar3,uVar10);
    }
    else {
      FUN_00c48fe8(plVar7,puVar8,uVar3,uVar10);
    }
    lVar5 = FUN_00c4e600();
    iVar1 = *(int *)(lVar5 + 0x12c8) + -1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_68 = plVar7 + plVar7[600] * 3;
        local_48 = plVar7;
        FUN_00c4ea30(&local_48,&local_68);
        plVar9 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar11 = plVar7;
          do {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar9) {
              (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar13 * 3,plVar11);
              plVar9 = (long *)*plVar11;
              lVar13 = lVar12;
            }
            plVar11 = plVar11 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar11);
        }
        (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar13 * 3,plVar7 + lVar12 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar5 + 0x12cc) = 0;
    }
  }
  puVar8 = (undefined8 *)param_1[0x10];
  param_1[0x10] = 0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar5 = FUN_00c4e600();
    iVar4 = *(int *)(lVar5 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (*(int *)(lVar5 + 0x12cc) <= iVar4) {
      *(int *)(lVar5 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar8)(puVar8);
    plVar7 = (long *)param_1[0x11];
    uVar3 = param_1[0x12];
    uVar10 = param_1[0x13];
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,uVar3,uVar10);
    }
    else {
      FUN_00c48fe8(plVar7,puVar8,uVar3,uVar10);
    }
    lVar5 = FUN_00c4e600();
    iVar1 = *(int *)(lVar5 + 0x12c8) + -1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_68 = plVar7 + plVar7[600] * 3;
        local_48 = plVar7;
        FUN_00c4ea30(&local_48,&local_68);
        plVar9 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar11 = plVar7;
          do {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar9) {
              (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar13 * 3,plVar11);
              plVar9 = (long *)*plVar11;
              lVar13 = lVar12;
            }
            plVar11 = plVar11 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar11);
        }
        (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar13 * 3,plVar7 + lVar12 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar5 + 0x12cc) = 0;
    }
  }
  puVar8 = (undefined8 *)param_1[0xc];
  param_1[0xc] = 0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar5 = FUN_00c4e600();
    iVar4 = *(int *)(lVar5 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (*(int *)(lVar5 + 0x12cc) <= iVar4) {
      *(int *)(lVar5 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar8)(puVar8);
    plVar7 = (long *)param_1[0xd];
    uVar3 = param_1[0xe];
    uVar10 = param_1[0xf];
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,uVar3,uVar10);
    }
    else {
      FUN_00c48fe8(plVar7,puVar8,uVar3,uVar10);
    }
    lVar5 = FUN_00c4e600();
    iVar1 = *(int *)(lVar5 + 0x12c8) + -1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_68 = plVar7 + plVar7[600] * 3;
        local_48 = plVar7;
        FUN_00c4ea30(&local_48,&local_68);
        plVar9 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar11 = plVar7;
          do {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar9) {
              (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar13 * 3,plVar11);
              plVar9 = (long *)*plVar11;
              lVar13 = lVar12;
            }
            plVar11 = plVar11 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar11);
        }
        (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar13 * 3,plVar7 + lVar12 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar5 + 0x12cc) = 0;
    }
  }
  puVar8 = (undefined8 *)param_1[8];
  param_1[8] = 0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar5 = FUN_00c4e600();
    iVar4 = *(int *)(lVar5 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (*(int *)(lVar5 + 0x12cc) <= iVar4) {
      *(int *)(lVar5 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar8)(puVar8);
    plVar7 = (long *)param_1[9];
    uVar3 = param_1[10];
    uVar10 = param_1[0xb];
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,uVar3,uVar10);
    }
    else {
      FUN_00c48fe8(plVar7,puVar8,uVar3,uVar10);
    }
    lVar5 = FUN_00c4e600();
    iVar1 = *(int *)(lVar5 + 0x12c8) + -1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_68 = plVar7 + plVar7[600] * 3;
        local_48 = plVar7;
        FUN_00c4ea30(&local_48,&local_68);
        plVar9 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar11 = plVar7;
          do {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar9) {
              (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar13 * 3,plVar11);
              plVar9 = (long *)*plVar11;
              lVar13 = lVar12;
            }
            plVar11 = plVar11 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar11);
        }
        (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar13 * 3,plVar7 + lVar12 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar5 + 0x12cc) = 0;
    }
  }
  puVar8 = (undefined8 *)param_1[4];
  param_1[4] = 0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar5 = FUN_00c4e600();
    iVar4 = *(int *)(lVar5 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (*(int *)(lVar5 + 0x12cc) <= iVar4) {
      *(int *)(lVar5 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar8)(puVar8);
    plVar7 = (long *)param_1[5];
    uVar3 = param_1[6];
    uVar10 = param_1[7];
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,uVar3,uVar10);
    }
    else {
      FUN_00c48fe8(plVar7,puVar8,uVar3,uVar10);
    }
    lVar5 = FUN_00c4e600();
    iVar1 = *(int *)(lVar5 + 0x12c8) + -1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_68 = plVar7 + plVar7[600] * 3;
        local_48 = plVar7;
        FUN_00c4ea30(&local_48,&local_68);
        plVar9 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar11 = plVar7;
          do {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar9) {
              (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar13 * 3,plVar11);
              plVar9 = (long *)*plVar11;
              lVar13 = lVar12;
            }
            plVar11 = plVar11 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar11);
        }
        (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar13 * 3,plVar7 + lVar12 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar5 + 0x12cc) = 0;
    }
  }
  puVar8 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar5 = FUN_00c4e600();
    iVar4 = *(int *)(lVar5 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (*(int *)(lVar5 + 0x12cc) <= iVar4) {
      *(int *)(lVar5 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar8)(puVar8);
    plVar7 = (long *)param_1[1];
    uVar3 = param_1[2];
    uVar10 = param_1[3];
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,uVar3,uVar10);
    }
    else {
      FUN_00c48fe8(plVar7,puVar8,uVar3,uVar10);
    }
    lVar5 = FUN_00c4e600();
    iVar1 = *(int *)(lVar5 + 0x12c8) + -1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_68 = plVar7 + plVar7[600] * 3;
        local_48 = plVar7;
        FUN_00c4ea30(&local_48,&local_68);
        plVar9 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar11 = plVar7;
          do {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar9) {
              (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar13 * 3,plVar11);
              plVar9 = (long *)*plVar11;
              lVar13 = lVar12;
            }
            plVar11 = plVar11 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar11);
        }
        (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar13 * 3,plVar7 + lVar12 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar5 + 0x12cc) = 0;
    }
  }
  return;
}


