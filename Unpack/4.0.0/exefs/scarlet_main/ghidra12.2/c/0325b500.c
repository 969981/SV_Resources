/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0325b500; name: FUN_0325b500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0325b500(long *param_1,long *param_2,undefined1 (*param_3) [16],undefined8 *param_4,
            undefined4 *param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  byte bVar12;
  float fVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  int iVar17;
  byte bVar18;
  float fVar19;
  int iVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar29;
  undefined4 uVar30;
  int iVar31;
  int iVar32;
  undefined1 auVar28 [16];
  int iVar33;
  undefined4 uVar34;
  int iVar36;
  undefined4 uVar37;
  int iVar38;
  int iVar39;
  undefined1 auVar35 [16];
  int iVar40;
  int iVar43;
  int iVar44;
  int iVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar46;
  int iVar48;
  int iVar49;
  int iVar50;
  undefined1 auVar47 [16];
  undefined4 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  fVar13 = (float)*param_4;
  iVar27 = -(uint)(*(float *)*param_3 <= fVar13);
  iVar29 = -(uint)(*(float *)(*param_3 + 4) <= fVar13);
  iVar31 = -(uint)(*(float *)(*param_3 + 8) <= fVar13);
  iVar32 = -(uint)(*(float *)(*param_3 + 0xc) <= fVar13);
  iVar23 = -(uint)(fVar13 <= *(float *)param_3[1]);
  iVar24 = -(uint)(fVar13 <= *(float *)(param_3[1] + 4));
  iVar25 = -(uint)(fVar13 <= *(float *)(param_3[1] + 8));
  iVar26 = -(uint)(fVar13 <= *(float *)(param_3[1] + 0xc));
  fVar13 = (float)((ulong)*param_4 >> 0x20);
  fVar19 = (float)param_4[1];
  iVar40 = -(uint)(*(float *)param_3[2] <= fVar13);
  iVar43 = -(uint)(*(float *)(param_3[2] + 4) <= fVar13);
  iVar44 = -(uint)(*(float *)(param_3[2] + 8) <= fVar13);
  iVar45 = -(uint)(*(float *)(param_3[2] + 0xc) <= fVar13);
  iVar33 = -(uint)(fVar13 <= *(float *)param_3[3]);
  iVar36 = -(uint)(fVar13 <= *(float *)(param_3[3] + 4));
  iVar38 = -(uint)(fVar13 <= *(float *)(param_3[3] + 8));
  iVar39 = -(uint)(fVar13 <= *(float *)(param_3[3] + 0xc));
  iVar46 = -(uint)(*(float *)param_3[4] <= fVar19);
  iVar48 = -(uint)(*(float *)(param_3[4] + 4) <= fVar19);
  iVar49 = -(uint)(*(float *)(param_3[4] + 8) <= fVar19);
  iVar50 = -(uint)(*(float *)(param_3[4] + 0xc) <= fVar19);
  iVar14 = -(uint)(fVar19 <= (float)*(undefined8 *)param_3[5]);
  iVar17 = -(uint)(fVar19 <= (float)((ulong)*(undefined8 *)param_3[5] >> 0x20));
  iVar20 = -(uint)(fVar19 <= (float)*(undefined8 *)(param_3[5] + 8));
  iVar22 = -(uint)(fVar19 <= (float)((ulong)*(undefined8 *)(param_3[5] + 8) >> 0x20));
  bVar12 = (byte)iVar23 & (byte)iVar27 & (byte)iVar40 & (byte)iVar33 & (byte)iVar46 & (byte)iVar14;
  bVar16 = (byte)iVar24 & (byte)iVar29 & (byte)iVar43 & (byte)iVar36 & (byte)iVar48 & (byte)iVar17;
  bVar18 = (byte)iVar25 & (byte)iVar31 & (byte)iVar44 & (byte)iVar38 & (byte)iVar49 & (byte)iVar20;
  bVar21 = (byte)iVar26 & (byte)iVar32 & (byte)iVar45 & (byte)iVar39 & (byte)iVar50 & (byte)iVar22;
  if (CONCAT13((byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar29 >> 0x18) &
               (byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
               (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar17 >> 0x18) |
               (byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
               (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
               (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar14 >> 0x18) |
               (byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar31 >> 0x18) &
               (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
               (byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar20 >> 0x18) |
               (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar32 >> 0x18) &
               (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar39 >> 0x18) &
               (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar22 >> 0x18),
               CONCAT12((byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar29 >> 0x10) &
                        (byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                        (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar17 >> 0x10) |
                        (byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                        (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar33 >> 0x10) &
                        (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar14 >> 0x10) |
                        (byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar31 >> 0x10) &
                        (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                        (byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar20 >> 0x10) |
                        (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar32 >> 0x10) &
                        (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar39 >> 0x10) &
                        (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar22 >> 0x10),
                        CONCAT11((byte)((uint)iVar24 >> 8) & (byte)((uint)iVar29 >> 8) &
                                 (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar36 >> 8) &
                                 (byte)((uint)iVar48 >> 8) & (byte)((uint)iVar17 >> 8) |
                                 (byte)((uint)iVar23 >> 8) & (byte)((uint)iVar27 >> 8) &
                                 (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar33 >> 8) &
                                 (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar14 >> 8) |
                                 (byte)((uint)iVar25 >> 8) & (byte)((uint)iVar31 >> 8) &
                                 (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar38 >> 8) &
                                 (byte)((uint)iVar49 >> 8) & (byte)((uint)iVar20 >> 8) |
                                 (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar32 >> 8) &
                                 (byte)((uint)iVar45 >> 8) & (byte)((uint)iVar39 >> 8) &
                                 (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar22 >> 8),
                                 bVar16 | bVar12 | bVar18 | bVar21))) == 0) {
    return 0;
  }
  uVar2 = *(uint *)((long)param_4 + 0xc) & 0xc0ffffff;
  uVar15 = (uint)(bVar12 & (byte)_DAT_03cab270) +
           (uint)(bVar16 & (byte)((ulong)_DAT_03cab270 >> 0x20)) +
           (uint)(bVar18 & (byte)_UNK_03cab278) +
           (uint)(bVar21 & (byte)((ulong)_UNK_03cab278 >> 0x20));
  if ((uVar15 & 1) != 0) {
    if (param_3[7][0] == '\0') {
      iVar14 = (int)param_2[1];
      lVar10 = (long)iVar14;
      lVar3 = 0;
      if (*param_1 != 0) {
        lVar3 = *param_1 + (long)param_1;
      }
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar14) {
        FUN_02ed686c(param_2,PTR_PTR_047d1a50,lVar10 + 1);
        iVar14 = (int)param_2[1];
      }
      *(uint *)(*param_2 + (long)iVar14 * 4) =
           (uint)((ulong)((long)param_3 - lVar3) >> 5) & 0xfffffffc;
      *(int *)(param_2 + 1) = (int)(lVar10 + 1);
      lVar3 = 0;
      if (*param_1 != 0) {
        lVar3 = *param_1 + (long)param_1;
      }
      uVar9 = FUN_0325b500(param_1,param_2,lVar3 + (ulong)*(uint *)param_3[6] * 0x80,param_4,param_5
                          );
      if ((uVar9 & 1) != 0) {
        return 1;
      }
      *(int *)(param_2 + 1) = (int)param_2[1] + -1;
    }
    else if (*(uint *)param_3[6] == uVar2) {
      *(undefined4 *)*param_3 = *param_5;
      *(undefined4 *)param_3[1] = param_5[4];
      *(undefined4 *)param_3[2] = param_5[1];
      *(undefined4 *)param_3[3] = param_5[5];
      *(undefined4 *)param_3[4] = param_5[2];
      pauVar8 = param_3 + 5;
      goto LAB_0325b894;
    }
  }
  if ((uVar15 >> 1 & 1) != 0) {
    if (param_3[7][0] == '\0') {
      lVar3 = 0;
      if (*param_1 != 0) {
        lVar3 = *param_1 + (long)param_1;
      }
      iVar14 = (int)param_2[1];
      lVar10 = (long)iVar14;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar14) {
        FUN_02ed686c(param_2,PTR_PTR_047d1a50,lVar10 + 1);
        iVar14 = (int)param_2[1];
      }
      *(uint *)(*param_2 + (long)iVar14 * 4) =
           (uint)((ulong)((long)param_3 - lVar3) >> 5) & 0xfffffffc | 1;
      *(int *)(param_2 + 1) = (int)(lVar10 + 1);
      lVar3 = 0;
      if (*param_1 != 0) {
        lVar3 = *param_1 + (long)param_1;
      }
      uVar9 = FUN_0325b500(param_1,param_2,lVar3 + (ulong)*(uint *)(param_3[6] + 4) * 0x80,param_4,
                           param_5);
      if ((uVar9 & 1) != 0) {
        return 1;
      }
      *(int *)(param_2 + 1) = (int)param_2[1] + -1;
    }
    else if (*(uint *)(param_3[6] + 4) == uVar2) {
      *(undefined4 *)(*param_3 + 4) = *param_5;
      *(undefined4 *)(param_3[1] + 4) = param_5[4];
      *(undefined4 *)(param_3[2] + 4) = param_5[1];
      *(undefined4 *)(param_3[3] + 4) = param_5[5];
      *(undefined4 *)(param_3[4] + 4) = param_5[2];
      pauVar8 = (undefined1 (*) [16])(param_3[5] + 4);
      goto LAB_0325b894;
    }
  }
  if ((uVar15 >> 2 & 1) != 0) {
    if (param_3[7][0] == '\0') {
      lVar3 = 0;
      if (*param_1 != 0) {
        lVar3 = *param_1 + (long)param_1;
      }
      iVar14 = (int)param_2[1];
      lVar10 = (long)iVar14;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar14) {
        FUN_02ed686c(param_2,PTR_PTR_047d1a50,lVar10 + 1);
        iVar14 = (int)param_2[1];
      }
      *(uint *)(*param_2 + (long)iVar14 * 4) =
           (uint)((ulong)((long)param_3 - lVar3) >> 5) & 0xfffffffc | 2;
      *(int *)(param_2 + 1) = (int)(lVar10 + 1);
      lVar3 = 0;
      if (*param_1 != 0) {
        lVar3 = *param_1 + (long)param_1;
      }
      uVar9 = FUN_0325b500(param_1,param_2,lVar3 + (ulong)*(uint *)(param_3[6] + 8) * 0x80,param_4,
                           param_5);
      if ((uVar9 & 1) != 0) {
        return 1;
      }
      *(int *)(param_2 + 1) = (int)param_2[1] + -1;
    }
    else if (*(uint *)(param_3[6] + 8) == uVar2) {
      *(undefined4 *)(*param_3 + 8) = *param_5;
      *(undefined4 *)(param_3[1] + 8) = param_5[4];
      *(undefined4 *)(param_3[2] + 8) = param_5[1];
      *(undefined4 *)(param_3[3] + 8) = param_5[5];
      *(undefined4 *)(param_3[4] + 8) = param_5[2];
      pauVar8 = (undefined1 (*) [16])(param_3[5] + 8);
      goto LAB_0325b894;
    }
  }
  if ((uVar15 >> 3 & 1) == 0) {
    return 0;
  }
  if (param_3[7][0] == '\0') {
    iVar14 = (int)param_2[1];
    lVar10 = (long)iVar14;
    lVar3 = 0;
    if (*param_1 != 0) {
      lVar3 = *param_1 + (long)param_1;
    }
    if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar14) {
      FUN_02ed686c(param_2,PTR_PTR_047d1a50,lVar10 + 1);
      iVar14 = (int)param_2[1];
    }
    *(uint *)(*param_2 + (long)iVar14 * 4) = (uint)((ulong)((long)param_3 - lVar3) >> 5) | 3;
    *(int *)(param_2 + 1) = (int)(lVar10 + 1);
    lVar3 = 0;
    if (*param_1 != 0) {
      lVar3 = *param_1 + (long)param_1;
    }
    uVar9 = FUN_0325b500(param_1,param_2,lVar3 + (ulong)*(uint *)(param_3[6] + 0xc) * 0x80,param_4,
                         param_5);
    if ((uVar9 & 1) == 0) {
      *(int *)(param_2 + 1) = (int)param_2[1] + -1;
      return 0;
    }
    return 1;
  }
  if (*(uint *)(param_3[6] + 0xc) != uVar2) {
    return 0;
  }
  *(undefined4 *)(*param_3 + 0xc) = *param_5;
  *(undefined4 *)(param_3[1] + 0xc) = param_5[4];
  *(undefined4 *)(param_3[2] + 0xc) = param_5[1];
  *(undefined4 *)(param_3[3] + 0xc) = param_5[5];
  *(undefined4 *)(param_3[4] + 0xc) = param_5[2];
  pauVar8 = (undefined1 (*) [16])(param_3[5] + 0xc);
LAB_0325b894:
  *(undefined4 *)*pauVar8 = param_5[6];
  uVar9 = (ulong)*(uint *)(param_2 + 1);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    do {
      auVar4 = param_3[4];
      auVar41 = param_3[5];
      auVar54 = NEON_ext(auVar41,auVar41,8,1);
      auVar7 = *param_3;
      auVar5 = param_3[1];
      pauVar8 = param_3 + 2;
      pauVar11 = param_3 + 3;
      uVar51 = (undefined4)((ulong)*(undefined8 *)(param_3[3] + 8) >> 0x20);
      auVar52 = NEON_ext(auVar5,auVar5,8,1);
      auVar53._12_4_ = uVar51;
      auVar53._0_12_ = *(undefined1 (*) [12])*pauVar11;
      auVar35._12_4_ = uVar51;
      auVar35._0_12_ = *(undefined1 (*) [12])*pauVar11;
      auVar53 = NEON_ext(auVar53,auVar35,8,1);
      auVar47._4_4_ = (int)*(undefined8 *)*pauVar11;
      auVar47._0_4_ = auVar5._0_4_;
      auVar35 = NEON_ext(auVar4,auVar4,8,1);
      auVar47._8_4_ = auVar41._0_4_;
      auVar47._12_4_ = 0;
      auVar28._4_4_ = auVar53._0_4_;
      auVar28._0_4_ = auVar52._0_4_;
      auVar42._4_4_ = (int)((ulong)*(undefined8 *)*pauVar11 >> 0x20);
      auVar42._0_4_ = auVar5._4_4_;
      auVar42._8_4_ = auVar41._4_4_;
      auVar42._12_4_ = 0;
      auVar41 = NEON_fmax(auVar47,auVar42,4);
      auVar28._8_4_ = auVar54._0_4_;
      auVar28._12_4_ = 0;
      auVar47 = NEON_ext(auVar7,auVar7,8,1);
      auVar6._4_4_ = auVar53._4_4_;
      auVar6._0_4_ = auVar52._4_4_;
      auVar6._8_4_ = auVar54._4_4_;
      auVar6._12_4_ = 0;
      auVar53 = NEON_fmax(auVar28,auVar6,4);
      uVar2 = *(uint *)(*param_2 + (uVar9 - 1) * 4);
      auVar53 = NEON_fmax(auVar41,auVar53,4);
      auVar42 = NEON_ext(*pauVar8,*pauVar8,8,1);
      auVar52._4_4_ = auVar42._4_4_;
      auVar52._0_4_ = auVar47._4_4_;
      auVar41._4_4_ = (int)*(undefined8 *)*pauVar8;
      auVar41._0_4_ = auVar7._0_4_;
      auVar41._8_4_ = auVar4._0_4_;
      auVar41._12_4_ = 0;
      auVar5._4_4_ = (int)((ulong)*(undefined8 *)*pauVar8 >> 0x20);
      auVar5._0_4_ = auVar7._4_4_;
      auVar5._8_4_ = auVar4._4_4_;
      auVar5._12_4_ = 0;
      auVar41 = NEON_fmin(auVar41,auVar5,4);
      auVar52._8_4_ = auVar35._4_4_;
      auVar52._12_4_ = 0;
      lVar3 = 0;
      if (*param_1 != 0) {
        lVar3 = *param_1 + (long)param_1;
      }
      auVar4._4_4_ = auVar42._0_4_;
      auVar4._0_4_ = auVar47._0_4_;
      auVar4._8_4_ = auVar35._0_4_;
      auVar4._12_4_ = 0;
      auVar35 = NEON_fmin(auVar4,auVar52,4);
      uVar15 = uVar2 & 3;
      auVar35 = NEON_fmin(auVar41,auVar35,4);
      param_3 = (undefined1 (*) [16])(lVar3 + (ulong)(uVar2 >> 2) * 0x80);
      uVar34 = auVar35._0_4_;
      uVar37 = auVar35._4_4_;
      uVar51 = auVar53._0_4_;
      uVar30 = auVar53._4_4_;
      if (uVar15 == 0) {
        *(undefined4 *)*param_3 = uVar34;
        pauVar8 = param_3 + 4;
        *(undefined4 *)param_3[1] = uVar51;
        *(undefined4 *)param_3[2] = uVar37;
        *(undefined4 *)param_3[3] = uVar30;
        pauVar11 = param_3 + 5;
      }
      else if (uVar15 == 1) {
        *(undefined4 *)(*param_3 + 4) = uVar34;
        pauVar8 = (undefined1 (*) [16])(param_3[4] + 4);
        *(undefined4 *)(param_3[1] + 4) = uVar51;
        *(undefined4 *)(param_3[2] + 4) = uVar37;
        *(undefined4 *)(param_3[3] + 4) = uVar30;
        pauVar11 = (undefined1 (*) [16])(param_3[5] + 4);
      }
      else if (uVar15 == 2) {
        *(undefined4 *)(*param_3 + 8) = uVar34;
        pauVar8 = (undefined1 (*) [16])(param_3[4] + 8);
        *(undefined4 *)(param_3[1] + 8) = uVar51;
        *(undefined4 *)(param_3[2] + 8) = uVar37;
        *(undefined4 *)(param_3[3] + 8) = uVar30;
        pauVar11 = (undefined1 (*) [16])(param_3[5] + 8);
      }
      else {
        *(undefined4 *)(*param_3 + 0xc) = uVar34;
        pauVar8 = (undefined1 (*) [16])(param_3[4] + 0xc);
        *(undefined4 *)(param_3[1] + 0xc) = uVar51;
        *(undefined4 *)(param_3[2] + 0xc) = uVar37;
        *(undefined4 *)(param_3[3] + 0xc) = uVar30;
        pauVar11 = (undefined1 (*) [16])(param_3[5] + 0xc);
      }
      *(int *)*pauVar8 = auVar35._8_4_;
      *(int *)*pauVar11 = auVar53._8_4_;
      bVar1 = 1 < (long)uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar1);
  }
  return 1;
}


