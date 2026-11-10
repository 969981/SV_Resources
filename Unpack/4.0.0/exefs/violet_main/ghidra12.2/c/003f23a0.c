/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f23a0; name: FUN_003f23a0
 */


undefined8 FUN_003f23a0(ulong *param_1,ulong *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  ulong uVar15;
  uint *puVar16;
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  if ((int)param_3 < 0) {
    FUN_004806c0(3,0x92,0x77,"external/openssl/crypto/bn/bn_shift.c",0x9b);
    return 0;
  }
  uVar3 = param_3 >> 5;
  uVar20 = (ulong)uVar3;
  iVar5 = (int)param_2[1] - uVar3;
  if (iVar5 == 0 || (int)param_2[1] < (int)uVar3) {
    FUN_003eb9f0(param_1,0);
  }
  else {
    if ((param_1 != param_2) && (lVar9 = FUN_003eb9a0(param_1,iVar5), lVar9 == 0)) {
      uVar19 = 0;
      goto LAB_003f25cc;
    }
    uVar12 = *param_2;
    puVar1 = (uint *)(uVar12 + (ulong)uVar3 * 4);
    uVar10 = *param_1;
    uVar26 = *puVar1;
    uVar3 = param_3 & 0x1f;
    if (iVar5 < 2) {
      uVar11 = 0;
    }
    else {
      param_3 = -param_3;
      uVar2 = param_3 & 0x1f;
      uVar11 = (ulong)(iVar5 + -1);
      uVar13 = -uVar2;
      uVar4 = uVar13 | uVar13 >> 8;
      if ((long)uVar11 < 2) {
        uVar11 = 1;
      }
      if ((uVar11 < 0x10) ||
         (lVar9 = uVar12 + uVar20 * 4,
         uVar10 < uVar12 + (uVar11 + uVar20) * 4 + 4 && lVar9 + 4U < uVar10 + uVar11 * 4)) {
        uVar15 = 0;
LAB_003f2530:
        uVar18 = uVar15 | 1;
        uVar13 = uVar26;
        if ((uVar11 & 1) != 0) {
          uVar13 = puVar1[uVar18];
          *(uint *)(uVar10 + uVar15 * 4) = uVar13 << (ulong)uVar2 & uVar4 | uVar26 >> (ulong)uVar3;
          uVar15 = uVar18;
        }
        uVar26 = uVar13;
        if (uVar11 != uVar18) {
          lVar9 = uVar15 - uVar11;
          puVar16 = (uint *)(uVar10 + uVar15 * 4 + 4);
          puVar1 = (uint *)(uVar12 + (uVar15 + uVar20) * 4);
          do {
            uVar13 = puVar1[1];
            puVar16[-1] = uVar13 << (ulong)uVar2 & uVar4 | uVar26 >> (ulong)uVar3;
            uVar26 = puVar1[2];
            *puVar16 = uVar26 << (ulong)uVar2 & uVar4 | uVar13 >> (ulong)uVar3;
            lVar9 = lVar9 + 2;
            puVar16 = puVar16 + 2;
            puVar1 = puVar1 + 2;
          } while (lVar9 != 0);
        }
      }
      else {
        uVar15 = uVar11 & 0x7ffffffffffffff0;
        iVar27 = -uVar3;
        iVar28 = -uVar3;
        iVar29 = -uVar3;
        iVar30 = -uVar3;
        auVar25._4_4_ = uVar26;
        auVar25._0_4_ = uVar26;
        auVar25._8_4_ = uVar26;
        auVar25._12_4_ = uVar26;
        pauVar17 = (undefined1 (*) [16])(lVar9 + 0x24);
        pbVar14 = (byte *)(uVar10 + 0x20);
        uVar18 = uVar15;
        do {
          auVar38 = pauVar17[-2];
          auVar7 = pauVar17[-1];
          auVar35._8_4_ = uVar2;
          auVar35._0_8_ = CONCAT44(param_3,param_3) & 0x1f0000001f;
          auVar35._12_4_ = uVar2;
          auVar34 = NEON_ushl(auVar7,auVar35,4);
          auVar25 = NEON_ext(auVar25,auVar38,0xc,1);
          auVar35 = *pauVar17;
          auVar31._8_4_ = uVar2;
          auVar31._0_8_ = CONCAT44(param_3,param_3) & 0x1f0000001f;
          auVar31._12_4_ = uVar2;
          auVar36 = NEON_ushl(auVar35,auVar31,4);
          auVar33._4_4_ = iVar28;
          auVar33._0_4_ = iVar27;
          auVar33._8_4_ = iVar29;
          auVar33._12_4_ = iVar30;
          auVar37 = NEON_ushl(auVar25,auVar33,4);
          auVar25 = NEON_ext(auVar38,auVar7,0xc,1);
          auVar32._8_4_ = uVar2;
          auVar32._0_8_ = CONCAT44(param_3,param_3) & 0x1f0000001f;
          auVar32._12_4_ = uVar2;
          auVar33 = NEON_ushl(auVar38,auVar32,4);
          bVar21 = (byte)uVar4;
          bVar22 = (byte)(uVar4 >> 8);
          bVar23 = (byte)(uVar4 >> 0x10);
          bVar24 = (byte)(uVar13 >> 0x18);
          auVar6._4_4_ = iVar28;
          auVar6._0_4_ = iVar27;
          auVar6._8_4_ = iVar29;
          auVar6._12_4_ = iVar30;
          auVar31 = NEON_ushl(auVar25,auVar6,4);
          auVar25 = NEON_ext(auVar7,auVar35,0xc,1);
          auVar7._4_4_ = iVar28;
          auVar7._0_4_ = iVar27;
          auVar7._8_4_ = iVar29;
          auVar7._12_4_ = iVar30;
          auVar32 = NEON_ushl(auVar25,auVar7,4);
          auVar25 = pauVar17[1];
          auVar35 = NEON_ext(auVar35,auVar25,0xc,1);
          auVar38._8_4_ = uVar2;
          auVar38._0_8_ = CONCAT44(param_3,param_3) & 0x1f0000001f;
          auVar38._12_4_ = uVar2;
          auVar38 = NEON_ushl(auVar25,auVar38,4);
          pauVar17 = pauVar17 + 4;
          uVar18 = uVar18 - 0x10;
          auVar8._4_4_ = iVar28;
          auVar8._0_4_ = iVar27;
          auVar8._8_4_ = iVar29;
          auVar8._12_4_ = iVar30;
          auVar35 = NEON_ushl(auVar35,auVar8,4);
          pbVar14[-0x18] = auVar33[8] & bVar21 | auVar37[8];
          pbVar14[-0x17] = auVar33[9] & bVar22 | auVar37[9];
          pbVar14[-0x16] = auVar33[10] & bVar23 | auVar37[10];
          pbVar14[-0x15] = auVar33[0xb] & bVar24 | auVar37[0xb];
          pbVar14[-0x14] = auVar33[0xc] & bVar21 | auVar37[0xc];
          pbVar14[-0x13] = auVar33[0xd] & bVar22 | auVar37[0xd];
          pbVar14[-0x12] = auVar33[0xe] & bVar23 | auVar37[0xe];
          pbVar14[-0x11] = auVar33[0xf] & bVar24 | auVar37[0xf];
          pbVar14[-0x20] = auVar33[0] & bVar21 | auVar37[0];
          pbVar14[-0x1f] = auVar33[1] & bVar22 | auVar37[1];
          pbVar14[-0x1e] = auVar33[2] & bVar23 | auVar37[2];
          pbVar14[-0x1d] = auVar33[3] & bVar24 | auVar37[3];
          pbVar14[-0x1c] = auVar33[4] & bVar21 | auVar37[4];
          pbVar14[-0x1b] = auVar33[5] & bVar22 | auVar37[5];
          pbVar14[-0x1a] = auVar33[6] & bVar23 | auVar37[6];
          pbVar14[-0x19] = auVar33[7] & bVar24 | auVar37[7];
          pbVar14[-8] = auVar34[8] & bVar21 | auVar31[8];
          pbVar14[-7] = auVar34[9] & bVar22 | auVar31[9];
          pbVar14[-6] = auVar34[10] & bVar23 | auVar31[10];
          pbVar14[-5] = auVar34[0xb] & bVar24 | auVar31[0xb];
          pbVar14[-4] = auVar34[0xc] & bVar21 | auVar31[0xc];
          pbVar14[-3] = auVar34[0xd] & bVar22 | auVar31[0xd];
          pbVar14[-2] = auVar34[0xe] & bVar23 | auVar31[0xe];
          pbVar14[-1] = auVar34[0xf] & bVar24 | auVar31[0xf];
          pbVar14[-0x10] = auVar34[0] & bVar21 | auVar31[0];
          pbVar14[-0xf] = auVar34[1] & bVar22 | auVar31[1];
          pbVar14[-0xe] = auVar34[2] & bVar23 | auVar31[2];
          pbVar14[-0xd] = auVar34[3] & bVar24 | auVar31[3];
          pbVar14[-0xc] = auVar34[4] & bVar21 | auVar31[4];
          pbVar14[-0xb] = auVar34[5] & bVar22 | auVar31[5];
          pbVar14[-10] = auVar34[6] & bVar23 | auVar31[6];
          pbVar14[-9] = auVar34[7] & bVar24 | auVar31[7];
          pbVar14[8] = auVar36[8] & bVar21 | auVar32[8];
          pbVar14[9] = auVar36[9] & bVar22 | auVar32[9];
          pbVar14[10] = auVar36[10] & bVar23 | auVar32[10];
          pbVar14[0xb] = auVar36[0xb] & bVar24 | auVar32[0xb];
          pbVar14[0xc] = auVar36[0xc] & bVar21 | auVar32[0xc];
          pbVar14[0xd] = auVar36[0xd] & bVar22 | auVar32[0xd];
          pbVar14[0xe] = auVar36[0xe] & bVar23 | auVar32[0xe];
          pbVar14[0xf] = auVar36[0xf] & bVar24 | auVar32[0xf];
          *pbVar14 = auVar36[0] & bVar21 | auVar32[0];
          pbVar14[1] = auVar36[1] & bVar22 | auVar32[1];
          pbVar14[2] = auVar36[2] & bVar23 | auVar32[2];
          pbVar14[3] = auVar36[3] & bVar24 | auVar32[3];
          pbVar14[4] = auVar36[4] & bVar21 | auVar32[4];
          pbVar14[5] = auVar36[5] & bVar22 | auVar32[5];
          pbVar14[6] = auVar36[6] & bVar23 | auVar32[6];
          pbVar14[7] = auVar36[7] & bVar24 | auVar32[7];
          pbVar14[0x18] = auVar38[8] & bVar21 | auVar35[8];
          pbVar14[0x19] = auVar38[9] & bVar22 | auVar35[9];
          pbVar14[0x1a] = auVar38[10] & bVar23 | auVar35[10];
          pbVar14[0x1b] = auVar38[0xb] & bVar24 | auVar35[0xb];
          pbVar14[0x1c] = auVar38[0xc] & bVar21 | auVar35[0xc];
          pbVar14[0x1d] = auVar38[0xd] & bVar22 | auVar35[0xd];
          pbVar14[0x1e] = auVar38[0xe] & bVar23 | auVar35[0xe];
          pbVar14[0x1f] = auVar38[0xf] & bVar24 | auVar35[0xf];
          pbVar14[0x10] = auVar38[0] & bVar21 | auVar35[0];
          pbVar14[0x11] = auVar38[1] & bVar22 | auVar35[1];
          pbVar14[0x12] = auVar38[2] & bVar23 | auVar35[2];
          pbVar14[0x13] = auVar38[3] & bVar24 | auVar35[3];
          pbVar14[0x14] = auVar38[4] & bVar21 | auVar35[4];
          pbVar14[0x15] = auVar38[5] & bVar22 | auVar35[5];
          pbVar14[0x16] = auVar38[6] & bVar23 | auVar35[6];
          pbVar14[0x17] = auVar38[7] & bVar24 | auVar35[7];
          pbVar14 = pbVar14 + 0x40;
        } while (uVar18 != 0);
        uVar26 = auVar25._12_4_;
        if (uVar11 != uVar15) goto LAB_003f2530;
      }
      uVar11 = uVar11 & 0xffffffff;
    }
    *(uint *)(uVar10 + uVar11 * 4) = uVar26 >> (ulong)uVar3;
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(int *)(param_1 + 1) = iVar5;
  }
  uVar19 = 1;
LAB_003f25cc:
  FUN_003ebc30(param_1);
  return uVar19;
}


