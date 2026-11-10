/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030c8978; name: FUN_030c8978
 */


undefined1  [16] FUN_030c8978(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  uint *puVar9;
  undefined8 uVar10;
  ushort uVar11;
  int iVar12;
  ulong uVar13;
  uint *puVar14;
  ulong *puVar15;
  uint uVar16;
  long *plVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  ushort *puVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  uint uVar27;
  long lVar28;
  uint uVar29;
  float *pfVar30;
  long *plVar31;
  int iVar32;
  long lVar33;
  ulong uVar34;
  uint *puVar35;
  uint *puVar36;
  uint uVar37;
  undefined8 *puVar38;
  ulong uVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar44;
  undefined8 uVar43;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar55;
  undefined8 uVar53;
  undefined8 uVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  ulong local_e0;
  ulong *puStack_d8;
  long **local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 local_b8;
  long *local_b0;
  ulong *local_a8;
  ulong local_a0;
  ulong uStack_98;
  uint local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  ushort *local_68;
  
  plVar17 = (long *)*param_1;
  uVar13 = param_2 >> 0x16 & 0x3ff;
  iVar12 = (int)uVar13;
  if (*plVar17 == 0) {
    plVar17[2] = plVar17[1];
  }
  else if (*(int *)((long)plVar17 + 0x74) != iVar12) {
    plVar17[2] = *(long *)(*(long *)(*plVar17 + 0x38) + uVar13 * 0x100 + 0x10);
    *(int *)((long)plVar17 + 0x74) = iVar12;
  }
  *(int *)((long)plVar17 + 0x74) = iVar12;
  plVar17 = (long *)*param_1;
  lVar28 = plVar17[2];
  puVar38 = (undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0x38) + (param_2 & 0x3fffff) * 0x10)
  ;
  uVar10 = *puVar38;
  fVar56 = (float)uVar10;
  fVar41 = (float)((ulong)uVar10 >> 0x20);
  fVar44 = (float)puVar38[1];
  fVar51 = (float)*(undefined8 *)(lVar28 + 0x70) +
           (float)*(undefined8 *)(lVar28 + 0x60) * fVar44 +
           (float)*(undefined8 *)(lVar28 + 0x40) * fVar56 +
           (float)*(undefined8 *)(lVar28 + 0x50) * fVar41;
  fVar55 = (float)((ulong)*(undefined8 *)(lVar28 + 0x70) >> 0x20) +
           (float)((ulong)*(undefined8 *)(lVar28 + 0x60) >> 0x20) * fVar44 +
           (float)((ulong)*(undefined8 *)(lVar28 + 0x40) >> 0x20) * fVar56 +
           (float)((ulong)*(undefined8 *)(lVar28 + 0x50) >> 0x20) * fVar41;
  fVar56 = (float)*(undefined8 *)(lVar28 + 0x78) +
           (float)*(undefined8 *)(lVar28 + 0x68) * fVar44 +
           (float)*(undefined8 *)(lVar28 + 0x48) * fVar56 +
           (float)*(undefined8 *)(lVar28 + 0x58) * fVar41;
  if (((param_1[1] == 0) || ((int)param_1[5] == -1)) || (*(char *)((long)param_1 + 0x24) == '\0')) {
    uVar13 = (ulong)*(uint *)(param_1 + 4);
    if (0 < (int)*(uint *)(param_1 + 4)) {
      uVar39 = 0x7f7fffee7f7fffee;
      plVar17 = param_1 + 0x46;
      do {
        uVar13 = uVar13 - 1;
        fVar41 = fVar51 - (float)*plVar17;
        fVar44 = fVar55 - (float)((ulong)*plVar17 >> 0x20);
        fVar46 = fVar56 - (float)plVar17[1];
        fVar41 = fVar41 * fVar41;
        fVar44 = fVar44 * fVar44;
        fVar46 = fVar46 * fVar46;
        uVar39 = NEON_fmin(uVar39,CONCAT44(SQRT(fVar41 + fVar44 + fVar46),
                                           SQRT(fVar41 + fVar44 + fVar46)),4);
        plVar17 = plVar17 + 2;
      } while (uVar13 != 0);
      goto LAB_030c9624;
    }
  }
  else {
    if ((int)plVar17[0xf] != iVar12) {
      plVar17[3] = *(long *)(*(long *)(*plVar17 + 0x38) + uVar13 * 0x100 + 0x10);
      *(int *)(plVar17 + 0xf) = iVar12;
      plVar17 = (long *)*param_1;
    }
    uVar16 = *(uint *)(*(long *)(*(long *)(plVar17[3] + 0x20) + 0x40) +
                      (long)(int)(*(int *)(*(long *)(plVar17[3] + 0x20) + 0x48) *
                                 ((uint)param_2 & 0x3fffff)) * 4);
    uVar37 = uVar16 | (uint)param_2 & 0xffc00000;
    uVar13 = (ulong)*(uint *)(param_1 + 4);
    if ((int)*(uint *)(param_1 + 4) < 1) {
      if (uVar37 == 0xffffffff) {
        uVar39 = 0x7f7fffee7f7fffee;
        goto LAB_030c9624;
      }
    }
    else {
      uVar24 = 0;
      uVar39 = 0x7f7fffee7f7fffee;
      bVar7 = false;
      do {
        while (*(uint *)((long)param_1 + uVar24 * 4 + 0x2c) == uVar37) {
          lVar28 = param_1[uVar24 * 2 + 0x46];
          bVar8 = uVar13 - 1 == uVar24;
          fVar41 = fVar51 - (float)lVar28;
          fVar44 = fVar55 - (float)((ulong)lVar28 >> 0x20);
          fVar46 = fVar56 - (float)(param_1 + uVar24 * 2 + 0x46)[1];
          uVar24 = uVar24 + 1;
          fVar41 = fVar41 * fVar41;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          uVar39 = NEON_fmin(uVar39,CONCAT44(SQRT(fVar41 + fVar44 + fVar46),
                                             SQRT(fVar41 + fVar44 + fVar46)),4);
          bVar7 = true;
          if (bVar8) goto LAB_030c9624;
        }
        uVar24 = uVar24 + 1;
      } while (uVar13 != uVar24);
      if (bVar7) goto LAB_030c9624;
      if (uVar37 == 0xffffffff) {
        uVar39 = 0x7f7fffee7f7fffee;
        plVar17 = param_1 + 0x46;
        do {
          uVar13 = uVar13 - 1;
          fVar41 = fVar51 - (float)*plVar17;
          fVar44 = fVar55 - (float)((ulong)*plVar17 >> 0x20);
          fVar46 = fVar56 - (float)plVar17[1];
          fVar41 = fVar41 * fVar41;
          fVar44 = fVar44 * fVar44;
          fVar46 = fVar46 * fVar46;
          uVar39 = NEON_fmin(uVar39,CONCAT44(SQRT(fVar41 + fVar44 + fVar46),
                                             SQRT(fVar41 + fVar44 + fVar46)),4);
          plVar17 = plVar17 + 2;
        } while (uVar13 != 0);
        goto LAB_030c9624;
      }
    }
    plVar17 = (long *)param_1[1];
    uVar5 = uVar37 >> 0x16;
    *(uint *)((long)plVar17 + 0x7c) = uVar37;
    if ((*plVar17 != 0) && (*(uint *)(plVar17 + 0xe) != uVar5)) {
      plVar17[1] = *(long *)(*(long *)(*plVar17 + 0x38) + (ulong)uVar5 * 0x100 + 0x10);
      *(uint *)(plVar17 + 0xe) = uVar5;
    }
    lVar28 = plVar17[1];
    *(uint *)(plVar17 + 0xe) = uVar5;
    uVar13 = (ulong)uVar16 & 0x3fffff;
    lVar18 = *(long *)(*(long *)(*(long *)(lVar28 + 0x20) + 0x18) + uVar13 * 8);
    plVar17[6] = lVar18;
    lVar25 = *(long *)(lVar28 + 0x20);
    if ((*(int *)(lVar25 + 0x78) == 0) ||
       (iVar12 = *(int *)(*(long *)(lVar25 + 0x70) + uVar13 * 4), iVar12 == -1)) {
      iVar12 = 0;
      plVar17[7] = 0xffffffff;
    }
    else {
      lVar25 = *(long *)(*(long *)(lVar25 + 0x80) + (long)iVar12 * 8);
      plVar17[7] = lVar25;
      iVar12 = (int)((ulong)lVar25 >> 0x20);
    }
    iVar12 = iVar12 + (int)((ulong)lVar18 >> 0x20);
    uVar43 = *(undefined8 *)(lVar28 + 0x40);
    uVar49 = *(undefined8 *)(lVar28 + 0x50);
    puVar38 = (undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0x38) + uVar13 * 0x10);
    uVar10 = *puVar38;
    uVar53 = *(undefined8 *)(lVar28 + 0x60);
    uVar54 = *(undefined8 *)(lVar28 + 0x70);
    fVar41 = (float)uVar10;
    fVar44 = (float)((ulong)uVar10 >> 0x20);
    fVar46 = (float)puVar38[1];
    plVar17[9] = CONCAT44((float)((ulong)*(undefined8 *)(lVar28 + 0x78) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar28 + 0x68) >> 0x20) * fVar46 +
                          (float)((ulong)*(undefined8 *)(lVar28 + 0x48) >> 0x20) * fVar41 +
                          (float)((ulong)*(undefined8 *)(lVar28 + 0x58) >> 0x20) * fVar44,
                          (float)*(undefined8 *)(lVar28 + 0x78) +
                          (float)*(undefined8 *)(lVar28 + 0x68) * fVar46 +
                          (float)*(undefined8 *)(lVar28 + 0x48) * fVar41 +
                          (float)*(undefined8 *)(lVar28 + 0x58) * fVar44);
    plVar17[8] = CONCAT44((float)((ulong)uVar54 >> 0x20) +
                          (float)((ulong)uVar53 >> 0x20) * fVar46 +
                          (float)((ulong)uVar43 >> 0x20) * fVar41 +
                          (float)((ulong)uVar49 >> 0x20) * fVar44,
                          (float)uVar54 +
                          (float)uVar53 * fVar46 + (float)uVar43 * fVar41 + (float)uVar49 * fVar44);
    if ((int)(*(uint *)((long)plVar17 + 0xa4) & 0x7fffffff) < iVar12) {
      FUN_03060c58(plVar17 + 0x13,PTR_PTR_047d1a50,(long)iVar12);
    }
    if ((int)plVar17[0x14] != iVar12) {
      *(int *)(plVar17 + 0x14) = iVar12;
    }
    lVar28 = *(long *)(plVar17[1] + 0x20);
    lVar18 = *(long *)(lVar28 + 0x90);
    iVar12 = *(int *)(lVar28 + 0x60);
    if (*(long *)(lVar28 + 0x28) != 0) {
      uVar16 = *(uint *)((long)plVar17 + 0x34);
      uVar4 = uVar16 * 2;
      if (0 < (int)uVar4) {
        puVar20 = (undefined4 *)(*(long *)(lVar28 + 0x28) + (long)(int)plVar17[6] * 8);
        puVar21 = (undefined4 *)plVar17[0x13];
        if (2 < uVar4 - 1) {
          iVar32 = -(uVar4 & 0xfffffffc);
          puVar19 = puVar21;
          puVar22 = puVar20;
          do {
            *puVar19 = *puVar22;
            puVar19[1] = puVar22[1];
            puVar19[2] = puVar22[2];
            puVar20 = puVar22 + 4;
            puVar21 = puVar19 + 4;
            iVar32 = iVar32 + 4;
            puVar19[3] = puVar22[3];
            puVar19 = puVar21;
            puVar22 = puVar20;
          } while (iVar32 != 0);
        }
        if ((uVar16 & 1) != 0) {
          iVar32 = (uVar16 & 1) * -2;
          do {
            bVar7 = iVar32 != -1;
            iVar32 = iVar32 + 1;
            *puVar21 = *puVar20;
            puVar21 = puVar21 + 1;
            puVar20 = puVar20 + 1;
          } while (bVar7);
        }
      }
    }
    if ((lVar18 != 0) && (uVar16 = *(uint *)((long)plVar17 + 0x3c), 0 < (int)uVar16)) {
      uVar4 = uVar16 * 2;
      if (0 < (int)uVar4) {
        puVar21 = (undefined4 *)(plVar17[0x13] + (long)*(int *)((long)plVar17 + 0x34) * 8);
        puVar20 = (undefined4 *)
                  (lVar18 + (long)((int)plVar17[7] - *(int *)(*(long *)(plVar17[1] + 0x20) + 0x30))
                            * 8);
        if (2 < uVar4 - 1) {
          iVar32 = -(uVar4 & 0xfffffffc);
          puVar19 = puVar20;
          puVar22 = puVar21;
          do {
            *puVar22 = *puVar19;
            puVar22[1] = puVar19[1];
            puVar22[2] = puVar19[2];
            puVar20 = puVar19 + 4;
            puVar21 = puVar22 + 4;
            iVar32 = iVar32 + 4;
            puVar22[3] = puVar19[3];
            puVar19 = puVar20;
            puVar22 = puVar21;
          } while (iVar32 != 0);
        }
        if ((uVar16 & 1) != 0) {
          iVar32 = (uVar16 & 1) * -2;
          do {
            bVar7 = iVar32 != -1;
            iVar32 = iVar32 + 1;
            *puVar21 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar21 = puVar21 + 1;
          } while (bVar7);
        }
      }
    }
    lVar28 = plVar17[0x13];
    plVar17[0xd] = lVar28 + -8;
    uVar16 = *(int *)((long)plVar17 + 0x3c) + *(int *)((long)plVar17 + 0x34);
    if (0 < (int)uVar16) {
      lVar18 = 0;
      while( true ) {
        lVar28 = lVar28 + lVar18;
        if ((*(byte *)(lVar28 + 2) >> 6 & 1) == 0) {
          *(uint *)(lVar28 + 4) = *(uint *)(lVar28 + 4) & 0x3fffff | iVar12 << 0x16;
        }
        if ((ulong)uVar16 * 8 + -8 == lVar18) break;
        lVar28 = plVar17[0x13];
        lVar18 = lVar18 + 8;
      }
    }
    iVar12 = *(int *)(param_1[1] + 0x34);
    iVar32 = *(int *)(param_1[1] + 0x3c);
    lVar28 = tpidr_el0;
    lVar18 = *(long *)(lVar28 + 0x1000b8);
    if (lVar18 == 0) {
      lVar18 = FUN_00e5d3b4();
      *(long *)(lVar28 + 0x1000b8) = lVar18;
    }
    uVar16 = iVar32 + iVar12;
    lVar18 = *(long *)(*(long *)(lVar18 + 0x3d0) + 0x10);
    if (*(long *)(lVar18 + 8) == 0) {
      uVar13 = -(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2;
      local_e0 = uVar13;
      if (lVar18 == 0) goto LAB_030c8ee8;
      local_b0 = (long *)(uVar13 + 0x3f & 0xffffffffffffffc0);
      if (*(long **)(lVar18 + 0x28) < local_b0) {
LAB_030c8e74:
        puVar9 = (uint *)FUN_031cf3b4(lVar18,&local_b0);
      }
      else {
        puVar9 = *(uint **)(lVar18 + 0x38);
        if (*(ulong *)(lVar18 + 0x40) < (ulong)((long)local_b0 + (long)puVar9)) goto LAB_030c8e74;
        *(long *)(lVar18 + 0x38) = (long)local_b0 + (long)puVar9;
      }
    }
    else {
      local_e0 = -(ulong)(uVar16 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar16 << 2;
LAB_030c8ee8:
      uVar13 = local_e0;
      puVar9 = (uint *)(**(code **)PTR_DAT_047d1a08)(1,&local_e0,0x40);
      lVar18 = 0;
    }
    lVar25 = param_1[1];
    uVar16 = *(uint *)(lVar25 + 0x34);
    uVar4 = *(uint *)(lVar25 + 0x3c);
    puVar36 = puVar9;
    if (0 < (int)uVar16) {
      iVar12 = *(int *)(lVar25 + 0x30);
      uVar27 = uVar16 & 3;
      if (uVar16 - 1 < 3) {
        lVar33 = 0;
      }
      else {
        lVar33 = 0;
        puVar14 = puVar9;
        do {
          puVar36 = puVar14;
          uVar29 = iVar12 + (int)lVar33;
          puVar14 = puVar9 + lVar33;
          lVar33 = lVar33 + 4;
          *puVar14 = uVar29;
          puVar14[1] = uVar29 + 1;
          puVar14[2] = uVar29 + 2;
          puVar14[3] = uVar29 + 3;
          puVar14 = puVar14 + 4;
        } while ((uVar16 & 0xfffffffc) != (uint)lVar33);
        puVar36 = puVar36 + 4;
      }
      if (uVar27 != 0) {
        uVar29 = (int)lVar33 + iVar12;
        puVar14 = puVar36;
        do {
          *puVar14 = uVar29;
          uVar27 = uVar27 - 1;
          uVar29 = uVar29 + 1;
          puVar36 = puVar14 + 1;
          puVar14 = puVar14 + 1;
        } while (uVar27 != 0);
      }
    }
    if (0 < (int)uVar4) {
      iVar12 = *(int *)(lVar25 + 0x38);
      uVar27 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar25 = 0;
      }
      else {
        lVar25 = 0;
        puVar14 = puVar36;
        do {
          puVar35 = puVar14;
          uVar29 = iVar12 + (int)lVar25;
          puVar14 = puVar36 + lVar25;
          lVar25 = lVar25 + 4;
          *puVar14 = uVar29;
          puVar14[1] = uVar29 + 1;
          puVar14[2] = uVar29 + 2;
          puVar14[3] = uVar29 + 3;
          puVar14 = puVar14 + 4;
        } while ((uVar4 & 0xfffffffc) != (uint)lVar25);
        puVar36 = puVar35 + 4;
      }
      if (uVar27 != 0) {
        uVar29 = (int)lVar25 + iVar12;
        do {
          *puVar36 = uVar29;
          uVar27 = uVar27 - 1;
          uVar29 = uVar29 + 1;
          puVar36 = puVar36 + 1;
        } while (uVar27 != 0);
      }
    }
    if (puVar9 < puVar9 + (int)(uVar4 + uVar16)) {
      puVar15 = (ulong *)param_1[1];
      lVar25 = -1;
      puVar23 = (ushort *)puVar15[0xd];
      puVar36 = puVar9;
      do {
        uVar27 = *puVar36;
        puVar15[0xd] = (ulong)(puVar23 + 4);
        uVar29 = *(uint *)(puVar23 + 6) >> 0x16;
        if (*puVar15 == 0) {
          puVar15[2] = puVar15[1];
        }
        else if (*(uint *)((long)puVar15 + 0x74) != uVar29) {
          puVar15[2] = *(ulong *)(*(long *)(*puVar15 + 0x38) + (ulong)uVar29 * 0x100 + 0x10);
          *(uint *)((long)puVar15 + 0x74) = uVar29;
        }
        *(uint *)((long)puVar15 + 0x74) = uVar29;
        puVar15 = (ulong *)param_1[1];
        uVar39 = (ulong)*(uint *)(param_1 + 4);
        puVar23 = (ushort *)puVar15[0xd];
        if (0 < (int)*(uint *)(param_1 + 4)) {
          uVar29 = *(uint *)(puVar23 + 2);
          lVar33 = 0;
          puVar14 = (uint *)((long)param_1 + 0x2c);
LAB_030c90b0:
          if (uVar29 != *puVar14) goto code_r0x030c90bc;
          pfVar30 = (float *)puVar15[0x11];
          lVar25 = (ulong)CONCAT42((uint)*puVar23 << 0x10,*puVar23) << 0x10;
          if ((pfVar30 != (float *)0x0) &&
             (uVar39 = (ulong)(uint)puVar15[0x12], 0 < (int)(uint)puVar15[0x12])) {
            puVar36 = (uint *)puVar15[0x10];
            do {
              if (*puVar36 == uVar29) {
                lVar25 = CONCAT44(*pfVar30 + (float)((ulong)lVar25 >> 0x20),*pfVar30 + (float)lVar25
                                 );
              }
              pfVar30 = pfVar30 + 1;
              uVar39 = uVar39 - 1;
              puVar36 = puVar36 + 1;
            } while (uVar39 != 0);
          }
          plVar17 = (long *)puVar15[4];
          if (plVar17 != (long *)0x0) {
            local_a8 = puVar15 + 6;
            local_b0 = (long *)CONCAT44(local_b0._4_4_,uVar37);
            uStack_98 = puVar15[9];
            local_a0 = puVar15[8];
            uVar39 = puVar15[2];
            local_b8 = *(undefined8 *)
                        (*(long *)(*(long *)(uVar39 + 0x20) + 0x18) + ((ulong)uVar29 & 0x3fffff) * 8
                        );
            puVar38 = (undefined8 *)
                      (*(long *)(*(long *)(uVar39 + 0x20) + 0x38) +
                      ((ulong)uVar29 & 0x3fffff) * 0x10);
            uVar10 = *puVar38;
            local_88 = &local_b8;
            fVar41 = (float)uVar10;
            fVar44 = (float)((ulong)uVar10 >> 0x20);
            fVar46 = (float)puVar38[1];
            local_80 = CONCAT44((float)((ulong)*(undefined8 *)(uVar39 + 0x70) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(uVar39 + 0x60) >> 0x20) * fVar46 +
                                (float)((ulong)*(undefined8 *)(uVar39 + 0x40) >> 0x20) * fVar41 +
                                (float)((ulong)*(undefined8 *)(uVar39 + 0x50) >> 0x20) * fVar44,
                                (float)*(undefined8 *)(uVar39 + 0x70) +
                                (float)*(undefined8 *)(uVar39 + 0x60) * fVar46 +
                                (float)*(undefined8 *)(uVar39 + 0x40) * fVar41 +
                                (float)*(undefined8 *)(uVar39 + 0x50) * fVar44);
            uStack_78 = CONCAT44((float)((ulong)*(undefined8 *)(uVar39 + 0x78) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(uVar39 + 0x68) >> 0x20) * fVar46 +
                                 (float)((ulong)*(undefined8 *)(uVar39 + 0x48) >> 0x20) * fVar41 +
                                 (float)((ulong)*(undefined8 *)(uVar39 + 0x58) >> 0x20) * fVar44,
                                 (float)*(undefined8 *)(uVar39 + 0x78) +
                                 (float)*(undefined8 *)(uVar39 + 0x68) * fVar46 +
                                 (float)*(undefined8 *)(uVar39 + 0x48) * fVar41 +
                                 (float)*(undefined8 *)(uVar39 + 0x58) * fVar44);
            local_70 = uVar27 | (int)puVar15[0xe] << 0x16;
            puStack_d8 = puVar15 + 10;
            local_e0 = *puVar15;
            local_d0 = &local_b0;
            uStack_c8 = 0;
            local_c0 = lVar25;
            local_90 = uVar29;
            local_68 = puVar23;
            (**(code **)(*plVar17 + 0x30))(plVar17,&local_e0);
          }
          lVar25 = lVar33 >> 0x20;
          bVar7 = true;
          goto joined_r0x030c90ec;
        }
LAB_030c90cc:
        puVar36 = puVar36 + 1;
      } while (puVar36 < puVar9 + (int)(uVar4 + uVar16));
      bVar7 = false;
      if (lVar18 != 0) goto LAB_030c90f0;
LAB_030c926c:
      (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar9,uVar13);
    }
    else {
      bVar7 = false;
      lVar25 = -1;
joined_r0x030c90ec:
      if (lVar18 == 0) goto LAB_030c926c;
LAB_030c90f0:
      uVar13 = uVar13 + 0x3f & 0xffffffffffffffc0;
      if ((*(ulong *)(lVar18 + 0x28) < uVar13) ||
         (*(long *)(lVar18 + 0x38) != uVar13 + (long)puVar9)) {
        if (puVar9 != (uint *)0x0) {
          if (*(ulong *)(lVar18 + 0x28) < uVar13 + 0x40) {
            *(int *)(*(long *)(lVar18 + 0x30) + 0x20) =
                 *(int *)(*(long *)(lVar18 + 0x30) + 0x20) + -1;
            (**(code **)(**(long **)(lVar18 + 0x10) + 0x18))
                      (*(long **)(lVar18 + 0x10),(long)puVar9 - (long)(int)puVar9[-1],uVar13 + 0x44)
            ;
          }
          else {
            if (*(long *)(lVar18 + 0x38) == uVar13 + (long)puVar9) {
              *(uint **)(lVar18 + 0x38) = puVar9;
              goto LAB_030c92c8;
            }
            FUN_031cf778(lVar18,puVar9);
          }
        }
      }
      else {
        *(uint **)(lVar18 + 0x38) = puVar9;
        if (*(uint **)(lVar18 + 0x48) == puVar9) {
LAB_030c92c8:
          FUN_031cf578(lVar18);
        }
      }
    }
    if (bVar7) {
      plVar17 = (long *)param_1[1];
      if (*(uint *)(plVar17 + 0xf) != uVar5) {
        plVar17[3] = *(long *)(*(long *)(*plVar17 + 0x38) + (ulong)uVar5 * 0x100 + 0x10);
        *(uint *)(plVar17 + 0xf) = uVar5;
      }
      fVar41 = (float)param_1[lVar25 * 2 + 0x46];
      fVar42 = fVar51 - fVar41;
      fVar44 = (float)((ulong)param_1[lVar25 * 2 + 0x46] >> 0x20);
      fVar45 = fVar55 - fVar44;
      fVar47 = fVar56 - (float)param_1[lVar25 * 2 + 0x47];
      fVar48 = (float)param_1[lVar25 * 2 + 0xe];
      fVar41 = fVar48 - fVar41;
      fVar50 = (float)((ulong)param_1[lVar25 * 2 + 0xe] >> 0x20);
      fVar44 = fVar50 - fVar44;
      fVar46 = (float)param_1[lVar25 * 2 + 0xf] - (float)param_1[lVar25 * 2 + 0x47];
      fVar51 = fVar51 - fVar48;
      fVar55 = fVar55 - fVar50;
      fVar56 = fVar56 - (float)param_1[lVar25 * 2 + 0xf];
      uVar39 = (ulong)(uint)((SQRT(fVar42 * fVar42 + fVar45 * fVar45 + fVar47 * fVar47) +
                             SQRT(fVar51 * fVar51 + fVar55 * fVar55 + fVar56 * fVar56) +
                             SQRT(fVar41 * fVar41 + fVar44 * fVar44 + fVar46 * fVar46)) * 0.5);
      goto LAB_030c9624;
    }
    iVar12 = *(int *)((long)param_1 + 0x1ac);
    if (iVar12 < (int)param_1[0x35]) {
      uVar13 = (ulong)(uVar37 * -0x61c8864f >> 0x18);
      lVar18 = param_1[0x32];
      for (uVar11 = *(ushort *)(param_1[0x34] + uVar13 * 2); -1 < (short)uVar11;
          uVar11 = *(ushort *)(param_1[0x33] + (ulong)uVar11 * 2)) {
        if (*(uint *)(lVar18 + (ulong)uVar11 * 0x10 + 8) == uVar37) {
          puVar38 = (undefined8 *)(lVar18 + (ulong)uVar11 * 0x10);
          goto LAB_030c93e4;
        }
      }
      puVar38 = (undefined8 *)(lVar18 + (long)iVar12 * 0x10);
      *(int *)((long)param_1 + 0x1ac) = iVar12 + 1;
      *puVar38 = 0x7f7fffee7f7fffee;
      *(uint *)(puVar38 + 1) = uVar37;
      *(undefined4 *)((long)puVar38 + 0xc) = 0xffff;
      *(undefined2 *)(param_1[0x33] + (long)(short)iVar12 * 2) =
           *(undefined2 *)(param_1[0x34] + uVar13 * 2);
      *(short *)(param_1[0x34] + uVar13 * 2) = (short)iVar12;
LAB_030c93e4:
      if (puVar38 != (undefined8 *)0x0) {
        if ((*(byte *)((long)puVar38 + 0xe) >> 1 & 1) == 0) {
          lVar18 = *(long *)(lVar28 + 0x1000b8);
          if (lVar18 == 0) {
            lVar18 = FUN_00e5d3b4();
            *(long *)(lVar28 + 0x1000b8) = lVar18;
          }
          plVar17 = *(long **)(lVar18 + 0x3e0);
          if (plVar17 != (long *)0x0) {
            lVar18 = *plVar17;
            if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
              (**(code **)(lVar18 + 0x18))("AbstractSearch",0xe,*(undefined8 *)(lVar18 + 0x28));
            }
            puVar2 = (undefined8 *)plVar17[2];
            uVar39 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
            if ((uVar39 <= (ulong)plVar17[3]) && (plVar17[2] = uVar39, puVar2 != (undefined8 *)0x0))
            {
              *puVar2 = "TtAbstractSearch";
              uVar10 = nn::os::GetSystemTick();
              puVar2[1] = uVar10;
            }
            if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar17[6] != 0)) {
              puVar2 = (undefined8 *)plVar17[2];
              uVar39 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
              if ((uVar39 <= (ulong)plVar17[3]) &&
                 (plVar17[2] = uVar39, puVar2 != (undefined8 *)0x0)) {
                *puVar2 = &DAT_03c4e575;
                puVar2[1] = *(undefined8 *)(plVar17[6] + 8);
              }
            }
          }
          local_b0 = plVar17;
          if ((*(byte *)((long)puVar38 + 0xe) >> 1 & 1) == 0) {
            do {
              if ((int)param_1[0x3f] == 0) {
                bVar7 = false;
                bVar8 = true;
                if (plVar17 != (long *)0x0) goto LAB_030c9508;
                goto LAB_030c9598;
              }
              if ((*(int *)((long)param_1 + 0x1fc) <= (int)param_1[0x3f]) ||
                 ((int)param_1[0x35] <= *(int *)((long)param_1 + 0x1ac))) {
                bVar8 = false;
                goto LAB_030c9500;
              }
              FUN_030bfb7c(param_1 + 0x30);
            } while ((*(byte *)((long)puVar38 + 0xe) >> 1 & 1) == 0);
          }
          bVar8 = true;
LAB_030c9500:
          bVar7 = true;
          if (plVar17 != (long *)0x0) {
LAB_030c9508:
            lVar18 = *plVar17;
            if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar17[6] != 0)) {
              puVar38 = (undefined8 *)plVar17[2];
              uVar39 = (long)puVar38 + 0x17U & 0xfffffffffffffff8;
              if ((uVar39 <= (ulong)plVar17[3]) &&
                 (plVar17[2] = uVar39, puVar38 != (undefined8 *)0x0)) {
                *puVar38 = &DAT_03c4e575;
                puVar38[1] = *(undefined8 *)(plVar17[6] + 8);
              }
            }
            puVar38 = (undefined8 *)plVar17[2];
            uVar39 = (long)puVar38 + 0x17U & 0xfffffffffffffff8;
            if ((uVar39 <= (ulong)plVar17[3]) && (plVar17[2] = uVar39, puVar38 != (undefined8 *)0x0)
               ) {
              *puVar38 = &DAT_03c2d363;
              uVar10 = nn::os::GetSystemTick();
              puVar38[1] = uVar10;
            }
            if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
              (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
            }
          }
