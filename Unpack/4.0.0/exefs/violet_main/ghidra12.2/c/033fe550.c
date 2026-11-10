/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033fe550; name: FUN_033fe550
 */


void FUN_033fe550(float param_1,float param_2,float param_3,float param_4,float param_5,
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
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  uint7 uVar26;
  undefined1 auVar27 [12];
  uint uVar28;
  int iVar33;
  undefined1 auVar29 [12];
  int iVar32;
  byte bVar34;
  byte bVar37;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar35;
  int iVar36;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  float fVar42;
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  fVar9 = 1.0 - param_6;
  uVar7 = param_10 & 0xfffffffc;
  fVar11 = *param_11;
  fVar12 = param_11[1];
  pauVar2 = (undefined1 (*) [16])(*param_8 + (ulong)uVar7 * 4);
  fVar13 = fVar9 * param_6;
  fVar14 = fVar13 * param_6;
  if (uVar7 != 0) {
    fVar16 = param_6 * param_6 * param_6;
    uVar17 = SUB41(fVar12,0);
    uVar18 = (undefined1)((uint)fVar12 >> 8);
    uVar19 = (undefined1)((uint)fVar12 >> 0x10);
    uVar20 = (undefined1)((uint)fVar12 >> 0x18);
    pauVar5 = param_8;
    do {
      fVar21 = param_1 * (float)*(undefined8 *)*pauVar5 + 1e-25;
      fVar23 = param_1 * (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20) + 1e-25;
      fVar24 = param_1 * (float)*(undefined8 *)(*pauVar5 + 8) + 1e-25;
      fVar25 = param_1 * (float)((ulong)*(undefined8 *)(*pauVar5 + 8) >> 0x20) + 1e-25;
      fVar35 = (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
      fVar42 = (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
      fVar8 = fVar16 * fVar12;
      fVar12 = fVar9 * fVar25 + fVar13 * fVar24 + fVar14 * fVar23 + fVar14 * param_6 * fVar21 +
               fVar16 * param_6 * fVar12;
      uVar17 = SUB41(fVar12,0);
      uVar18 = (undefined1)((uint)fVar12 >> 8);
      uVar19 = (undefined1)((uint)fVar12 >> 0x10);
      uVar20 = (undefined1)((uint)fVar12 >> 0x18);
      pauVar4 = pauVar5 + 1;
      *(ulong *)(*pauVar5 + 8) =
           CONCAT44(fVar12,fVar25 * 0.0 + fVar9 * fVar24 + fVar13 * fVar23 + fVar14 * fVar21 + fVar8
                   );
      *(ulong *)*pauVar5 =
           CONCAT44(fVar25 * 0.0 + fVar24 * 0.0 + fVar9 * fVar23 + fVar13 * fVar21 +
                    param_6 * param_6 * fVar42,
                    fVar25 * 0.0 + fVar24 * 0.0 + fVar23 * 0.0 + fVar9 * fVar21 + param_6 * fVar35);
      pauVar5 = pauVar4;
    } while (pauVar4 < pauVar2);
    auVar15 = NEON_fmov(0x3f800000,4);
    auVar22 = NEON_fmov(0x41200000,4);
    pauVar5 = param_8;
    do {
      auVar10 = *pauVar5;
      uVar26 = CONCAT16(auVar10[6],
                        CONCAT15(auVar10[5],CONCAT14(auVar10[4],(uint)(auVar10._0_3_ & 0x7fffff))))
               & 0x7fffffffffffff;
      fVar13 = (float)CONCAT13(auVar15[3],
                               CONCAT12((byte)(uVar26 >> 0x10) | auVar15[2],
                                        CONCAT11((byte)(uVar26 >> 8) | auVar15[1],
                                                 (byte)uVar26 | auVar15[0])));
      auVar27._0_8_ =
           CONCAT17(auVar15[7],
                    CONCAT16((byte)(uVar26 >> 0x30) | auVar15[6],
                             CONCAT15((byte)(uVar26 >> 0x28) | auVar15[5],
                                      CONCAT14((byte)(uVar26 >> 0x20) | auVar15[4],fVar13))));
      auVar27[8] = auVar10[8] | auVar15[8];
      auVar27[9] = auVar10[9] | auVar15[9];
      auVar27[10] = auVar10[10] & 0x7f | auVar15[10];
      auVar27[0xb] = auVar15[0xb];
      auVar30[0xc] = auVar10[0xc] | auVar15[0xc];
      auVar30._0_12_ = auVar27;
      auVar30[0xd] = auVar10[0xd] | auVar15[0xd];
      auVar30[0xe] = auVar10[0xe] & 0x7f | auVar15[0xe];
      auVar30[0xf] = auVar15[0xf];
      fVar42 = fVar13 + auVar15._0_4_;
      fVar14 = (float)((ulong)auVar27._0_8_ >> 0x20);
      fVar8 = fVar14 + auVar15._4_4_;
      fVar16 = auVar27._8_4_;
      fVar21 = fVar16 + auVar15._8_4_;
      fVar35 = auVar30._12_4_;
      fVar23 = fVar35 + auVar15._12_4_;
      auVar45._0_5_ = CONCAT14((char)(auVar10._4_4_ >> 0x17),auVar10._0_4_ >> 0x17) & 0xff000000ff;
      auVar45._5_3_ = 0;
      auVar45[8] = (undefined1)(auVar10._8_4_ >> 0x17);
      auVar45._9_3_ = 0;
      auVar45[0xc] = (undefined1)(auVar10._12_4_ >> 0x17);
      auVar45._13_3_ = 0;
      auVar44._0_4_ = fVar42 * fVar42 * fVar42;
      auVar44._4_4_ = fVar8 * fVar8 * fVar8;
      auVar44._8_4_ = fVar21 * fVar21 * fVar21;
      auVar44._12_4_ = fVar23 * fVar23 * fVar23;
      auVar30 = NEON_scvtf(auVar45,4);
      auVar10 = NEON_frecpe(auVar44,4);
      auVar45 = NEON_frecps(auVar44,auVar10,4);
      auVar31._0_4_ =
           param_2 + auVar22._0_4_ *
                     (auVar45._0_4_ *
                      auVar10._0_4_ * (fVar13 * fVar13 * fVar13 * -1.1581186 + 1.1581186) +
                     (127.0 - auVar30._0_4_) * 0.30103);
      auVar31._4_4_ =
           param_2 + auVar22._4_4_ *
                     (auVar45._4_4_ *
                      auVar10._4_4_ * (fVar14 * fVar14 * fVar14 * -1.1581186 + 1.1581186) +
                     (127.0 - auVar30._4_4_) * 0.30103);
      auVar31._8_4_ =
           param_2 + auVar22._8_4_ *
                     (auVar45._8_4_ *
                      auVar10._8_4_ * (fVar16 * fVar16 * fVar16 * -1.1581186 + 1.1581186) +
                     (127.0 - auVar30._8_4_) * 0.30103);
      auVar31._12_4_ =
           param_2 + auVar22._12_4_ *
                     (auVar45._12_4_ *
                      auVar10._12_4_ * (fVar35 * fVar35 * fVar35 * -1.1581186 + 1.1581186) +
                     (127.0 - auVar30._12_4_) * 0.30103);
      auVar10 = NEON_fmax(auVar31,ZEXT816(0),4);
      pauVar4 = pauVar5 + 1;
      *(long *)(*pauVar5 + 8) = auVar10._8_8_;
      *(long *)*pauVar5 = auVar10._0_8_;
      pauVar5 = pauVar4;
    } while (pauVar4 < pauVar2);
    pauVar5 = param_8;
    do {
      fVar14 = *(float *)*pauVar5;
      fVar16 = *(float *)(*pauVar5 + 4);
      fVar11 = fVar11 - fVar14;
      fVar13 = param_4;
      if (fVar11 < 0.0) {
        fVar13 = param_5;
      }
      fVar42 = (fVar14 + fVar11 * fVar13) - fVar16;
      fVar35 = param_4;
      if (fVar42 < 0.0) {
        fVar35 = param_5;
      }
      fVar8 = *(float *)(*pauVar5 + 8);
      fVar21 = *(float *)(*pauVar5 + 0xc);
      fVar23 = (fVar16 + fVar42 * fVar35) - fVar8;
      uVar17 = SUB41(param_4,0);
      uVar18 = (undefined1)((uint)param_4 >> 8);
      uVar19 = (undefined1)((uint)param_4 >> 0x10);
      uVar20 = (undefined1)((uint)param_4 >> 0x18);
      if (fVar23 < 0.0) {
        uVar17 = SUB41(param_5,0);
        uVar18 = (undefined1)((uint)param_5 >> 8);
        uVar19 = (undefined1)((uint)param_5 >> 0x10);
        uVar20 = (undefined1)((uint)param_5 >> 0x18);
      }
      fVar24 = (fVar8 + fVar23 * (float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))) -
               fVar21;
      fVar25 = param_4;
      if (fVar24 < 0.0) {
        fVar25 = param_5;
      }
      *(float *)*pauVar5 = -(fVar13 * fVar11) - fVar14;
      *(float *)(*pauVar5 + 4) = -(fVar35 * fVar42) - fVar16;
      fVar11 = fVar21 + fVar24 * fVar25;
      *(float *)(*pauVar5 + 8) =
           -((float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))) * fVar23) - fVar8;
      *(float *)(*pauVar5 + 0xc) = -(fVar25 * fVar24) - fVar21;
      pauVar5 = pauVar5 + 1;
    } while (pauVar5 < pauVar2);
    pauVar5 = param_8;
    do {
      fVar13 = *(float *)*pauVar5 * param_3;
      fVar14 = *(float *)(*pauVar5 + 4) * param_3;
      fVar16 = *(float *)(*pauVar5 + 8) * param_3;
      fVar35 = *(float *)(*pauVar5 + 0xc) * param_3;
      iVar38 = -(uint)(-37.0 <= fVar13 * 0.05);
      iVar39 = -(uint)(-37.0 <= fVar14 * 0.05);
      iVar40 = -(uint)(-37.0 <= fVar16 * 0.05);
      iVar41 = -(uint)(-37.0 <= fVar35 * 0.05);
      uVar28 = (uint)(fVar13 * 1393317.6 + 1.0653532e+09);
      iVar32 = (int)(fVar14 * 1393317.6 + 1.0653532e+09);
      iVar33 = (int)(fVar16 * 1393317.6 + 1.0653532e+09);
      iVar36 = (int)(fVar35 * 1393317.6 + 1.0653532e+09);
      uVar17 = (undefined1)((uint)iVar32 >> 0x10);
      auVar43._0_8_ =
           CONCAT17((char)((uint)iVar32 >> 0x18),
                    CONCAT16(uVar17,(uint6)((uVar28 >> 0x10 & 0xff80) << 0x10))) &
           0xff80ffffffffffff;
      auVar43._8_2_ = 0;
      bVar34 = (byte)((uint)iVar33 >> 0x10);
      auVar43[10] = bVar34 & 0x80;
      auVar43[0xb] = (char)((uint)iVar33 >> 0x18);
      auVar10._12_2_ = 0;
      auVar10._0_12_ = auVar43;
      bVar37 = (byte)((uint)iVar36 >> 0x10);
      auVar10[0xe] = bVar37 & 0x80;
      auVar10[0xf] = (char)((uint)iVar36 >> 0x18);
      uVar26 = CONCAT16(uVar17,CONCAT15((char)((uint)iVar32 >> 8),
                                        CONCAT14((char)iVar32,(uint)((uint3)uVar28 & 0x7fffff)))) &
               0x7fffffffffffff;
      fVar13 = (float)CONCAT13(auVar15[3],
                               CONCAT12((byte)(uVar26 >> 0x10) | auVar15[2],
                                        CONCAT11((byte)(uVar26 >> 8) | auVar15[1],
                                                 (byte)uVar26 | auVar15[0])));
      auVar29._0_8_ =
           CONCAT17(auVar15[7],
                    CONCAT16((byte)(uVar26 >> 0x30) | auVar15[6],
                             CONCAT15((byte)(uVar26 >> 0x28) | auVar15[5],
                                      CONCAT14((byte)(uVar26 >> 0x20) | auVar15[4],fVar13))));
      auVar29[8] = (byte)iVar33 | auVar15[8];
      auVar29[9] = (byte)((uint)iVar33 >> 8) | auVar15[9];
      auVar29[10] = bVar34 & 0x7f | auVar15[10];
      auVar29[0xb] = auVar15[0xb];
      auVar22[0xc] = (byte)iVar36 | auVar15[0xc];
      auVar22._0_12_ = auVar29;
      auVar22[0xd] = (byte)((uint)iVar36 >> 8) | auVar15[0xd];
      auVar22[0xe] = bVar37 & 0x7f | auVar15[0xe];
      auVar22[0xf] = auVar15[0xf];
      fVar14 = (float)((ulong)auVar29._0_8_ >> 0x20);
      fVar13 = (fVar13 * (fVar13 * 0.32518977 + 0.020805772) + 0.65304345) * (float)auVar43._0_8_;
      fVar14 = (fVar14 * (fVar14 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(auVar43._0_8_ >> 0x20);
      fVar16 = (auVar29._8_4_ * (auVar29._8_4_ * 0.32518977 + 0.020805772) + 0.65304345) *
               auVar43._8_4_;
      fVar35 = (auVar22._12_4_ * (auVar22._12_4_ * 0.32518977 + 0.020805772) + 0.65304345) *
               auVar10._12_4_;
      pauVar4 = pauVar5 + 1;
      (*pauVar5)[8] = SUB41(fVar16,0) & (byte)iVar40;
      (*pauVar5)[9] = (byte)((uint)fVar16 >> 8) & (byte)((uint)iVar40 >> 8);
      (*pauVar5)[10] = (byte)((uint)fVar16 >> 0x10) & (byte)((uint)iVar40 >> 0x10);
      (*pauVar5)[0xb] = (byte)((uint)fVar16 >> 0x18) & (byte)((uint)iVar40 >> 0x18);
      (*pauVar5)[0xc] = SUB41(fVar35,0) & (byte)iVar41;
      (*pauVar5)[0xd] = (byte)((uint)fVar35 >> 8) & (byte)((uint)iVar41 >> 8);
      (*pauVar5)[0xe] = (byte)((uint)fVar35 >> 0x10) & (byte)((uint)iVar41 >> 0x10);
      (*pauVar5)[0xf] = (byte)((uint)fVar35 >> 0x18) & (byte)((uint)iVar41 >> 0x18);
      (*pauVar5)[0] = SUB41(fVar13,0) & (byte)iVar38;
      (*pauVar5)[1] = (byte)((uint)fVar13 >> 8) & (byte)((uint)iVar38 >> 8);
      (*pauVar5)[2] = (byte)((uint)fVar13 >> 0x10) & (byte)((uint)iVar38 >> 0x10);
      (*pauVar5)[3] = (byte)((uint)fVar13 >> 0x18) & (byte)((uint)iVar38 >> 0x18);
      (*pauVar5)[4] = SUB41(fVar14,0) & (byte)iVar39;
      (*pauVar5)[5] = (byte)((uint)fVar14 >> 8) & (byte)((uint)iVar39 >> 8);
      (*pauVar5)[6] = (byte)((uint)fVar14 >> 0x10) & (byte)((uint)iVar39 >> 0x10);
      (*pauVar5)[7] = (byte)((uint)fVar14 >> 0x18) & (byte)((uint)iVar39 >> 0x18);
      pauVar5 = pauVar4;
    } while (pauVar4 < pauVar2);
  }
  if (uVar7 < param_10) {
    do {
      fVar12 = fVar12 * param_6 + fVar9 * (param_1 * *(float *)*pauVar2 + 1e-25);
      fVar13 = (float)((uint)fVar12 & 0x7fffff | 0x3f800000);
      fVar14 = fVar13 + 1.0;
      fVar13 = param_2 + ((float)((uint)fVar12 >> 0x17 & 0xff) * -0.30103 + 38.230812 +
                         (fVar13 * fVar13 * fVar13 * -1.1581186 + 1.1581186) /
                         (fVar14 * fVar14 * fVar14)) * 10.0;
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      fVar14 = param_4;
      if (fVar11 - fVar13 < 0.0) {
        fVar14 = param_5;
      }
      fVar11 = fVar13 + (fVar11 - fVar13) * fVar14;
      fVar13 = 0.0;
      if (-37.0 <= fVar11 * -param_3 * 0.05) {
        uVar7 = (uint)(fVar11 * -param_3 * 1393317.6 + 1.0653532e+09);
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


