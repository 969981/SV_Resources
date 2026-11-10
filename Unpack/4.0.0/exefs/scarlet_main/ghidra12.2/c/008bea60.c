/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008bea60; name: FUN_008bea60
 */


float FUN_008bea60(float param_1,ushort *param_2)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  float *pfVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar2 = *param_2;
  uVar8 = (ulong)uVar2;
  lVar3 = uVar8 - 1;
  if (uVar8 == 0 || lVar3 == 0) {
    fVar10 = *(float *)(param_2 + 4);
  }
  else {
    pfVar9 = *(float **)(param_2 + 4);
    fVar10 = 0.0;
    if (*pfVar9 < param_1) {
      if (pfVar9[lVar3 * 8] <= param_1) {
        lVar1 = -2;
        if (((uint)pfVar9[lVar3 * 8 + 7] & 1) != 0) {
          lVar1 = -1;
        }
        pfVar9 = pfVar9 + (lVar1 + uVar8) * 8;
        fVar11 = 1.0;
        if (pfVar9 == (float *)0x0) {
          return 0.0;
        }
        goto LAB_008beb80;
      }
      uVar7 = (uint)uVar2;
      if (uVar2 < 3) {
        uVar7 = 2;
      }
      uVar8 = (ulong)(uVar7 - 1);
      pfVar4 = pfVar9;
      fVar11 = *pfVar9;
      do {
        pfVar9 = pfVar4;
        fVar12 = pfVar9[8];
        bVar5 = false;
        bVar6 = true;
        if (param_1 < fVar12) {
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar11) && !NAN(param_1)) {
            bVar5 = fVar11 == param_1;
            bVar6 = param_1 <= fVar11;
          }
        }
        if (!bVar6 || bVar5) {
          fVar10 = (param_1 - fVar11) / (fVar12 - fVar11);
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          if (1.0 < fVar10) {
            fVar10 = 1.0;
          }
          fVar10 = (float)FUN_008be850(fVar10,pfVar9);
          fVar11 = 1.0 - fVar10;
          fVar11 = fVar10 * fVar10 * fVar10 +
                   pfVar9[4] * fVar11 * fVar10 * 3.0 * fVar11 +
                   pfVar9[2] * fVar11 * fVar10 * fVar10 * 3.0;
          goto LAB_008beb80;
        }
        uVar8 = uVar8 - 1;
        pfVar4 = pfVar9 + 8;
        fVar11 = fVar12;
      } while (uVar8 != 0);
    }
    fVar11 = 0.0;
    if (pfVar9 != (float *)0x0) {
LAB_008beb80:
      return pfVar9[5] + fVar11 * (pfVar9[6] - pfVar9[5]);
    }
  }
  return fVar10;
}