LAB_030c9598:
          if (!bVar7) {
            uVar39 = 0x7f7fffee;
            goto LAB_030c9624;
          }
          if (!bVar8) goto LAB_030c95d8;
        }
        uVar11 = *(ushort *)(param_1[0x34] + uVar13 * 2);
        if (-1 < (short)uVar11) {
          do {
            if (*(uint *)(param_1[0x32] + (ulong)uVar11 * 0x10 + 8) == uVar37) {
              plVar17 = (long *)(param_1[0x32] + (ulong)uVar11 * 0x10);
              goto LAB_030c9658;
            }
            uVar11 = *(ushort *)(param_1[0x33] + (ulong)uVar11 * 2);
          } while (-1 < (short)uVar11);
        }
        plVar17 = param_1 + 0x36;
LAB_030c9658:
        if ((long)*(short *)((long)plVar17 + 0xc) == -1) {
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = (ulong)*(uint *)(param_1[0x32] + (long)*(short *)((long)plVar17 + 0xc) * 0x10 + 8
                                   );
        }
        fVar41 = (float)uVar13;
        uVar39 = (ulong)((uint)((int)fVar41 * -0x61c8864f) >> 0x18);
        uVar11 = *(ushort *)(param_1[0x34] + uVar39 * 2);
        if (-1 < (short)uVar11) {
          uVar24 = (ulong)(uint)(int)(short)uVar11;
          do {
            if (*(float *)(param_1[0x32] + (uVar24 & 0xffff) * 0x10 + 8) == fVar41) {
              plVar17 = (long *)(param_1[0x32] + (uVar24 & 0xffff) * 0x10);
              goto LAB_030c96bc;
            }
            sVar3 = *(short *)(param_1[0x33] + (uVar24 & 0xffff) * 2);
            uVar24 = (ulong)sVar3;
          } while (-1 < sVar3);
        }
        plVar17 = param_1 + 0x36;
