/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0323f858; name: FUN_0323f858
 */


undefined8 FUN_0323f858(long param_1,long *param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  ushort *puVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  byte bVar19;
  int *piVar20;
  ulong uVar21;
  undefined1 *local_1078;
  uint local_1070;
  uint local_106c;
  undefined1 local_1068 [4104];
  
  piVar20 = (int *)PTR_DAT_047e4f38;
  iVar8 = *(int *)PTR_DAT_047e4f38;
  lVar6 = tpidr_el0;
  lVar9 = *(long *)(lVar6 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar8 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  uVar15 = *(uint *)(param_1 + 0x20);
  local_1078 = local_1068;
  local_1070 = 0;
  local_106c = -0x7ffffc00;
  if (0x400 < (int)uVar15) {
    FUN_00cb58c0(&local_1078,PTR_PTR_047d1a50,uVar15);
  }
  if ((int)local_1070 < (int)uVar15) {
    lVar9 = (long)(int)local_1070;
    uVar5 = ~local_1070;
    local_1070 = uVar15;
    memset(local_1078 + lVar9,1,(ulong)(uVar15 + uVar5) + 1);
  }
  else if ((int)uVar15 < (int)local_1070) {
    local_1070 = uVar15;
  }
  if (0 < *(int *)(param_1 + 0x330)) {
    lVar10 = 0;
    lVar9 = 0;
    do {
      lVar9 = lVar9 + 1;
      uVar4 = *(ushort *)(*(long *)(param_1 + 0x328) + lVar10);
      lVar10 = lVar10 + 4;
      uVar15 = uVar15 - (byte)local_1078[uVar4];
      local_1078[uVar4] = 0;
    } while (lVar9 < *(int *)(param_1 + 0x330));
  }
  uVar5 = *(uint *)(param_1 + 0x20);
  if (uVar15 == 1) {
    if (0 < (int)uVar5) {
      uVar21 = 0;
      do {
        if (local_1078[uVar21] != '\0') goto LAB_0323facc;
        uVar21 = uVar21 + 1;
      } while (uVar5 != uVar21);
    }
    uVar21 = 0;
  }
  else {
    uVar15 = uVar5;
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= (int)uVar5) {
      FUN_0323ff70(param_1 + 0x18,PTR_PTR_047d1a50,(long)(int)uVar5 + 1);
      uVar15 = *(uint *)(param_1 + 0x20);
    }
    puVar11 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar15 * 0x18);
    *(int *)(param_1 + 0x20) = (int)((long)(int)uVar5 + 1);
    *(undefined2 *)(puVar11 + 1) = 1;
    *puVar11 = 0;
    *(undefined1 *)((long)puVar11 + 10) = 0x40;
    puVar11[2] = 0;
    puVar7 = PTR_PTR_047d1a50;
    iVar8 = *(int *)(param_1 + 0x20);
    if (iVar8 < 2) {
      bVar19 = 0;
    }
    else {
      lVar9 = 0;
      bVar19 = 0;
      lVar10 = 10;
      do {
        bVar3 = *(byte *)(*(long *)(param_1 + 0x18) + lVar10);
        if (bVar19 <= bVar3) {
          bVar19 = bVar3;
        }
        if (local_1078[lVar9] != '\0') {
          iVar8 = *(int *)(param_1 + 0x330);
          lVar12 = (long)iVar8;
          if ((int)(*(uint *)(param_1 + 0x334) & 0x7fffffff) <= iVar8) {
            FUN_02e7f7cc(param_1 + 0x328,puVar7,lVar12 + 1);
            iVar8 = *(int *)(param_1 + 0x330);
          }
          puVar1 = (undefined2 *)(*(long *)(param_1 + 0x328) + (long)iVar8 * 4);
          *(int *)(param_1 + 0x330) = (int)(lVar12 + 1);
          *puVar1 = (short)lVar9;
          puVar1[1] = (short)uVar5;
          iVar8 = *(int *)(param_1 + 0x20);
        }
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x18;
      } while (lVar9 < iVar8 + -1);
    }
    uVar21 = (ulong)uVar5 & 0xffff;
    *(byte *)(*(long *)(param_1 + 0x18) + uVar21 * 0x18 + 10) = bVar19;
    piVar20 = (int *)PTR_DAT_047e4f38;
  }
