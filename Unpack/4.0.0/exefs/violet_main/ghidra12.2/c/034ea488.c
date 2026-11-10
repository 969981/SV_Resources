/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ea488; name: FUN_034ea488
 */


void FUN_034ea488(long param_1,uint *param_2,float *param_3,long param_4)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
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
  
  lVar6 = *(long *)(param_1 + 0x48);
  uVar1 = (ulong)*param_2;
  pfVar9 = (float *)(lVar6 + uVar1 * 0xc);
  pfVar8 = (float *)(lVar6 + (ulong)param_2[1] * 0xc);
  pfVar7 = (float *)(lVar6 + (ulong)param_2[2] * 0xc);
  fVar16 = *pfVar7;
  fVar10 = *pfVar9;
  fVar12 = pfVar9[1];
  fVar22 = pfVar8[2];
  fVar14 = *pfVar8;
  fVar15 = pfVar8[1];
  fVar23 = pfVar9[2];
  fVar18 = pfVar7[1];
  fVar17 = pfVar7[2];
  fVar20 = (fVar15 * fVar10 * fVar17 + fVar16 * fVar22 * fVar12 + fVar18 * fVar14 * fVar23) -
           (fVar16 * fVar15 * fVar23 + fVar12 * fVar17 * fVar14 + fVar22 * fVar10 * fVar18);
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (fVar20 < 1e-38) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar20)) {
      bVar2 = fVar20 < -1e-38;
      bVar3 = fVar20 == -1e-38;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar2 != bVar4) {
    fVar24 = param_3[2];
    fVar20 = 1.0 / fVar20;
    fVar19 = *param_3;
    fVar21 = param_3[1];
    fVar11 = (fVar19 * (fVar17 * fVar15 - fVar18 * fVar22) +
              (fVar16 * fVar22 - fVar14 * fVar17) * fVar21 +
             (fVar18 * fVar14 - fVar16 * fVar15) * fVar24) * fVar20;
    fVar16 = (fVar19 * (fVar18 * fVar23 - fVar12 * fVar17) +
              (fVar17 * fVar10 - fVar23 * fVar16) * fVar21 +
             (fVar16 * fVar12 - fVar18 * fVar10) * fVar24) * fVar20;
    fVar20 = (fVar19 * (fVar22 * fVar12 - fVar15 * fVar23) +
              (fVar14 * fVar23 - fVar22 * fVar10) * fVar21 +
             (fVar15 * fVar10 - fVar12 * fVar14) * fVar24) * fVar20;
    bVar2 = true;
    bVar3 = false;
    if (-1e-05 <= fVar20) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar11)) {
        bVar2 = fVar11 < -1e-05;
        bVar3 = false;
      }
    }
    bVar4 = true;
    bVar5 = false;
    if (bVar2 == bVar3) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar16)) {
        bVar4 = fVar16 < -1e-05;
        bVar5 = false;
      }
    }
    if (bVar4 != bVar5) {
      return;
    }
  }
  else {
    fVar11 = 0.0;
    fVar20 = 0.0;
    fVar16 = fVar11;
  }
  auVar13._0_4_ = fVar11 * fVar11 + fVar20 * fVar20 + fVar16 * fVar16;
  if (auVar13._0_4_ < 1e-38) {
    return;
  }
  auVar13._4_4_ = auVar13._0_4_;
  auVar13._8_4_ = auVar13._0_4_;
  auVar13._12_4_ = auVar13._0_4_;
  auVar13 = NEON_frecpe(auVar13,4);
  fVar10 = auVar13._0_4_;
  *(float *)(param_4 + uVar1 * 4) = *(float *)(param_4 + uVar1 * 4) + fVar11 * fVar11 * fVar10;
  *(float *)(param_4 + (ulong)param_2[1] * 4) =
       *(float *)(param_4 + (ulong)param_2[1] * 4) + fVar16 * fVar16 * fVar10;
  *(float *)(param_4 + (ulong)param_2[2] * 4) =
       *(float *)(param_4 + (ulong)param_2[2] * 4) + fVar20 * fVar20 * fVar10;
  return;
}


