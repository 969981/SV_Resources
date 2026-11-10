/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a7f828; name: FUN_01a7f828
 */


undefined1  [16] FUN_01a7f828(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  
  uVar5 = FUN_029d6a04(param_3);
  if ((uVar5 & 1) != 0) {
    FUN_029d6d3c(param_1,param_2,param_3);
  }
  uVar3 = *(uint *)(param_3 + 0xc);
  uVar5 = (ulong)(uVar3 + 1 & 7);
  fVar6 = *(float *)(param_3 + 0x10 + ((ulong)uVar3 & 7) * 4);
  lVar1 = param_3 + ((ulong)uVar3 & 7) * 0x10;
  fVar6 = ((float)param_1 - fVar6) / (*(float *)(param_3 + 0x10 + uVar5 * 4) - fVar6);
  if (fVar6 <= 0.0) {
    uVar8 = *(undefined8 *)(lVar1 + 0x38);
    uVar7 = *(undefined8 *)(lVar1 + 0x30);
  }
  else {
    lVar2 = param_3 + uVar5 * 0x10;
    if (1.0 <= fVar6) {
      uVar8 = *(undefined8 *)(lVar2 + 0x38);
      uVar7 = *(undefined8 *)(lVar2 + 0x30);
    }
    else {
      uVar20 = *(undefined8 *)(lVar2 + 0x30);
      uVar25 = *(undefined8 *)(lVar1 + 0x30);
      puVar4 = (undefined8 *)(param_3 + 0x30 + (ulong)(uVar3 - 1 & 7) * 0x10);
      uVar8 = puVar4[1];
      uVar7 = *puVar4;
      puVar4 = (undefined8 *)(param_3 + 0x30 + (ulong)(uVar3 + 2 & 7) * 0x10);
      uVar17 = puVar4[1];
      uVar14 = *puVar4;
      fVar19 = (float)uVar20;
      fVar21 = (float)((ulong)uVar20 >> 0x20);
      fVar22 = (float)*(undefined8 *)(lVar2 + 0x38);
      fVar23 = (float)((ulong)*(undefined8 *)(lVar2 + 0x38) >> 0x20);
      fVar24 = (float)uVar25;
      fVar26 = (float)((ulong)uVar25 >> 0x20);
      fVar27 = (float)*(undefined8 *)(lVar1 + 0x38);
      fVar28 = (float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20);
      fVar9 = (fVar19 - (float)uVar7) * 0.5;
      fVar10 = (fVar21 - (float)((ulong)uVar7 >> 0x20)) * 0.5;
      fVar11 = (fVar22 - (float)uVar8) * 0.5;
      fVar12 = (fVar23 - (float)((ulong)uVar8 >> 0x20)) * 0.5;
      fVar13 = ((float)uVar14 - fVar24) * 0.5;
      fVar15 = ((float)((ulong)uVar14 >> 0x20) - fVar26) * 0.5;
      fVar16 = ((float)uVar17 - fVar27) * 0.5;
      fVar18 = ((float)((ulong)uVar17 >> 0x20) - fVar28) * 0.5;
      auVar29 = NEON_fmov(0x40400000,4);
      uVar7 = CONCAT44(fVar26 + (fVar10 + ((((fVar21 * auVar29._4_4_ - fVar26 * auVar29._4_4_) -
                                            (fVar10 + fVar10)) - fVar15) +
                                          (fVar15 + fVar10 + ((fVar26 + fVar26) - (fVar21 + fVar21))
                                          ) * fVar6) * fVar6) * fVar6,
                       fVar24 + (fVar9 + ((((fVar19 * auVar29._0_4_ - fVar24 * auVar29._0_4_) -
                                           (fVar9 + fVar9)) - fVar13) +
                                         (fVar13 + fVar9 + ((fVar24 + fVar24) - (fVar19 + fVar19)))
                                         * fVar6) * fVar6) * fVar6);
      uVar8 = CONCAT44(fVar28 + (fVar12 + ((((fVar23 * auVar29._12_4_ - fVar28 * auVar29._12_4_) -
                                            (fVar12 + fVar12)) - fVar18) +
                                          (fVar18 + fVar12 + ((fVar28 + fVar28) - (fVar23 + fVar23))
                                          ) * fVar6) * fVar6) * fVar6,
                       fVar27 + (fVar11 + ((((fVar22 * auVar29._8_4_ - fVar27 * auVar29._8_4_) -
                                            (fVar11 + fVar11)) - fVar16) +
                                          (fVar16 + fVar11 + ((fVar27 + fVar27) - (fVar22 + fVar22))
                                          ) * fVar6) * fVar6) * fVar6);
    }
  }
  auVar29._8_8_ = uVar8;
  auVar29._0_8_ = uVar7;
  return auVar29;
}


