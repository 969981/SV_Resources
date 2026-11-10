/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030bed80; name: FUN_030bed80
 */


undefined8 FUN_030bed80(long param_1,ulong param_2,undefined4 *param_3,float *param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  ulong *puVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  int iVar21;
  uint *puVar22;
  uint *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  long *plVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulong local_d0;
  ulong *puStack_c8;
  ulong *local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  ulong local_a0;
  ulong *local_98;
  ulong local_90;
  ulong uStack_88;
  uint local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  ushort *local_58;
  
  plVar26 = *(long **)(param_1 + 8);
  uVar8 = param_2 >> 0x16 & 0x3ff;
  *(int *)((long)plVar26 + 0x7c) = (int)param_2;
  iVar7 = (int)uVar8;
  if ((*plVar26 != 0) && ((int)plVar26[0xe] != iVar7)) {
    plVar26[1] = *(long *)(*(long *)(*plVar26 + 0x38) + uVar8 * 0x100 + 0x10);
    *(int *)(plVar26 + 0xe) = iVar7;
  }
  *(int *)(plVar26 + 0xe) = iVar7;
  lVar9 = plVar26[1];
  uVar8 = param_2 & 0x3fffff;
  lVar11 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0x18) + uVar8 * 8);
  plVar26[6] = lVar11;
  lVar16 = *(long *)(lVar9 + 0x20);
  if ((*(int *)(lVar16 + 0x78) == 0) ||
     (iVar7 = *(int *)(*(long *)(lVar16 + 0x70) + uVar8 * 4), iVar7 == -1)) {
    iVar7 = 0;
    plVar26[7] = 0xffffffff;
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar16 + 0x80) + (long)iVar7 * 8);
    plVar26[7] = lVar16;
    iVar7 = (int)((ulong)lVar16 >> 0x20);
  }
  iVar7 = iVar7 + (int)((ulong)lVar11 >> 0x20);
  uVar30 = *(undefined8 *)(lVar9 + 0x40);
  uVar31 = *(undefined8 *)(lVar9 + 0x50);
  puVar4 = (undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0x38) + uVar8 * 0x10);
  uVar25 = *puVar4;
  uVar32 = *(undefined8 *)(lVar9 + 0x60);
  uVar33 = *(undefined8 *)(lVar9 + 0x70);
  fVar27 = (float)uVar25;
  fVar28 = (float)((ulong)uVar25 >> 0x20);
  fVar29 = (float)puVar4[1];
  plVar26[9] = CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x78) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar9 + 0x68) >> 0x20) * fVar29 +
                        (float)((ulong)*(undefined8 *)(lVar9 + 0x48) >> 0x20) * fVar27 +
                        (float)((ulong)*(undefined8 *)(lVar9 + 0x58) >> 0x20) * fVar28,
                        (float)*(undefined8 *)(lVar9 + 0x78) +
                        (float)*(undefined8 *)(lVar9 + 0x68) * fVar29 +
                        (float)*(undefined8 *)(lVar9 + 0x48) * fVar27 +
                        (float)*(undefined8 *)(lVar9 + 0x58) * fVar28);
  plVar26[8] = CONCAT44((float)((ulong)uVar33 >> 0x20) +
                        (float)((ulong)uVar32 >> 0x20) * fVar29 +
                        (float)((ulong)uVar30 >> 0x20) * fVar27 +
                        (float)((ulong)uVar31 >> 0x20) * fVar28,
                        (float)uVar33 +
                        (float)uVar32 * fVar29 + (float)uVar30 * fVar27 + (float)uVar31 * fVar28);
  if ((int)(*(uint *)((long)plVar26 + 0xa4) & 0x7fffffff) < iVar7) {
    FUN_03060c58(plVar26 + 0x13,PTR_PTR_047d1a50,(long)iVar7);
  }
  if ((int)plVar26[0x14] != iVar7) {
    *(int *)(plVar26 + 0x14) = iVar7;
  }
  lVar9 = *(long *)(plVar26[1] + 0x20);
  lVar11 = *(long *)(lVar9 + 0x90);
  iVar7 = *(int *)(lVar9 + 0x60);
  if (*(long *)(lVar9 + 0x28) != 0) {
    uVar1 = *(uint *)((long)plVar26 + 0x34);
    uVar3 = uVar1 * 2;
    if (0 < (int)uVar3) {
      puVar13 = (undefined4 *)(*(long *)(lVar9 + 0x28) + (long)(int)plVar26[6] * 8);
      puVar14 = (undefined4 *)plVar26[0x13];
      if (2 < uVar3 - 1) {
        iVar21 = -(uVar3 & 0xfffffffc);
        puVar12 = puVar14;
        puVar15 = puVar13;
        do {
          *puVar12 = *puVar15;
          puVar12[1] = puVar15[1];
          puVar12[2] = puVar15[2];
          puVar13 = puVar15 + 4;
          puVar14 = puVar12 + 4;
          iVar21 = iVar21 + 4;
          puVar12[3] = puVar15[3];
          puVar12 = puVar14;
          puVar15 = puVar13;
        } while (iVar21 != 0);
      }
      if ((uVar1 & 1) != 0) {
        iVar21 = (uVar1 & 1) * -2;
        do {
          bVar5 = iVar21 != -1;
          iVar21 = iVar21 + 1;
          *puVar14 = *puVar13;
          puVar14 = puVar14 + 1;
          puVar13 = puVar13 + 1;
        } while (bVar5);
      }
    }
  }
  if ((lVar11 != 0) && (uVar1 = *(uint *)((long)plVar26 + 0x3c), 0 < (int)uVar1)) {
    uVar3 = uVar1 * 2;
    if (0 < (int)uVar3) {
      puVar14 = (undefined4 *)(plVar26[0x13] + (long)*(int *)((long)plVar26 + 0x34) * 8);
      puVar13 = (undefined4 *)
                (lVar11 + (long)((int)plVar26[7] - *(int *)(*(long *)(plVar26[1] + 0x20) + 0x30)) *
                          8);
      if (2 < uVar3 - 1) {
        iVar21 = -(uVar3 & 0xfffffffc);
        puVar12 = puVar13;
        puVar15 = puVar14;
        do {
          *puVar15 = *puVar12;
          puVar15[1] = puVar12[1];
          puVar15[2] = puVar12[2];
          puVar13 = puVar12 + 4;
          puVar14 = puVar15 + 4;
          iVar21 = iVar21 + 4;
          puVar15[3] = puVar12[3];
          puVar12 = puVar13;
          puVar15 = puVar14;
        } while (iVar21 != 0);
      }
      if ((uVar1 & 1) != 0) {
        iVar21 = (uVar1 & 1) * -2;
        do {
          bVar5 = iVar21 != -1;
          iVar21 = iVar21 + 1;
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        } while (bVar5);
      }
    }
  }
  lVar9 = plVar26[0x13];
  plVar26[0xd] = lVar9 + -8;
  uVar1 = *(int *)((long)plVar26 + 0x3c) + *(int *)((long)plVar26 + 0x34);
  if (0 < (int)uVar1) {
    lVar11 = 0;
    while( true ) {
      lVar9 = lVar9 + lVar11;
      if ((*(byte *)(lVar9 + 2) >> 6 & 1) == 0) {
        *(uint *)(lVar9 + 4) = *(uint *)(lVar9 + 4) & 0x3fffff | iVar7 << 0x16;
      }
      if ((ulong)uVar1 * 8 + -8 == lVar11) break;
      lVar9 = plVar26[0x13];
      lVar11 = lVar11 + 8;
    }
  }
  iVar7 = *(int *)(*(long *)(param_1 + 8) + 0x34);
  iVar21 = *(int *)(*(long *)(param_1 + 8) + 0x3c);
  lVar9 = tpidr_el0;
  lVar11 = *(long *)(lVar9 + 0x1000b8);
  if (lVar11 == 0) {
    lVar11 = FUN_00e5d3b4();
    *(long *)(lVar9 + 0x1000b8) = lVar11;
  }
  uVar1 = iVar21 + iVar7;
  lVar9 = *(long *)(*(long *)(lVar11 + 0x3d0) + 0x10);
  if (*(long *)(lVar9 + 8) == 0) {
    uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    local_d0 = uVar8;
    if (lVar9 != 0) {
      local_a0 = uVar8 + 0x3f & 0xffffffffffffffc0;
      if (local_a0 <= *(ulong *)(lVar9 + 0x28)) {
        puVar6 = *(uint **)(lVar9 + 0x38);
        if (local_a0 + (long)puVar6 <= *(ulong *)(lVar9 + 0x40)) {
          *(ulong *)(lVar9 + 0x38) = local_a0 + (long)puVar6;
          goto LAB_030bf120;
        }
      }
      puVar6 = (uint *)FUN_031cf3b4(lVar9,&local_a0);
      goto LAB_030bf120;
    }
  }
  else {
    local_d0 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  }
  uVar8 = local_d0;
  puVar6 = (uint *)(**(code **)PTR_DAT_047d1a08)(1,&local_d0,0x40);
  lVar9 = 0;
