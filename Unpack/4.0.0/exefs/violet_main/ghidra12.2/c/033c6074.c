/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c6074; name: FUN_033c6074
 */


void FUN_033c6074(float param_1,long param_2,uint param_3,long param_4,long param_5,long param_6,
                 long param_7)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  fVar28 = *(float *)(param_4 + 0x14);
  fVar23 = *(float *)(param_4 + 0x18) * param_1;
  fVar12 = fVar23 + param_1 * *(float *)(param_4 + 0x20);
  fVar22 = *(float *)(param_2 + 0xc);
  fVar13 = fVar28 + fVar22 * fVar12;
  fVar27 = fVar12 + fVar23;
  lVar1 = param_7 + (ulong)param_3 * 4;
  fVar25 = fVar27 + fVar23;
  fVar14 = fVar13 + fVar22 * fVar27;
  fVar15 = fVar14 + fVar22 * fVar25;
  auVar16._0_4_ = fVar28 - (float)(int)fVar28;
  auVar16._4_4_ = fVar13 - (float)(int)fVar13;
  auVar16._8_4_ = fVar14 - (float)(int)fVar14;
  auVar16._12_4_ = fVar15 - (float)(int)fVar15;
  if (param_3 != 0) {
    fVar33 = *(float *)(param_2 + 0xb0);
    fVar31 = fVar33 + *(float *)(param_2 + 0xb8);
    fVar30 = fVar22 * 6.0 * fVar23;
    fVar34 = fVar31 + fVar33;
    fVar13 = fVar34 + fVar33;
    fVar28 = fVar23 * 4.0;
    fVar29 = fVar22 * 4.0;
    fVar32 = fVar33 * 4.0;
    fVar33 = fVar13 + fVar33;
    fVar15 = fVar22 * 20000.0;
    auVar24 = NEON_fmov(0x3f800000,4);
    auVar26 = NEON_fmov(0xbf800000,4);
    uVar10 = 0;
    fVar14 = fVar25 + fVar23;
    do {
      lVar11 = uVar10 * 4;
      uVar9 = ((undefined8 *)(param_6 + lVar11))[1];
      uVar8 = *(undefined8 *)(param_6 + lVar11);
      uVar2 = (int)uVar10 + 4;
      uVar10 = (ulong)uVar2;
      fVar23 = auVar16._0_4_ + (float)uVar8 * fVar31 * 0.2 * (fVar15 - fVar12 * fVar22);
      fVar19 = auVar16._4_4_ +
               (float)((ulong)uVar8 >> 0x20) * fVar34 * 0.2 * (fVar15 - fVar27 * fVar22);
      fVar20 = auVar16._8_4_ + (float)uVar9 * fVar13 * 0.2 * (fVar15 - fVar25 * fVar22);
      fVar21 = auVar16._12_4_ +
               (float)((ulong)uVar9 >> 0x20) * fVar33 * 0.2 * (fVar15 - fVar14 * fVar22);
      fVar31 = fVar31 + fVar32;
      fVar34 = fVar34 + fVar32;
      fVar13 = fVar13 + fVar32;
      fVar33 = fVar33 + fVar32;
      fVar35 = auVar16._0_4_ + fVar30 + fVar29 * fVar12;
      fVar36 = auVar16._4_4_ + fVar30 + fVar29 * fVar27;
      fVar37 = auVar16._8_4_ + fVar30 + fVar29 * fVar25;
      fVar38 = auVar16._12_4_ + fVar30 + fVar29 * fVar14;
      auVar17._0_4_ = fVar23 - (float)(int)fVar23;
      auVar17._4_4_ = fVar19 - (float)(int)fVar19;
      auVar17._8_4_ = fVar20 - (float)(int)fVar20;
      auVar17._12_4_ = fVar21 - (float)(int)fVar21;
      fVar23 = auVar17._4_4_ + auVar24._4_4_;
      fVar19 = auVar17._8_4_ + auVar24._8_4_;
      fVar20 = auVar17._12_4_ + auVar24._12_4_;
      auVar18[4] = SUB41(fVar23,0);
      auVar18._0_4_ = auVar17._0_4_ + auVar24._0_4_;
      auVar18[5] = (char)((uint)fVar23 >> 8);
      auVar18[6] = (char)((uint)fVar23 >> 0x10);
      auVar18[7] = (char)((uint)fVar23 >> 0x18);
      auVar18[8] = SUB41(fVar19,0);
      auVar18[9] = (char)((uint)fVar19 >> 8);
      auVar18[10] = (char)((uint)fVar19 >> 0x10);
      auVar18[0xb] = (char)((uint)fVar19 >> 0x18);
      auVar18[0xc] = SUB41(fVar20,0);
      auVar18[0xd] = (char)((uint)fVar20 >> 8);
      auVar18[0xe] = (char)((uint)fVar20 >> 0x10);
      auVar18[0xf] = (char)((uint)fVar20 >> 0x18);
      auVar6._4_4_ = -(uint)(auVar17._4_4_ < 0.0);
      auVar6._0_4_ = -(uint)(auVar17._0_4_ < 0.0);
      auVar6._8_4_ = -(uint)(auVar17._8_4_ < 0.0);
      auVar6._12_4_ = -(uint)(auVar17._12_4_ < 0.0);
      auVar17 = auVar17 ^ (auVar17 ^ auVar18) & auVar6;
      fVar23 = auVar17._0_4_ + auVar26._0_4_;
      fVar19 = auVar17._4_4_ + auVar26._4_4_;
      fVar20 = auVar17._8_4_ + auVar26._8_4_;
      fVar21 = auVar17._12_4_ + auVar26._12_4_;
      auVar3[4] = SUB41(fVar19,0);
      auVar3._0_4_ = fVar23;
      auVar3[5] = (char)((uint)fVar19 >> 8);
      auVar3[6] = (char)((uint)fVar19 >> 0x10);
      auVar3[7] = (char)((uint)fVar19 >> 0x18);
      auVar3[8] = SUB41(fVar20,0);
      auVar3[9] = (char)((uint)fVar20 >> 8);
      auVar3[10] = (char)((uint)fVar20 >> 0x10);
      auVar3[0xb] = (char)((uint)fVar20 >> 0x18);
      auVar3[0xc] = SUB41(fVar21,0);
      auVar3[0xd] = (char)((uint)fVar21 >> 8);
      auVar3[0xe] = (char)((uint)fVar21 >> 0x10);
      auVar3[0xf] = (char)((uint)fVar21 >> 0x18);
      auVar7._4_4_ = -(uint)(fVar19 < 0.0);
      auVar7._0_4_ = -(uint)(fVar23 < 0.0);
      auVar7._8_4_ = -(uint)(fVar20 < 0.0);
      auVar7._12_4_ = -(uint)(fVar21 < 0.0);
      auVar17 = auVar17 ^ (auVar17 ^ auVar3) & ~auVar7;
      fVar23 = auVar17._0_4_ * 512.0;
      fVar19 = auVar17._4_4_ * 512.0;
      fVar20 = auVar17._8_4_ * 512.0;
      fVar21 = auVar17._12_4_ * 512.0;
      auVar18 = NEON_fcvtzs(auVar17,9,4);
      ((undefined8 *)(param_7 + lVar11))[1] = auVar18._8_8_;
      *(undefined8 *)(param_7 + lVar11) = auVar18._0_8_;
      iVar4 = auVar18._4_4_ + 1;
      iVar5 = auVar18._12_4_ + 1;
      auVar16._0_4_ = fVar35 - (float)(int)fVar35;
      auVar16._4_4_ = fVar36 - (float)(int)fVar36;
      auVar16._8_4_ = fVar37 - (float)(int)fVar37;
      auVar16._12_4_ = fVar38 - (float)(int)fVar38;
      ((ulong *)(lVar1 + lVar11))[1] =
           (ulong)(CONCAT15((char)((uint)iVar5 >> 8),
                            CONCAT14((char)iVar5,(uint)(auVar18._8_2_ + 1U & 0x1ff))) &
                  0x1ffffffffff);
      *(ulong *)(lVar1 + lVar11) =
           (ulong)(CONCAT15((char)((uint)iVar4 >> 8),
                            CONCAT14((char)iVar4,(uint)(auVar18._0_2_ + 1U & 0x1ff))) &
                  0x1ffffffffff);
      ((undefined8 *)(param_5 + lVar11))[1] =
           CONCAT44(fVar21 - (float)(int)fVar21,fVar20 - (float)(int)fVar20);
      *(undefined8 *)(param_5 + lVar11) =
           CONCAT44(fVar19 - (float)(int)fVar19,fVar23 - (float)(int)fVar23);
      fVar25 = fVar25 + fVar28;
      fVar14 = fVar14 + fVar28;
      fVar12 = fVar12 + fVar28;
      fVar27 = fVar27 + fVar28;
    } while (uVar2 < param_3);
  }
  *(int *)(param_4 + 0x14) = auVar16._0_4_;
  FUN_033c5e00(*(undefined8 *)(param_4 + 8),param_3,param_7,lVar1);
  FUN_033c5eb0(param_3,*(undefined1 *)(param_4 + 0x3c),param_7,lVar1,param_5,param_5);
  return;
}


