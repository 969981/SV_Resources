/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030861f8; name: FUN_030861f8
 */


void FUN_030861f8(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  long *plVar17;
  int iVar18;
  int iVar22;
  int iVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar24;
  int iVar26;
  int iVar27;
  undefined1 auVar25 [16];
  int iVar28;
  int iVar30;
  int iVar31;
  undefined1 auVar29 [16];
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  uVar3 = *(uint *)((long)param_1 + 0x1c);
  if (uVar3 != 0) {
    lVar10 = 0;
    if (*param_1 != 0) {
      lVar10 = *param_1 + (long)param_1;
    }
    pauVar11 = (undefined1 (*) [16])(lVar10 + (ulong)uVar3 * 0x30);
    fVar47 = (float)*(undefined8 *)(*pauVar11 + 8);
    fVar45 = (float)*(undefined8 *)*pauVar11;
    fVar46 = (float)((ulong)*(undefined8 *)*pauVar11 >> 0x20);
    fVar43 = (float)*(undefined8 *)(pauVar11[1] + 8);
    fVar49 = (float)*(undefined8 *)pauVar11[1];
    fVar42 = (float)((ulong)*(undefined8 *)pauVar11[1] >> 0x20);
    iVar18 = -(uint)(*(float *)(param_3 + 2) <= fVar49);
    iVar22 = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar42);
    iVar23 = -(uint)(*(float *)(param_3 + 3) <= fVar43);
    iVar24 = -(uint)(fVar45 <= *(float *)(param_3 + 4));
    iVar26 = -(uint)(fVar46 <= *(float *)((long)param_3 + 0x24));
    iVar27 = -(uint)(fVar47 <= *(float *)(param_3 + 5));
    if (CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar22 >> 0x18) &
                 (byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar18 >> 0x18) &
                 (byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar23 >> 0x18),
                 CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar22 >> 0x10) &
                          (byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar18 >> 0x10) &
                          (byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar23 >> 0x10),
                          CONCAT11((byte)((uint)iVar26 >> 8) & (byte)((uint)iVar22 >> 8) &
                                   (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar18 >> 8) &
                                   (byte)((uint)iVar27 >> 8) & (byte)((uint)iVar23 >> 8),
                                   (byte)iVar26 & (byte)iVar22 & (byte)iVar24 & (byte)iVar18 &
                                   (byte)iVar27 & (byte)iVar23))) != 0) {
      lVar10 = param_2[1];
      auVar19 = NEON_fmov(0x3f800000,4);
      puVar1 = PTR_PTR_047d1a50 + 0x20;
      uVar16 = (ulong)uVar3;
      uVar44 = (int)((ulong)*(undefined8 *)(pauVar11[1] + 8) >> 0x20);
      uVar48 = (int)((ulong)*(undefined8 *)(*pauVar11 + 8) >> 0x20);
LAB_03086294:
      uVar3 = *(uint *)(pauVar11[2] + 4);
      if (uVar3 != 0) goto code_r0x0308629c;
      lVar13 = *param_3;
      auVar20 = *(undefined1 (*) [16])(lVar13 + 0x20);
      auVar25 = *(undefined1 (*) [16])(lVar13 + 0x30);
      iVar18 = -(uint)(auVar25._0_4_ <= fVar49);
      iVar22 = -(uint)(auVar25._4_4_ <= fVar42);
      iVar23 = -(uint)(auVar25._8_4_ <= fVar43);
      iVar24 = -(uint)(fVar45 <= auVar20._0_4_);
      iVar26 = -(uint)(fVar46 <= auVar20._4_4_);
      iVar27 = -(uint)(fVar47 <= auVar20._8_4_);
      if (CONCAT13((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                   (byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                   (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                   CONCAT12((byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                            (byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                            (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar27 >> 0x10),
                            CONCAT11((byte)((uint)iVar22 >> 8) & (byte)((uint)iVar26 >> 8) &
                                     (byte)((uint)iVar18 >> 8) & (byte)((uint)iVar24 >> 8) &
                                     (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar27 >> 8),
                                     (byte)iVar22 & (byte)iVar26 & (byte)iVar18 & (byte)iVar24 &
                                     (byte)iVar23 & (byte)iVar27))) == 0) {
        auVar50._4_4_ = fVar46;
        auVar50._0_4_ = fVar45;
        auVar50._8_4_ = fVar47;
        auVar50._12_4_ = uVar48;
        auVar50 = NEON_fmin(auVar20,auVar50,4);
        uVar7 = *(undefined8 *)(lVar13 + 0x58);
        uVar32 = (undefined1)((ulong)uVar7 >> 8);
        uVar33 = (undefined1)((ulong)uVar7 >> 0x10);
        uVar34 = (undefined1)((ulong)uVar7 >> 0x18);
        uVar35 = (undefined1)((ulong)uVar7 >> 0x20);
        uVar36 = (undefined1)((ulong)uVar7 >> 0x28);
        uVar37 = (undefined1)((ulong)uVar7 >> 0x30);
        uVar38 = (undefined1)((ulong)uVar7 >> 0x38);
        auVar51._4_4_ = fVar42;
        auVar51._0_4_ = fVar49;
        auVar51._8_4_ = fVar43;
        auVar51._12_4_ = uVar44;
        auVar51 = NEON_fmax(auVar25,auVar51,4);
        auVar9._4_4_ = fVar46;
        auVar9._0_4_ = fVar45;
        auVar9._8_4_ = fVar47;
        auVar9._12_4_ = uVar48;
        auVar20 = NEON_fmax(auVar20,auVar9,4);
        auVar8._4_4_ = fVar42;
        auVar8._0_4_ = fVar49;
        auVar8._8_4_ = fVar43;
        auVar8._12_4_ = uVar44;
        auVar25 = NEON_fmin(auVar25,auVar8,4);
        auVar21._0_4_ = auVar25._0_4_ - auVar20._0_4_;
        auVar21._4_4_ = auVar25._4_4_ - auVar20._4_4_;
        auVar21._8_4_ = auVar25._8_4_ - auVar20._8_4_;
        auVar21._12_4_ = auVar25._12_4_ - auVar20._12_4_;
        auVar29._0_4_ = auVar51._0_4_ - auVar50._0_4_;
        auVar29._4_4_ = auVar51._4_4_ - auVar50._4_4_;
        auVar29._8_4_ = auVar51._8_4_ - auVar50._8_4_;
        auVar29._12_4_ = auVar51._12_4_ - auVar50._12_4_;
        auVar20[9] = uVar32;
        auVar20._0_9_ = *(unkbyte9 *)(lVar13 + 0x50);
        auVar20[10] = uVar33;
        auVar20[0xb] = uVar34;
        auVar20[0xc] = uVar35;
        auVar20[0xd] = uVar36;
        auVar20[0xe] = uVar37;
        auVar20[0xf] = uVar38;
        auVar21 = auVar21 ^ (auVar21 ^ auVar19) & auVar20;
        auVar20 = NEON_ext(auVar21,auVar21,8,1);
        auVar25[9] = uVar32;
        auVar25._0_9_ = *(unkbyte9 *)(lVar13 + 0x50);
        auVar25[10] = uVar33;
        auVar25[0xb] = uVar34;
        auVar25[0xc] = uVar35;
        auVar25[0xd] = uVar36;
        auVar25[0xe] = uVar37;
        auVar25[0xf] = uVar38;
        auVar29 = auVar29 ^ (auVar29 ^ auVar19) & auVar25;
        auVar25 = NEON_ext(auVar29,auVar29,8,1);
        fVar49 = *(float *)(pauVar11[2] + 8) - auVar20._0_4_ * auVar21._0_4_ * auVar21._4_4_;
        if (auVar25._0_4_ * auVar29._0_4_ * auVar29._4_4_ <
            *(float *)(lVar13 + 0x60) * (*(float *)(lVar13 + 0x10) + fVar49)) {
          plVar17 = *(long **)(lVar13 + 8);
          iVar18 = (int)plVar17[1];
          lVar12 = (long)iVar18;
          if ((int)(*(uint *)((long)plVar17 + 0xc) & 0x7fffffff) <= iVar18) {
            FUN_02ed686c(plVar17,puVar1,lVar12 + 1);
            iVar18 = (int)plVar17[1];
          }
          *(int *)(*plVar17 + (long)iVar18 * 4) = (int)uVar16;
          *(int *)(plVar17 + 1) = (int)(lVar12 + 1);
          *(long *)(lVar13 + 0x28) = auVar50._8_8_;
          *(long *)(lVar13 + 0x20) = auVar50._0_8_;
          *(long *)(lVar13 + 0x38) = auVar51._8_8_;
          *(long *)(lVar13 + 0x30) = auVar51._0_8_;
          *(float *)(lVar13 + 0x40) = fVar49 + *(float *)(lVar13 + 0x40);
        }
      }
      else {
        *(undefined4 *)(lVar13 + 0x10) = 0;
        *(undefined4 *)(*(long *)(lVar13 + 8) + 8) = 0;
      }
      goto LAB_0308643c;
    }
  }
  return;
code_r0x0308629c:
  lVar13 = 0;
  if (*param_1 != 0) {
    lVar13 = *param_1 + (long)param_1;
  }
  pauVar15 = (undefined1 (*) [16])(lVar13 + (ulong)uVar3 * 0x30);
  uVar4 = *(uint *)(pauVar11[2] + 8);
  fVar47 = (float)*(undefined8 *)(*pauVar15 + 8);
  uVar48 = (undefined4)((ulong)*(undefined8 *)(*pauVar15 + 8) >> 0x20);
  fVar45 = (float)*(undefined8 *)*pauVar15;
  fVar46 = (float)((ulong)*(undefined8 *)*pauVar15 >> 0x20);
  fVar43 = (float)*(undefined8 *)(pauVar15[1] + 8);
  uVar44 = (undefined4)((ulong)*(undefined8 *)(pauVar15[1] + 8) >> 0x20);
  fVar49 = (float)*(undefined8 *)pauVar15[1];
  fVar42 = (float)((ulong)*(undefined8 *)pauVar15[1] >> 0x20);
  pauVar14 = (undefined1 (*) [16])(lVar13 + (ulong)uVar4 * 0x30);
  iVar39 = -(uint)(*(float *)(param_3 + 2) <= fVar49);
  iVar40 = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar42);
  iVar41 = -(uint)(*(float *)(param_3 + 3) <= fVar43);
  auVar25 = *pauVar14;
  auVar20 = pauVar14[1];
  iVar28 = -(uint)(*(float *)(param_3 + 2) <= auVar20._0_4_);
  iVar30 = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar20._4_4_);
  iVar31 = -(uint)(*(float *)(param_3 + 3) <= auVar20._8_4_);
  fVar5 = (float)param_3[4];
  iVar24 = -(uint)(fVar45 <= fVar5);
  fVar6 = (float)((ulong)param_3[4] >> 0x20);
  iVar26 = -(uint)(fVar46 <= fVar6);
  iVar27 = -(uint)(fVar47 <= (float)param_3[5]);
  iVar18 = -(uint)(auVar25._0_4_ <= fVar5);
  iVar22 = -(uint)(auVar25._4_4_ <= fVar6);
  iVar23 = -(uint)(auVar25._8_4_ <= (float)param_3[5]);
  bVar2 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar40 >> 0x18) &
                   (byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar39 >> 0x18) &
                   (byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar41 >> 0x18),
                   CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar40 >> 0x10) &
                            (byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar39 >> 0x10) &
                            (byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar41 >> 0x10),
                            CONCAT11((byte)((uint)iVar26 >> 8) & (byte)((uint)iVar40 >> 8) &
                                     (byte)((uint)iVar24 >> 8) & (byte)((uint)iVar39 >> 8) &
                                     (byte)((uint)iVar27 >> 8) & (byte)((uint)iVar41 >> 8),
                                     (byte)iVar26 & (byte)iVar40 & (byte)iVar24 & (byte)iVar39 &
                                     (byte)iVar27 & (byte)iVar41))) != 0 |
          (CONCAT13((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                    (byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar28 >> 0x18) &
                    (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                    CONCAT12((byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                             (byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                             (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                             CONCAT11((byte)((uint)iVar22 >> 8) & (byte)((uint)iVar30 >> 8) &
                                      (byte)((uint)iVar18 >> 8) & (byte)((uint)iVar28 >> 8) &
                                      (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar31 >> 8),
                                      (byte)iVar22 & (byte)iVar30 & (byte)iVar18 & (byte)iVar28 &
                                      (byte)iVar23 & (byte)iVar31))) != 0) << 1;
  pauVar11 = pauVar15;
  uVar16 = (ulong)uVar3;
  if (bVar2 != 1) {
    if (bVar2 == 3) {
      iVar18 = (int)param_2[1];
      lVar13 = (long)iVar18;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar18) {
        FUN_02eb1f88(param_2,PTR_PTR_047d1a50,lVar13 + 1);
        iVar18 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = (int)(lVar13 + 1);
      *(uint *)(*param_2 + (long)iVar18 * 4) = uVar4;
      uVar16 = (ulong)uVar3;
    }
    else {
      pauVar11 = pauVar14;
      uVar16 = (ulong)uVar4;
      fVar49 = auVar20._0_4_;
      fVar42 = auVar20._4_4_;
      fVar43 = auVar20._8_4_;
      uVar44 = auVar20._12_4_;
      fVar45 = auVar25._0_4_;
      fVar46 = auVar25._4_4_;
      fVar47 = auVar25._8_4_;
      uVar48 = auVar25._12_4_;
      if (bVar2 != 2) {
LAB_0308643c:
        if ((int)param_2[1] <= (int)lVar10) {
          return;
        }
        iVar18 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar18;
        uVar16 = (ulong)*(uint *)(*param_2 + (long)iVar18 * 4);
        lVar13 = 0;
        if (*param_1 != 0) {
          lVar13 = *param_1 + (long)param_1;
        }
        pauVar11 = (undefined1 (*) [16])(lVar13 + uVar16 * 0x30);
        fVar47 = (float)*(undefined8 *)(*pauVar11 + 8);
        uVar48 = (undefined4)((ulong)*(undefined8 *)(*pauVar11 + 8) >> 0x20);
        fVar45 = (float)*(undefined8 *)*pauVar11;
        fVar46 = (float)((ulong)*(undefined8 *)*pauVar11 >> 0x20);
        fVar43 = (float)*(undefined8 *)(pauVar11[1] + 8);
        uVar44 = (undefined4)((ulong)*(undefined8 *)(pauVar11[1] + 8) >> 0x20);
        fVar49 = (float)*(undefined8 *)pauVar11[1];
        fVar42 = (float)((ulong)*(undefined8 *)pauVar11[1] >> 0x20);
      }
    }
  }
  goto LAB_03086294;
}


