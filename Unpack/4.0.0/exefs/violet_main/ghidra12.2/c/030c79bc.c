/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030c79bc; name: FUN_030c79bc
 */


int FUN_030c79bc(undefined8 *param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  uint *puVar10;
  uint *puVar11;
  ushort *puVar12;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  ulong *puVar27;
  ulong uVar28;
  undefined8 *puVar29;
  uint uVar30;
  undefined8 uVar31;
  long lVar32;
  ulong uVar33;
  uint *puVar34;
  ulong *puVar35;
  float *pfVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  ulong local_120;
  ulong local_100;
  ulong *puStack_f8;
  ulong *local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  ulong local_d0;
  ulong *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  uint local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  ushort *local_88;
  
  if (*(int *)(param_1 + 0xf) == 0) {
    return 2;
  }
  puVar14 = (uint *)param_1[0xe];
  iVar25 = *(int *)(param_1 + 0xf) + -1;
  puVar35 = (ulong *)*param_1;
  uVar3 = *puVar14;
  *(int *)(param_1 + 0xf) = iVar25;
  *(undefined8 *)puVar14 = *(undefined8 *)(puVar14 + (long)iVar25 * 2);
  iVar25 = *(int *)(param_1 + 0xf);
  uVar15 = 1;
  if (2 < iVar25) {
    uVar13 = 1;
    if (*(int *)(param_1[0xe] + 0x14) < *(int *)(param_1[0xe] + 0xc)) {
      uVar13 = 2;
    }
    uVar15 = (ulong)uVar13;
  }
  if ((int)uVar15 < iVar25) {
    iVar24 = 0;
    do {
      lVar16 = param_1[0xe];
      iVar8 = (int)uVar15;
      if (*(int *)(lVar16 + (long)iVar24 * 8 + 4) <= *(int *)(lVar16 + (long)iVar8 * 8 + 4)) break;
      lVar32 = (long)iVar8;
      uVar31 = *(undefined8 *)(lVar16 + (long)iVar24 * 8);
      *(undefined8 *)(lVar16 + (long)iVar24 * 8) = *(undefined8 *)(lVar16 + lVar32 * 8);
      *(undefined8 *)(lVar16 + lVar32 * 8) = uVar31;
      uVar15 = lVar32 << 1 | 1;
      lVar16 = (long)(int)(lVar32 << 1) + 2;
      if ((int)lVar16 < *(int *)(param_1 + 0xf)) {
        uVar13 = (uint)uVar15;
        if (*(int *)(param_1[0xe] + lVar16 * 8 + 4) < *(int *)(param_1[0xe] + uVar15 * 8 + 4)) {
          uVar13 = uVar13 + 1;
        }
        uVar15 = (ulong)uVar13;
      }
      iVar24 = iVar8;
    } while ((int)uVar15 < iVar25);
  }
  uVar13 = uVar3 >> 0x16;
  *(uint *)((long)puVar35 + 0x7c) = uVar3;
  if ((*puVar35 != 0) && ((uint)puVar35[0xe] != uVar13)) {
    puVar35[1] = *(ulong *)(*(long *)(*puVar35 + 0x38) + (ulong)uVar13 * 0x100 + 0x10);
    *(uint *)(puVar35 + 0xe) = uVar13;
  }
  *(uint *)(puVar35 + 0xe) = uVar13;
  uVar15 = puVar35[1];
  uVar20 = (ulong)uVar3 & 0x3fffff;
  uVar17 = *(ulong *)(*(long *)(*(long *)(uVar15 + 0x20) + 0x18) + uVar20 * 8);
  puVar27 = puVar35 + 6;
  *puVar27 = uVar17;
  lVar16 = *(long *)(uVar15 + 0x20);
  if ((*(int *)(lVar16 + 0x78) == 0) ||
     (iVar25 = *(int *)(*(long *)(lVar16 + 0x70) + uVar20 * 4), iVar25 == -1)) {
    iVar25 = 0;
    puVar35[7] = 0xffffffff;
  }
  else {
    uVar28 = *(ulong *)(*(long *)(lVar16 + 0x80) + (long)iVar25 * 8);
    puVar35[7] = uVar28;
    iVar25 = (int)(uVar28 >> 0x20);
  }
  iVar25 = iVar25 + (int)(uVar17 >> 0x20);
  puVar1 = puVar35 + 0x13;
  uVar41 = *(undefined8 *)(uVar15 + 0x40);
  uVar42 = *(undefined8 *)(uVar15 + 0x50);
  puVar29 = (undefined8 *)(*(long *)(*(long *)(uVar15 + 0x20) + 0x38) + uVar20 * 0x10);
  uVar31 = *puVar29;
  uVar43 = *(undefined8 *)(uVar15 + 0x60);
  uVar44 = *(undefined8 *)(uVar15 + 0x70);
  fVar37 = (float)uVar31;
  fVar38 = (float)((ulong)uVar31 >> 0x20);
  fVar39 = (float)puVar29[1];
  puVar35[9] = CONCAT44((float)((ulong)*(undefined8 *)(uVar15 + 0x78) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(uVar15 + 0x68) >> 0x20) * fVar39 +
                        (float)((ulong)*(undefined8 *)(uVar15 + 0x48) >> 0x20) * fVar37 +
                        (float)((ulong)*(undefined8 *)(uVar15 + 0x58) >> 0x20) * fVar38,
                        (float)*(undefined8 *)(uVar15 + 0x78) +
                        (float)*(undefined8 *)(uVar15 + 0x68) * fVar39 +
                        (float)*(undefined8 *)(uVar15 + 0x48) * fVar37 +
                        (float)*(undefined8 *)(uVar15 + 0x58) * fVar38);
  puVar35[8] = CONCAT44((float)((ulong)uVar44 >> 0x20) +
                        (float)((ulong)uVar43 >> 0x20) * fVar39 +
                        (float)((ulong)uVar41 >> 0x20) * fVar37 +
                        (float)((ulong)uVar42 >> 0x20) * fVar38,
                        (float)uVar44 +
                        (float)uVar43 * fVar39 + (float)uVar41 * fVar37 + (float)uVar42 * fVar38);
  if ((int)(*(uint *)((long)puVar35 + 0xa4) & 0x7fffffff) < iVar25) {
    FUN_03060c58(puVar1,PTR_PTR_047d1a50,(long)iVar25);
  }
  if ((int)puVar35[0x14] != iVar25) {
    *(int *)(puVar35 + 0x14) = iVar25;
  }
  lVar16 = *(long *)(puVar35[1] + 0x20);
  lVar32 = *(long *)(lVar16 + 0x90);
  iVar25 = *(int *)(lVar16 + 0x60);
  if (*(long *)(lVar16 + 0x28) != 0) {
    uVar13 = *(uint *)((long)puVar35 + 0x34);
    uVar6 = uVar13 * 2;
    if (0 < (int)uVar6) {
      puVar21 = (undefined4 *)*puVar1;
      puVar19 = (undefined4 *)(*(long *)(lVar16 + 0x28) + (long)(int)*puVar27 * 8);
      if (2 < uVar6 - 1) {
        iVar24 = -(uVar6 & 0xfffffffc);
        puVar18 = puVar21;
        puVar22 = puVar19;
        do {
          *puVar18 = *puVar22;
          puVar18[1] = puVar22[1];
          puVar18[2] = puVar22[2];
          puVar19 = puVar22 + 4;
          puVar21 = puVar18 + 4;
          iVar24 = iVar24 + 4;
          puVar18[3] = puVar22[3];
          puVar18 = puVar21;
          puVar22 = puVar19;
        } while (iVar24 != 0);
      }
      if ((uVar13 & 1) != 0) {
        iVar24 = (uVar13 & 1) * -2;
        do {
          bVar7 = iVar24 != -1;
          iVar24 = iVar24 + 1;
          *puVar21 = *puVar19;
          puVar21 = puVar21 + 1;
          puVar19 = puVar19 + 1;
        } while (bVar7);
      }
    }
  }
  if ((lVar32 != 0) && (uVar13 = *(uint *)((long)puVar35 + 0x3c), 0 < (int)uVar13)) {
    uVar6 = uVar13 * 2;
    if (0 < (int)uVar6) {
      puVar21 = (undefined4 *)(puVar35[0x13] + (long)*(int *)((long)puVar35 + 0x34) * 8);
      puVar19 = (undefined4 *)
                (lVar32 + (long)((int)puVar35[7] - *(int *)(*(long *)(puVar35[1] + 0x20) + 0x30)) *
                          8);
      if (2 < uVar6 - 1) {
        iVar24 = -(uVar6 & 0xfffffffc);
        puVar18 = puVar19;
        puVar22 = puVar21;
        do {
          *puVar22 = *puVar18;
          puVar22[1] = puVar18[1];
          puVar22[2] = puVar18[2];
          puVar19 = puVar18 + 4;
          puVar21 = puVar22 + 4;
          iVar24 = iVar24 + 4;
          puVar22[3] = puVar18[3];
          puVar18 = puVar19;
          puVar22 = puVar21;
        } while (iVar24 != 0);
      }
      if ((uVar13 & 1) != 0) {
        iVar24 = (uVar13 & 1) * -2;
        do {
          bVar7 = iVar24 != -1;
          iVar24 = iVar24 + 1;
          *puVar21 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar21 = puVar21 + 1;
        } while (bVar7);
      }
    }
  }
  uVar15 = puVar35[0x13];
  puVar35[0xd] = uVar15 - 8;
  uVar13 = *(int *)((long)puVar35 + 0x3c) + *(int *)((long)puVar35 + 0x34);
  if (0 < (int)uVar13) {
    lVar16 = 0;
    while( true ) {
      lVar32 = uVar15 + lVar16;
      if ((*(byte *)(lVar32 + 2) >> 6 & 1) == 0) {
        *(uint *)(lVar32 + 4) = *(uint *)(lVar32 + 4) & 0x3fffff | iVar25 << 0x16;
      }
      if ((ulong)uVar13 * 8 + -8 == lVar16) break;
      uVar15 = *puVar1;
      lVar16 = lVar16 + 8;
    }
  }
  plVar9 = (long *)puVar35[0xc];
  uVar15 = (ulong)(uVar3 * -0x61c8864f >> 0x18);
  lVar16 = *plVar9;
  for (uVar5 = *(ushort *)(plVar9[2] + uVar15 * 2); -1 < (short)uVar5;
      uVar5 = *(ushort *)(plVar9[1] + (ulong)uVar5 * 2)) {
    if (*(uint *)(lVar16 + (ulong)uVar5 * 0x10 + 8) == uVar3) {
      puVar29 = (undefined8 *)(lVar16 + (ulong)uVar5 * 0x10);
      goto LAB_030c7df4;
    }
  }
  iVar25 = *(int *)((long)plVar9 + 0x1c);
  puVar29 = (undefined8 *)(lVar16 + (long)iVar25 * 0x10);
  *(int *)((long)plVar9 + 0x1c) = iVar25 + 1;
  *puVar29 = 0x7f7fffee7f7fffee;
  *(uint *)(puVar29 + 1) = uVar3;
  *(undefined4 *)((long)puVar29 + 0xc) = 0xffff;
  *(undefined2 *)(plVar9[1] + (long)(short)iVar25 * 2) = *(undefined2 *)(plVar9[2] + uVar15 * 2);
  *(short *)(plVar9[2] + uVar15 * 2) = (short)iVar25;
  lVar16 = *plVar9;
LAB_030c7df4:
  *(int *)(plVar9 + 8) = ((int)puVar29 - (int)lVar16) * 0x1000 >> 0x10;
  plVar9[9] = (long)puVar29;
  plVar9[10] = (long)puVar29;
  fVar37 = *(float *)param_1[0xb];
  iVar25 = *(int *)((long)puVar35 + 0x34);
  iVar24 = *(int *)((long)puVar35 + 0x3c);
  lVar16 = tpidr_el0;
  lVar32 = *(long *)(lVar16 + 0x1000b8);
  if (lVar32 == 0) {
    lVar32 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar32;
  }
  uVar13 = iVar24 + iVar25;
  lVar16 = *(long *)(*(long *)(lVar32 + 0x3d0) + 0x10);
  if (*(long *)(lVar16 + 8) == 0) {
    local_120 = -(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2;
    local_100 = local_120;
    if (lVar16 == 0) goto LAB_030c7ec8;
    local_d0 = local_120 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(lVar16 + 0x28) < local_d0) {
LAB_030c7e80:
      puVar14 = (uint *)FUN_031cf3b4(lVar16,&local_d0);
    }
    else {
      puVar14 = *(uint **)(lVar16 + 0x38);
      if (*(ulong *)(lVar16 + 0x40) < local_d0 + (long)puVar14) goto LAB_030c7e80;
      *(ulong *)(lVar16 + 0x38) = local_d0 + (long)puVar14;
    }
  }
  else {
    local_100 = -(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar13 << 2;
LAB_030c7ec8:
    local_120 = local_100;
    puVar14 = (uint *)(**(code **)PTR_DAT_047d1a08)(1,&local_100,0x40);
    lVar16 = 0;
  }
  uVar13 = *(uint *)((long)puVar35 + 0x34);
  uVar6 = *(uint *)((long)puVar35 + 0x3c);
  puVar11 = puVar14;
  if (0 < (int)uVar13) {
    uVar17 = puVar35[6];
    uVar26 = uVar13 & 3;
    if (uVar13 - 1 < 3) {
      lVar32 = 0;
    }
    else {
      lVar32 = 0;
      do {
        puVar10 = puVar11;
        uVar30 = (int)uVar17 + (int)lVar32;
        puVar11 = puVar14 + lVar32;
        lVar32 = lVar32 + 4;
        *puVar11 = uVar30;
        puVar11[1] = uVar30 + 1;
        puVar11[2] = uVar30 + 2;
        puVar11[3] = uVar30 + 3;
        puVar11 = puVar11 + 4;
      } while ((uVar13 & 0xfffffffc) != (uint)lVar32);
      puVar11 = puVar10 + 4;
    }
    if (uVar26 != 0) {
      uVar30 = (int)lVar32 + (int)uVar17;
      puVar10 = puVar11;
      do {
        *puVar10 = uVar30;
        uVar26 = uVar26 - 1;
        uVar30 = uVar30 + 1;
        puVar11 = puVar10 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar26 != 0);
    }
  }
  if (0 < (int)uVar6) {
    uVar17 = puVar35[7];
    uVar26 = uVar6 & 3;
    if (uVar6 - 1 < 3) {
      lVar32 = 0;
    }
    else {
      lVar32 = 0;
      puVar10 = puVar11;
      do {
        puVar34 = puVar10;
        uVar30 = (int)uVar17 + (int)lVar32;
        puVar10 = puVar11 + lVar32;
        lVar32 = lVar32 + 4;
        *puVar10 = uVar30;
        puVar10[1] = uVar30 + 1;
        puVar10[2] = uVar30 + 2;
        puVar10[3] = uVar30 + 3;
        puVar10 = puVar10 + 4;
      } while ((uVar6 & 0xfffffffc) != (uint)lVar32);
      puVar11 = puVar34 + 4;
    }
    if (uVar26 != 0) {
      uVar30 = (int)lVar32 + (int)uVar17;
      do {
        *puVar11 = uVar30;
        uVar26 = uVar26 - 1;
        uVar30 = uVar30 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar26 != 0);
    }
  }
  if (puVar14 < puVar14 + (int)(uVar6 + uVar13)) {
    puVar11 = puVar14;
LAB_030c8034:
    if (*(int *)(param_1 + 5) <= *(int *)((long)param_1 + 0x2c)) goto LAB_030c8548;
    plVar9 = (long *)puVar35[0xc];
    uVar17 = puVar35[0xd];
    uVar26 = *puVar11;
    puVar35[0xd] = uVar17 + 8;
    iVar25 = *(int *)(uVar17 + 0xc);
    if (iVar25 == -1) {
      puVar29 = (undefined8 *)0x0;
    }
    else {
      uVar17 = (ulong)((uint)(iVar25 * -0x61c8864f) >> 0x18);
      lVar32 = *plVar9;
      for (uVar5 = *(ushort *)(plVar9[2] + uVar17 * 2); -1 < (short)uVar5;
          uVar5 = *(ushort *)(plVar9[1] + (ulong)uVar5 * 2)) {
        if (*(int *)(lVar32 + (ulong)uVar5 * 0x10 + 8) == iVar25) {
          puVar29 = (undefined8 *)(lVar32 + (ulong)uVar5 * 0x10);
          goto LAB_030c80ec;
        }
      }
      iVar24 = *(int *)((long)plVar9 + 0x1c);
      *(int *)((long)plVar9 + 0x1c) = iVar24 + 1;
      puVar29 = (undefined8 *)(lVar32 + (long)iVar24 * 0x10);
      *puVar29 = 0x7f7fffee7f7fffee;
      *(int *)(puVar29 + 1) = iVar25;
      *(undefined4 *)((long)puVar29 + 0xc) = 0xffff;
      *(undefined2 *)(plVar9[1] + (long)(short)iVar24 * 2) = *(undefined2 *)(plVar9[2] + uVar17 * 2)
      ;
      *(short *)(plVar9[2] + uVar17 * 2) = (short)iVar24;
    }
LAB_030c80ec:
    plVar9[9] = (long)puVar29;
    puVar12 = (ushort *)puVar35[0xd];
    uVar30 = *(uint *)(puVar12 + 2) >> 0x16;
    if (*puVar35 == 0) {
      puVar35[2] = puVar35[1];
    }
    else if (*(uint *)((long)puVar35 + 0x74) != uVar30) {
      puVar35[2] = *(ulong *)(*(long *)(*puVar35 + 0x38) + (ulong)uVar30 * 0x100 + 0x10);
      *(uint *)((long)puVar35 + 0x74) = uVar30;
    }
    *(uint *)((long)puVar35 + 0x74) = uVar30;
    uVar30 = *(uint *)(puVar12 + 2);
    uVar17 = (ulong)uVar30;
    plVar9 = (long *)puVar35[5];
    if (plVar9 != (long *)0x0) {
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)((long)puVar35 + 0x7c));
      uStack_b8 = puVar35[9];
      local_c0 = puVar35[8];
      uVar20 = puVar35[2];
      local_d8 = *(undefined8 *)
                  (*(long *)(*(long *)(uVar20 + 0x20) + 0x18) + (uVar17 & 0x3fffff) * 8);
      puVar29 = (undefined8 *)
                (*(long *)(*(long *)(uVar20 + 0x20) + 0x38) + (uVar17 & 0x3fffff) * 0x10);
      uVar31 = *puVar29;
      local_a8 = &local_d8;
      fVar38 = (float)uVar31;
      fVar39 = (float)((ulong)uVar31 >> 0x20);
      fVar40 = (float)puVar29[1];
      local_a0 = CONCAT44((float)((ulong)*(undefined8 *)(uVar20 + 0x70) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(uVar20 + 0x60) >> 0x20) * fVar40 +
                          (float)((ulong)*(undefined8 *)(uVar20 + 0x40) >> 0x20) * fVar38 +
                          (float)((ulong)*(undefined8 *)(uVar20 + 0x50) >> 0x20) * fVar39,
                          (float)*(undefined8 *)(uVar20 + 0x70) +
                          (float)*(undefined8 *)(uVar20 + 0x60) * fVar40 +
                          (float)*(undefined8 *)(uVar20 + 0x40) * fVar38 +
                          (float)*(undefined8 *)(uVar20 + 0x50) * fVar39);
      uStack_98 = CONCAT44((float)((ulong)*(undefined8 *)(uVar20 + 0x78) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(uVar20 + 0x68) >> 0x20) * fVar40 +
                           (float)((ulong)*(undefined8 *)(uVar20 + 0x48) >> 0x20) * fVar38 +
                           (float)((ulong)*(undefined8 *)(uVar20 + 0x58) >> 0x20) * fVar39,
                           (float)*(undefined8 *)(uVar20 + 0x78) +
                           (float)*(undefined8 *)(uVar20 + 0x68) * fVar40 +
                           (float)*(undefined8 *)(uVar20 + 0x48) * fVar38 +
                           (float)*(undefined8 *)(uVar20 + 0x58) * fVar39);
      local_90 = uVar26 | (int)puVar35[0xe] << 0x16;
      local_100 = *puVar35;
      local_f0 = &local_d0;
      puStack_f8 = puVar35 + 10;
      local_c8 = puVar27;
      local_b0 = uVar30;
      local_88 = puVar12;
      uVar20 = (**(code **)(*plVar9 + 0x30))(plVar9,&local_100);
      if ((uVar20 & 1) != 0) {
        puVar12 = (ushort *)puVar35[0xd];
        goto LAB_030c81f0;
      }
      goto LAB_030c853c;
    }
LAB_030c81f0:
    uVar20 = puVar35[0x11];
    lVar32 = (ulong)CONCAT42((uint)*puVar12 << 0x10,*puVar12) << 0x10;
    if (uVar20 != 0) {
      uVar4 = (uint)puVar35[0x12];
      if (0 < (int)uVar4) {
        uVar28 = puVar35[0x10];
        if (uVar4 == 1) {
          uVar33 = 0;
        }
        else {
          uVar33 = 0;
          do {
            if (*(uint *)(uVar28 + uVar33 * 4) == uVar30) {
              fVar38 = *(float *)(uVar20 + uVar33 * 4);
              lVar32 = CONCAT44(fVar38 + (float)((ulong)lVar32 >> 0x20),fVar38 + (float)lVar32);
            }
            if (*(uint *)(uVar28 + uVar33 * 4 + 4) == uVar30) {
              fVar38 = *(float *)(uVar20 + uVar33 * 4 + 4);
              lVar32 = CONCAT44(fVar38 + (float)((ulong)lVar32 >> 0x20),fVar38 + (float)lVar32);
            }
            uVar33 = uVar33 + 2;
          } while (((ulong)uVar4 & 0xfffffffe) != uVar33);
        }
        if (((uVar4 & 1) != 0) && (*(uint *)(uVar28 + uVar33 * 4) == uVar30)) {
          fVar38 = *(float *)(uVar20 + uVar33 * 4);
          lVar32 = CONCAT44(fVar38 + (float)((ulong)lVar32 >> 0x20),fVar38 + (float)lVar32);
        }
      }
    }
    plVar9 = (long *)puVar35[4];
    if (plVar9 != (long *)0x0) {
      local_d0 = CONCAT44(local_d0._4_4_,uVar3);
      uStack_b8 = puVar35[9];
      local_c0 = puVar35[8];
      uVar20 = puVar35[2];
      local_d8 = *(undefined8 *)
                  (*(long *)(*(long *)(uVar20 + 0x20) + 0x18) + (uVar17 & 0x3fffff) * 8);
      puVar29 = (undefined8 *)
                (*(long *)(*(long *)(uVar20 + 0x20) + 0x38) + (uVar17 & 0x3fffff) * 0x10);
      uVar31 = *puVar29;
      local_a8 = &local_d8;
      fVar38 = (float)uVar31;
      fVar39 = (float)((ulong)uVar31 >> 0x20);
      fVar40 = (float)puVar29[1];
      local_a0 = CONCAT44((float)((ulong)*(undefined8 *)(uVar20 + 0x70) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(uVar20 + 0x60) >> 0x20) * fVar40 +
                          (float)((ulong)*(undefined8 *)(uVar20 + 0x40) >> 0x20) * fVar38 +
                          (float)((ulong)*(undefined8 *)(uVar20 + 0x50) >> 0x20) * fVar39,
                          (float)*(undefined8 *)(uVar20 + 0x70) +
                          (float)*(undefined8 *)(uVar20 + 0x60) * fVar40 +
                          (float)*(undefined8 *)(uVar20 + 0x40) * fVar38 +
                          (float)*(undefined8 *)(uVar20 + 0x50) * fVar39);
      uStack_98 = CONCAT44((float)((ulong)*(undefined8 *)(uVar20 + 0x78) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(uVar20 + 0x68) >> 0x20) * fVar40 +
                           (float)((ulong)*(undefined8 *)(uVar20 + 0x48) >> 0x20) * fVar38 +
                           (float)((ulong)*(undefined8 *)(uVar20 + 0x58) >> 0x20) * fVar39,
                           (float)*(undefined8 *)(uVar20 + 0x78) +
                           (float)*(undefined8 *)(uVar20 + 0x68) * fVar40 +
                           (float)*(undefined8 *)(uVar20 + 0x48) * fVar38 +
                           (float)*(undefined8 *)(uVar20 + 0x58) * fVar39);
      local_90 = uVar26 | (int)puVar35[0xe] << 0x16;
      local_100 = *puVar35;
      local_f0 = &local_d0;
      puStack_f8 = puVar35 + 10;
      local_e8 = CONCAT44(fVar37,fVar37);
      local_e0 = lVar32;
      local_c8 = puVar27;
      local_b0 = uVar30;
      local_88 = puVar12;
      uVar31 = (**(code **)(*plVar9 + 0x30))(plVar9,&local_100);
      lVar32 = NEON_fmax(uVar31,0,4);
    }
    fVar38 = fVar37 + (float)lVar32;
    if (fVar38 <= *(float *)(param_1 + 9)) {
      pfVar36 = (float *)param_1[0xb];
      if (((*(ushort *)((long)pfVar36 + 0xe) & 3) == 0) || (fVar38 < *pfVar36)) {
        *pfVar36 = fVar38;
        if ((*(ushort *)((long)pfVar36 + 0xe) & 3) == 0) {
          fVar38 = (float)FUN_030c8978(param_1 + 0x10,uVar17);
          pfVar36[1] = fVar38;
          if (fVar38 < *(float *)((long)param_1 + 0x44)) {
            *(float *)((long)param_1 + 0x44) = fVar38;
            *(uint *)(param_1 + 8) = uVar30;
          }
        }
        *(short *)(param_1[0xb] + 0xc) = (short)*(undefined4 *)(param_1 + 10);
        pfVar36 = (float *)param_1[0xb];
        fVar38 = *pfVar36 + *(float *)((long)param_1 + 0x4c) * pfVar36[1];
        if (fVar38 <= *(float *)(param_1 + 9)) {
          uVar5 = *(ushort *)((long)pfVar36 + 0xe);
          *(ushort *)((long)pfVar36 + 0xe) = uVar5 & 0xfffc | 1;
          uVar26 = *(uint *)(param_1 + 0xf);
          if ((uVar5 & 1) == 0) {
            if (*(int *)((long)param_1 + 0x7c) <= (int)uVar26) goto LAB_030c8548;
            uVar20 = (ulong)(int)uVar26;
            puVar10 = (uint *)(param_1[0xe] + uVar20 * 8);
            *(uint *)(param_1 + 0xf) = uVar26 + 1;
            *puVar10 = uVar30;
            puVar10[1] = (uint)fVar38;
            lVar32 = param_1[0xe];
            puVar19 = (undefined4 *)(lVar32 + uVar20 * 8);
            uVar2 = *puVar19;
            iVar25 = puVar19[1];
            uVar17 = (ulong)uVar26;
            if (0 < (int)uVar26) {
              do {
                iVar8 = (int)uVar17;
                iVar24 = iVar8;
                if (-1 < iVar8 + -1) {
                  iVar24 = iVar8 + -1;
                }
                uVar20 = (ulong)(uint)(iVar24 >> 1);
                if (*(int *)(lVar32 + uVar20 * 8 + 4) <= iVar25) {
                  uVar20 = (ulong)iVar8;
                  break;
                }
                *(undefined8 *)(lVar32 + uVar17 * 8) = *(undefined8 *)(lVar32 + uVar20 * 8);
                lVar32 = param_1[0xe];
                uVar17 = uVar20;
              } while (2 < iVar8);
            }
            *(undefined4 *)(lVar32 + uVar20 * 8) = uVar2;
            *(int *)(param_1[0xe] + uVar20 * 8 + 4) = iVar25;
          }
          else if (0 < (int)uVar26) {
            uVar17 = 0;
            lVar32 = 4;
            do {
              if (*(uint *)(param_1[0xe] + lVar32 + -4) == uVar30) {
                *(float *)(param_1[0xe] + lVar32) = fVar38;
                lVar23 = param_1[0xe];
                iVar25 = ((int *)(lVar23 + lVar32))[-1];
                iVar24 = *(int *)(lVar23 + lVar32);
                if ((int)uVar17 == 0) goto LAB_030c8528;
                uVar20 = uVar17 & 0xffffffff;
                goto LAB_030c84c8;
              }
              uVar17 = uVar17 + 1;
              lVar32 = lVar32 + 8;
            } while (uVar26 != uVar17);
          }
        }
      }
    }
LAB_030c853c:
    puVar11 = puVar11 + 1;
    if (puVar14 + (int)(uVar6 + uVar13) <= puVar11) goto LAB_030c8548;
    goto LAB_030c8034;
  }