LAB_030c96bc:
        if ((long)*(short *)((long)plVar17 + 0xc) == -1) {
          fVar44 = -NAN;
        }
        else {
          fVar44 = *(float *)(param_1[0x32] + (long)*(short *)((long)plVar17 + 0xc) * 0x10 + 8);
        }
        if ((int)param_1[4] == 1) {
          fVar46 = *(float *)((long)param_1 + 0x2c);
          uVar24 = 0;
        }
        else {
          lVar18 = *(long *)(lVar28 + 0x1000b8);
          if (lVar18 == 0) {
            lVar18 = FUN_00e5d3b4();
            *(long *)(lVar28 + 0x1000b8) = lVar18;
          }
          plVar17 = *(long **)(lVar18 + 0x3e0);
          if (plVar17 != (long *)0x0) {
            lVar28 = *plVar17;
            if (*(code **)(lVar28 + 0x18) != (code *)0x0) {
              (**(code **)(lVar28 + 0x18))(&DAT_03c5f408,4,*(undefined8 *)(lVar28 + 0x28));
            }
            puVar38 = (undefined8 *)plVar17[2];
            uVar24 = (long)puVar38 + 0x17U & 0xfffffffffffffff8;
            if ((uVar24 <= (ulong)plVar17[3]) && (plVar17[2] = uVar24, puVar38 != (undefined8 *)0x0)
               ) {
              *puVar38 = &DAT_03c5f406;
              uVar10 = nn::os::GetSystemTick();
              puVar38[1] = uVar10;
            }
            if (((*(byte *)(lVar28 + 0x38) & 1) != 0) && (plVar17[6] != 0)) {
              puVar38 = (undefined8 *)plVar17[2];
              uVar24 = (long)puVar38 + 0x17U & 0xfffffffffffffff8;
              if ((uVar24 <= (ulong)plVar17[3]) &&
                 (plVar17[2] = uVar24, puVar38 != (undefined8 *)0x0)) {
                *puVar38 = &DAT_03c4e575;
                puVar38[1] = *(undefined8 *)(plVar17[6] + 8);
              }
            }
          }
          fVar42 = fVar41;
          fVar46 = fVar41;
          if (fVar44 != -NAN) {
            plVar1 = param_1 + 0x36;
            uVar24 = uVar13;
            do {
              fVar42 = fVar44;
              uVar11 = *(ushort *)
                        (param_1[0x34] + (ulong)((uint)((int)fVar42 * -0x61c8864f) >> 0x18) * 2);
              plVar26 = plVar1;
              fVar46 = (float)uVar24;
              if ((short)uVar11 < 0) {
                if ((*(byte *)((long)param_1 + 0x1be) >> 2 & 1) != 0) break;
              }
              else {
                lVar28 = param_1[0x32];
                uVar34 = (ulong)(uint)(int)(short)uVar11;
                do {
                  if (*(float *)(lVar28 + (uVar34 & 0xffff) * 0x10 + 8) == fVar42) {
                    plVar31 = (long *)(lVar28 + (uVar34 & 0xffff) * 0x10);
                    goto LAB_030c9820;
                  }
                  sVar3 = *(short *)(param_1[0x33] + (uVar34 & 0xffff) * 2);
                  uVar34 = (ulong)sVar3;
                } while (-1 < sVar3);
                plVar31 = plVar1;
LAB_030c9820:
                if ((*(byte *)((long)plVar31 + 0xe) >> 2 & 1) != 0) break;
                do {
                  if (*(float *)(lVar28 + (ulong)uVar11 * 0x10 + 8) == fVar42) {
                    plVar26 = (long *)(lVar28 + (ulong)uVar11 * 0x10);
                    break;
                  }
                  uVar11 = *(ushort *)(param_1[0x33] + (ulong)uVar11 * 2);
                } while (-1 < (short)uVar11);
              }
              fVar46 = fVar42;
              if ((long)*(short *)((long)plVar26 + 0xc) == -1) break;
              fVar44 = *(float *)(param_1[0x32] + (long)*(short *)((long)plVar26 + 0xc) * 0x10 + 8);
              uVar24 = (ulong)(uint)fVar42;
            } while (fVar44 != -NAN);
          }
          if ((int)*(uint *)(param_1 + 4) < 1) {
            uVar24 = 0xffffffffffffffff;
          }
          else {
            uVar24 = 0;
            do {
              if (*(float *)((long)param_1 + uVar24 * 4 + 0x2c) == fVar42) goto LAB_030c98cc;
              uVar24 = uVar24 + 1;
            } while (*(uint *)(param_1 + 4) != uVar24);
            uVar24 = 0xffffffffffffffff;
          }
LAB_030c98cc:
          if (plVar17 != (long *)0x0) {
            lVar28 = *plVar17;
            if (((*(byte *)(lVar28 + 0x38) & 1) != 0) && (plVar17[6] != 0)) {
              puVar38 = (undefined8 *)plVar17[2];
              uVar34 = (long)puVar38 + 0x17U & 0xfffffffffffffff8;
              if ((uVar34 <= (ulong)plVar17[3]) &&
                 (plVar17[2] = uVar34, puVar38 != (undefined8 *)0x0)) {
                *puVar38 = &DAT_03c4e575;
                puVar38[1] = *(undefined8 *)(plVar17[6] + 8);
              }
            }
            puVar38 = (undefined8 *)plVar17[2];
            uVar34 = (long)puVar38 + 0x17U & 0xfffffffffffffff8;
            local_b0 = plVar17;
            if ((uVar34 <= (ulong)plVar17[3]) && (plVar17[2] = uVar34, puVar38 != (undefined8 *)0x0)
               ) {
              *puVar38 = &DAT_03c2d363;
              uVar10 = nn::os::GetSystemTick();
              puVar38[1] = uVar10;
            }
            if (*(code **)(lVar28 + 0x20) != (code *)0x0) {
              (**(code **)(lVar28 + 0x20))(*(undefined8 *)(lVar28 + 0x28));
            }
          }
          uVar11 = *(ushort *)(param_1[0x34] + uVar39 * 2);
        }
        lVar28 = param_1[0x32];
        for (; -1 < (short)uVar11; uVar11 = *(ushort *)(param_1[0x33] + (ulong)uVar11 * 2)) {
          if (*(float *)(lVar28 + (ulong)uVar11 * 0x10 + 8) == fVar41) {
            pfVar30 = (float *)(lVar28 + (ulong)uVar11 * 0x10);
            goto LAB_030c99d8;
          }
        }
        iVar12 = *(int *)((long)param_1 + 0x1ac);
        pfVar30 = (float *)(lVar28 + (long)iVar12 * 0x10);
        *(int *)((long)param_1 + 0x1ac) = iVar12 + 1;
        pfVar30[0] = 3.40282e+38;
        pfVar30[1] = 3.40282e+38;
        pfVar30[2] = fVar41;
        pfVar30[3] = 9.18341e-41;
        *(undefined2 *)(param_1[0x33] + (long)(short)iVar12 * 2) =
             *(undefined2 *)(param_1[0x34] + uVar39 * 2);
        *(short *)(param_1[0x34] + uVar39 * 2) = (short)iVar12;
        lVar28 = param_1[0x32];
