/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030bfb7c; name: FUN_030bfb7c
 */


long FUN_030bfb7c(undefined8 *param_1)

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
  float *pfVar13;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  ulong *puVar28;
  ulong uVar29;
  undefined8 *puVar30;
  uint uVar31;
  undefined8 uVar32;
  long lVar33;
  uint *puVar34;
  ulong *puVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  ulong local_118;
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
  puVar15 = (uint *)param_1[0xe];
  iVar26 = *(int *)(param_1 + 0xf) + -1;
  puVar35 = (ulong *)*param_1;
  uVar3 = *puVar15;
  *(int *)(param_1 + 0xf) = iVar26;
  *(undefined8 *)puVar15 = *(undefined8 *)(puVar15 + (long)iVar26 * 2);
  iVar26 = *(int *)(param_1 + 0xf);
  uVar16 = 1;
  if (2 < iVar26) {
    uVar14 = 1;
    if (*(int *)(param_1[0xe] + 0x14) < *(int *)(param_1[0xe] + 0xc)) {
      uVar14 = 2;
    }
    uVar16 = (ulong)uVar14;
  }
  if ((int)uVar16 < iVar26) {
    iVar25 = 0;
    do {
      lVar17 = param_1[0xe];
      iVar8 = (int)uVar16;
      if (*(int *)(lVar17 + (long)iVar25 * 8 + 4) <= *(int *)(lVar17 + (long)iVar8 * 8 + 4)) break;
      lVar33 = (long)iVar8;
      uVar32 = *(undefined8 *)(lVar17 + (long)iVar25 * 8);
      *(undefined8 *)(lVar17 + (long)iVar25 * 8) = *(undefined8 *)(lVar17 + lVar33 * 8);
      *(undefined8 *)(lVar17 + lVar33 * 8) = uVar32;
      uVar16 = lVar33 << 1 | 1;
      lVar17 = (long)(int)(lVar33 << 1) + 2;
      if ((int)lVar17 < *(int *)(param_1 + 0xf)) {
        uVar14 = (uint)uVar16;
        if (*(int *)(param_1[0xe] + lVar17 * 8 + 4) < *(int *)(param_1[0xe] + uVar16 * 8 + 4)) {
          uVar14 = uVar14 + 1;
        }
        uVar16 = (ulong)uVar14;
      }
      iVar25 = iVar8;
    } while ((int)uVar16 < iVar26);
  }
  uVar14 = uVar3 >> 0x16;
  *(uint *)((long)puVar35 + 0x7c) = uVar3;
  if ((*puVar35 != 0) && ((uint)puVar35[0xe] != uVar14)) {
    puVar35[1] = *(ulong *)(*(long *)(*puVar35 + 0x38) + (ulong)uVar14 * 0x100 + 0x10);
    *(uint *)(puVar35 + 0xe) = uVar14;
  }
  *(uint *)(puVar35 + 0xe) = uVar14;
  uVar16 = puVar35[1];
  uVar21 = (ulong)uVar3 & 0x3fffff;
  uVar18 = *(ulong *)(*(long *)(*(long *)(uVar16 + 0x20) + 0x18) + uVar21 * 8);
  puVar28 = puVar35 + 6;
  *puVar28 = uVar18;
  lVar17 = *(long *)(uVar16 + 0x20);
  if ((*(int *)(lVar17 + 0x78) == 0) ||
     (iVar26 = *(int *)(*(long *)(lVar17 + 0x70) + uVar21 * 4), iVar26 == -1)) {
    iVar26 = 0;
    puVar35[7] = 0xffffffff;
  }
  else {
    uVar29 = *(ulong *)(*(long *)(lVar17 + 0x80) + (long)iVar26 * 8);
    puVar35[7] = uVar29;
    iVar26 = (int)(uVar29 >> 0x20);
  }
  iVar26 = iVar26 + (int)(uVar18 >> 0x20);
  puVar1 = puVar35 + 0x13;
  uVar42 = *(undefined8 *)(uVar16 + 0x40);
  uVar43 = *(undefined8 *)(uVar16 + 0x50);
  puVar30 = (undefined8 *)(*(long *)(*(long *)(uVar16 + 0x20) + 0x38) + uVar21 * 0x10);
  uVar32 = *puVar30;
  uVar44 = *(undefined8 *)(uVar16 + 0x60);
  uVar45 = *(undefined8 *)(uVar16 + 0x70);
  fVar36 = (float)uVar32;
  fVar37 = (float)((ulong)uVar32 >> 0x20);
  fVar38 = (float)puVar30[1];
  puVar35[9] = CONCAT44((float)((ulong)*(undefined8 *)(uVar16 + 0x78) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(uVar16 + 0x68) >> 0x20) * fVar38 +
                        (float)((ulong)*(undefined8 *)(uVar16 + 0x48) >> 0x20) * fVar36 +
                        (float)((ulong)*(undefined8 *)(uVar16 + 0x58) >> 0x20) * fVar37,
                        (float)*(undefined8 *)(uVar16 + 0x78) +
                        (float)*(undefined8 *)(uVar16 + 0x68) * fVar38 +
                        (float)*(undefined8 *)(uVar16 + 0x48) * fVar36 +
                        (float)*(undefined8 *)(uVar16 + 0x58) * fVar37);
  puVar35[8] = CONCAT44((float)((ulong)uVar45 >> 0x20) +
                        (float)((ulong)uVar44 >> 0x20) * fVar38 +
                        (float)((ulong)uVar42 >> 0x20) * fVar36 +
                        (float)((ulong)uVar43 >> 0x20) * fVar37,
                        (float)uVar45 +
                        (float)uVar44 * fVar38 + (float)uVar42 * fVar36 + (float)uVar43 * fVar37);
  if ((int)(*(uint *)((long)puVar35 + 0xa4) & 0x7fffffff) < iVar26) {
    FUN_03060c58(puVar1,PTR_PTR_047d1a50,(long)iVar26);
  }
  if ((int)puVar35[0x14] != iVar26) {
    *(int *)(puVar35 + 0x14) = iVar26;
  }
  lVar17 = *(long *)(puVar35[1] + 0x20);
  lVar33 = *(long *)(lVar17 + 0x90);
  iVar26 = *(int *)(lVar17 + 0x60);
  if (*(long *)(lVar17 + 0x28) != 0) {
    uVar14 = *(uint *)((long)puVar35 + 0x34);
    uVar6 = uVar14 * 2;
    if (0 < (int)uVar6) {
      puVar22 = (undefined4 *)*puVar1;
      puVar20 = (undefined4 *)(*(long *)(lVar17 + 0x28) + (long)(int)*puVar28 * 8);
      if (2 < uVar6 - 1) {
        iVar25 = -(uVar6 & 0xfffffffc);
        puVar19 = puVar22;
        puVar23 = puVar20;
        do {
          *puVar19 = *puVar23;
          puVar19[1] = puVar23[1];
          puVar19[2] = puVar23[2];
          puVar20 = puVar23 + 4;
          puVar22 = puVar19 + 4;
          iVar25 = iVar25 + 4;
          puVar19[3] = puVar23[3];
          puVar19 = puVar22;
          puVar23 = puVar20;
        } while (iVar25 != 0);
      }
      if ((uVar14 & 1) != 0) {
        iVar25 = (uVar14 & 1) * -2;
        do {
          bVar7 = iVar25 != -1;
          iVar25 = iVar25 + 1;
          *puVar22 = *puVar20;
          puVar22 = puVar22 + 1;
          puVar20 = puVar20 + 1;
        } while (bVar7);
      }
    }
  }
  if ((lVar33 != 0) && (uVar14 = *(uint *)((long)puVar35 + 0x3c), 0 < (int)uVar14)) {
    uVar6 = uVar14 * 2;
    if (0 < (int)uVar6) {
      puVar22 = (undefined4 *)(puVar35[0x13] + (long)*(int *)((long)puVar35 + 0x34) * 8);
      puVar20 = (undefined4 *)
                (lVar33 + (long)((int)puVar35[7] - *(int *)(*(long *)(puVar35[1] + 0x20) + 0x30)) *
                          8);
      if (2 < uVar6 - 1) {
        iVar25 = -(uVar6 & 0xfffffffc);
        puVar19 = puVar20;
        puVar23 = puVar22;
        do {
          *puVar23 = *puVar19;
          puVar23[1] = puVar19[1];
          puVar23[2] = puVar19[2];
          puVar20 = puVar19 + 4;
          puVar22 = puVar23 + 4;
          iVar25 = iVar25 + 4;
          puVar23[3] = puVar19[3];
          puVar19 = puVar20;
          puVar23 = puVar22;
        } while (iVar25 != 0);
      }
      if ((uVar14 & 1) != 0) {
        iVar25 = (uVar14 & 1) * -2;
        do {
          bVar7 = iVar25 != -1;
          iVar25 = iVar25 + 1;
          *puVar22 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar22 = puVar22 + 1;
        } while (bVar7);
      }
    }
  }
  uVar16 = puVar35[0x13];
  puVar35[0xd] = uVar16 - 8;
  uVar14 = *(int *)((long)puVar35 + 0x3c) + *(int *)((long)puVar35 + 0x34);
  if (0 < (int)uVar14) {
    lVar17 = 0;
    while( true ) {
      lVar33 = uVar16 + lVar17;
      if ((*(byte *)(lVar33 + 2) >> 6 & 1) == 0) {
        *(uint *)(lVar33 + 4) = *(uint *)(lVar33 + 4) & 0x3fffff | iVar26 << 0x16;
      }
      if ((ulong)uVar14 * 8 + -8 == lVar17) break;
      uVar16 = *puVar1;
      lVar17 = lVar17 + 8;
    }
  }
  plVar9 = (long *)puVar35[0xc];
  uVar16 = (ulong)(uVar3 * -0x61c8864f >> 0x18);
  lVar17 = *plVar9;
  for (uVar5 = *(ushort *)(plVar9[2] + uVar16 * 2); -1 < (short)uVar5;
      uVar5 = *(ushort *)(plVar9[1] + (ulong)uVar5 * 2)) {
    if (*(uint *)(lVar17 + (ulong)uVar5 * 0x10 + 8) == uVar3) {
      puVar30 = (undefined8 *)(lVar17 + (ulong)uVar5 * 0x10);
      goto LAB_030bffb0;
    }
  }
  iVar26 = *(int *)((long)plVar9 + 0x1c);
  puVar30 = (undefined8 *)(lVar17 + (long)iVar26 * 0x10);
  *(int *)((long)plVar9 + 0x1c) = iVar26 + 1;
  *puVar30 = 0x7f7fffee7f7fffee;
  *(uint *)(puVar30 + 1) = uVar3;
  *(undefined4 *)((long)puVar30 + 0xc) = 0xffff;
  *(undefined2 *)(plVar9[1] + (long)(short)iVar26 * 2) = *(undefined2 *)(plVar9[2] + uVar16 * 2);
  *(short *)(plVar9[2] + uVar16 * 2) = (short)iVar26;
  lVar17 = *plVar9;
