/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f25f0; name: FUN_003f25f0
 */


undefined8 FUN_003f25f0(ulong *param_1,ulong *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined1 (*pauVar18) [16];
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  uVar2 = param_3 + 0x1f;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  iVar25 = (int)uVar2 >> 5;
  iVar6 = (int)param_2[1] - iVar25;
  if (iVar6 == 0 || (int)param_2[1] < iVar25) {
    FUN_003eb9f0(param_1,0);
    return 1;
  }
  if ((param_1 != param_2) && (lVar10 = FUN_003eb9a0(param_1,iVar6), lVar10 == 0)) {
    return 0;
  }
  uVar14 = *param_2;
  uVar2 = param_3 & 0x1f;
  uVar12 = *param_1;
  uVar24 = *(uint *)(uVar14 + (long)iVar25 * 4);
  if (iVar6 < 2) {
    uVar16 = 0;
    goto LAB_003f2710;
  }
  param_3 = -param_3;
  uVar13 = (ulong)(iVar6 + -1);
  uVar3 = param_3 & 0x1f;
  uVar4 = -uVar3;
  uVar5 = uVar4 | uVar4 >> 8;
  uVar15 = uVar13;
  if ((long)uVar13 < 2) {
    uVar15 = 1;
  }
  lVar10 = (long)iVar25;
  if (uVar15 < 0x10) {
LAB_003f26b0:
    uVar16 = 0;
LAB_003f26b4:
    uVar15 = uVar16;
    do {
      uVar16 = uVar15 + 1;
      uVar4 = uVar24 >> (ulong)uVar2;
      uVar24 = *(uint *)(uVar14 + lVar10 * 4 + 4 + uVar15 * 4);
      *(uint *)(uVar12 + uVar15 * 4) = uVar24 << (ulong)uVar3 & uVar5 | uVar4;
      uVar15 = uVar16;
    } while ((long)uVar16 < (long)uVar13);
  }
  else {
    uVar16 = uVar13;
    if ((long)uVar13 < 2) {
      uVar16 = 1;
    }
    lVar1 = uVar14 + lVar10 * 4;
    if ((uVar12 < uVar14 + (uVar16 + lVar10) * 4 + 4) && (lVar1 + 4U < uVar12 + uVar16 * 4))
    goto LAB_003f26b0;
    uVar16 = uVar15 & 0x7ffffffffffffff0;
    iVar25 = -uVar2;
    iVar26 = -uVar2;
    iVar27 = -uVar2;
    iVar28 = -uVar2;
    auVar23._4_4_ = uVar24;
    auVar23._0_4_ = uVar24;
    auVar23._8_4_ = uVar24;
    auVar23._12_4_ = uVar24;
    pauVar18 = (undefined1 (*) [16])(lVar1 + 0x24);
    uVar11 = uVar16;
    pbVar17 = (byte *)(uVar12 + 0x20);
    do {
      auVar36 = pauVar18[-2];
      auVar8 = pauVar18[-1];
      auVar33._8_4_ = uVar3;
      auVar33._0_8_ = CONCAT44(param_3,param_3) & 0x1f0000001f;
      auVar33._12_4_ = uVar3;
      auVar32 = NEON_ushl(auVar8,auVar33,4);
      auVar23 = NEON_ext(auVar23,auVar36,0xc,1);
      auVar33 = *pauVar18;
      auVar29._8_4_ = uVar3;
      auVar29._0_8_ = CONCAT44(param_3,param_3) & 0x1f0000001f;
      auVar29._12_4_ = uVar3;
      auVar34 = NEON_ushl(auVar33,auVar29,4);
      auVar31._4_4_ = iVar26;
      auVar31._0_4_ = iVar25;
      auVar31._8_4_ = iVar27;
      auVar31._12_4_ = iVar28;
      auVar35 = NEON_ushl(auVar23,auVar31,4);
      auVar23 = NEON_ext(auVar36,auVar8,0xc,1);
      auVar30._8_4_ = uVar3;
      auVar30._0_8_ = CONCAT44(param_3,param_3) & 0x1f0000001f;
      auVar30._12_4_ = uVar3;
      auVar31 = NEON_ushl(auVar36,auVar30,4);
      bVar19 = (byte)uVar5;
      bVar20 = (byte)(uVar5 >> 8);
      bVar21 = (byte)(uVar5 >> 0x10);
      bVar22 = (byte)(uVar4 >> 0x18);
      auVar7._4_4_ = iVar26;
      auVar7._0_4_ = iVar25;
      auVar7._8_4_ = iVar27;
      auVar7._12_4_ = iVar28;
      auVar29 = NEON_ushl(auVar23,auVar7,4);
      auVar23 = NEON_ext(auVar8,auVar33,0xc,1);
      auVar8._4_4_ = iVar26;
      auVar8._0_4_ = iVar25;
      auVar8._8_4_ = iVar27;
      auVar8._12_4_ = iVar28;
      auVar30 = NEON_ushl(auVar23,auVar8,4);
      auVar23 = pauVar18[1];
      auVar33 = NEON_ext(auVar33,auVar23,0xc,1);
      auVar36._8_4_ = uVar3;
      auVar36._0_8_ = CONCAT44(param_3,param_3) & 0x1f0000001f;
      auVar36._12_4_ = uVar3;
      auVar36 = NEON_ushl(auVar23,auVar36,4);
      pauVar18 = pauVar18 + 4;
      uVar11 = uVar11 - 0x10;
      auVar9._4_4_ = iVar26;
      auVar9._0_4_ = iVar25;
      auVar9._8_4_ = iVar27;
      auVar9._12_4_ = iVar28;
      auVar33 = NEON_ushl(auVar33,auVar9,4);
      pbVar17[-0x18] = auVar31[8] & bVar19 | auVar35[8];
      pbVar17[-0x17] = auVar31[9] & bVar20 | auVar35[9];
      pbVar17[-0x16] = auVar31[10] & bVar21 | auVar35[10];
      pbVar17[-0x15] = auVar31[0xb] & bVar22 | auVar35[0xb];
      pbVar17[-0x14] = auVar31[0xc] & bVar19 | auVar35[0xc];
      pbVar17[-0x13] = auVar31[0xd] & bVar20 | auVar35[0xd];
      pbVar17[-0x12] = auVar31[0xe] & bVar21 | auVar35[0xe];
      pbVar17[-0x11] = auVar31[0xf] & bVar22 | auVar35[0xf];
      pbVar17[-0x20] = auVar31[0] & bVar19 | auVar35[0];
      pbVar17[-0x1f] = auVar31[1] & bVar20 | auVar35[1];
      pbVar17[-0x1e] = auVar31[2] & bVar21 | auVar35[2];
      pbVar17[-0x1d] = auVar31[3] & bVar22 | auVar35[3];
      pbVar17[-0x1c] = auVar31[4] & bVar19 | auVar35[4];
      pbVar17[-0x1b] = auVar31[5] & bVar20 | auVar35[5];
      pbVar17[-0x1a] = auVar31[6] & bVar21 | auVar35[6];
      pbVar17[-0x19] = auVar31[7] & bVar22 | auVar35[7];
      pbVar17[-8] = auVar32[8] & bVar19 | auVar29[8];
      pbVar17[-7] = auVar32[9] & bVar20 | auVar29[9];
      pbVar17[-6] = auVar32[10] & bVar21 | auVar29[10];
      pbVar17[-5] = auVar32[0xb] & bVar22 | auVar29[0xb];
      pbVar17[-4] = auVar32[0xc] & bVar19 | auVar29[0xc];
      pbVar17[-3] = auVar32[0xd] & bVar20 | auVar29[0xd];
      pbVar17[-2] = auVar32[0xe] & bVar21 | auVar29[0xe];
      pbVar17[-1] = auVar32[0xf] & bVar22 | auVar29[0xf];
      pbVar17[-0x10] = auVar32[0] & bVar19 | auVar29[0];
      pbVar17[-0xf] = auVar32[1] & bVar20 | auVar29[1];
      pbVar17[-0xe] = auVar32[2] & bVar21 | auVar29[2];
      pbVar17[-0xd] = auVar32[3] & bVar22 | auVar29[3];
      pbVar17[-0xc] = auVar32[4] & bVar19 | auVar29[4];
      pbVar17[-0xb] = auVar32[5] & bVar20 | auVar29[5];
      pbVar17[-10] = auVar32[6] & bVar21 | auVar29[6];
      pbVar17[-9] = auVar32[7] & bVar22 | auVar29[7];
      pbVar17[8] = auVar34[8] & bVar19 | auVar30[8];
      pbVar17[9] = auVar34[9] & bVar20 | auVar30[9];
      pbVar17[10] = auVar34[10] & bVar21 | auVar30[10];
      pbVar17[0xb] = auVar34[0xb] & bVar22 | auVar30[0xb];
      pbVar17[0xc] = auVar34[0xc] & bVar19 | auVar30[0xc];
      pbVar17[0xd] = auVar34[0xd] & bVar20 | auVar30[0xd];
      pbVar17[0xe] = auVar34[0xe] & bVar21 | auVar30[0xe];
      pbVar17[0xf] = auVar34[0xf] & bVar22 | auVar30[0xf];
      *pbVar17 = auVar34[0] & bVar19 | auVar30[0];
      pbVar17[1] = auVar34[1] & bVar20 | auVar30[1];
      pbVar17[2] = auVar34[2] & bVar21 | auVar30[2];
      pbVar17[3] = auVar34[3] & bVar22 | auVar30[3];
      pbVar17[4] = auVar34[4] & bVar19 | auVar30[4];
      pbVar17[5] = auVar34[5] & bVar20 | auVar30[5];
      pbVar17[6] = auVar34[6] & bVar21 | auVar30[6];
      pbVar17[7] = auVar34[7] & bVar22 | auVar30[7];
      pbVar17[0x18] = auVar36[8] & bVar19 | auVar33[8];
      pbVar17[0x19] = auVar36[9] & bVar20 | auVar33[9];
      pbVar17[0x1a] = auVar36[10] & bVar21 | auVar33[10];
      pbVar17[0x1b] = auVar36[0xb] & bVar22 | auVar33[0xb];
      pbVar17[0x1c] = auVar36[0xc] & bVar19 | auVar33[0xc];
      pbVar17[0x1d] = auVar36[0xd] & bVar20 | auVar33[0xd];
      pbVar17[0x1e] = auVar36[0xe] & bVar21 | auVar33[0xe];
      pbVar17[0x1f] = auVar36[0xf] & bVar22 | auVar33[0xf];
      pbVar17[0x10] = auVar36[0] & bVar19 | auVar33[0];
      pbVar17[0x11] = auVar36[1] & bVar20 | auVar33[1];
      pbVar17[0x12] = auVar36[2] & bVar21 | auVar33[2];
      pbVar17[0x13] = auVar36[3] & bVar22 | auVar33[3];
      pbVar17[0x14] = auVar36[4] & bVar19 | auVar33[4];
      pbVar17[0x15] = auVar36[5] & bVar20 | auVar33[5];
      pbVar17[0x16] = auVar36[6] & bVar21 | auVar33[6];
      pbVar17[0x17] = auVar36[7] & bVar22 | auVar33[7];
      pbVar17 = pbVar17 + 0x40;
    } while (uVar11 != 0);
    uVar24 = auVar23._12_4_;
    if (uVar15 != uVar16) goto LAB_003f26b4;
  }
  uVar16 = uVar16 & 0xffffffff;
LAB_003f2710:
  *(uint *)(uVar12 + uVar16 * 4) = uVar24 >> (ulong)uVar2;
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(int *)(param_1 + 1) = iVar6;
  return 1;
}