LAB_030c99d8:
        *(int *)(param_1 + 0x3a) = ((int)pfVar30 - (int)lVar28) * 0x1000 >> 0x10;
        param_1[0x3b] = (long)pfVar30;
        param_1[0x3c] = (long)pfVar30;
        fVar44 = *pfVar30;
        plVar17 = (long *)param_1[1];
        uVar16 = (uint)fVar41 >> 0x16;
        if (*(uint *)(plVar17 + 0xf) != (uint)fVar41 >> 0x16) {
          plVar17[3] = *(long *)(*(long *)(*plVar17 + 0x38) + (ulong)uVar16 * 0x100 + 0x10);
          *(uint *)(plVar17 + 0xf) = uVar16;
          plVar17 = (long *)param_1[1];
          uVar16 = *(uint *)(plVar17 + 0xf);
        }
        lVar18 = plVar17[3];
        lVar28 = *(long *)(*(long *)(lVar18 + 0x20) + 0x38);
        puVar38 = (undefined8 *)(lVar28 + (uVar13 & 0x3fffff) * 0x10);
        uVar10 = *puVar38;
        uVar43 = *(undefined8 *)(lVar18 + 0x40);
        uVar49 = *(undefined8 *)(lVar18 + 0x50);
        fVar41 = (float)uVar10;
        fVar48 = (float)uVar43;
        uVar13 = (ulong)uVar43 >> 0x20;
        fVar50 = (float)*(undefined8 *)(lVar18 + 0x48);
        fVar42 = (float)((ulong)uVar10 >> 0x20);
        fVar52 = (float)uVar49;
        uVar39 = (ulong)uVar49 >> 0x20;
        fVar57 = (float)*(undefined8 *)(lVar18 + 0x58);
        uVar53 = *(undefined8 *)(lVar18 + 0x60);
        uVar10 = *(undefined8 *)(lVar18 + 0x70);
        fVar45 = (float)puVar38[1];
        fVar60 = (float)uVar53;
        uVar34 = (ulong)uVar53 >> 0x20;
        fVar61 = (float)*(undefined8 *)(lVar18 + 0x68);
        fVar58 = (float)uVar10;
        uVar6 = (ulong)uVar10 >> 0x20;
        fVar59 = (float)*(undefined8 *)(lVar18 + 0x78);
        fVar47 = fVar59 + fVar61 * fVar45 + fVar50 * fVar41 + fVar57 * fVar42;
        if (uVar16 != (uint)fVar46 >> 0x16) {
          plVar17[3] = *(long *)(*(long *)(*plVar17 + 0x38) + (ulong)((uint)fVar46 >> 0x16) * 0x100
                                + 0x10);
          *(uint *)(plVar17 + 0xf) = (uint)fVar46 >> 0x16;
          lVar18 = *(long *)(param_1[1] + 0x18);
          lVar28 = *(long *)(*(long *)(lVar18 + 0x20) + 0x38);
          fVar50 = (float)*(undefined8 *)(lVar18 + 0x48);
          uVar43 = *(undefined8 *)(lVar18 + 0x40);
          fVar57 = (float)*(undefined8 *)(lVar18 + 0x58);
          uVar49 = *(undefined8 *)(lVar18 + 0x50);
          fVar61 = (float)*(undefined8 *)(lVar18 + 0x68);
          uVar53 = *(undefined8 *)(lVar18 + 0x60);
          fVar59 = (float)*(undefined8 *)(lVar18 + 0x78);
          uVar10 = *(undefined8 *)(lVar18 + 0x70);
        }
        puVar38 = (undefined8 *)(lVar28 + (ulong)((uint)fVar46 & 0x3fffff) * 0x10);
        uVar54 = *puVar38;
        lVar28 = (long)(uVar24 << 0x20) >> 0x1c;
        fVar62 = (float)uVar54;
        fVar63 = (float)((ulong)uVar54 >> 0x20);
        fVar64 = (float)puVar38[1];
        fVar51 = fVar51 - (fVar58 + fVar60 * fVar45 + fVar48 * fVar41 + fVar52 * fVar42);
        fVar55 = fVar55 - ((float)uVar6 +
                          (float)uVar34 * fVar45 + (float)uVar13 * fVar41 + (float)uVar39 * fVar42);
        fVar56 = fVar56 - fVar47;
        uVar54 = *(undefined8 *)((long)param_1 + lVar28 + 0x230);
        fVar41 = ((float)uVar10 +
                 (float)uVar53 * fVar64 + (float)uVar43 * fVar62 + (float)uVar49 * fVar63) -
                 (float)uVar54;
        fVar46 = ((float)((ulong)uVar10 >> 0x20) +
                 (float)((ulong)uVar53 >> 0x20) * fVar64 +
                 (float)((ulong)uVar43 >> 0x20) * fVar62 + (float)((ulong)uVar49 >> 0x20) * fVar63)
                 - (float)((ulong)uVar54 >> 0x20);
        fVar42 = (fVar59 + fVar61 * fVar64 + fVar50 * fVar62 + fVar57 * fVar63) -
                 (float)*(undefined8 *)((long)param_1 + lVar28 + 0x238);
        uVar39 = (ulong)(uint)(fVar44 + SQRT(fVar56 * fVar56 + fVar51 * fVar51 + fVar55 * fVar55) +
                              SQRT(fVar41 * fVar41 + fVar46 * fVar46 + fVar42 * fVar42));
        goto LAB_030c9624;
      }
    }