LAB_030bffb0:
  *(int *)(plVar9 + 8) = ((int)puVar30 - (int)lVar17) * 0x1000 >> 0x10;
  plVar9[9] = (long)puVar30;
  plVar9[10] = (long)puVar30;
  fVar36 = *(float *)param_1[0xb];
  iVar26 = *(int *)((long)puVar35 + 0x34);
  iVar25 = *(int *)((long)puVar35 + 0x3c);
  lVar17 = tpidr_el0;
  lVar33 = *(long *)(lVar17 + 0x1000b8);
  if (lVar33 == 0) {
    lVar33 = FUN_00e5d3b4();
    *(long *)(lVar17 + 0x1000b8) = lVar33;
  }
  uVar14 = iVar25 + iVar26;
  lVar17 = *(long *)(*(long *)(lVar33 + 0x3d0) + 0x10);
  if (*(long *)(lVar17 + 8) == 0) {
    local_118 = -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2;
    local_100 = local_118;
    if (lVar17 == 0) goto LAB_030c0084;
    local_d0 = local_118 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(lVar17 + 0x28) < local_d0) {
LAB_030c003c:
      puVar15 = (uint *)FUN_031cf3b4(lVar17,&local_d0);
    }
    else {
      puVar15 = *(uint **)(lVar17 + 0x38);
      if (*(ulong *)(lVar17 + 0x40) < local_d0 + (long)puVar15) goto LAB_030c003c;
      *(ulong *)(lVar17 + 0x38) = local_d0 + (long)puVar15;
    }
  }
  else {
    local_100 = -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2;
LAB_030c0084:
    local_118 = local_100;
    puVar15 = (uint *)(**(code **)PTR_DAT_047d1a08)(1,&local_100,0x40);
    lVar17 = 0;
  }
  uVar14 = *(uint *)((long)puVar35 + 0x34);
  uVar6 = *(uint *)((long)puVar35 + 0x3c);
  puVar11 = puVar15;
  if (0 < (int)uVar14) {
    uVar16 = puVar35[6];
    uVar27 = uVar14 & 3;
    if (uVar14 - 1 < 3) {
      lVar33 = 0;
    }
    else {
      lVar33 = 0;
      do {
        puVar10 = puVar11;
        uVar31 = (int)uVar16 + (int)lVar33;
        puVar11 = puVar15 + lVar33;
        lVar33 = lVar33 + 4;
        *puVar11 = uVar31;
        puVar11[1] = uVar31 + 1;
        puVar11[2] = uVar31 + 2;
        puVar11[3] = uVar31 + 3;
        puVar11 = puVar11 + 4;
      } while ((uVar14 & 0xfffffffc) != (uint)lVar33);
      puVar11 = puVar10 + 4;
    }
    if (uVar27 != 0) {
      uVar31 = (int)lVar33 + (int)uVar16;
      puVar10 = puVar11;
      do {
        *puVar10 = uVar31;
        uVar27 = uVar27 - 1;
        uVar31 = uVar31 + 1;
        puVar11 = puVar10 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar27 != 0);
    }
  }
  if (0 < (int)uVar6) {
    uVar16 = puVar35[7];
    uVar27 = uVar6 & 3;
    if (uVar6 - 1 < 3) {
      lVar33 = 0;
    }
    else {
      lVar33 = 0;
      puVar10 = puVar11;
      do {
        puVar34 = puVar10;
        uVar31 = (int)uVar16 + (int)lVar33;
        puVar10 = puVar11 + lVar33;
        lVar33 = lVar33 + 4;
        *puVar10 = uVar31;
        puVar10[1] = uVar31 + 1;
        puVar10[2] = uVar31 + 2;
        puVar10[3] = uVar31 + 3;
        puVar10 = puVar10 + 4;
      } while ((uVar6 & 0xfffffffc) != (uint)lVar33);
      puVar11 = puVar34 + 4;
    }
    if (uVar27 != 0) {
      uVar31 = (int)lVar33 + (int)uVar16;
      do {
        *puVar11 = uVar31;
        uVar27 = uVar27 - 1;
        uVar31 = uVar31 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar27 != 0);
    }
  }
  if (puVar15 < puVar15 + (int)(uVar6 + uVar14)) {
    puVar11 = puVar15;
LAB_030c01e8:
    if (*(int *)(param_1 + 5) <= *(int *)((long)param_1 + 0x2c)) goto LAB_030c0744;
    plVar9 = (long *)puVar35[0xc];
    uVar16 = puVar35[0xd];
    uVar27 = *puVar11;
    puVar35[0xd] = uVar16 + 8;
    iVar26 = *(int *)(uVar16 + 0xc);
    if (iVar26 == -1) {
      puVar30 = (undefined8 *)0x0;
    }
    else {
      uVar16 = (ulong)((uint)(iVar26 * -0x61c8864f) >> 0x18);
      lVar33 = *plVar9;
      for (uVar5 = *(ushort *)(plVar9[2] + uVar16 * 2); -1 < (short)uVar5;
          uVar5 = *(ushort *)(plVar9[1] + (ulong)uVar5 * 2)) {
        if (*(int *)(lVar33 + (ulong)uVar5 * 0x10 + 8) == iVar26) {
          puVar30 = (undefined8 *)(lVar33 + (ulong)uVar5 * 0x10);
          goto LAB_030c02a0;
        }
      }
      iVar25 = *(int *)((long)plVar9 + 0x1c);
      *(int *)((long)plVar9 + 0x1c) = iVar25 + 1;
      puVar30 = (undefined8 *)(lVar33 + (long)iVar25 * 0x10);
      *puVar30 = 0x7f7fffee7f7fffee;
      *(int *)(puVar30 + 1) = iVar26;
      *(undefined4 *)((long)puVar30 + 0xc) = 0xffff;
      *(undefined2 *)(plVar9[1] + (long)(short)iVar25 * 2) = *(undefined2 *)(plVar9[2] + uVar16 * 2)
      ;
      *(short *)(plVar9[2] + uVar16 * 2) = (short)iVar25;
    }
LAB_030c02a0:
    plVar9[9] = (long)puVar30;
    puVar12 = (ushort *)puVar35[0xd];
    uVar31 = *(uint *)(puVar12 + 2) >> 0x16;
    if (*puVar35 == 0) {
      puVar35[2] = puVar35[1];
    }
    else if (*(uint *)((long)puVar35 + 0x74) != uVar31) {
      puVar35[2] = *(ulong *)(*(long *)(*puVar35 + 0x38) + (ulong)uVar31 * 0x100 + 0x10);
      *(uint *)((long)puVar35 + 0x74) = uVar31;
    }
    *(uint *)((long)puVar35 + 0x74) = uVar31;
    uVar31 = *(uint *)(puVar12 + 2);
    uVar16 = (ulong)uVar31;
    plVar9 = (long *)puVar35[5];
    if (plVar9 != (long *)0x0) {
      local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)((long)puVar35 + 0x7c));
      uStack_b8 = puVar35[9];
      local_c0 = puVar35[8];
      uVar18 = puVar35[2];
      local_d8 = *(undefined8 *)
                  (*(long *)(*(long *)(uVar18 + 0x20) + 0x18) + (uVar16 & 0x3fffff) * 8);
      puVar30 = (undefined8 *)
                (*(long *)(*(long *)(uVar18 + 0x20) + 0x38) + (uVar16 & 0x3fffff) * 0x10);
      uVar32 = *puVar30;
      local_a8 = &local_d8;
      fVar37 = (float)uVar32;
      fVar38 = (float)((ulong)uVar32 >> 0x20);
      fVar39 = (float)puVar30[1];
      local_a0 = CONCAT44((float)((ulong)*(undefined8 *)(uVar18 + 0x70) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(uVar18 + 0x60) >> 0x20) * fVar39 +
                          (float)((ulong)*(undefined8 *)(uVar18 + 0x40) >> 0x20) * fVar37 +
                          (float)((ulong)*(undefined8 *)(uVar18 + 0x50) >> 0x20) * fVar38,
                          (float)*(undefined8 *)(uVar18 + 0x70) +
                          (float)*(undefined8 *)(uVar18 + 0x60) * fVar39 +
                          (float)*(undefined8 *)(uVar18 + 0x40) * fVar37 +
                          (float)*(undefined8 *)(uVar18 + 0x50) * fVar38);
      uStack_98 = CONCAT44((float)((ulong)*(undefined8 *)(uVar18 + 0x78) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(uVar18 + 0x68) >> 0x20) * fVar39 +
                           (float)((ulong)*(undefined8 *)(uVar18 + 0x48) >> 0x20) * fVar37 +
                           (float)((ulong)*(undefined8 *)(uVar18 + 0x58) >> 0x20) * fVar38,
                           (float)*(undefined8 *)(uVar18 + 0x78) +
                           (float)*(undefined8 *)(uVar18 + 0x68) * fVar39 +
                           (float)*(undefined8 *)(uVar18 + 0x48) * fVar37 +
                           (float)*(undefined8 *)(uVar18 + 0x58) * fVar38);
      local_90 = uVar27 | (int)puVar35[0xe] << 0x16;
      local_100 = *puVar35;
      local_f0 = &local_d0;
      puStack_f8 = puVar35 + 10;
      local_c8 = puVar28;
      local_b0 = uVar31;
      local_88 = puVar12;
      uVar18 = (**(code **)(*plVar9 + 0x30))(plVar9,&local_100);
      if ((uVar18 & 1) != 0) {
        puVar12 = (ushort *)puVar35[0xd];
        goto LAB_030c03a4;
      }
      goto LAB_030c0738;
    }