LAB_030bf120:
  lVar11 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(lVar11 + 0x34);
  uVar3 = *(uint *)(lVar11 + 0x3c);
  puVar23 = puVar6;
  if (0 < (int)uVar1) {
    iVar7 = *(int *)(lVar11 + 0x30);
    uVar18 = uVar1 & 3;
    if (uVar1 - 1 < 3) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      do {
        puVar10 = puVar23;
        uVar19 = iVar7 + (int)lVar16;
        puVar23 = puVar6 + lVar16;
        lVar16 = lVar16 + 4;
        *puVar23 = uVar19;
        puVar23[1] = uVar19 + 1;
        puVar23[2] = uVar19 + 2;
        puVar23[3] = uVar19 + 3;
        puVar23 = puVar23 + 4;
      } while ((uVar1 & 0xfffffffc) != (uint)lVar16);
      puVar23 = puVar10 + 4;
    }
    if (uVar18 != 0) {
      uVar19 = (int)lVar16 + iVar7;
      puVar10 = puVar23;
      do {
        *puVar10 = uVar19;
        uVar18 = uVar18 - 1;
        uVar19 = uVar19 + 1;
        puVar23 = puVar10 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar18 != 0);
    }
  }
  if (0 < (int)uVar3) {
    iVar7 = *(int *)(lVar11 + 0x38);
    uVar18 = uVar3 & 3;
    if (uVar3 - 1 < 3) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      puVar10 = puVar23;
      do {
        puVar22 = puVar10;
        uVar19 = iVar7 + (int)lVar11;
        puVar10 = puVar23 + lVar11;
        lVar11 = lVar11 + 4;
        *puVar10 = uVar19;
        puVar10[1] = uVar19 + 1;
        puVar10[2] = uVar19 + 2;
        puVar10[3] = uVar19 + 3;
        puVar10 = puVar10 + 4;
      } while ((uVar3 & 0xfffffffc) != (uint)lVar11);
      puVar23 = puVar22 + 4;
    }
    if (uVar18 != 0) {
      uVar19 = (int)lVar11 + iVar7;
      do {
        *puVar23 = uVar19;
        uVar18 = uVar18 - 1;
        uVar19 = uVar19 + 1;
        puVar23 = puVar23 + 1;
      } while (uVar18 != 0);
    }
  }
  if (puVar6 < puVar6 + (int)(uVar3 + uVar1)) {
    plVar26 = *(long **)(param_1 + 8);
    lVar11 = plVar26[0xd];
    puVar23 = puVar6;
    do {
      uVar18 = *puVar23;
      plVar26[0xd] = lVar11 + 8;
      uVar19 = *(uint *)(lVar11 + 0xc) >> 0x16;
      if (*plVar26 == 0) {
        plVar26[2] = plVar26[1];
      }
      else if (*(uint *)((long)plVar26 + 0x74) != uVar19) {
        plVar26[2] = *(long *)(*(long *)(*plVar26 + 0x38) + (ulong)uVar19 * 0x100 + 0x10);
        *(uint *)((long)plVar26 + 0x74) = uVar19;
      }
      *(uint *)((long)plVar26 + 0x74) = uVar19;
      plVar26 = *(long **)(param_1 + 8);
      lVar11 = plVar26[0xd];
      if (0 < (int)*(uint *)(param_1 + 0x10)) {
        uVar19 = *(uint *)(lVar11 + 4);
        uVar24 = 0;
        do {
          if (uVar19 == *(uint *)(param_1 + 0x1c + uVar24 * 4)) {
            *param_3 = (int)uVar24;
            puVar17 = *(ulong **)(param_1 + 8);
            uVar2 = *(ushort *)puVar17[0xd];
            pfVar20 = (float *)puVar17[0x11];
            lVar11 = (ulong)CONCAT42((uint)uVar2 << 0x10,uVar2) << 0x10;
            if ((pfVar20 != (float *)0x0) &&
               (uVar24 = (ulong)(uint)puVar17[0x12], 0 < (int)(uint)puVar17[0x12])) {
              puVar23 = (uint *)puVar17[0x10];
              do {
                if (*puVar23 == uVar19) {
                  lVar11 = CONCAT44(*pfVar20 + (float)((ulong)lVar11 >> 0x20),
                                    *pfVar20 + (float)lVar11);
                }
                uVar24 = uVar24 - 1;
                pfVar20 = pfVar20 + 1;
                puVar23 = puVar23 + 1;
              } while (uVar24 != 0);
            }
            plVar26 = (long *)puVar17[4];
            if (plVar26 != (long *)0x0) {
              local_98 = puVar17 + 6;
              local_a0 = CONCAT44(local_a0._4_4_,(int)param_2);
              uStack_88 = puVar17[9];
              local_90 = puVar17[8];
              uVar24 = puVar17[2];
              local_a8 = *(undefined8 *)
                          (*(long *)(*(long *)(uVar24 + 0x20) + 0x18) +
                          ((ulong)uVar19 & 0x3fffff) * 8);
              puVar4 = (undefined8 *)
                       (*(long *)(*(long *)(uVar24 + 0x20) + 0x38) +
                       ((ulong)uVar19 & 0x3fffff) * 0x10);
              uVar25 = *puVar4;
              local_78 = &local_a8;
              fVar27 = (float)uVar25;
              fVar28 = (float)((ulong)uVar25 >> 0x20);
              fVar29 = (float)puVar4[1];
              local_70 = CONCAT44((float)((ulong)*(undefined8 *)(uVar24 + 0x70) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(uVar24 + 0x60) >> 0x20) * fVar29 +
                                  (float)((ulong)*(undefined8 *)(uVar24 + 0x40) >> 0x20) * fVar27 +
                                  (float)((ulong)*(undefined8 *)(uVar24 + 0x50) >> 0x20) * fVar28,
                                  (float)*(undefined8 *)(uVar24 + 0x70) +
                                  (float)*(undefined8 *)(uVar24 + 0x60) * fVar29 +
                                  (float)*(undefined8 *)(uVar24 + 0x40) * fVar27 +
                                  (float)*(undefined8 *)(uVar24 + 0x50) * fVar28);
              uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(uVar24 + 0x78) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(uVar24 + 0x68) >> 0x20) * fVar29 +
                                   (float)((ulong)*(undefined8 *)(uVar24 + 0x48) >> 0x20) * fVar27 +
                                   (float)((ulong)*(undefined8 *)(uVar24 + 0x58) >> 0x20) * fVar28,
                                   (float)*(undefined8 *)(uVar24 + 0x78) +
                                   (float)*(undefined8 *)(uVar24 + 0x68) * fVar29 +
                                   (float)*(undefined8 *)(uVar24 + 0x48) * fVar27 +
                                   (float)*(undefined8 *)(uVar24 + 0x58) * fVar28);
              local_60 = uVar18 | (int)puVar17[0xe] << 0x16;
              puStack_c8 = puVar17 + 10;
              local_d0 = *puVar17;
              local_b8 = 0;
              local_c0 = &local_a0;
              local_b0 = lVar11;
              local_80 = uVar19;
              local_58 = (ushort *)puVar17[0xd];
              uVar25 = (**(code **)(*plVar26 + 0x30))(plVar26,&local_d0);
              lVar11 = NEON_fmax(uVar25,0,4);
            }
            *param_4 = (float)lVar11 + 0.0;
            uVar25 = 1;
            goto joined_r0x030bf48c;
          }
          uVar24 = uVar24 + 1;
        } while (*(uint *)(param_1 + 0x10) != uVar24);
      }
      puVar23 = puVar23 + 1;
    } while (puVar23 < puVar6 + (int)(uVar3 + uVar1));
  }
  uVar25 = 0;
joined_r0x030bf48c:
  if (lVar9 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar6,uVar8);
    return uVar25;
  }
  uVar8 = uVar8 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar9 + 0x28) < uVar8) || (*(long *)(lVar9 + 0x38) != uVar8 + (long)puVar6)) {
    if (puVar6 == (uint *)0x0) {
      return uVar25;
    }
    if (*(ulong *)(lVar9 + 0x28) < uVar8 + 0x40) {
      *(int *)(*(long *)(lVar9 + 0x30) + 0x20) = *(int *)(*(long *)(lVar9 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar9 + 0x10) + 0x18))
                (*(long **)(lVar9 + 0x10),(long)puVar6 - (long)(int)puVar6[-1],uVar8 + 0x44);
      return uVar25;
    }
    if (*(long *)(lVar9 + 0x38) != uVar8 + (long)puVar6) {
      FUN_031cf778(lVar9,puVar6);
      return uVar25;
    }
    *(uint **)(lVar9 + 0x38) = puVar6;
  }
  else {
    *(uint **)(lVar9 + 0x38) = puVar6;
    if (*(uint **)(lVar9 + 0x48) != puVar6) {
      return uVar25;
    }
  }
  FUN_031cf578(lVar9);
  return uVar25;
}