LAB_0323facc:
  puVar7 = PTR_PTR_047d1a50;
  local_1070 = 0;
  if ((-1 < (int)local_106c) && (local_1078 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50);
  }
  iVar8 = *piVar20;
  lVar9 = *(long *)(lVar6 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar8 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  uVar15 = *(uint *)(param_1 + 0x20);
  uVar14 = (ulong)uVar15;
  uVar5 = *(uint *)(param_1 + 0x330);
  uVar17 = (ulong)uVar5;
  if ((int)uVar15 < 1) {
    uVar18 = 0;
  }
  else {
    if (uVar15 == 1) {
      uVar13 = 0;
      uVar18 = 0;
    }
    else {
      uVar13 = 0;
      uVar18 = 0;
      plVar16 = (long *)(*(long *)(param_1 + 0x18) + 0x28);
      do {
        if (plVar16[-3] == 0) {
          uVar18 = uVar18 + 1;
        }
        uVar13 = uVar13 + 2;
        if (*plVar16 == 0) {
          uVar18 = uVar18 + 1;
        }
        plVar16 = plVar16 + 6;
      } while ((uVar14 & 0xfffffffe) != uVar13);
    }
    if (((uVar15 & 1) != 0) && (*(long *)(*(long *)(param_1 + 0x18) + uVar13 * 0x18 + 0x10) == 0)) {
      uVar18 = uVar18 + 1;
    }
  }
  local_1078 = local_1068;
  local_1070 = 0;
  local_106c = 0x80000100;
  if (0x100 < uVar18) {
    FUN_0315efe8(&local_1078,puVar7 + 0x20,uVar18);
  }
  local_1070 = uVar18;
  (**(code **)(*param_2 + 0x18))(param_2,local_1078,uVar18,8);
  if (0 < (int)uVar15) {
    lVar9 = 0;
    iVar8 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x18) + lVar9;
      if (*(long *)(lVar10 + 0x10) == 0) {
        lVar12 = (long)iVar8;
        iVar8 = iVar8 + 1;
        *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(local_1078 + lVar12 * 8);
      }
      lVar9 = lVar9 + 0x18;
    } while (uVar14 * 0x18 != lVar9);
  }
  local_1070 = 0;
  if ((-1 < (int)local_106c) && (local_1078 != (undefined1 *)0x0)) {
    plVar16 = (long *)(puVar7 + 0x20);
    (**(code **)(*plVar16 + 0x20))(plVar16,local_1078,(ulong)local_106c << 3);
  }
  iVar8 = *piVar20;
  lVar9 = *(long *)(lVar6 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar8 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (0 < (int)uVar15) {
    lVar9 = 0;
    do {
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar9);
      (**(code **)(*param_2 + 0x28))
                (param_2,puVar11[2],*puVar11,*(undefined1 *)((long)puVar11 + 10));
      if (1 < *(ushort *)(puVar11 + 1)) {
        (**(code **)(*param_2 + 0x38))
                  (param_2,puVar11[2],*(ushort *)(puVar11 + 1),*(undefined1 *)((long)puVar11 + 0xb))
        ;
      }
      lVar9 = lVar9 + 0x18;
    } while (uVar14 * 0x18 != lVar9);
  }
  iVar8 = *piVar20;
  lVar9 = *(long *)(lVar6 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar8 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (0 < (int)uVar5) {
    local_1070 = 0;
    local_106c = 0x80000100;
    local_1078 = local_1068;
    if (0x100 < (int)uVar5) {
      FUN_0324048c(&local_1078,uVar17);
    }
    if (local_1070 != uVar5) {
      local_1070 = uVar5;
    }
    lVar9 = 0;
    lVar10 = 0;
    do {
      puVar2 = (ushort *)(*(long *)(param_1 + 0x328) + lVar9);
      lVar9 = lVar9 + 4;
      puVar11 = (undefined8 *)(local_1078 + lVar10);
      lVar10 = lVar10 + 0x10;
      *puVar11 = *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)*puVar2 * 0x18 + 0x10);
      uVar17 = uVar17 - 1;
      puVar11[1] = *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)puVar2[1] * 0x18 + 0x10);
    } while (uVar17 != 0);
    (**(code **)(*param_2 + 0x48))(param_2,local_1078,uVar5);
    local_1070 = 0;
    if ((-1 < (int)local_106c) && (local_1078 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_1078,(ulong)local_106c << 4);
    }
  }
  iVar8 = *piVar20;
  lVar9 = *(long *)(lVar6 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar8 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  (**(code **)(*param_2 + 0x50))
            (param_2,*(long *)(param_1 + 0x18) + 0x10,*(undefined4 *)(param_1 + 0x20),param_3,0x18);
  iVar8 = *piVar20;
  lVar9 = *(long *)(lVar6 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar8 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar21 * 0x18 + 0x10);
}


