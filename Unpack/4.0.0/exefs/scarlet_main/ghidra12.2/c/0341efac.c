/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0341efac; name: FUN_0341efac
 */


void FUN_0341efac(float *param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
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
  
  uVar1 = *(ushort *)(param_2 + 0x32);
  if (uVar1 == 0) {
    fVar17 = 0.0;
    fVar6 = param_1[3];
    fVar7 = param_1[4];
    fVar8 = param_1[5];
    fVar9 = param_1[6];
    fVar19 = 0.0;
    fVar11 = param_1[7];
    fVar10 = param_1[8];
    fVar14 = param_1[0xb];
    fVar18 = 0.0;
    fVar16 = 0.0;
    fVar15 = 0.0;
    fVar12 = param_1[9];
    fVar13 = param_1[10];
    fVar21 = 0.0;
LAB_0341f0c0:
    fVar17 = (fVar17 - fVar16) * 0.5;
    fVar24 = (fVar19 - fVar15) * 0.5;
    fVar19 = (fVar18 - fVar21) * 0.5;
    fVar16 = fVar17 + fVar16;
    fVar15 = fVar24 + fVar15;
    param_1[0xc] = fVar17;
    fVar21 = fVar19 + fVar21;
    param_1[0xd] = fVar24;
    param_1[0xe] = fVar19;
    pfVar4 = *(float **)(param_2 + 0x10);
    fVar19 = pfVar4[1];
    fVar17 = pfVar4[2];
    *param_1 = fVar16 * fVar6 + fVar9 * fVar15 + fVar12 * fVar21 + *pfVar4;
    param_1[1] = fVar16 * fVar7 + fVar11 * fVar15 + fVar13 * fVar21 + fVar19;
    param_1[2] = fVar16 * fVar8 + fVar10 * fVar15 + fVar14 * fVar21 + fVar17;
    return;
  }
  pfVar4 = *(float **)(param_2 + 0x10);
  uVar2 = (uint)uVar1;
  fVar6 = param_1[3];
  fVar7 = param_1[4];
  fVar14 = param_1[0xb];
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar17 = 0.0;
  if (uVar1 < 2) {
    uVar2 = 1;
  }
  uVar3 = (ulong)uVar2;
  fVar8 = param_1[5];
  fVar9 = param_1[6];
  fVar11 = param_1[7];
  fVar10 = param_1[8];
  fVar12 = param_1[9];
  fVar13 = param_1[10];
  pfVar5 = pfVar4 + 5;
  fVar24 = pfVar4[1];
  fVar23 = pfVar4[2];
  fVar20 = *pfVar4;
  fVar22 = 0.0;
  do {
    uVar3 = uVar3 - 1;
    fVar23 = fVar23 - pfVar4[2];
    fVar20 = fVar20 - *pfVar4;
    fVar24 = fVar24 - pfVar4[1];
    fVar25 = fVar23 * fVar8 + fVar7 * fVar24 + fVar6 * fVar20;
    fVar26 = fVar23 * fVar10 + fVar11 * fVar24 + fVar9 * fVar20;
    fVar21 = fVar23 * fVar14 + fVar13 * fVar24 + fVar12 * fVar20;
    fVar24 = fVar16;
    if (fVar25 < fVar16) {
      fVar24 = fVar25;
    }
    if (fVar25 <= fVar17) {
      fVar16 = fVar24;
      fVar25 = fVar17;
    }
    fVar17 = fVar25;
    fVar24 = fVar15;
    if (fVar26 < fVar15) {
      fVar24 = fVar26;
    }
    if (fVar26 <= fVar19) {
      fVar15 = fVar24;
      fVar26 = fVar19;
    }
    fVar19 = fVar26;
    if (fVar21 <= fVar18) {
      if (fVar22 <= fVar21) goto LAB_0341f078;
    }
    else {
      fVar18 = fVar21;
LAB_0341f078:
      fVar21 = fVar22;
    }
    if (uVar3 == 0) goto LAB_0341f0c0;
    fVar20 = pfVar5[-2];
    fVar24 = pfVar5[-1];
    fVar23 = *pfVar5;
    pfVar5 = pfVar5 + 3;
    fVar22 = fVar21;
  } while( true );
}


