/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a3d34; name: FUN_030a3d34
 */


void FUN_030a3d34(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_260 [448];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  
  puVar5 = PTR_DAT_047e34b8;
  iVar8 = *(int *)(param_2 + 8);
  lVar17 = *(long *)(param_1 + 0x18);
  lVar14 = lVar17 + (long)*(int *)(param_2 + 4) * 0x38;
  uVar9 = *(uint *)(param_1 + 0x70);
  if (0 < (int)uVar9) {
    uVar16 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x68) + uVar16 * 8) == lVar14) goto LAB_030a3e1c;
      uVar16 = uVar16 + 1;
    } while (uVar9 != uVar16);
  }
  local_68 = 0;
  local_a0 = PTR_DAT_047e34b8 + 0x10;
  uStack_98 = 0xffffffff;
  uStack_78 = 0;
  local_70 = 0x1bf;
  local_90 = 1;
  uStack_88 = 0;
  local_80 = auStack_260;
  memset(auStack_260,0,0x1c0);
  FUN_0322bd4c(&local_a0,"edge not on sweep line",0x16);
  iVar7 = FUN_03226f50(0x3cbb03f2,auStack_260,
                       "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Pathfinding/NavMesh/ResolveEdgePenetrations/hkaiFindPointInPolygon.cpp"
                       ,0x359);
  if (iVar7 != 0) {
    CallSupervisor(0x26);
  }
  uVar9 = *(uint *)(param_1 + 0x70);
  uVar16 = 0;
LAB_030a3e1c:
  lVar17 = lVar17 + (long)iVar8 * 0x38;
  if (0 < (int)uVar9) {
    uVar12 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x68) + uVar12 * 8) == lVar17) goto LAB_030a3ec4;
      uVar12 = uVar12 + 1;
    } while (uVar9 != uVar12);
  }
  local_68 = 0;
  local_a0 = puVar5 + 0x10;
  uStack_98 = 0xffffffff;
  uStack_78 = 0;
  local_70 = 0x1bf;
  local_90 = 1;
  uStack_88 = 0;
  local_80 = auStack_260;
  memset(auStack_260,0,0x1c0);
  FUN_0322bd4c(&local_a0,"edge not on sweep line",0x16);
  iVar8 = FUN_03226f50(0x3cbb03f2,auStack_260,
                       "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Ai/Pathfinding/NavMesh/ResolveEdgePenetrations/hkaiFindPointInPolygon.cpp"
                       ,0x359);
  if (iVar8 != 0) {
    CallSupervisor(0x26);
  }
  uVar9 = *(uint *)(param_1 + 0x70);
  uVar12 = 0;
LAB_030a3ec4:
  iVar7 = (int)uVar12;
  iVar10 = (int)uVar16;
  iVar8 = iVar10;
  if (iVar10 <= iVar7) {
    iVar8 = iVar7;
    lVar17 = lVar14;
    iVar7 = iVar10;
  }
  uVar3 = iVar7 - 1;
  if (uVar9 != 0) {
    uVar1 = uVar9;
    if ((int)uVar3 <= (int)uVar9) {
      uVar1 = uVar3;
    }
    if (iVar7 < 1) {
      uVar1 = 0;
    }
    uVar16 = (ulong)uVar1;
    uVar2 = uVar9;
    if (iVar8 < (int)uVar9) {
      uVar2 = iVar8 + 1;
    }
    uVar15 = 0;
    if (-2 < iVar8) {
      uVar15 = uVar2;
    }
    if (uVar15 == uVar9) {
      uVar15 = uVar9 - 1;
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + (long)(int)uVar15 * 8) + 0x20) =
           *(undefined4 *)(param_1 + 0x60);
    }
    if ((int)uVar1 < (int)uVar15) {
      uVar12 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3;
      do {
        lVar14 = *(long *)(*(long *)(param_1 + 0x68) + uVar12);
        if (*(int *)(lVar14 + 0x1c) == 0) {
          FUN_030a4544(param_1,uVar16);
          lVar14 = *(long *)(*(long *)(param_1 + 0x68) + uVar12);
        }
        uVar9 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar9;
        uVar12 = uVar12 + 8;
        *(undefined4 *)(lVar14 + 0x20) = *(undefined4 *)(param_1 + 0x60);
      } while (uVar15 != uVar9);
    }
  }
  if (iVar8 == iVar7 + 1) {
    iVar8 = *(int *)(param_1 + 0x70) + -2;
    lVar17 = *(long *)(param_1 + 0x68);
    uVar9 = iVar8 - iVar7;
    *(int *)(param_1 + 0x70) = iVar8;
    if (uVar9 != 0) {
      uVar16 = -(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3;
      if (uVar16 < 9) {
        uVar16 = 8;
      }
      uVar12 = (uVar16 - 1 >> 3) + 1;
      uVar13 = uVar12 & 3;
      if (uVar16 - 1 < 0x18) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        puVar11 = (undefined8 *)(lVar17 + (long)iVar7 * 8 + 0x18);
        do {
          uVar16 = uVar16 + 4;
          puVar11[-3] = puVar11[-1];
          puVar11[-2] = *puVar11;
          puVar11[-1] = puVar11[1];
          *puVar11 = puVar11[2];
          puVar11 = puVar11 + 4;
        } while ((uVar12 & 0x3ffffffffffffffc) != uVar16);
      }
      if (uVar13 != 0) {
        lVar14 = -uVar13;
        puVar11 = (undefined8 *)(lVar17 + (uVar16 + (long)iVar7) * 8 + 0x10);
        do {
          puVar11[-2] = *puVar11;
          puVar11 = puVar11 + 1;
          bVar6 = lVar14 != -1;
          lVar14 = lVar14 + 1;
        } while (bVar6);
      }
    }
  }
  else {
    iVar10 = 1;
    if (*(char *)(lVar17 + 4) == '\0') {
      iVar10 = -1;
    }
    iVar4 = iVar8 + -1;
    if (iVar7 < iVar4) {
      lVar17 = (long)iVar7;
      do {
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x68) + lVar17 * 8);
        *puVar11 = puVar11[1];
        lVar14 = *(long *)(*(long *)(param_1 + 0x68) + lVar17 * 8);
        lVar17 = lVar17 + 1;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + iVar10;
      } while (iVar4 != lVar17);
    }
    uVar9 = *(int *)(param_1 + 0x70) - 2;
    uVar16 = (ulong)uVar9;
    if (iVar8 <= (int)uVar9) {
      lVar17 = (long)iVar4;
      do {
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x68) + lVar17 * 8);
        lVar17 = lVar17 + 1;
        *puVar11 = puVar11[2];
        uVar16 = (long)*(int *)(param_1 + 0x70) - 2;
      } while (lVar17 < (long)uVar16);
    }
    *(int *)(param_1 + 0x70) = (int)uVar16;
    FUN_030a40e4(param_1,uVar3);
    uVar3 = iVar8 - 2;
  }
  FUN_030a40e4(param_1,uVar3);
  return;
}


