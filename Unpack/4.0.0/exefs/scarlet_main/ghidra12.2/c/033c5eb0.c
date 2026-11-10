/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033c5eb0; name: FUN_033c5eb0
 */


void FUN_033c5eb0(uint param_1,uint param_2,long param_3,long param_4,long param_5,long param_6)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  iVar2 = -(uint)((param_2 & 1) != 0);
  if (param_1 != 0) {
    auVar15._4_4_ = iVar2;
    auVar15._0_4_ = iVar2;
    auVar15._8_4_ = iVar2;
    auVar15._12_4_ = iVar2;
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar17 = NEON_fmov(0xbf800000,4);
    auVar16 = auVar16 ^ (auVar16 ^ auVar17) & auVar15;
    uVar12 = 0;
    do {
      uVar1 = (int)uVar12 + 8;
      lVar13 = uVar12 * 4;
      lVar14 = (ulong)((int)uVar12 + 4) * 4;
      pfVar3 = (float *)(param_3 + lVar13);
      fVar6 = *pfVar3;
      fVar7 = pfVar3[1];
      fVar8 = pfVar3[3];
      pfVar4 = (float *)(param_4 + lVar13);
      fVar9 = *pfVar4;
      fVar10 = pfVar4[1];
      fVar11 = pfVar4[3];
      uVar24 = ((undefined8 *)(param_3 + lVar14))[1];
      uVar21 = *(undefined8 *)(param_3 + lVar14);
      uVar27 = ((undefined8 *)(param_4 + lVar14))[1];
      uVar26 = *(undefined8 *)(param_4 + lVar14);
      uVar19 = ((undefined8 *)(param_5 + lVar13))[1];
      uVar18 = *(undefined8 *)(param_5 + lVar13);
      uVar29 = ((undefined8 *)(param_5 + lVar14))[1];
      uVar28 = *(undefined8 *)(param_5 + lVar14);
      fVar20 = (float)uVar21;
      fVar22 = (float)((ulong)uVar21 >> 0x20);
      fVar23 = (float)uVar24;
      fVar25 = (float)((ulong)uVar24 >> 0x20);
      pfVar5 = (float *)(param_6 + lVar13);
      pfVar5[2] = (pfVar3[2] + (pfVar4[2] - pfVar3[2]) * (float)uVar19) * auVar16._8_4_;
      pfVar5[3] = (fVar8 + (fVar11 - fVar8) * (float)((ulong)uVar19 >> 0x20)) * auVar16._12_4_;
      *pfVar5 = (fVar6 + (fVar9 - fVar6) * (float)uVar18) * auVar16._0_4_;
      pfVar5[1] = (fVar7 + (fVar10 - fVar7) * (float)((ulong)uVar18 >> 0x20)) * auVar16._4_4_;
      pfVar3 = (float *)(param_6 + lVar14);
      pfVar3[2] = (fVar23 + ((float)uVar27 - fVar23) * (float)uVar29) * auVar16._8_4_;
      pfVar3[3] = (fVar25 + ((float)((ulong)uVar27 >> 0x20) - fVar25) *
                            (float)((ulong)uVar29 >> 0x20)) * auVar16._12_4_;
      *pfVar3 = (fVar20 + ((float)uVar26 - fVar20) * (float)uVar28) * auVar16._0_4_;
      pfVar3[1] = (fVar22 + ((float)((ulong)uVar26 >> 0x20) - fVar22) *
                            (float)((ulong)uVar28 >> 0x20)) * auVar16._4_4_;
      uVar12 = (ulong)uVar1;
    } while (uVar1 < param_1);
  }
  return;
}


