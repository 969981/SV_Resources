/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e0698; name: FUN_030e0698
 */


void FUN_030e0698(float param_1,long param_2,int *param_3,undefined8 *param_4,
                 undefined1 (*param_5) [12])

{
  long *plVar1;
  ulong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined4 *puVar19;
  int iVar20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  long lVar24;
  undefined4 *puVar25;
  byte bVar26;
  int iVar27;
  long lVar28;
  uint *puVar29;
  undefined4 *puVar30;
  int *piVar31;
  int *piVar32;
  uint uVar33;
  int iVar34;
  long lVar35;
  int iVar36;
  ulong uVar37;
  undefined4 *puVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  float fStack_12c;
  int local_c8 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_a8 [2];
  int local_a0 [4];
  int local_88 [2];
  
  lVar16 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x38) +
                    (long)*(int *)(param_2 + 0x20) * 0x100);
  plVar1 = (long *)(lVar16 + 0x20);
  if (*(char *)(lVar16 + 0x30) == '\x01') {
    lVar35 = *plVar1;
  }
  else {
    lVar35 = FUN_0307d71c();
  }
  iVar13 = *param_3;
  if ((*(int *)(lVar35 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(lVar35 + 0x100) + (long)iVar13) & 1) == 0)) {
    local_c0 = CONCAT44(local_c0._4_4_,iVar13);
    FUN_030de590(local_88,lVar16,&local_c0,1);
    lVar28 = (long)local_88[0];
    lVar17 = *(long *)(*(long *)(lVar16 + 0x20) + 0xd0);
    piVar31 = (int *)(*(long *)(*(long *)(lVar16 + 0x20) + 0x18) + (long)iVar13 * 0x10);
    if (0 < (short)piVar31[2]) {
      iVar13 = 0;
      do {
        iVar36 = *piVar31 + iVar13;
        iVar20 = *(int *)(lVar17 + lVar28 * 0x10);
        if (*(char *)(lVar16 + 0x30) == '\x01') {
          lVar18 = *plVar1;
          lVar24 = lVar18;
        }
        else {
          lVar24 = FUN_0307d71c(plVar1);
          lVar18 = *(long *)(lVar16 + 0x20);
        }
        if (iVar36 < *(int *)(lVar18 + 0x30)) {
          lVar21 = *(long *)(lVar18 + 0x28);
          iVar27 = iVar36;
          if (*(int *)(lVar18 + 0x78) != 0) {
            iVar27 = *(int *)(*(long *)(lVar18 + 0x70) + (long)iVar36 * 4);
          }
          if (iVar27 != -1) {
            plVar23 = (long *)(lVar18 + 0xc0);
            iVar36 = iVar27;
            goto LAB_030e081c;
          }
        }
        else {
          plVar23 = (long *)(lVar18 + 0xe0);
          iVar36 = iVar36 - *(int *)(lVar18 + 0x30);
LAB_030e081c:
          lVar21 = *plVar23;
        }
        puVar29 = (uint *)(lVar21 + (long)iVar36 * 0x14 + 8);
        uVar4 = *puVar29;
        if (uVar4 != 0xffffffff) {
          iVar20 = iVar20 + iVar13;
          iVar27 = *(int *)(lVar18 + 0x20);
          lVar18 = *(long *)(lVar24 + 0xe0) + (long)(iVar20 - *(int *)(lVar24 + 0x30)) * 0x14;
          *(uint *)(lVar18 + 8) = uVar4;
          *(undefined4 *)(lVar18 + 0xc) = *(undefined4 *)(lVar21 + (long)iVar36 * 0x14 + 0xc);
          uVar37 = (ulong)*puVar29 & 0x3fffff;
          iVar34 = (int)uVar37;
          iVar36 = iVar34 - *(int *)(lVar24 + 0x30);
          if (iVar34 < *(int *)(lVar24 + 0x30)) {
            if (*(int *)(lVar24 + 0x78) == 0) {
              iVar36 = iVar34;
LAB_030e09e0:
              lVar24 = *(long *)(lVar24 + 0xc0);
              goto LAB_030e09e4;
            }
            iVar36 = *(int *)(*(long *)(lVar24 + 0x70) + uVar37 * 4);
            if (iVar36 != -1) goto LAB_030e09e0;
            lVar18 = *(long *)(lVar24 + 0x58);
            lVar21 = *(long *)(lVar24 + 0x28);
            iVar36 = *(int *)(lVar24 + 200);
            uVar4 = *(uint *)(lVar24 + 0x60);
            iVar15 = iVar36;
            if ((int)(*(uint *)(lVar24 + 0xcc) & 0x7fffffff) <= iVar36) {
              FUN_0309515c((long *)(lVar24 + 0xc0),PTR_PTR_047d1a50,(long)iVar36 + 1);
              iVar15 = *(int *)(lVar24 + 200);
            }
            puVar38 = (undefined4 *)(*(long *)(lVar24 + 0xc0) + (long)iVar15 * 0x14);
            *(int *)(lVar24 + 200) = (int)((long)iVar36 + 1);
            *(undefined8 *)(puVar38 + 2) = 0xffffffffffffffff;
            puVar38[4] = 4;
            puVar19 = (undefined4 *)(lVar21 + uVar37 * 0x14);
            *puVar38 = *puVar19;
            puVar38[1] = puVar19[1];
            uVar22 = *(undefined8 *)(puVar19 + 2);
            *(undefined2 *)(puVar38 + 4) = *(undefined2 *)(puVar19 + 4);
            *(undefined8 *)(puVar38 + 2) = uVar22;
            *(undefined2 *)((long)puVar38 + 0x12) = *(undefined2 *)((long)puVar19 + 0x12);
            iVar15 = *(int *)(lVar24 + 0x138);
            iVar14 = iVar15 + uVar4;
            if ((int)(*(uint *)(lVar24 + 0x13c) & 0x7fffffff) < iVar14) {
              FUN_02e9b320((long *)(lVar24 + 0x130),PTR_PTR_047d1a50);
            }
            if (0 < (int)uVar4) {
              puVar19 = (undefined4 *)(lVar18 + (long)(int)(uVar4 * iVar34) * 4);
              puVar3 = (undefined4 *)(*(long *)(lVar24 + 0x130) + (long)iVar15 * 4);
              uVar33 = uVar4 & 7;
              if (6 < uVar4 - 1) {
                iVar15 = -(uVar4 & 0xfffffff8);
                puVar25 = puVar19;
                puVar30 = puVar3;
                do {
                  *puVar30 = *puVar25;
                  puVar30[1] = puVar25[1];
                  puVar30[2] = puVar25[2];
                  puVar30[3] = puVar25[3];
                  puVar30[4] = puVar25[4];
                  puVar30[5] = puVar25[5];
                  puVar30[6] = puVar25[6];
                  puVar19 = puVar25 + 8;
                  puVar3 = puVar30 + 8;
                  iVar15 = iVar15 + 8;
                  puVar30[7] = puVar25[7];
                  puVar25 = puVar19;
                  puVar30 = puVar3;
                } while (iVar15 != 0);
              }
              for (; uVar33 != 0; uVar33 = uVar33 - 1) {
                *puVar3 = *puVar19;
                puVar3 = puVar3 + 1;
                puVar19 = puVar19 + 1;
              }
            }
            *(int *)(lVar24 + 0x138) = iVar14;
            *(int *)(*(long *)(lVar24 + 0x70) + uVar37 * 4) = iVar36;
            iVar36 = *(int *)(lVar24 + 0x88);
            lVar18 = (long)iVar36;
            if ((int)(*(uint *)(lVar24 + 0x8c) & 0x7fffffff) <= iVar36) {
              FUN_0133bb88(lVar24 + 0x80,PTR_PTR_047d1a50,lVar18 + 1);
              iVar36 = *(int *)(lVar24 + 0x88);
            }
            *(int *)(*(long *)(lVar24 + 0x80) + (long)iVar36 * 4) = iVar34;
            *(int *)(lVar24 + 0x88) = (int)(lVar18 + 1);
          }
          else {
            lVar24 = *(long *)(lVar24 + 0xe0);
LAB_030e09e4:
            puVar38 = (undefined4 *)(lVar24 + (long)iVar36 * 0x14);
          }
          puVar38[2] = iVar20;
          puVar38[3] = iVar27 + local_88[0];
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < (short)piVar31[2]);
    }
    if (0 < *(short *)((long)piVar31 + 10)) {
      iVar13 = 0;
      do {
        iVar36 = piVar31[1] + iVar13;
        iVar20 = *(int *)(lVar17 + lVar28 * 0x10 + 4);
        if (*(char *)(lVar16 + 0x30) == '\x01') {
          lVar18 = *plVar1;
          lVar24 = lVar18;
        }
        else {
          lVar24 = FUN_0307d71c(plVar1);
          lVar18 = *(long *)(lVar16 + 0x20);
        }
        if (iVar36 < *(int *)(lVar18 + 0x30)) {
          lVar21 = *(long *)(lVar18 + 0x28);
          iVar27 = iVar36;
          if (*(int *)(lVar18 + 0x78) != 0) {
            iVar27 = *(int *)(*(long *)(lVar18 + 0x70) + (long)iVar36 * 4);
          }
          if (iVar27 != -1) {
            plVar23 = (long *)(lVar18 + 0xc0);
            iVar36 = iVar27;
            goto LAB_030e0b5c;
          }
        }
        else {
          plVar23 = (long *)(lVar18 + 0xe0);
          iVar36 = iVar36 - *(int *)(lVar18 + 0x30);
LAB_030e0b5c:
          lVar21 = *plVar23;
        }
        puVar29 = (uint *)(lVar21 + (long)iVar36 * 0x14 + 8);
        uVar4 = *puVar29;
        if (uVar4 != 0xffffffff) {
          iVar20 = iVar20 + iVar13;
          iVar27 = *(int *)(lVar18 + 0x20);
          lVar18 = *(long *)(lVar24 + 0xe0) + (long)(iVar20 - *(int *)(lVar24 + 0x30)) * 0x14;
          *(uint *)(lVar18 + 8) = uVar4;
          *(undefined4 *)(lVar18 + 0xc) = *(undefined4 *)(lVar21 + (long)iVar36 * 0x14 + 0xc);
          uVar37 = (ulong)*puVar29 & 0x3fffff;
          iVar34 = (int)uVar37;
          iVar36 = iVar34 - *(int *)(lVar24 + 0x30);
          if (iVar34 < *(int *)(lVar24 + 0x30)) {
            if (*(int *)(lVar24 + 0x78) == 0) {
              iVar36 = iVar34;
LAB_030e0d28:
              lVar24 = *(long *)(lVar24 + 0xc0);
              goto LAB_030e0d2c;
            }
            iVar36 = *(int *)(*(long *)(lVar24 + 0x70) + uVar37 * 4);
            if (iVar36 != -1) goto LAB_030e0d28;
            iVar36 = *(int *)(lVar24 + 200);
            lVar21 = *(long *)(lVar24 + 0x28);
            lVar18 = *(long *)(lVar24 + 0x58);
            uVar4 = *(uint *)(lVar24 + 0x60);
            iVar15 = iVar36;
            if ((int)(*(uint *)(lVar24 + 0xcc) & 0x7fffffff) <= iVar36) {
              FUN_0309515c((long *)(lVar24 + 0xc0),PTR_PTR_047d1a50,(long)iVar36 + 1);
              iVar15 = *(int *)(lVar24 + 200);
            }
            puVar38 = (undefined4 *)(*(long *)(lVar24 + 0xc0) + (long)iVar15 * 0x14);
            *(int *)(lVar24 + 200) = (int)((long)iVar36 + 1);
            *(undefined8 *)(puVar38 + 2) = 0xffffffffffffffff;
            puVar38[4] = 4;
            puVar19 = (undefined4 *)(lVar21 + uVar37 * 0x14);
            *puVar38 = *puVar19;
            puVar38[1] = puVar19[1];
            uVar22 = *(undefined8 *)(puVar19 + 2);
            *(undefined2 *)(puVar38 + 4) = *(undefined2 *)(puVar19 + 4);
            *(undefined8 *)(puVar38 + 2) = uVar22;
            *(undefined2 *)((long)puVar38 + 0x12) = *(undefined2 *)((long)puVar19 + 0x12);
            iVar15 = *(int *)(lVar24 + 0x138);
            iVar14 = iVar15 + uVar4;
            if ((int)(*(uint *)(lVar24 + 0x13c) & 0x7fffffff) < iVar14) {
              FUN_02e9b320((long *)(lVar24 + 0x130),PTR_PTR_047d1a50);
            }
            if (0 < (int)uVar4) {
              puVar19 = (undefined4 *)(lVar18 + (long)(int)(uVar4 * iVar34) * 4);
              puVar3 = (undefined4 *)(*(long *)(lVar24 + 0x130) + (long)iVar15 * 4);
              uVar33 = uVar4 & 7;
              if (6 < uVar4 - 1) {
                iVar15 = -(uVar4 & 0xfffffff8);
                puVar25 = puVar19;
                puVar30 = puVar3;
                do {
                  *puVar30 = *puVar25;
                  puVar30[1] = puVar25[1];
                  puVar30[2] = puVar25[2];
                  puVar30[3] = puVar25[3];
                  puVar30[4] = puVar25[4];
                  puVar30[5] = puVar25[5];
                  puVar30[6] = puVar25[6];
                  puVar19 = puVar25 + 8;
                  puVar3 = puVar30 + 8;
                  iVar15 = iVar15 + 8;
                  puVar30[7] = puVar25[7];
                  puVar25 = puVar19;
                  puVar30 = puVar3;
                } while (iVar15 != 0);
              }
              for (; uVar33 != 0; uVar33 = uVar33 - 1) {
                *puVar3 = *puVar19;
                puVar3 = puVar3 + 1;
                puVar19 = puVar19 + 1;
              }
            }
            *(int *)(lVar24 + 0x138) = iVar14;
            *(int *)(*(long *)(lVar24 + 0x70) + uVar37 * 4) = iVar36;
            iVar36 = *(int *)(lVar24 + 0x88);
            lVar18 = (long)iVar36;
            if ((int)(*(uint *)(lVar24 + 0x8c) & 0x7fffffff) <= iVar36) {
              FUN_0133bb88(lVar24 + 0x80,PTR_PTR_047d1a50,lVar18 + 1);
              iVar36 = *(int *)(lVar24 + 0x88);
            }
            *(int *)(*(long *)(lVar24 + 0x80) + (long)iVar36 * 4) = iVar34;
            *(int *)(lVar24 + 0x88) = (int)(lVar18 + 1);
          }
          else {
            lVar24 = *(long *)(lVar24 + 0xe0);
LAB_030e0d2c:
            puVar38 = (undefined4 *)(lVar24 + (long)iVar36 * 0x14);
          }
          puVar38[2] = iVar20;
          puVar38[3] = iVar27 + local_88[0];
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(short *)((long)piVar31 + 10));
    }
    lVar16 = *(long *)(lVar35 + 0xd0) + lVar28 * 0x10;
    iVar13 = *(int *)(lVar16 + 4) + ~*(uint *)(lVar35 + 0x30) + (int)*(short *)(lVar16 + 10);
    puVar19 = (undefined4 *)*param_4;
    puVar38 = (undefined4 *)(*(long *)(lVar35 + 0xe0) + (long)iVar13 * 0x14);
    *puVar38 = *puVar19;
    puVar38[1] = puVar19[1];
    uVar22 = *(undefined8 *)(puVar19 + 2);
    *(undefined2 *)(puVar38 + 4) = *(undefined2 *)(puVar19 + 4);
    *(undefined8 *)(puVar38 + 2) = uVar22;
    *(undefined2 *)((long)puVar38 + 0x12) = *(undefined2 *)((long)puVar19 + 0x12);
    memcpy((void *)(*(long *)(lVar35 + 0x150) + (long)(*(int *)(lVar35 + 0x60) * iVar13) * 4),
           (void *)param_4[1],(long)*(int *)(lVar35 + 0x60) << 2);
    *(undefined2 *)(*(long *)(lVar35 + 0x110) + (long)iVar13 * 2) = *(undefined2 *)(param_4 + 3);
  }
  else {
    local_a0[0] = iVar13;
    iVar13 = FUN_030e5d50(param_2 + 0x28,local_a0);
    if (iVar13 == 0) {
      local_c8[0] = *(int *)(*(long *)(lVar35 + 0x168) + (long)*param_3 * 4);
      if (local_c8[0] == -2) {
        local_c8[0] = -1;
      }
      else {
        local_c8[0] = local_c8[0] - *(int *)(lVar35 + 0x20);
      }
      FUN_030e12d4(&local_c0,param_2,lVar16,local_c8,param_4);
    }
    else {
      lVar28 = *(long *)(lVar16 + 0x20);
      iVar13 = *(int *)*param_4;
      iVar36 = ((int *)*param_4)[1];
      iVar20 = *(int *)(lVar28 + 0x40);
      lVar17 = 0x38;
      if (iVar20 <= iVar13) {
        lVar17 = 0xf0;
      }
      iVar27 = 0;
      if (iVar20 <= iVar13) {
        iVar27 = iVar20;
      }
      lVar24 = 0x38;
      if (iVar20 <= iVar36) {
        lVar24 = 0xf0;
      }
      uVar4 = *(uint *)(*(long *)(lVar35 + 0x168) + (long)*param_3 * 4);
      iVar34 = 0;
      if (iVar20 <= iVar36) {
        iVar34 = iVar20;
      }
      if (-1 < (int)uVar4) {
        puVar5 = (undefined8 *)(*(long *)(lVar28 + lVar17) + (long)(iVar13 - iVar27) * 0x10);
        uVar72 = puVar5[1];
        uVar22 = *puVar5;
        auVar46 = *(undefined1 (*) [16])
                   (*(long *)(lVar28 + lVar24) + (long)(iVar36 - iVar34) * 0x10);
        uVar33 = *(uint *)(lVar35 + 0x170);
        lVar17 = (long)(int)uVar33;
        fVar64 = (float)uVar22;
        fVar40 = fVar64 - auVar46._0_4_;
        fVar65 = (float)((ulong)uVar22 >> 0x20);
        fVar41 = fVar65 - auVar46._4_4_;
        fVar66 = (float)uVar72;
        fVar43 = fVar66 - auVar46._8_4_;
        if ((int)uVar33 <= (int)(uVar4 + 1)) {
          uVar33 = uVar4 + 1;
        }
        uVar37 = (ulong)uVar4;
        do {
          uVar2 = uVar37 + 1;
          if (lVar17 <= (long)uVar2) goto LAB_030e0fb4;
          lVar24 = uVar37 * 4;
          uVar37 = uVar2;
        } while (*(int *)(*(long *)(lVar35 + 0x168) + 4 + lVar24) == *param_3);
        uVar33 = (uint)uVar2;
LAB_030e0fb4:
        if (uVar4 != uVar33) {
          iVar13 = *(int *)(lVar35 + 0x20);
          fVar68 = auVar46._0_4_ - fVar64;
          fVar69 = auVar46._4_4_ - fVar65;
          fVar70 = auVar46._8_4_ - fVar66;
          fVar67 = (float)((ulong)uVar72 >> 0x20);
          fVar71 = auVar46._12_4_ - fVar67;
          uVar22 = NEON_fmov(0x3f800000,4);
          iVar36 = uVar33 - iVar13;
          lVar17 = (long)(int)(uVar4 - iVar13);
          do {
            piVar31 = (int *)(*(long *)(lVar35 + 0xd0) + lVar17 * 0x10);
            piVar32 = (int *)(*(long *)(lVar35 + 0xe0) +
                             (long)(*piVar31 - *(int *)(lVar35 + 0x30)) * 0x14);
            lVar24 = (long)(short)piVar31[2];
            piVar31 = piVar32 + lVar24 * 5 + -5;
            iVar27 = *piVar31;
            uVar73 = 0;
            uVar72 = uVar22;
            if (lVar24 != 0) {
              fVar44 = (float)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
              uVar7 = *(undefined8 *)*param_5;
              fVar42 = (float)((ulong)uVar7 >> 0x20);
              auVar46._12_4_ = fVar44;
              auVar46._0_12_ = *param_5;
              auVar6._12_4_ = fVar44;
              auVar6._0_12_ = *param_5;
              auVar46 = NEON_ext(auVar46,auVar6,8,1);
              lVar18 = 0x38;
              if (iVar20 <= iVar27) {
                lVar18 = 0xf0;
              }
              iVar34 = 0;
              if (iVar20 <= iVar27) {
                iVar34 = iVar20;
              }
              puVar5 = (undefined8 *)(*(long *)(lVar28 + lVar18) + (long)(iVar27 - iVar34) * 0x10);
              uVar73 = 0;
              lVar24 = lVar24 * 0x14;
              uVar45 = NEON_ext(uVar7,auVar46._0_8_,4,1);
              uVar47 = *puVar5;
              uVar49 = puVar5[1];
              do {
                iVar27 = *piVar32;
                lVar18 = 0x38;
                if (iVar20 <= iVar27) {
                  lVar18 = 0xf0;
                }
                iVar34 = 0;
                if (iVar20 <= iVar27) {
                  iVar34 = iVar20;
                }
                puVar5 = (undefined8 *)(*(long *)(lVar28 + lVar18) + (long)(iVar27 - iVar34) * 0x10)
                ;
                uVar50 = puVar5[1];
                uVar48 = *puVar5;
                fVar62 = (float)uVar48 - (float)uVar47;
                fVar51 = (float)((ulong)uVar48 >> 0x20);
                fVar52 = (float)((ulong)uVar47 >> 0x20);
                fVar39 = fVar51 - fVar52;
                uVar53 = SUB41(fVar39,0);
                uVar54 = (undefined1)((uint)fVar39 >> 8);
                uVar56 = (undefined1)((uint)fVar39 >> 0x10);
                uVar58 = (undefined1)((uint)fVar39 >> 0x18);
                fVar60 = (float)uVar50 - (float)uVar49;
                fVar61 = (float)((ulong)uVar50 >> 0x20) - (float)((ulong)uVar49 >> 0x20);
                auVar8[4] = uVar53;
                auVar8._0_4_ = fVar62;
                auVar8[5] = uVar54;
                auVar8[6] = uVar56;
                auVar8[7] = uVar58;
                auVar8._8_4_ = fVar60;
                auVar8._12_4_ = fVar61;
                auVar9[4] = uVar53;
                auVar9._0_4_ = fVar62;
                auVar9[5] = uVar54;
                auVar9[6] = uVar56;
                auVar9[7] = uVar58;
                auVar9._8_4_ = fVar60;
                auVar9._12_4_ = fVar61;
                auVar46 = NEON_ext(auVar8,auVar9,4,1);
                fVar12 = (float)uVar7 * auVar46._0_4_ - (float)uVar45 * fVar62;
                fVar39 = fVar42 * auVar46._4_4_ - (float)((ulong)uVar45 >> 0x20) * fVar39;
                uVar55 = (undefined1)((uint)fVar39 >> 8);
                uVar57 = (undefined1)((uint)fVar39 >> 0x10);
                uVar59 = (undefined1)((uint)fVar39 >> 0x18);
                fVar60 = (float)*(undefined8 *)(*param_5 + 8) * fVar62 - (float)uVar7 * fVar60;
                fVar62 = fVar44 * (float)(CONCAT17(uVar58,CONCAT16(uVar56,CONCAT15(uVar54,CONCAT14(
                                                  uVar53,fVar62)))) >> 0x20) - fVar42 * fVar61;
                auVar10[4] = SUB41(fVar39,0);
                auVar10._0_4_ = fVar12;
                auVar10[5] = uVar55;
                auVar10[6] = uVar57;
                auVar10[7] = uVar59;
                auVar10._8_4_ = fVar60;
                auVar10._12_4_ = fVar62;
                auVar11[4] = SUB41(fVar39,0);
                auVar11._0_4_ = fVar12;
                auVar11[5] = uVar55;
                auVar11[6] = uVar57;
                auVar11[7] = uVar59;
                auVar11._8_4_ = fVar60;
                auVar11._12_4_ = fVar62;
                auVar46 = NEON_ext(auVar10,auVar11,4,1);
                fVar60 = auVar46._0_4_;
                fVar61 = auVar46._4_4_;
                fVar62 = (((float)uVar47 + (float)uVar48) * fVar60 + (fVar52 + fVar51) * fVar61 +
                         ((float)uVar49 + (float)uVar50) * fVar12) * -0.5;
                auVar63._0_4_ = fVar64 * fVar60;
                auVar63._4_4_ = fVar65 * fVar61;
                auVar63._8_4_ = fVar66 * fVar12;
                auVar63._12_4_ = fVar67 * fVar62;
                fVar51 = fVar68 * fVar60 + fVar69 * fVar61 + fVar70 * fVar12;
                auVar46 = NEON_ext(auVar63,auVar63,8,1);
                fVar62 = auVar46._0_4_ + fVar62;
                fVar39 = auVar63._0_4_ + auVar63._4_4_ + fVar62;
                if (fVar51 == 0.0) {
                  if (fVar39 == 0.0) {
                    if (((*(byte *)(piVar31 + 4) >> 2 & 1) == 0) &&
                       (piVar31[3] <= iVar13 + (int)lVar17)) goto LAB_030e1270;
                  }
                  else if (fVar39 < 0.0) goto LAB_030e1270;
                }
                else {
                  fVar39 = -fVar39 / fVar51;
                  uVar47 = CONCAT44(-(auVar63._0_4_ + auVar63._4_4_ + fVar62) /
                                    (fVar68 * fVar60 + fVar69 * fVar61 + fVar70 * fVar12),fVar39);
                  if (fVar51 < 0.0) {
                    if (!(bool)(~(fVar39 <= (float)uVar73) & 1)) goto LAB_030e1270;
                    uVar72 = NEON_fmin(uVar72,uVar47,4);
                  }
                  else {
                    if (!(bool)(~((float)uVar72 <= fVar39) & 1)) goto LAB_030e1270;
                    uVar73 = NEON_fmax(uVar73,uVar47,4);
                  }
                }
                lVar24 = lVar24 + -0x14;
                piVar31 = piVar32;
                piVar32 = piVar32 + 5;
                uVar47 = uVar48;
                uVar49 = uVar50;
              } while (lVar24 != 0);
            }
            fVar42 = (float)uVar72;
            fVar44 = (float)uVar73;
            if (param_1 / SQRT(fVar40 * fVar40 + fVar41 * fVar41 + fVar43 * fVar43) <=
                fVar42 - fVar44) {
              local_a8[0] = (int)lVar17;
              FUN_030e12d4(local_88,param_2,lVar16,local_a8,param_4);
              fStack_12c = (float)((ulong)uVar73 >> 0x20);
              lVar28 = *(long *)(lVar35 + 0xe0);
              lVar24 = (long)(local_88[0] - *(int *)(lVar35 + 0x30));
              if (fVar44 != 0.0) {
                uStack_b8 = CONCAT44(fVar67 + fVar71 * fStack_12c,fVar66 + fVar70 * fVar44);
                local_c0 = CONCAT44(fVar65 + fVar69 * fStack_12c,fVar64 + fVar68 * fVar44);
                *(int *)(lVar28 + lVar24 * 0x14) = *(int *)(lVar35 + 0xf8) + *(int *)(lVar35 + 0x40)
                ;
                FUN_0308f544(lVar16,&local_c0,1);
              }
              if (fVar42 != 1.0) {
                fVar44 = (float)((ulong)uVar72 >> 0x20);
                uStack_b8 = CONCAT44(fVar67 + fVar71 * fVar44,fVar66 + fVar70 * fVar42);
                local_c0 = CONCAT44(fVar65 + fVar69 * fVar44,fVar64 + fVar68 * fVar42);
                *(int *)(lVar28 + lVar24 * 0x14 + 4) =
                     *(int *)(lVar35 + 0xf8) + *(int *)(lVar35 + 0x40);
                FUN_0308f544(lVar16,&local_c0,1);
              }
            }
LAB_030e1270:
            lVar17 = lVar17 + 1;
            if (iVar36 == (int)lVar17) break;
            lVar28 = *(long *)(lVar16 + 0x20);
            iVar13 = *(int *)(lVar35 + 0x20);
            iVar20 = *(int *)(lVar28 + 0x40);
          } while( true );
        }
      }
    }
  }
  if (*(int *)(lVar35 + 0x108) == 0) {
    lVar16 = *(long *)(lVar35 + 0x100);
    bVar26 = 8;
  }
  else {
    lVar16 = *(long *)(lVar35 + 0x100);
    bVar26 = *(byte *)(lVar16 + *param_3) | 8;
  }
  *(byte *)(lVar16 + *param_3) = bVar26;
  FUN_030d9db8(param_2 + 0xb8,param_3);
  return;
}


