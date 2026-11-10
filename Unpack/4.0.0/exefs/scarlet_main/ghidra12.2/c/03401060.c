/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03401060; name: FUN_03401060
 */


void FUN_03401060(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,long param_7,undefined1 (*param_8) [16],uint param_9,uint param_10,
                 float *param_11)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  float *pfVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar26;
  undefined1 uVar25;
  undefined1 uVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  uint7 uVar33;
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  uint uVar36;
  int iVar40;
  undefined1 auVar37 [12];
  int iVar39;
  byte bVar41;
  byte bVar43;
  undefined1 auVar38 [16];
  int iVar42;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  float fVar48;
  undefined1 auVar49 [12];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  fVar9 = 1.0 - param_6;
  uVar7 = param_10 & 0xfffffffc;
  fVar11 = *param_11;
  fVar12 = param_11[1];
  pauVar2 = (undefined1 (*) [16])(*param_8 + (ulong)uVar7 * 4);
  fVar13 = fVar9 * param_6;
  fVar14 = fVar13 * param_6;
  if (uVar7 != 0) {
    fVar16 = param_6 * param_6 * param_6;
    uVar18 = SUB41(fVar12,0);
    uVar19 = (undefined1)((uint)fVar12 >> 8);
    uVar21 = (undefined1)((uint)fVar12 >> 0x10);
    uVar24 = (undefined1)((uint)fVar12 >> 0x18);
    pauVar5 = param_8;
    do {
      fVar28 = param_1 * (float)*(undefined8 *)*pauVar5 + 1e-25;
      fVar30 = param_1 * (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20) + 1e-25;
      fVar31 = param_1 * (float)*(undefined8 *)(*pauVar5 + 8) + 1e-25;
      fVar32 = param_1 * (float)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20) + 1e-25;
      fVar17 = (float)CONCAT13(uVar24,CONCAT12(uVar21,CONCAT11(uVar19,uVar18)));
      fVar48 = (float)CONCAT13(uVar24,CONCAT12(uVar21,CONCAT11(uVar19,uVar18)));
      fVar8 = fVar16 * fVar12;
      fVar12 = fVar9 * fVar32 + fVar13 * fVar31 + fVar14 * fVar30 + fVar14 * param_6 * fVar28 +
               fVar16 * param_6 * fVar12;
      uVar18 = SUB41(fVar12,0);
      uVar19 = (undefined1)((uint)fVar12 >> 8);
      uVar21 = (undefined1)((uint)fVar12 >> 0x10);
      uVar24 = (undefined1)((uint)fVar12 >> 0x18);
      pauVar4 = pauVar5 + 1;
      *(ulong *)(*pauVar5 + 8) =
           CONCAT44(fVar12,fVar32 * 0.0 + fVar9 * fVar31 + fVar13 * fVar30 + fVar14 * fVar28 + fVar8
                   );
      *(ulong *)*pauVar5 =
           CONCAT44(fVar32 * 0.0 + fVar31 * 0.0 + fVar9 * fVar30 + fVar13 * fVar28 +
                    param_6 * param_6 * fVar48,
                    fVar32 * 0.0 + fVar31 * 0.0 + fVar30 * 0.0 + fVar9 * fVar28 + param_6 * fVar17);
      pauVar5 = pauVar4;
    } while (pauVar4 < pauVar2);
    auVar15 = NEON_fmov(0x3f800000,4);
    auVar29 = NEON_fmov(0x41200000,4);
    pauVar5 = param_8;
    do {
      auVar10 = *pauVar5;
      uVar33 = CONCAT16(auVar10[6],
                        CONCAT15(auVar10[5],CONCAT14(auVar10[4],(uint)(auVar10._0_3_ & 0x7fffff))))
               & 0x7fffffffffffff;
      fVar13 = (float)CONCAT13(auVar15[3],
                               CONCAT12((byte)(uVar33 >> 0x10) | auVar15[2],
                                        CONCAT11((byte)(uVar33 >> 8) | auVar15[1],
                                                 (byte)uVar33 | auVar15[0])));
      auVar34._0_8_ =
           CONCAT17(auVar15[7],
                    CONCAT16((byte)(uVar33 >> 0x30) | auVar15[6],
                             CONCAT15((byte)(uVar33 >> 0x28) | auVar15[5],
                                      CONCAT14((byte)(uVar33 >> 0x20) | auVar15[4],fVar13))));
      auVar34[8] = auVar10[8] | auVar15[8];
      auVar34[9] = auVar10[9] | auVar15[9];
      auVar34[10] = auVar10[10] & 0x7f | auVar15[10];
      auVar34[0xb] = auVar15[0xb];
      auVar38[0xc] = auVar10[0xc] | auVar15[0xc];
      auVar38._0_12_ = auVar34;
      auVar38[0xd] = auVar10[0xd] | auVar15[0xd];
      auVar38[0xe] = auVar10[0xe] & 0x7f | auVar15[0xe];
      auVar38[0xf] = auVar15[0xf];
      fVar48 = fVar13 + auVar15._0_4_;
      fVar14 = (float)((ulong)auVar34._0_8_ >> 0x20);
      fVar8 = fVar14 + auVar15._4_4_;
      fVar16 = auVar34._8_4_;
      fVar28 = fVar16 + auVar15._8_4_;
      fVar17 = auVar38._12_4_;
      fVar30 = fVar17 + auVar15._12_4_;
      auVar51._0_5_ = CONCAT14((char)(auVar10._4_4_ >> 0x17),auVar10._0_4_ >> 0x17) & 0xff000000ff;
      auVar51._5_3_ = 0;
      auVar51[8] = (undefined1)(auVar10._8_4_ >> 0x17);
      auVar51._9_3_ = 0;
      auVar51[0xc] = (undefined1)(auVar10._12_4_ >> 0x17);
      auVar51._13_3_ = 0;
      auVar50._0_4_ = fVar48 * fVar48 * fVar48;
      auVar50._4_4_ = fVar8 * fVar8 * fVar8;
      auVar50._8_4_ = fVar28 * fVar28 * fVar28;
      auVar50._12_4_ = fVar30 * fVar30 * fVar30;
      auVar38 = NEON_scvtf(auVar51,4);
      auVar10 = NEON_frecpe(auVar50,4);
      auVar51 = NEON_frecps(auVar50,auVar10,4);
      auVar35._0_4_ =
           -(param_2 +
            auVar29._0_4_ *
            (auVar51._0_4_ * auVar10._0_4_ * (fVar13 * fVar13 * fVar13 * -1.1581186 + 1.1581186) +
            (127.0 - auVar38._0_4_) * 0.30103));
      auVar35._4_4_ =
           -(param_2 +
            auVar29._4_4_ *
            (auVar51._4_4_ * auVar10._4_4_ * (fVar14 * fVar14 * fVar14 * -1.1581186 + 1.1581186) +
            (127.0 - auVar38._4_4_) * 0.30103));
      auVar35._8_4_ =
           -(param_2 +
            auVar29._8_4_ *
            (auVar51._8_4_ * auVar10._8_4_ * (fVar16 * fVar16 * fVar16 * -1.1581186 + 1.1581186) +
            (127.0 - auVar38._8_4_) * 0.30103));
      auVar35._12_4_ =
           -(param_2 +
            auVar29._12_4_ *
            (auVar51._12_4_ * auVar10._12_4_ * (fVar17 * fVar17 * fVar17 * -1.1581186 + 1.1581186) +
            (127.0 - auVar38._12_4_) * 0.30103));
      auVar10 = NEON_fmax(auVar35,ZEXT816(0),4);
      pauVar4 = pauVar5 + 1;
      *(long *)(*pauVar5 + 8) = auVar10._8_8_;
      *(long *)*pauVar5 = auVar10._0_8_;
      pauVar5 = pauVar4;
    } while (pauVar4 < pauVar2);
    pauVar5 = param_8;
    do {
      fVar11 = fVar11 - *(float *)*pauVar5;
      fVar13 = param_5;
      if (fVar11 < 0.0) {
        fVar13 = param_4;
      }
      fVar13 = *(float *)*pauVar5 + fVar11 * fVar13;
      fVar14 = fVar13 - *(float *)(*pauVar5 + 4);
      fVar11 = param_5;
      if (fVar14 < 0.0) {
        fVar11 = param_4;
      }
      fVar14 = *(float *)(*pauVar5 + 4) + fVar14 * fVar11;
      fVar11 = *(float *)(*pauVar5 + 0xc);
      fVar16 = fVar14 - *(float *)(*pauVar5 + 8);
      uVar19 = (undefined1)((uint)param_5 >> 8);
      uVar24 = (undefined1)((uint)param_5 >> 0x10);
      uVar25 = (undefined1)((uint)param_5 >> 0x18);
      uVar20 = (undefined1)((uint)param_4 >> 8);
      uVar22 = (undefined1)((uint)param_4 >> 0x10);
      uVar26 = (undefined1)((uint)param_4 >> 0x18);
      uVar18 = SUB41(param_5,0);
      uVar21 = uVar19;
      uVar23 = uVar24;
      uVar27 = uVar25;
      if (fVar16 < 0.0) {
        uVar18 = SUB41(param_4,0);
        uVar21 = uVar20;
        uVar23 = uVar22;
        uVar27 = uVar26;
      }
      fVar16 = *(float *)(*pauVar5 + 8) +
               fVar16 * (float)CONCAT13(uVar27,CONCAT12(uVar23,CONCAT11(uVar21,uVar18)));
      fVar17 = fVar16 - fVar11;
      uVar18 = SUB41(param_5,0);
      if (fVar17 < 0.0) {
        uVar18 = SUB41(param_4,0);
        uVar19 = uVar20;
        uVar24 = uVar22;
        uVar25 = uVar26;
      }
      *(float *)*pauVar5 = fVar13;
      *(float *)(*pauVar5 + 4) = fVar14;
      fVar11 = fVar11 + fVar17 * (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar19,uVar18)));
      *(float *)(*pauVar5 + 8) = fVar16;
      *(float *)(*pauVar5 + 0xc) = fVar11;
      pauVar5 = pauVar5 + 1;
    } while (pauVar5 < pauVar2);
    pauVar5 = param_8;
    do {
      fVar13 = *(float *)*pauVar5 * param_3;
      fVar14 = *(float *)(*pauVar5 + 4) * param_3;
      fVar16 = *(float *)(*pauVar5 + 8) * param_3;
      fVar17 = *(float *)(*pauVar5 + 0xc) * param_3;
      iVar44 = -(uint)(-37.0 <= fVar13 * 0.05);
      iVar45 = -(uint)(-37.0 <= fVar14 * 0.05);
      iVar46 = -(uint)(-37.0 <= fVar16 * 0.05);
      iVar47 = -(uint)(-37.0 <= fVar17 * 0.05);
      uVar36 = (uint)(fVar13 * 1393317.6 + 1.0653532e+09);
      iVar39 = (int)(fVar14 * 1393317.6 + 1.0653532e+09);
      iVar40 = (int)(fVar16 * 1393317.6 + 1.0653532e+09);
      iVar42 = (int)(fVar17 * 1393317.6 + 1.0653532e+09);
      uVar18 = (undefined1)((uint)iVar39 >> 0x10);
      auVar49._0_8_ =
           CONCAT17((char)((uint)iVar39 >> 0x18),
                    CONCAT16(uVar18,(uint6)((uVar36 >> 0x10 & 0xff80) << 0x10))) &
           0xff80ffffffffffff;
      auVar49._8_2_ = 0;
      bVar41 = (byte)((uint)iVar40 >> 0x10);
      auVar49[10] = bVar41 & 0x80;
      auVar49[0xb] = (char)((uint)iVar40 >> 0x18);
      auVar10._12_2_ = 0;
      auVar10._0_12_ = auVar49;
      bVar43 = (byte)((uint)iVar42 >> 0x10);
      auVar10[0xe] = bVar43 & 0x80;
      auVar10[0xf] = (char)((uint)iVar42 >> 0x18);
      uVar33 = CONCAT16(uVar18,CONCAT15((char)((uint)iVar39 >> 8),
                                        CONCAT14((char)iVar39,(uint)((uint3)uVar36 & 0x7fffff)))) &
               0x7fffffffffffff;
      fVar13 = (float)CONCAT13(auVar15[3],
                               CONCAT12((byte)(uVar33 >> 0x10) | auVar15[2],
                                        CONCAT11((byte)(uVar33 >> 8) | auVar15[1],
                                                 (byte)uVar33 | auVar15[0])));
      auVar37._0_8_ =
           CONCAT17(auVar15[7],
                    CONCAT16((byte)(uVar33 >> 0x30) | auVar15[6],
                             CONCAT15((byte)(uVar33 >> 0x28) | auVar15[5],
                                      CONCAT14((byte)(uVar33 >> 0x20) | auVar15[4],fVar13))));
      auVar37[8] = (byte)iVar40 | auVar15[8];
      auVar37[9] = (byte)((uint)iVar40 >> 8) | auVar15[9];
      auVar37[10] = bVar41 & 0x7f | auVar15[10];
      auVar37[0xb] = auVar15[0xb];
      auVar29[0xc] = (byte)iVar42 | auVar15[0xc];
      auVar29._0_12_ = auVar37;
      auVar29[0xd] = (byte)((uint)iVar42 >> 8) | auVar15[0xd];
      auVar29[0xe] = bVar43 & 0x7f | auVar15[0xe];
      auVar29[0xf] = auVar15[0xf];
      fVar14 = (float)((ulong)auVar37._0_8_ >> 0x20);
      fVar13 = (fVar13 * (fVar13 * 0.32518977 + 0.020805772) + 0.65304345) * (float)auVar49._0_8_;
      fVar14 = (fVar14 * (fVar14 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(auVar49._0_8_ >> 0x20);
      fVar16 = (auVar37._8_4_ * (auVar37._8_4_ * 0.32518977 + 0.020805772) + 0.65304345) *
               auVar49._8_4_;
      fVar17 = (auVar29._12_4_ * (auVar29._12_4_ * 0.32518977 + 0.020805772) + 0.65304345) *
               auVar10._12_4_;
      pauVar4 = pauVar5 + 1;
      (*pauVar5)[8] = SUB41(fVar16,0) & (byte)iVar46;
      (*pauVar5)[9] = (byte)((uint)fVar16 >> 8) & (byte)((uint)iVar46 >> 8);
      (*pauVar5)[10] = (byte)((uint)fVar16 >> 0x10) & (byte)((uint)iVar46 >> 0x10);
      (*pauVar5)[0xb] = (byte)((uint)fVar16 >> 0x18) & (byte)((uint)iVar46 >> 0x18);
      (*pauVar5)[0xc] = SUB41(fVar17,0) & (byte)iVar47;
      (*pauVar5)[0xd] = (byte)((uint)fVar17 >> 8) & (byte)((uint)iVar47 >> 8);
      (*pauVar5)[0xe] = (byte)((uint)fVar17 >> 0x10) & (byte)((uint)iVar47 >> 0x10);
      (*pauVar5)[0xf] = (byte)((uint)fVar17 >> 0x18) & (byte)((uint)iVar47 >> 0x18);
      (*pauVar5)[0] = SUB41(fVar13,0) & (byte)iVar44;
      (*pauVar5)[1] = (byte)((uint)fVar13 >> 8) & (byte)((uint)iVar44 >> 8);
      (*pauVar5)[2] = (byte)((uint)fVar13 >> 0x10) & (byte)((uint)iVar44 >> 0x10);
      (*pauVar5)[3] = (byte)((uint)fVar13 >> 0x18) & (byte)((uint)iVar44 >> 0x18);
      (*pauVar5)[4] = SUB41(fVar14,0) & (byte)iVar45;
      (*pauVar5)[5] = (byte)((uint)fVar14 >> 8) & (byte)((uint)iVar45 >> 8);
      (*pauVar5)[6] = (byte)((uint)fVar14 >> 0x10) & (byte)((uint)iVar45 >> 0x10);
      (*pauVar5)[7] = (byte)((uint)fVar14 >> 0x18) & (byte)((uint)iVar45 >> 0x18);
      pauVar5 = pauVar4;
    } while (pauVar4 < pauVar2);
  }
  if (uVar7 < param_10) {
    do {
      fVar12 = fVar12 * param_6 + fVar9 * (param_1 * *(float *)*pauVar2 + 1e-25);
      fVar13 = (float)((uint)fVar12 & 0x7fffff | 0x3f800000);
      fVar14 = fVar13 + 1.0;
      fVar13 = -(((float)((uint)fVar12 >> 0x17 & 0xff) * -0.30103 + 38.230812 +
                 (fVar13 * fVar13 * fVar13 * -1.1581186 + 1.1581186) / (fVar14 * fVar14 * fVar14)) *
                10.0) - param_2;
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      fVar14 = param_5;
      if (fVar11 - fVar13 < 0.0) {
        fVar14 = param_4;
      }
      fVar11 = fVar13 + (fVar11 - fVar13) * fVar14;
      fVar13 = 0.0;
      if (-37.0 <= fVar11 * param_3 * 0.05) {
        uVar7 = (uint)(fVar11 * param_3 * 1393317.6 + 1.0653532e+09);
        fVar13 = (float)(uVar7 & 0x7fffff | 0x3f800000);
        fVar13 = (fVar13 * (fVar13 * 0.32518977 + 0.020805772) + 0.65304345) *
                 (float)(uVar7 & 0xff800000);
      }
      puVar1 = *pauVar2;
      *(float *)*pauVar2 = fVar13;
      pauVar2 = (undefined1 (*) [16])(puVar1 + 4);
    } while ((undefined1 (*) [16])(puVar1 + 4) <
             (undefined1 (*) [16])(*param_8 + (ulong)param_10 * 4));
  }
  *param_11 = fVar11;
  param_11[1] = fVar12;
  if ((param_9 != 0) && (param_10 != 0)) {
    uVar3 = 0;
    do {
      pfVar6 = *(float **)(param_7 + uVar3 * 8);
      pauVar2 = param_8;
      do {
        puVar1 = *pauVar2;
        *pfVar6 = *pfVar6 * *(float *)*pauVar2;
        pfVar6 = pfVar6 + 1;
        pauVar2 = (undefined1 (*) [16])(puVar1 + 4);
      } while ((undefined1 (*) [16])(puVar1 + 4) <
               (undefined1 (*) [16])(*param_8 + (ulong)param_10 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_9);
  }
  return;
}


