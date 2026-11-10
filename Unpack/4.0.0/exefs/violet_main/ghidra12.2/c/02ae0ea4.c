/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ae0ea4; name: FUN_02ae0ea4
 */


void FUN_02ae0ea4(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long local_200;
  undefined2 local_1f4;
  undefined1 auStack_1f0 [76];
  undefined1 auStack_1a4 [76];
  undefined2 local_158;
  undefined1 local_156;
  undefined1 auStack_154 [76];
  long *local_108 [10];
  long *local_b8 [9];
  undefined2 local_6c;
  
  puVar9 = (undefined8 *)(param_1 + 0x980);
  lVar14 = 9;
  do {
    puVar8 = (undefined8 *)*puVar9;
    *puVar9 = 0;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar5 = FUN_00c4e600();
      iVar3 = *(int *)(lVar5 + 0x12c8);
      iVar1 = iVar3 + 1;
      *(int *)(lVar5 + 0x12c8) = iVar1;
      if (*(int *)(lVar5 + 0x12cc) <= iVar3) {
        *(int *)(lVar5 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar8)(puVar8);
      plVar7 = (long *)puVar9[1];
      uVar10 = puVar9[2];
      uVar11 = puVar9[3];
      uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,uVar10,uVar11);
      }
      else {
        FUN_00c48fe8(plVar7,puVar8,uVar10,uVar11);
      }
      lVar5 = FUN_00c4e600();
      iVar1 = *(int *)(lVar5 + 0x12c8) + -1;
      *(int *)(lVar5 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar7 = (long *)FUN_00c4e600();
        if (plVar7[600] != 0) {
          local_108[0] = plVar7 + plVar7[600] * 3;
          local_b8[0] = plVar7;
          FUN_00c4ea30(local_b8,local_108);
          plVar12 = (long *)*plVar7;
          plVar2 = plVar7;
          if (plVar7[600] != 0) {
            plVar2 = plVar7 + plVar7[600] * 3;
          }
          if (plVar2 == plVar7) {
            lVar15 = 0;
            local_200 = 0;
          }
          else {
            lVar15 = 0;
            local_200 = 0;
            plVar13 = plVar7;
            do {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              if ((long *)*plVar13 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + local_200 * 3,plVar13);
                plVar12 = (long *)*plVar13;
                local_200 = lVar15;
              }
              plVar13 = plVar13 + 3;
              lVar15 = lVar15 + 1;
            } while (plVar2 != plVar13);
          }
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + local_200 * 3,plVar7 + lVar15 * 3);
          plVar7[600] = 0;
        }
        *(undefined4 *)(lVar5 + 0x12cc) = 0;
      }
    }
    puVar9 = puVar9 + 4;
    bVar4 = lVar14 != 0;
    lVar14 = lVar14 + -1;
  } while (bVar4 && lVar14 != 0);
  puVar9 = *(undefined8 **)(param_1 + 0xaa0);
  *(undefined8 *)(param_1 + 0xaa0) = 0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar14 = FUN_00c4e600();
    iVar3 = *(int *)(lVar14 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar14 + 0x12c8) = iVar1;
    if (*(int *)(lVar14 + 0x12cc) <= iVar3) {
      *(int *)(lVar14 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar9)(puVar9);
    plVar7 = *(long **)(param_1 + 0xaa8);
    uVar10 = *(undefined8 *)(param_1 + 0xab0);
    uVar11 = *(undefined8 *)(param_1 + 0xab8);
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar9,uVar10,uVar11);
    }
    else {
      FUN_00c48fe8(plVar7,puVar9,uVar10,uVar11);
    }
    lVar14 = FUN_00c4e600();
    iVar1 = *(int *)(lVar14 + 0x12c8) + -1;
    *(int *)(lVar14 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_108[0] = plVar7 + plVar7[600] * 3;
        local_b8[0] = plVar7;
        FUN_00c4ea30(local_b8,local_108);
        plVar12 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          lVar15 = 0;
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          lVar15 = 0;
          plVar13 = plVar7;
          do {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + lVar15 * 3,plVar13);
              plVar12 = (long *)*plVar13;
              lVar15 = lVar5;
            }
            plVar13 = plVar13 + 3;
            lVar5 = lVar5 + 1;
          } while (plVar2 != plVar13);
        }
        (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + lVar15 * 3,plVar7 + lVar5 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar14 + 0x12cc) = 0;
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0xac0);
  *(undefined8 *)(param_1 + 0xac0) = 0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar14 = FUN_00c4e600();
    iVar3 = *(int *)(lVar14 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar14 + 0x12c8) = iVar1;
    if (*(int *)(lVar14 + 0x12cc) <= iVar3) {
      *(int *)(lVar14 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar9)(puVar9);
    plVar7 = *(long **)(param_1 + 0xac8);
    uVar10 = *(undefined8 *)(param_1 + 0xad0);
    uVar11 = *(undefined8 *)(param_1 + 0xad8);
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar9,uVar10,uVar11);
    }
    else {
      FUN_00c48fe8(plVar7,puVar9,uVar10,uVar11);
    }
    lVar14 = FUN_00c4e600();
    iVar1 = *(int *)(lVar14 + 0x12c8) + -1;
    *(int *)(lVar14 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_108[0] = plVar7 + plVar7[600] * 3;
        local_b8[0] = plVar7;
        FUN_00c4ea30(local_b8,local_108);
        plVar12 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          lVar15 = 0;
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          lVar15 = 0;
          plVar13 = plVar7;
          do {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + lVar15 * 3,plVar13);
              plVar12 = (long *)*plVar13;
              lVar15 = lVar5;
            }
            plVar13 = plVar13 + 3;
            lVar5 = lVar5 + 1;
          } while (plVar2 != plVar13);
        }
        (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + lVar15 * 3,plVar7 + lVar5 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar14 + 0x12cc) = 0;
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0xae0);
  *(undefined8 *)(param_1 + 0xae0) = 0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar14 = FUN_00c4e600();
    iVar3 = *(int *)(lVar14 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar14 + 0x12c8) = iVar1;
    if (*(int *)(lVar14 + 0x12cc) <= iVar3) {
      *(int *)(lVar14 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar9)(puVar9);
    plVar7 = *(long **)(param_1 + 0xae8);
    uVar10 = *(undefined8 *)(param_1 + 0xaf0);
    uVar11 = *(undefined8 *)(param_1 + 0xaf8);
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar9,uVar10,uVar11);
    }
    else {
      FUN_00c48fe8(plVar7,puVar9,uVar10,uVar11);
    }
    lVar14 = FUN_00c4e600();
    iVar1 = *(int *)(lVar14 + 0x12c8) + -1;
    *(int *)(lVar14 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_108[0] = plVar7 + plVar7[600] * 3;
        local_b8[0] = plVar7;
        FUN_00c4ea30(local_b8,local_108);
        plVar12 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          lVar15 = 0;
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          lVar15 = 0;
          plVar13 = plVar7;
          do {
            (**(code **)(*(long *)*plVar13 + 0xd0))();
            if ((long *)*plVar13 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + lVar15 * 3,plVar13);
              plVar12 = (long *)*plVar13;
              lVar15 = lVar5;
            }
            plVar13 = plVar13 + 3;
            lVar5 = lVar5 + 1;
          } while (plVar2 != plVar13);
        }
        (**(code **)(*plVar12 + 0x100))(plVar12,plVar7 + lVar15 * 3,plVar7 + lVar5 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar14 + 0x12cc) = 0;
    }
  }
  memset((void *)((ulong)local_b8 | 2),0,0x4a);
  memset((void *)((ulong)local_108 | 2),0,0x4a);
  memset((void *)((ulong)auStack_154 | 2),0,0x48);
  memset((void *)((ulong)auStack_1a4 | 2),0,0x4a);
  memset((void *)((ulong)auStack_1f0 | 2),0,0x4a);
  *(undefined2 *)(param_1 + 0x34c) = 0x100;
  *(undefined2 *)(param_1 + 0x350) = 0;
  memcpy((void *)(param_1 + 0x352),local_b8,0x4c);
  memcpy((void *)(param_1 + 0x39e),local_108,0x4c);
  memcpy((void *)(param_1 + 0x3ea),auStack_154,0x4a);
  *(undefined1 *)(param_1 + 0x434) = 1;
  *(undefined2 *)(param_1 + 0x438) = 0;
  memcpy((void *)(param_1 + 0x43a),auStack_1a4,0x4c);
  memcpy((void *)(param_1 + 0x486),auStack_1f0,0x4c);
  memset((void *)(param_1 + 0x4d4),0,0x89);
  *(undefined1 *)(param_1 + 0x55d) = 1;
  *(undefined2 *)(param_1 + 0x560) = 0;
  memcpy((void *)(param_1 + 0x562),local_b8,0x4c);
  memcpy((void *)(param_1 + 0x5ae),local_108,0x4c);
  memcpy((void *)(param_1 + 0x5fa),auStack_154,0x4a);
  *(undefined1 *)(param_1 + 0x644) = 1;
  *(undefined2 *)(param_1 + 0x648) = 0;
  memcpy((void *)(param_1 + 0x64a),auStack_1a4,0x4c);
  memcpy((void *)(param_1 + 0x696),auStack_1f0,0x4c);
  memset((void *)(param_1 + 0x6e4),0,0x89);
  *(undefined1 *)(param_1 + 0x76d) = 1;
  *(undefined2 *)(param_1 + 0x76e) = local_6c;
  *(undefined2 *)(param_1 + 0x770) = 0;
  memcpy((void *)(param_1 + 0x772),local_b8,0x4c);
  memcpy((void *)(param_1 + 0x7be),local_108,0x4c);
  memcpy((void *)(param_1 + 0x80a),auStack_154,0x4a);
  *(undefined1 *)(param_1 + 0x854) = 1;
  *(undefined2 *)(param_1 + 0x855) = local_158;
  *(undefined1 *)(param_1 + 0x857) = local_156;
  *(undefined2 *)(param_1 + 0x858) = 0;
  memcpy((void *)(param_1 + 0x85a),auStack_1a4,0x4c);
  memcpy((void *)(param_1 + 0x8a6),auStack_1f0,0x4c);
  *(undefined2 *)(param_1 + 0x8f2) = local_1f4;
  memset((void *)(param_1 + 0x8f4),0,0x88);
  return;
}


