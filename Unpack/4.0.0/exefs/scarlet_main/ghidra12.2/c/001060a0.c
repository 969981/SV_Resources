/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001060a0; name: FUN_001060a0
 */


void FUN_001060a0(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ushort uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  code *pcVar11;
  ulong uVar12;
  float *pfVar13;
  ushort *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  if ((0x800 < param_3) ||
     (uVar12 = param_3 - (param_3 >> 1 & 0x5555555555555555),
     uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333),
     (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 != 1)) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(0,0x106108);
    (*pcVar11)();
  }
  uVar16 = param_3 >> 2;
  puVar2 = &DAT_03cac540 + uVar16 * 2;
  lVar17 = param_2 + uVar16 * 0x18;
  lVar3 = param_2 + uVar16 * 8;
  lVar4 = param_2 + uVar16 * 0x10;
  uVar18 = param_3 / 0xc;
  uVar12 = uVar18 + 1;
  uVar1 = (uVar16 - uVar12) + 1;
  FUN_001068f0(param_1,param_2,lVar3,lVar4,lVar17,0,uVar12,puVar2);
  if (uVar18 != uVar16 - uVar12) {
    uVar15 = uVar1 & 0xfffffffffffffffe;
    uVar19 = uVar12;
    if ((uVar12 & 1) != 0) {
      uVar19 = uVar18 + 2;
      FUN_00106cf0(param_1,param_2,lVar3,lVar4,lVar17,uVar12,uVar19,puVar2);
    }
    if (uVar19 < uVar15) {
      pfVar13 = (float *)(param_2 + uVar19 * 8);
      puVar14 = (ushort *)(&DAT_03cac542 + (uVar19 + uVar16) * 2);
      do {
        pfVar8 = pfVar13 + uVar16 * 4;
        uVar19 = uVar19 + 2;
        pfVar9 = pfVar13 + uVar16 * 6;
        pfVar10 = pfVar13 + uVar16 * 2;
        puVar5 = (undefined8 *)(param_1 + (ulong)puVar14[-1] * 8);
        fVar26 = *pfVar13 + *pfVar8;
        fVar27 = pfVar13[1] + pfVar8[1];
        fVar28 = pfVar13[2] + pfVar8[2];
        fVar29 = pfVar13[3] + pfVar8[3];
        auVar25._0_8_ = CONCAT44(pfVar13[1] - pfVar8[1],*pfVar13 - *pfVar8);
        auVar25._8_4_ = pfVar13[2] - pfVar8[2];
        auVar25._12_4_ = pfVar13[3] - pfVar8[3];
        auVar24._0_8_ = CONCAT44(pfVar9[1] + pfVar10[1],*pfVar9 + *pfVar10);
        auVar24._8_4_ = pfVar9[2] + pfVar10[2];
        auVar24._12_4_ = pfVar9[3] + pfVar10[3];
        auVar21._0_8_ = CONCAT44(pfVar9[1] - pfVar10[1],*pfVar9 - *pfVar10);
        auVar21._8_4_ = pfVar9[2] - pfVar10[2];
        auVar21._12_4_ = pfVar9[3] - pfVar10[3];
        auVar20._4_4_ = fVar27;
        auVar20._0_4_ = fVar26;
        auVar20._8_4_ = fVar28;
        auVar20._12_4_ = fVar29;
        auVar22._4_4_ = fVar27;
        auVar22._0_4_ = fVar26;
        auVar22._8_4_ = fVar28;
        auVar22._12_4_ = fVar29;
        auVar23 = NEON_ext(auVar20,auVar22,8,1);
        uVar7 = *puVar14;
        puVar5[1] = auVar25._0_8_;
        puVar5[2] = auVar24._0_8_;
        puVar5[3] = auVar21._0_8_;
        auVar20 = NEON_ext(auVar25,auVar25,8,1);
        auVar25 = NEON_ext(auVar24,auVar24,8,1);
        auVar22 = NEON_ext(auVar21,auVar21,8,1);
        puVar6 = (undefined8 *)(param_1 + (ulong)uVar7 * 8);
        *puVar5 = CONCAT44(fVar27,fVar26);
        *puVar6 = auVar23._0_8_;
        puVar6[1] = auVar20._0_8_;
        puVar6[2] = auVar25._0_8_;
        puVar6[3] = auVar22._0_8_;
        pfVar13 = pfVar13 + 4;
        puVar14 = puVar14 + 2;
      } while (uVar19 < uVar15);
    }
    if (uVar15 != uVar1) {
      FUN_00106cf0(param_1,param_2,lVar3,lVar4,lVar17,uVar15,uVar1,puVar2);
    }
  }
  FUN_001068f0(param_1,lVar17,param_2,lVar3,lVar4,uVar1,uVar16,puVar2);
  if (param_3 < 8) {
    return;
  }
  FUN_001062f0(param_1);
  return;
}