LAB_030c8548:
  *(ushort *)(param_1[0xc] + 0xe) = *(ushort *)(param_1[0xc] + 0xe) & 0xfffc | 2;
  if (lVar16 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar14,local_120);
    goto LAB_030c8624;
  }
  uVar17 = local_120 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar16 + 0x28) < uVar17) || (*(long *)(lVar16 + 0x38) != uVar17 + (long)puVar14))
  {
    if (puVar14 == (uint *)0x0) goto LAB_030c8624;
    if (*(ulong *)(lVar16 + 0x28) < uVar17 + 0x40) {
      *(int *)(*(long *)(lVar16 + 0x30) + 0x20) = *(int *)(*(long *)(lVar16 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar16 + 0x10) + 0x18))
                (*(long **)(lVar16 + 0x10),(long)puVar14 - (long)(int)puVar14[-1],uVar17 + 0x44);
      goto LAB_030c8624;
    }
    if (*(long *)(lVar16 + 0x38) != uVar17 + (long)puVar14) {
      FUN_031cf778(lVar16,puVar14);
      goto LAB_030c8624;
    }
    *(uint **)(lVar16 + 0x38) = puVar14;
  }
  else {
    *(uint **)(lVar16 + 0x38) = puVar14;
    if (*(uint **)(lVar16 + 0x48) != puVar14) goto LAB_030c8624;
  }
  FUN_031cf578();
