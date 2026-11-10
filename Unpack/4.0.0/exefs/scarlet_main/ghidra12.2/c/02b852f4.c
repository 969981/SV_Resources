/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b852f4; name: FUN_02b852f4
 */


void FUN_02b852f4(long *param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
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
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x68))();
  fVar9 = pfVar1[4] * pfVar1[4];
  fVar10 = pfVar1[5] * pfVar1[5];
  fVar11 = pfVar1[6] * pfVar1[6];
  fVar12 = pfVar1[7] * pfVar1[7];
  fVar13 = pfVar1[8] * pfVar1[8];
  fVar14 = pfVar1[9] * pfVar1[9];
  fVar15 = pfVar1[10] * pfVar1[10];
  fVar16 = pfVar1[0xb] * pfVar1[0xb];
  fVar5 = *pfVar1 * *pfVar1;
  fVar6 = pfVar1[1] * pfVar1[1];
  fVar7 = pfVar1[2] * pfVar1[2];
  fVar8 = pfVar1[3] * pfVar1[3];
  auVar2._0_4_ = fVar9 + fVar10;
  auVar2._4_4_ = fVar11 + fVar12;
  auVar2._8_4_ = fVar9 + fVar10;
  auVar2._12_4_ = fVar11 + fVar12;
  auVar3._0_4_ = fVar13 + fVar14;
  auVar3._4_4_ = fVar15 + fVar16;
  auVar3._8_4_ = fVar13 + fVar14;
  auVar3._12_4_ = fVar15 + fVar16;
  auVar4._0_4_ = fVar5 + fVar6;
  auVar4._4_4_ = fVar7 + fVar8;
  auVar4._8_4_ = fVar5 + fVar6;
  auVar4._12_4_ = fVar7 + fVar8;
  NEON_ext(auVar2,auVar2,4,1);
  NEON_ext(auVar3,auVar3,4,1);
  NEON_ext(auVar4,auVar4,4,1);
  return;
}


