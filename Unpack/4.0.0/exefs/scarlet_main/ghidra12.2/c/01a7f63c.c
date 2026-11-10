/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a7f63c; name: FUN_01a7f63c
 */


undefined1  [16] FUN_01a7f63c(float param_1,int *param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  ushort *puVar5;
  uint *puVar6;
  undefined1 (*pauVar7) [12];
  int iVar8;
  byte *pbVar9;
  byte *pbVar11;
  ulong uVar10;
  long lVar12;
  undefined1 (*pauVar13) [12];
  float *pfVar14;
  uint uVar15;
  ulong uVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  
  if (param_3 != 0) {
    auVar18 = FUN_01a7f828();
    return auVar18;
  }
  puVar5 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar5 < 5) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if ((ulong)puVar5[2] != 0) {
      puVar6 = (uint *)((long)param_2 + (ulong)puVar5[2]);
      lVar12 = (long)puVar6 + (ulong)*puVar6;
    }
    if (6 < *puVar5) {
      puVar6 = (uint *)0x0;
      if ((ulong)puVar5[3] != 0) {
        puVar6 = (uint *)((long)param_2 + (ulong)puVar5[3]);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      }
      goto LAB_01a7f68c;
    }
  }
  puVar6 = (uint *)0x0;
LAB_01a7f68c:
  lVar1 = lVar12 + 4;
  pbVar11 = (byte *)(lVar12 + 6);
  uVar10 = ~(ulong)pbVar11 + lVar1 + (ulong)*puVar6;
  if (uVar10 != 0) {
    pbVar2 = pbVar11 + (uVar10 >> 1);
    bVar3 = *pbVar2;
    pbVar9 = pbVar11;
    while( true ) {
      uVar16 = uVar10 >> 1;
      pbVar11 = pbVar2 + 1;
      uVar10 = uVar10 + (uVar10 >> 1 ^ 0xffffffffffffffff);
      if (param_1 <= (float)bVar3) {
        pbVar11 = pbVar9;
        uVar10 = uVar16;
      }
      if (uVar10 == 0) break;
      pbVar2 = pbVar11 + (uVar10 >> 1);
      bVar3 = *pbVar2;
      pbVar9 = pbVar11;
    }
  }
  uVar10 = (long)pbVar11 - lVar1;
  iVar8 = (int)uVar10;
  uVar15 = (uint)*(byte *)(lVar1 + (ulong)(iVar8 - 1U));
  pauVar7 = (undefined1 (*) [12])(puVar6 + (ulong)(iVar8 - 1U) * 3 + 1);
  fVar21 = (param_1 - (float)uVar15) /
           (float)(int)(*(byte *)(lVar1 + (uVar10 & 0xffffffff)) - uVar15);
  fVar20 = *(float *)((long)*pauVar7 + 8);
  auVar18._12_4_ = 0;
  auVar18._0_12_ = *pauVar7;
  if (0.0 < fVar21) {
    pauVar13 = (undefined1 (*) [12])(puVar6 + (uVar10 & 0xffffffff) * 3 + 1);
    fVar24 = *(float *)((long)*pauVar13 + 8);
    auVar18._12_4_ = 0;
    auVar18._0_12_ = *pauVar13;
    if (fVar21 < 1.0) {
      pfVar14 = (float *)(puVar6 + (ulong)(iVar8 - 2) * 3 + 1);
      fVar22 = (float)*(undefined8 *)*pauVar13;
      fVar23 = (float)((ulong)*(undefined8 *)*pauVar13 >> 0x20);
      uVar4 = *(undefined8 *)(puVar6 + (ulong)(iVar8 + 1) * 3 + 1);
      fVar25 = (fVar22 - *pfVar14) * 0.5;
      fVar26 = (fVar23 - pfVar14[1]) * 0.5;
      fVar27 = (fVar24 - pfVar14[2]) * 0.5;
      fVar17 = (float)*(undefined8 *)*pauVar7;
      fVar19 = (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
      fVar28 = ((float)uVar4 - fVar17) * 0.5;
      fVar29 = ((float)((ulong)uVar4 >> 0x20) - fVar19) * 0.5;
      fVar30 = ((float)(puVar6 + (ulong)(iVar8 + 1) * 3 + 1)[2] - fVar20) * 0.5;
      auVar31 = NEON_fmov(0x40400000,4);
      auVar18._4_4_ =
           fVar19 + (fVar26 + ((((fVar23 * auVar31._4_4_ - fVar19 * auVar31._4_4_) -
                                (fVar26 + fVar26)) - fVar29) +
                              (((fVar19 + fVar19) - (fVar23 + fVar23)) + fVar26 + fVar29) * fVar21)
                              * fVar21) * fVar21;
      auVar18._0_4_ =
           fVar17 + (fVar25 + ((((fVar22 * auVar31._0_4_ - fVar17 * auVar31._0_4_) -
                                (fVar25 + fVar25)) - fVar28) +
                              (((fVar17 + fVar17) - (fVar22 + fVar22)) + fVar25 + fVar28) * fVar21)
                              * fVar21) * fVar21;
      auVar18._12_4_ =
           (((((auVar31._12_4_ * 0.0 - auVar31._12_4_ * 0.0) - 0.0) - 0.0) + fVar21 * 0.0) * fVar21
           + 0.0) * fVar21 + 0.0;
      auVar18._8_4_ =
           fVar20 + (fVar27 + ((((fVar24 * auVar31._8_4_ - fVar20 * auVar31._8_4_) -
                                (fVar27 + fVar27)) - fVar30) +
                              (((fVar20 + fVar20) - (fVar24 + fVar24)) + fVar27 + fVar30) * fVar21)
                              * fVar21) * fVar21;
    }
  }
  return auVar18;
}


