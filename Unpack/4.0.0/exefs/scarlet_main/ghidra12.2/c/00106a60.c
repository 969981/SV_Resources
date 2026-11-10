/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00106a60; name: FUN_00106a60
 */


void FUN_00106a60(long param_1,long param_2,ulong param_3,ulong param_4,long param_5)

{
  code *pcVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  float *pfVar4;
  undefined8 *puVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
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
  undefined1 auVar32 [16];
  
  if (param_3 < 0x10) {
    FUN_00106dc0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  if ((param_4 < 8) || ((param_4 & 7) != 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0,0x106acc);
    (*pcVar1)();
  }
  FUN_00106dc0(param_1,param_2,param_3,8,param_5);
  if (8 < param_4) {
    pfVar2 = (float *)(param_1 + 0x60);
    pfVar4 = (float *)(param_5 + 0x60);
    uVar6 = 8;
    pauVar3 = (undefined1 (*) [16])(param_2 + param_3 * 4 + -0x3c);
    puVar5 = (undefined8 *)(param_2 + 0x30);
    do {
      uVar6 = uVar6 + 8;
      fVar19 = pfVar4[-8];
      fVar23 = pfVar4[-7];
      fVar20 = pfVar4[-6];
      fVar25 = pfVar4[-5];
      fVar21 = pfVar4[-4];
      fVar27 = pfVar4[-3];
      fVar22 = pfVar4[-2];
      fVar29 = pfVar4[-1];
      fVar15 = (float)puVar5[-2];
      fVar16 = (float)((ulong)puVar5[-2] >> 0x20);
      fVar17 = (float)puVar5[-1];
      fVar18 = (float)((ulong)puVar5[-1] >> 0x20);
      auVar31 = NEON_rev64(pauVar3[1],4);
      auVar32 = NEON_rev64(*pauVar3,4);
      fVar7 = *pfVar4;
      fVar11 = pfVar4[1];
      fVar8 = pfVar4[2];
      fVar12 = pfVar4[3];
      fVar9 = pfVar4[4];
      fVar13 = pfVar4[5];
      fVar10 = pfVar4[6];
      fVar14 = pfVar4[7];
      auVar31 = NEON_ext(auVar31,auVar31,8,1);
      auVar32 = NEON_ext(auVar32,auVar32,8,1);
      pfVar4 = pfVar4 + 0x10;
      fVar24 = (float)*puVar5;
      fVar26 = (float)((ulong)*puVar5 >> 0x20);
      fVar28 = (float)puVar5[1];
      fVar30 = (float)((ulong)puVar5[1] >> 0x20);
      pfVar2[-8] = fVar15 * fVar19 - auVar31._0_4_ * fVar23;
      pfVar2[-7] = fVar15 * fVar23 + auVar31._0_4_ * fVar19;
      pfVar2[-6] = fVar16 * fVar20 - auVar31._4_4_ * fVar25;
      pfVar2[-5] = fVar16 * fVar25 + auVar31._4_4_ * fVar20;
      pfVar2[-4] = fVar17 * fVar21 - auVar31._8_4_ * fVar27;
      pfVar2[-3] = fVar17 * fVar27 + auVar31._8_4_ * fVar21;
      pfVar2[-2] = fVar18 * fVar22 - auVar31._12_4_ * fVar29;
      pfVar2[-1] = fVar18 * fVar29 + auVar31._12_4_ * fVar22;
      *pfVar2 = fVar24 * fVar7 - auVar32._0_4_ * fVar11;
      pfVar2[1] = fVar24 * fVar11 + auVar32._0_4_ * fVar7;
      pfVar2[2] = fVar26 * fVar8 - auVar32._4_4_ * fVar12;
      pfVar2[3] = fVar26 * fVar12 + auVar32._4_4_ * fVar8;
      pfVar2[4] = fVar28 * fVar9 - auVar32._8_4_ * fVar13;
      pfVar2[5] = fVar28 * fVar13 + auVar32._8_4_ * fVar9;
      pfVar2[6] = fVar30 * fVar10 - auVar32._12_4_ * fVar14;
      pfVar2[7] = fVar30 * fVar14 + auVar32._12_4_ * fVar10;
      pfVar2 = pfVar2 + 0x10;
      pauVar3 = pauVar3 + -2;
      puVar5 = puVar5 + 4;
    } while (uVar6 < param_4);
  }
  return;
}