LAB_030c03a4:
    uVar18 = puVar35[0x11];
    lVar33 = (ulong)CONCAT42((uint)*puVar12 << 0x10,*puVar12) << 0x10;
    if (uVar18 != 0) {
      uVar4 = (uint)puVar35[0x12];
      if (0 < (int)uVar4) {
        uVar21 = puVar35[0x10];
        if (uVar4 == 1) {
          uVar29 = 0;
        }
        else {
          uVar29 = 0;
          do {
            if (*(uint *)(uVar21 + uVar29 * 4) == uVar31) {
              fVar37 = *(float *)(uVar18 + uVar29 * 4);
              lVar33 = CONCAT44(fVar37 + (float)((ulong)lVar33 >> 0x20),fVar37 + (float)lVar33);
            }
            if (*(uint *)(uVar21 + uVar29 * 4 + 4) == uVar31) {
              fVar37 = *(float *)(uVar18 + uVar29 * 4 + 4);
              lVar33 = CONCAT44(fVar37 + (float)((ulong)lVar33 >> 0x20),fVar37 + (float)lVar33);
            }
            uVar29 = uVar29 + 2;
          } while (((ulong)uVar4 & 0xfffffffe) != uVar29);
        }
        if (((uVar4 & 1) != 0) && (*(uint *)(uVar21 + uVar29 * 4) == uVar31)) {
          fVar37 = *(float *)(uVar18 + uVar29 * 4);
          lVar33 = CONCAT44(fVar37 + (float)((ulong)lVar33 >> 0x20),fVar37 + (float)lVar33);
        }
      }
    }
    plVar9 = (long *)puVar35[4];
    if (plVar9 != (long *)0x0) {
      local_d0 = CONCAT44(local_d0._4_4_,uVar3);
      uStack_b8 = puVar35[9];
      local_c0 = puVar35[8];
      uVar18 = puVar35[2];
      local_d8 = *(undefined8 *)
                  (*(long *)(*(long *)(uVar18 + 0x20) + 0x18) + (uVar16 & 0x3fffff) * 8);
      puVar30 = (undefined8 *)
                (*(long *)(*(long *)(uVar18 + 0x20) + 0x38) + (uVar16 & 0x3fffff) * 0x10);
      uVar32 = *puVar30;
      local_a8 = &local_d8;
      fVar37 = (float)uVar32;
      fVar38 = (float)((ulong)uVar32 >> 0x20);
      fVar39 = (float)puVar30[1];
      local_a0 = CONCAT44((float)((ulong)*(undefined8 *)(uVar18 + 0x70) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(uVar18 + 0x60) >> 0x20) * fVar39 +
                          (float)((ulong)*(undefined8 *)(uVar18 + 0x40) >> 0x20) * fVar37 +
                          (float)((ulong)*(undefined8 *)(uVar18 + 0x50) >> 0x20) * fVar38,
                          (float)*(undefined8 *)(uVar18 + 0x70) +
                          (float)*(undefined8 *)(uVar18 + 0x60) * fVar39 +
                          (float)*(undefined8 *)(uVar18 + 0x40) * fVar37 +
                          (float)*(undefined8 *)(uVar18 + 0x50) * fVar38);
      uStack_98 = CONCAT44((float)((ulong)*(undefined8 *)(uVar18 + 0x78) >> 0x20) +
                           (float)((ulong)*(undefined8 *)(uVar18 + 0x68) >> 0x20) * fVar39 +
                           (float)((ulong)*(undefined8 *)(uVar18 + 0x48) >> 0x20) * fVar37 +
                           (float)((ulong)*(undefined8 *)(uVar18 + 0x58) >> 0x20) * fVar38,
                           (float)*(undefined8 *)(uVar18 + 0x78) +
                           (float)*(undefined8 *)(uVar18 + 0x68) * fVar39 +
                           (float)*(undefined8 *)(uVar18 + 0x48) * fVar37 +
                           (float)*(undefined8 *)(uVar18 + 0x58) * fVar38);
      local_90 = uVar27 | (int)puVar35[0xe] << 0x16;
      local_100 = *puVar35;
      local_f0 = &local_d0;
      puStack_f8 = puVar35 + 10;
      local_e8 = CONCAT44(fVar36,fVar36);
      local_e0 = lVar33;
      local_c8 = puVar28;
      local_b0 = uVar31;
      local_88 = puVar12;
      uVar32 = (**(code **)(*plVar9 + 0x30))(plVar9,&local_100);
      lVar33 = NEON_fmax(uVar32,0,4);
    }
    fVar37 = fVar36 + (float)lVar33;
    if (fVar37 <= *(float *)(param_1 + 9)) {
      pfVar13 = (float *)param_1[0xb];
      if (((*(ushort *)((long)pfVar13 + 0xe) & 3) == 0) || (fVar37 < *pfVar13)) {
        *pfVar13 = fVar37;
        if ((*(ushort *)((long)pfVar13 + 0xe) & 3) == 0) {
          lVar33 = *(long *)(param_1[0x10] + 0x10);
          puVar30 = (undefined8 *)
                    (*(long *)(*(long *)(lVar33 + 0x20) + 0x38) + (uVar16 & 0x3fffff) * 0x10);
          uVar32 = *puVar30;
          fVar37 = (float)uVar32;
          fVar39 = (float)((ulong)uVar32 >> 0x20);
          fVar41 = (float)puVar30[1];
          fVar38 = ((float)*(undefined8 *)(lVar33 + 0x70) +
                   (float)*(undefined8 *)(lVar33 + 0x60) * fVar41 +
                   (float)*(undefined8 *)(lVar33 + 0x40) * fVar37 +
                   (float)*(undefined8 *)(lVar33 + 0x50) * fVar39) - (float)param_1[0x12];
          fVar40 = ((float)((ulong)*(undefined8 *)(lVar33 + 0x70) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar33 + 0x60) >> 0x20) * fVar41 +
                   (float)((ulong)*(undefined8 *)(lVar33 + 0x40) >> 0x20) * fVar37 +
                   (float)((ulong)*(undefined8 *)(lVar33 + 0x50) >> 0x20) * fVar39) -
                   (float)((ulong)param_1[0x12] >> 0x20);
          fVar37 = ((float)*(undefined8 *)(lVar33 + 0x78) +
                   (float)*(undefined8 *)(lVar33 + 0x68) * fVar41 +
                   (float)*(undefined8 *)(lVar33 + 0x48) * fVar37 +
                   (float)*(undefined8 *)(lVar33 + 0x58) * fVar39) - (float)param_1[0x13];
          fVar37 = SQRT(fVar38 * fVar38 + fVar40 * fVar40 + fVar37 * fVar37);
          pfVar13[1] = fVar37;
          if (fVar37 < *(float *)((long)param_1 + 0x44)) {
            *(float *)((long)param_1 + 0x44) = fVar37;
            *(uint *)(param_1 + 8) = uVar31;
          }
        }
        *(short *)(param_1[0xb] + 0xc) = (short)*(undefined4 *)(param_1 + 10);
        pfVar13 = (float *)param_1[0xb];
        fVar37 = *pfVar13 + *(float *)((long)param_1 + 0x4c) * pfVar13[1];
        if (fVar37 <= *(float *)(param_1 + 9)) {
          uVar5 = *(ushort *)((long)pfVar13 + 0xe);
          *(ushort *)((long)pfVar13 + 0xe) = uVar5 & 0xfffc | 1;
          uVar27 = *(uint *)(param_1 + 0xf);
          if ((uVar5 & 1) == 0) {
            if (*(int *)((long)param_1 + 0x7c) <= (int)uVar27) goto LAB_030c0744;
            uVar18 = (ulong)(int)uVar27;
            puVar10 = (uint *)(param_1[0xe] + uVar18 * 8);
            *(uint *)(param_1 + 0xf) = uVar27 + 1;
            *puVar10 = uVar31;
            puVar10[1] = (uint)fVar37;
            lVar33 = param_1[0xe];
            puVar20 = (undefined4 *)(lVar33 + uVar18 * 8);
            uVar2 = *puVar20;
            iVar26 = puVar20[1];
            uVar16 = (ulong)uVar27;
            if (0 < (int)uVar27) {
              do {
                iVar8 = (int)uVar16;
                iVar25 = iVar8;
                if (-1 < iVar8 + -1) {
                  iVar25 = iVar8 + -1;
                }
                uVar18 = (ulong)(uint)(iVar25 >> 1);
                if (*(int *)(lVar33 + uVar18 * 8 + 4) <= iVar26) {
                  uVar18 = (ulong)iVar8;
                  break;
                }
                *(undefined8 *)(lVar33 + uVar16 * 8) = *(undefined8 *)(lVar33 + uVar18 * 8);
                lVar33 = param_1[0xe];
                uVar16 = uVar18;
              } while (2 < iVar8);
            }
            *(undefined4 *)(lVar33 + uVar18 * 8) = uVar2;
            *(int *)(param_1[0xe] + uVar18 * 8 + 4) = iVar26;
          }
          else if (0 < (int)uVar27) {
            uVar16 = 0;
            lVar33 = 4;
            do {
              if (*(uint *)(param_1[0xe] + lVar33 + -4) == uVar31) {
                *(float *)(param_1[0xe] + lVar33) = fVar37;
                lVar24 = param_1[0xe];
                iVar26 = ((int *)(lVar24 + lVar33))[-1];
                iVar25 = *(int *)(lVar24 + lVar33);
                if ((int)uVar16 == 0) goto LAB_030c0724;
                uVar18 = uVar16 & 0xffffffff;
                goto LAB_030c06c4;
              }
              uVar16 = uVar16 + 1;
              lVar33 = lVar33 + 8;
            } while (uVar27 != uVar16);
          }
        }
      }
    }