LAB_030c95d8:
    uVar13 = (ulong)*(uint *)(param_1 + 4);
    if (0 < (int)*(uint *)(param_1 + 4)) {
      uVar39 = 0x7f7fffee7f7fffee;
      plVar17 = param_1 + 0x46;
      do {
        uVar13 = uVar13 - 1;
        fVar41 = fVar51 - (float)*plVar17;
        fVar44 = fVar55 - (float)((ulong)*plVar17 >> 0x20);
        fVar46 = fVar56 - (float)plVar17[1];
        fVar41 = fVar41 * fVar41;
        fVar44 = fVar44 * fVar44;
        fVar46 = fVar46 * fVar46;
        uVar39 = NEON_fmin(uVar39,CONCAT44(SQRT(fVar41 + fVar44 + fVar46),
                                           SQRT(fVar41 + fVar44 + fVar46)),4);
        plVar17 = plVar17 + 2;
      } while (uVar13 != 0);
      goto LAB_030c9624;
    }
  }
  uVar39 = 0x7f7fffee7f7fffee;
LAB_030c9624:
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar39;
  return auVar40;
code_r0x030c90bc:
  lVar33 = lVar33 + 0x100000000;
  uVar39 = uVar39 - 1;
  puVar14 = puVar14 + 1;
  if (uVar39 == 0) goto LAB_030c90cc;
  goto LAB_030c90b0;
}


