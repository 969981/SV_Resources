/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319e83c; name: FUN_0319e83c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0319e83c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float *pfVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  int iVar43;
  float fVar44;
  int iVar46;
  float fVar47;
  int iVar48;
  float fVar49;
  undefined1 auVar45 [16];
  int iVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar8 = (ulong)uVar3;
  if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) < (int)uVar3) {
    FUN_0319e514(param_3,PTR_PTR_047d1a50,(long)(int)uVar3);
  }
  if (*(uint *)(param_3 + 1) != uVar3) {
    *(uint *)(param_3 + 1) = uVar3;
  }
  param_3 = (undefined8 *)*param_3;
  puVar6 = *(undefined8 **)(param_1 + 0x18);
  uVar40 = param_2[1];
  uVar35 = *param_2;
  uVar21 = param_2[3];
  uVar18 = param_2[2];
  auVar45._0_4_ = ABS((float)uVar35 + (float)_DAT_03cab1d0);
  auVar45._4_4_ = ABS((float)((ulong)uVar35 >> 0x20) + (float)((ulong)_DAT_03cab1d0 >> 0x20));
  auVar45._8_4_ = ABS((float)uVar40 + (float)_UNK_03cab1d8);
  auVar45._12_4_ = ABS((float)((ulong)uVar40 >> 0x20) + (float)((ulong)_UNK_03cab1d8 >> 0x20));
  auVar52._0_4_ = ABS((float)uVar18 + (float)_DAT_03cab4f0);
  auVar52._4_4_ = ABS((float)((ulong)uVar18 >> 0x20) + (float)((ulong)_DAT_03cab4f0 >> 0x20));
  auVar52._8_4_ = ABS((float)uVar21 + (float)_UNK_03cab4f8);
  auVar52._12_4_ = ABS((float)((ulong)uVar21 >> 0x20) + (float)((ulong)_UNK_03cab4f8 >> 0x20));
  uVar30 = param_2[5];
  uVar25 = param_2[4];
  uVar15 = param_2[7];
  uVar11 = param_2[6];
  auVar45 = NEON_fmax(auVar45,auVar52,4);
  auVar53._0_4_ = ABS((float)uVar11 + (float)_DAT_03cabb30);
  auVar53._4_4_ = ABS((float)((ulong)uVar11 >> 0x20) + (float)((ulong)_DAT_03cabb30 >> 0x20));
  auVar53._8_4_ = ABS((float)uVar15 + (float)_UNK_03cabb38);
  auVar53._12_4_ = ABS((float)((ulong)uVar15 >> 0x20) + (float)((ulong)_UNK_03cabb38 >> 0x20));
  fVar59 = ABS((float)((ulong)uVar25 >> 0x20) + (float)((ulong)_DAT_03cac220 >> 0x20));
  fVar61 = ABS((float)uVar30 + (float)_UNK_03cac228);
  fVar62 = ABS((float)((ulong)uVar30 >> 0x20) + (float)((ulong)_UNK_03cac228 >> 0x20));
  auVar54[4] = SUB41(fVar59,0);
  auVar54._0_4_ = ABS((float)uVar25 + (float)_DAT_03cac220);
  auVar54[5] = (char)((uint)fVar59 >> 8);
  auVar54[6] = (char)((uint)fVar59 >> 0x10);
  auVar54[7] = (char)((uint)fVar59 >> 0x18);
  auVar54[8] = SUB41(fVar61,0);
  auVar54[9] = (char)((uint)fVar61 >> 8);
  auVar54[10] = (char)((uint)fVar61 >> 0x10);
  auVar54[0xb] = (char)((uint)fVar61 >> 0x18);
  auVar54[0xc] = SUB41(fVar62,0);
  auVar54[0xd] = (char)((uint)fVar62 >> 8);
  auVar54[0xe] = (char)((uint)fVar62 >> 0x10);
  auVar54[0xf] = (char)((uint)fVar62 >> 0x18);
  auVar54 = NEON_fmax(auVar54,auVar53,4);
  auVar54 = NEON_fmax(auVar45,auVar54,4);
  iVar43 = -(uint)(auVar54._0_4_ <= 1e-05);
  iVar46 = -(uint)(auVar54._4_4_ <= 1e-05);
  iVar48 = -(uint)(auVar54._8_4_ <= 1e-05);
  iVar50 = -(uint)(auVar54._12_4_ <= 1e-05);
  if (CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar43 >> 0x18) &
               (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar50 >> 0x18),
               CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar43 >> 0x10) &
                        (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar50 >> 0x10),
                        CONCAT11((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar43 >> 8) &
                                 (byte)((uint)iVar48 >> 8) & (byte)((uint)iVar50 >> 8),
                                 (byte)iVar46 & (byte)iVar43 & (byte)iVar48 & (byte)iVar50))) == 0)
  {
    if (*(int *)(param_1 + 0x30) < 1) {
      if (0 < (int)uVar3) {
        puVar6 = puVar6 + 4;
        pfVar7 = (float *)(param_3 + 4);
        while( true ) {
          uVar8 = uVar8 - 1;
          fVar59 = *(float *)(puVar6 + -4);
          fVar61 = *(float *)((long)puVar6 + -0x1c);
          fVar62 = *(float *)(puVar6 + -3);
          fVar4 = *(float *)((long)puVar6 + -0x14);
          fVar10 = *(float *)(puVar6 + -2);
          fVar13 = *(float *)((long)puVar6 + -0xc);
          fVar14 = *(float *)(puVar6 + -1);
          fVar16 = *(float *)((long)puVar6 + -4);
          fVar26 = (float)uVar35;
          fVar27 = (float)((ulong)uVar35 >> 0x20);
          fVar28 = (float)uVar40;
          fVar29 = (float)((ulong)uVar40 >> 0x20);
          fVar44 = (float)uVar18;
          fVar17 = (float)((ulong)uVar18 >> 0x20);
          fVar47 = (float)uVar21;
          fVar19 = (float)((ulong)uVar21 >> 0x20);
          fVar31 = (float)*puVar6;
          fVar36 = (float)puVar6[2];
          fVar32 = (float)((ulong)*puVar6 >> 0x20);
          fVar37 = (float)((ulong)puVar6[2] >> 0x20);
          fVar20 = (float)uVar25;
          fVar22 = (float)((ulong)uVar25 >> 0x20);
          fVar23 = (float)uVar30;
          fVar24 = (float)((ulong)uVar30 >> 0x20);
          fVar33 = (float)puVar6[1];
          fVar38 = (float)puVar6[3];
          fVar9 = (float)uVar11;
          fVar12 = (float)((ulong)uVar11 >> 0x20);
          fVar49 = (float)uVar15;
          fVar51 = (float)((ulong)uVar15 >> 0x20);
          fVar34 = (float)((ulong)puVar6[1] >> 0x20);
          fVar39 = (float)((ulong)puVar6[3] >> 0x20);
          *(ulong *)(pfVar7 + -6) =
               CONCAT44(fVar51 * fVar4 + fVar24 * fVar62 + fVar29 * fVar59 + fVar19 * fVar61,
                        fVar49 * fVar4 + fVar23 * fVar62 + fVar28 * fVar59 + fVar47 * fVar61);
          *(ulong *)(pfVar7 + -8) =
               CONCAT44(fVar12 * fVar4 + fVar22 * fVar62 + fVar27 * fVar59 + fVar17 * fVar61,
                        fVar9 * fVar4 + fVar20 * fVar62 + fVar26 * fVar59 + fVar44 * fVar61);
          *(ulong *)(pfVar7 + -2) =
               CONCAT44(fVar51 * fVar16 + fVar24 * fVar14 + fVar29 * fVar10 + fVar19 * fVar13,
                        fVar49 * fVar16 + fVar23 * fVar14 + fVar28 * fVar10 + fVar47 * fVar13);
          *(ulong *)(pfVar7 + -4) =
               CONCAT44(fVar12 * fVar16 + fVar22 * fVar14 + fVar27 * fVar10 + fVar17 * fVar13,
                        fVar9 * fVar16 + fVar20 * fVar14 + fVar26 * fVar10 + fVar44 * fVar13);
          pfVar7[2] = fVar49 * fVar34 + fVar23 * fVar33 + fVar28 * fVar31 + fVar47 * fVar32;
          pfVar7[3] = fVar51 * fVar34 + fVar24 * fVar33 + fVar29 * fVar31 + fVar19 * fVar32;
          *pfVar7 = fVar9 * fVar34 + fVar20 * fVar33 + fVar26 * fVar31 + fVar44 * fVar32;
          pfVar7[1] = fVar12 * fVar34 + fVar22 * fVar33 + fVar27 * fVar31 + fVar17 * fVar32;
          *(ulong *)(pfVar7 + 6) =
               CONCAT44(fVar51 * fVar39 + fVar24 * fVar38 + fVar29 * fVar36 + fVar19 * fVar37,
                        fVar49 * fVar39 + fVar23 * fVar38 + fVar28 * fVar36 + fVar47 * fVar37);
          *(ulong *)(pfVar7 + 4) =
               CONCAT44(fVar12 * fVar39 + fVar22 * fVar38 + fVar27 * fVar36 + fVar17 * fVar37,
                        fVar9 * fVar39 + fVar20 * fVar38 + fVar26 * fVar36 + fVar44 * fVar37);
          if (uVar8 == 0) break;
          uVar40 = param_2[1];
          uVar35 = *param_2;
          uVar21 = param_2[3];
          uVar18 = param_2[2];
          puVar6 = puVar6 + 8;
          pfVar7 = pfVar7 + 0x10;
          uVar30 = param_2[5];
          uVar25 = param_2[4];
          uVar15 = param_2[7];
          uVar11 = param_2[6];
        }
      }
    }
    else if (0 < (int)uVar3) {
      puVar6 = puVar6 + 4;
      param_3 = param_3 + 4;
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
      while( true ) {
        uVar8 = uVar8 - 1;
        fVar59 = *(float *)(puVar6 + -4);
        fVar61 = *(float *)((long)puVar6 + -0x1c);
        fVar62 = *(float *)(puVar6 + -3);
        fVar4 = *(float *)((long)puVar6 + -0x14);
        fVar10 = *(float *)(puVar6 + -2);
        fVar13 = *(float *)((long)puVar6 + -0xc);
        fVar14 = *(float *)(puVar6 + -1);
        fVar16 = *(float *)((long)puVar6 + -4);
        fVar33 = (float)uVar35;
        fVar36 = (float)((ulong)uVar35 >> 0x20);
        fVar38 = (float)uVar40;
        fVar41 = (float)((ulong)uVar40 >> 0x20);
        fVar44 = (float)uVar18;
        fVar47 = (float)((ulong)uVar18 >> 0x20);
        fVar20 = (float)uVar21;
        fVar22 = (float)((ulong)uVar21 >> 0x20);
        fVar55 = (float)*puVar6;
        fVar17 = (float)puVar6[2];
        fVar56 = (float)((ulong)*puVar6 >> 0x20);
        fVar19 = (float)((ulong)puVar6[2] >> 0x20);
        fVar23 = (float)uVar25;
        fVar26 = (float)((ulong)uVar25 >> 0x20);
        fVar28 = (float)uVar30;
        fVar31 = (float)((ulong)uVar30 >> 0x20);
        fVar57 = (float)puVar6[1];
        fVar60 = (float)puVar6[3];
        fVar9 = (float)uVar11;
        fVar12 = (float)((ulong)uVar11 >> 0x20);
        fVar49 = (float)uVar15;
        fVar51 = (float)((ulong)uVar15 >> 0x20);
        fVar24 = fVar9 * fVar4 + fVar23 * fVar62 + fVar33 * fVar59 + fVar44 * fVar61;
        fVar27 = fVar12 * fVar4 + fVar26 * fVar62 + fVar36 * fVar59 + fVar47 * fVar61;
        fVar29 = fVar49 * fVar4 + fVar28 * fVar62 + fVar38 * fVar59 + fVar20 * fVar61;
        fVar32 = fVar51 * fVar4 + fVar31 * fVar62 + fVar41 * fVar59 + fVar22 * fVar61;
        fVar34 = fVar9 * fVar16 + fVar23 * fVar14 + fVar33 * fVar10 + fVar44 * fVar13;
        fVar37 = fVar12 * fVar16 + fVar26 * fVar14 + fVar36 * fVar10 + fVar47 * fVar13;
        fVar39 = fVar49 * fVar16 + fVar28 * fVar14 + fVar38 * fVar10 + fVar20 * fVar13;
        fVar42 = fVar51 * fVar16 + fVar31 * fVar14 + fVar41 * fVar10 + fVar22 * fVar13;
        fVar58 = (float)((ulong)puVar6[1] >> 0x20);
        fVar59 = (float)((ulong)puVar6[3] >> 0x20);
        fVar10 = fVar9 * fVar59 + fVar23 * fVar60 + fVar33 * fVar17 + fVar44 * fVar19;
        fVar13 = fVar12 * fVar59 + fVar26 * fVar60 + fVar36 * fVar17 + fVar47 * fVar19;
        fVar14 = fVar49 * fVar59 + fVar28 * fVar60 + fVar38 * fVar17 + fVar20 * fVar19;
        fVar16 = fVar51 * fVar59 + fVar31 * fVar60 + fVar41 * fVar17 + fVar22 * fVar19;
        fVar59 = *(float *)(puVar5 + -2);
        fVar61 = *(float *)((long)puVar5 + -0xc);
        fVar62 = *(float *)(puVar5 + -1);
        fVar4 = *(float *)((long)puVar5 + -4);
        fVar17 = (float)puVar5[-4];
        fVar19 = (float)((ulong)puVar5[-4] >> 0x20);
        uVar11 = puVar5[1];
        uVar15 = puVar5[3];
        fVar44 = fVar9 * fVar58 + fVar23 * fVar57 + fVar33 * fVar55 + fVar44 * fVar56;
        fVar47 = fVar12 * fVar58 + fVar26 * fVar57 + fVar36 * fVar55 + fVar47 * fVar56;
        fVar49 = fVar49 * fVar58 + fVar28 * fVar57 + fVar38 * fVar55 + fVar20 * fVar56;
        fVar51 = fVar51 * fVar58 + fVar31 * fVar57 + fVar41 * fVar55 + fVar22 * fVar56;
        fVar20 = (float)*puVar5;
        fVar26 = (float)puVar5[2];
        fVar22 = (float)((ulong)*puVar5 >> 0x20);
        fVar28 = (float)((ulong)puVar5[2] >> 0x20);
        fVar9 = (float)puVar5[-3];
        fVar12 = (float)((ulong)puVar5[-3] >> 0x20);
        fVar23 = (float)uVar11;
        param_3[-3] = CONCAT44(fVar16 * fVar12 + fVar51 * fVar9 + fVar32 * fVar17 + fVar42 * fVar19,
                               fVar14 * fVar12 + fVar49 * fVar9 + fVar29 * fVar17 + fVar39 * fVar19)
        ;
        param_3[-4] = CONCAT44(fVar13 * fVar12 + fVar47 * fVar9 + fVar27 * fVar17 + fVar37 * fVar19,
                               fVar10 * fVar12 + fVar44 * fVar9 + fVar24 * fVar17 + fVar34 * fVar19)
        ;
        param_3[-1] = CONCAT44(fVar16 * fVar4 + fVar51 * fVar62 + fVar32 * fVar59 + fVar42 * fVar61,
                               fVar14 * fVar4 + fVar49 * fVar62 + fVar29 * fVar59 + fVar39 * fVar61)
        ;
        param_3[-2] = CONCAT44(fVar13 * fVar4 + fVar47 * fVar62 + fVar27 * fVar59 + fVar37 * fVar61,
                               fVar10 * fVar4 + fVar44 * fVar62 + fVar24 * fVar59 + fVar34 * fVar61)
        ;
        fVar61 = (float)uVar15;
        fVar59 = (float)((ulong)uVar11 >> 0x20);
        fVar62 = (float)((ulong)uVar15 >> 0x20);
        param_3[1] = CONCAT44(fVar16 * fVar59 + fVar51 * fVar23 + fVar32 * fVar20 + fVar42 * fVar22,
                              fVar14 * fVar59 + fVar49 * fVar23 + fVar29 * fVar20 + fVar39 * fVar22)
        ;
        *param_3 = CONCAT44(fVar13 * fVar59 + fVar47 * fVar23 + fVar27 * fVar20 + fVar37 * fVar22,
                            fVar10 * fVar59 + fVar44 * fVar23 + fVar24 * fVar20 + fVar34 * fVar22);
        param_3[3] = CONCAT44(fVar16 * fVar62 + fVar51 * fVar61 + fVar32 * fVar26 + fVar42 * fVar28,
                              fVar14 * fVar62 + fVar49 * fVar61 + fVar29 * fVar26 + fVar39 * fVar28)
        ;
        param_3[2] = CONCAT44(fVar13 * fVar62 + fVar47 * fVar61 + fVar27 * fVar26 + fVar37 * fVar28,
                              fVar10 * fVar62 + fVar44 * fVar61 + fVar24 * fVar26 + fVar34 * fVar28)
        ;
        if (uVar8 == 0) break;
        uVar40 = param_2[1];
        uVar35 = *param_2;
        uVar21 = param_2[3];
        uVar18 = param_2[2];
        puVar6 = puVar6 + 8;
        puVar5 = puVar5 + 8;
        uVar30 = param_2[5];
        uVar25 = param_2[4];
        uVar15 = param_2[7];
        uVar11 = param_2[6];
        param_3 = param_3 + 8;
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) < 1) {
    iVar43 = uVar3 * 4;
    if (0 < iVar43) {
      do {
        iVar43 = iVar43 + -1;
        uVar1 = *(undefined4 *)(puVar6 + 1);
        uVar2 = *(undefined4 *)((long)puVar6 + 0xc);
        *param_3 = *puVar6;
        *(undefined4 *)(param_3 + 1) = uVar1;
        *(undefined4 *)((long)param_3 + 0xc) = uVar2;
        puVar6 = puVar6 + 2;
        param_3 = param_3 + 2;
      } while (iVar43 != 0);
    }
  }
  else if (0 < (int)uVar3) {
    param_3 = param_3 + 4;
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
    puVar6 = puVar6 + 4;
    do {
      uVar8 = uVar8 - 1;
      fVar12 = (float)((ulong)puVar5[-2] >> 0x20);
      fVar20 = (float)puVar6[-2];
      fVar23 = (float)((ulong)puVar6[-2] >> 0x20);
      fVar26 = (float)puVar6[-1];
      fVar28 = (float)((ulong)puVar6[-1] >> 0x20);
      fVar10 = (float)puVar5[-4];
      fVar44 = (float)puVar6[-4];
      fVar17 = (float)((ulong)puVar6[-4] >> 0x20);
      fVar47 = (float)puVar6[-3];
      fVar19 = (float)((ulong)puVar6[-3] >> 0x20);
      fVar13 = (float)((ulong)puVar5[-4] >> 0x20);
      fVar9 = (float)puVar5[-2];
      fVar59 = (float)*puVar5;
      fVar31 = (float)puVar5[2];
      fVar61 = (float)((ulong)*puVar5 >> 0x20);
      fVar32 = (float)((ulong)puVar5[2] >> 0x20);
      fVar14 = (float)puVar5[-3];
      fVar22 = (float)*puVar6;
      fVar24 = (float)((ulong)*puVar6 >> 0x20);
      fVar27 = (float)puVar6[1];
      fVar29 = (float)((ulong)puVar6[1] >> 0x20);
      fVar16 = (float)((ulong)puVar5[-3] >> 0x20);
      fVar36 = (float)puVar6[2];
      fVar37 = (float)((ulong)puVar6[2] >> 0x20);
      fVar38 = (float)puVar6[3];
      fVar39 = (float)((ulong)puVar6[3] >> 0x20);
      fVar49 = (float)puVar5[-1];
      fVar51 = (float)((ulong)puVar5[-1] >> 0x20);
      fVar62 = (float)puVar5[1];
      fVar33 = (float)puVar5[3];
      fVar4 = (float)((ulong)puVar5[1] >> 0x20);
      fVar34 = (float)((ulong)puVar5[3] >> 0x20);
      param_3[1] = CONCAT44(fVar19 * fVar59 + fVar28 * fVar61 + fVar29 * fVar62 + fVar39 * fVar4,
                            fVar47 * fVar59 + fVar26 * fVar61 + fVar27 * fVar62 + fVar38 * fVar4);
      *param_3 = CONCAT44(fVar17 * fVar59 + fVar23 * fVar61 + fVar24 * fVar62 + fVar37 * fVar4,
                          fVar44 * fVar59 + fVar20 * fVar61 + fVar22 * fVar62 + fVar36 * fVar4);
      param_3[3] = CONCAT44(fVar19 * fVar31 + fVar28 * fVar32 + fVar29 * fVar33 + fVar39 * fVar34,
                            fVar47 * fVar31 + fVar26 * fVar32 + fVar27 * fVar33 + fVar38 * fVar34);
      param_3[2] = CONCAT44(fVar17 * fVar31 + fVar23 * fVar32 + fVar24 * fVar33 + fVar37 * fVar34,
                            fVar44 * fVar31 + fVar20 * fVar32 + fVar22 * fVar33 + fVar36 * fVar34);
      param_3[-3] = CONCAT44(fVar19 * fVar10 + fVar28 * fVar13 + fVar29 * fVar14 + fVar39 * fVar16,
                             fVar47 * fVar10 + fVar26 * fVar13 + fVar27 * fVar14 + fVar38 * fVar16);
      param_3[-4] = CONCAT44(fVar17 * fVar10 + fVar23 * fVar13 + fVar24 * fVar14 + fVar37 * fVar16,
                             fVar44 * fVar10 + fVar20 * fVar13 + fVar22 * fVar14 + fVar36 * fVar16);
      param_3[-1] = CONCAT44(fVar19 * fVar9 + fVar28 * fVar12 + fVar29 * fVar49 + fVar39 * fVar51,
                             fVar47 * fVar9 + fVar26 * fVar12 + fVar27 * fVar49 + fVar38 * fVar51);
      param_3[-2] = CONCAT44(fVar17 * fVar9 + fVar23 * fVar12 + fVar24 * fVar49 + fVar37 * fVar51,
                             fVar44 * fVar9 + fVar20 * fVar12 + fVar22 * fVar49 + fVar36 * fVar51);
      param_3 = param_3 + 8;
      puVar5 = puVar5 + 8;
      puVar6 = puVar6 + 8;
    } while (uVar8 != 0);
  }
  return;
}