LAB_030c0738:
    puVar11 = puVar11 + 1;
    if (puVar15 + (int)(uVar6 + uVar14) <= puVar11) goto LAB_030c0744;
    goto LAB_030c01e8;
  }
LAB_030c0744:
  *(ushort *)(param_1[0xc] + 0xe) = *(ushort *)(param_1[0xc] + 0xe) & 0xfffc | 2;
  if (lVar17 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar15,local_118);
    goto LAB_030c0820;
  }
  uVar16 = local_118 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar17 + 0x28) < uVar16) || (*(long *)(lVar17 + 0x38) != uVar16 + (long)puVar15))
  {
    if (puVar15 == (uint *)0x0) goto LAB_030c0820;
    if (*(ulong *)(lVar17 + 0x28) < uVar16 + 0x40) {
      *(int *)(*(long *)(lVar17 + 0x30) + 0x20) = *(int *)(*(long *)(lVar17 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar17 + 0x10) + 0x18))
                (*(long **)(lVar17 + 0x10),(long)puVar15 - (long)(int)puVar15[-1],uVar16 + 0x44);
      goto LAB_030c0820;
    }
    if (*(long *)(lVar17 + 0x38) != uVar16 + (long)puVar15) {
      FUN_031cf778(lVar17,puVar15);
      goto LAB_030c0820;
    }
    *(uint **)(lVar17 + 0x38) = puVar15;
  }
  else {
    *(uint **)(lVar17 + 0x38) = puVar15;
    if (*(uint **)(lVar17 + 0x48) != puVar15) goto LAB_030c0820;
  }
  FUN_031cf578();
