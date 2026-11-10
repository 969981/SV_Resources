/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f7e64; name: FUN_026f7e64
 */


undefined8 FUN_026f7e64(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  float fVar22;
  
  uVar6 = FUN_026fe444(param_2);
  fVar4 = (float)((ulong)uVar6 >> 0x20);
  uVar7 = FUN_026fe44c(param_2);
  fVar5 = (float)((ulong)uVar7 >> 0x20);
  fVar9 = *(float *)(param_1 + 4);
  fVar10 = (float)param_1[2] * fVar9;
  fVar11 = (float)((ulong)param_1[2] >> 0x20) * fVar9;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar10 < 1.1920929e-07) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar10)) {
      bVar1 = fVar10 < -1.1920929e-07;
      bVar2 = fVar10 == -1.1920929e-07;
      bVar3 = false;
    }
  }
  fVar8 = (float)*param_1;
  if (bVar2 || bVar1 != bVar3) {
    fVar12 = (1.0 / fVar10) * ((float)uVar6 - fVar8);
    fVar13 = (1.0 / fVar10) * ((float)uVar7 - fVar8);
    uVar14 = SUB41(fVar12,0);
    uVar16 = (char)((uint)fVar12 >> 8);
    uVar18 = (char)((uint)fVar12 >> 0x10);
    uVar20 = (char)((uint)fVar12 >> 0x18);
    if (fVar12 <= fVar13) {
      uVar14 = SUB41(fVar13,0);
      uVar16 = (char)((uint)fVar13 >> 8);
      uVar18 = (char)((uint)fVar13 >> 0x10);
      uVar20 = (char)((uint)fVar13 >> 0x18);
      fVar13 = fVar12;
    }
    fVar12 = (float)NEON_fminnm(CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))),0x7f7fffff
                               );
    uVar14 = SUB41(fVar12,0);
    uVar16 = (undefined1)((uint)fVar12 >> 8);
    uVar18 = (undefined1)((uint)fVar12 >> 0x10);
    uVar20 = (undefined1)((uint)fVar12 >> 0x18);
    if (fVar12 <= fVar13) {
      return 0;
    }
  }
  else {
    if (fVar8 < (float)uVar6 || (float)uVar7 < fVar8) {
      return 0;
    }
    uVar14 = 0xff;
    uVar16 = 0xff;
    uVar18 = 0x7f;
    uVar20 = 0x7f;
    fVar13 = -3.4028235e+38;
  }
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar11 < 1.1920929e-07) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar11)) {
      bVar1 = fVar11 < -1.1920929e-07;
      bVar2 = fVar11 == -1.1920929e-07;
      bVar3 = false;
    }
  }
  fVar12 = (float)((ulong)*param_1 >> 0x20);
  if (bVar2 || bVar1 != bVar3) {
    fVar22 = (fVar4 - fVar12) * (1.0 / fVar11);
    fVar4 = (fVar5 - fVar12) * (1.0 / fVar11);
    fVar5 = fVar22;
    if (fVar22 <= fVar4) {
      fVar5 = fVar4;
      fVar4 = fVar22;
    }
    if (fVar4 <= fVar13) {
      fVar4 = fVar13;
    }
    fVar13 = fVar4;
    uVar15 = SUB41(fVar5,0);
    uVar17 = (char)((uint)fVar5 >> 8);
    uVar19 = (char)((uint)fVar5 >> 0x10);
    uVar21 = (char)((uint)fVar5 >> 0x18);
    if ((float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14))) <= fVar5) {
      uVar15 = uVar14;
      uVar17 = uVar16;
      uVar19 = uVar18;
      uVar21 = uVar20;
    }
    if ((float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15))) <= fVar13) {
      return 0;
    }
  }
  else {
    if (fVar12 < fVar4) {
      return 0;
    }
    uVar15 = uVar14;
    uVar17 = uVar16;
    uVar19 = uVar18;
    uVar21 = uVar20;
    if (fVar5 < fVar12) {
      return 0;
    }
  }
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (0.0 <= fVar13) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar13)) {
      bVar1 = fVar13 < 1.0;
      bVar2 = fVar13 == 1.0;
      bVar3 = false;
    }
  }
  if (!bVar2 && bVar1 == bVar3) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (NAN((float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15)))) ||
        0.0 <= (float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15)))) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN((float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15))))) {
        bVar1 = (float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15))) < 1.0;
        bVar2 = (float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15))) == 1.0;
        bVar3 = false;
      }
    }
    fVar13 = (float)CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15)));
    if (!bVar2 && bVar1 == bVar3) {
      return 0;
    }
  }
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = CONCAT44((float)((ulong)param_1[1] >> 0x20) +
                          (float)((ulong)param_1[3] >> 0x20) * fVar9 * fVar13,
                          (float)param_1[1] + (float)param_1[3] * fVar9 * fVar13);
    *param_3 = CONCAT44(fVar12 + fVar11 * fVar13,fVar8 + fVar10 * fVar13);
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar13;
  }
  return 1;
}