LAB_030c8624:
  *(uint *)(param_1 + 0x76) = uVar3;
  uVar5 = *(ushort *)(param_1[4] + uVar15 * 2);
  if (-1 < (short)uVar5) {
    do {
      if (*(uint *)(param_1[2] + (ulong)uVar5 * 0x10 + 8) == uVar3) {
        puVar29 = (undefined8 *)(param_1[2] + (ulong)uVar5 * 0x10);
        goto LAB_030c8668;
      }
      uVar5 = *(ushort *)(param_1[3] + (ulong)uVar5 * 2);
    } while (-1 < (short)uVar5);
  }
  puVar29 = param_1 + 6;
LAB_030c8668:
  if ((*(byte *)((long)puVar29 + 0xe) >> 3 & 1) == 0) {
    if (*(int *)(param_1 + 0xf) < *(int *)((long)param_1 + 0x7c)) {
      iVar25 = 3;
      if (*(int *)((long)param_1 + 0x2c) < *(int *)(param_1 + 5)) {
        iVar25 = (uint)(*(int *)(param_1 + 0xf) == 0) << 1;
      }
    }
    else {
      iVar25 = 3;
    }
  }
  else {
    iVar25 = 1;
  }
  return iVar25;
  while( true ) {
    uVar17 = (long)((ulong)uVar26 << 0x20) >> 0x21;
    *(undefined8 *)(lVar23 + uVar20 * 8) = *(undefined8 *)(lVar23 + uVar17 * 8);
    lVar23 = param_1[0xe];
    uVar20 = (ulong)(uint)((int)uVar26 >> 1);
    if ((int)uVar30 < 3) break;
LAB_030c84c8:
    uVar30 = (uint)uVar20;
    uVar26 = uVar30;
    if (-1 < (int)(uVar30 - 1)) {
      uVar26 = uVar30 - 1;
    }
    if (*(int *)(lVar23 + (long)((int)uVar26 >> 1) * 8 + 4) <= iVar24) {
      uVar17 = (ulong)(int)uVar30;
      break;
    }
  }
LAB_030c8528:
  *(int *)(lVar23 + uVar17 * 8) = iVar25;
  *(int *)(param_1[0xe] + uVar17 * 8 + 4) = iVar24;
  goto LAB_030c853c;
}