LAB_030c0820:
  if (*(uint *)(param_1 + 0x11) == uVar3) {
    lVar17 = 1;
  }
  else if ((*(int *)(param_1 + 0xf) < *(int *)((long)param_1 + 0x7c)) &&
          (*(int *)((long)param_1 + 0x2c) < *(int *)(param_1 + 5))) {
    lVar17 = (ulong)(*(int *)(param_1 + 0xf) == 0) << 1;
  }
  else {
    lVar17 = 3;
  }
  return lVar17;
  while( true ) {
    uVar16 = (long)((ulong)uVar27 << 0x20) >> 0x21;
    *(undefined8 *)(lVar24 + uVar18 * 8) = *(undefined8 *)(lVar24 + uVar16 * 8);
    lVar24 = param_1[0xe];
    uVar18 = (ulong)(uint)((int)uVar27 >> 1);
    if ((int)uVar31 < 3) break;
LAB_030c06c4:
    uVar31 = (uint)uVar18;
    uVar27 = uVar31;
    if (-1 < (int)(uVar31 - 1)) {
      uVar27 = uVar31 - 1;
    }
    if (*(int *)(lVar24 + (long)((int)uVar27 >> 1) * 8 + 4) <= iVar25) {
      uVar16 = (ulong)(int)uVar31;
      break;
    }
  }
LAB_030c0724:
  *(int *)(lVar24 + uVar16 * 8) = iVar26;
  *(int *)(param_1[0xe] + uVar16 * 8 + 4) = iVar25;
  goto LAB_030c0738;
}


