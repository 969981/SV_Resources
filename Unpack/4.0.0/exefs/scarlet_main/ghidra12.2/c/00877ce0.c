/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00877ce0; name: FUN_00877ce0
 */


void FUN_00877ce0(long *param_1)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar4 = (ulong)*(byte *)(param_1 + 1);
  if (*(byte *)(param_1 + 1) != 0) {
    uVar2 = *(ushort *)((long)param_1 + 0x12);
    uVar5 = (ulong)uVar2;
    fVar12 = 1.0 / (float)uVar5;
    if (uVar2 < 4) {
      uVar7 = uVar5 * 4 - 1;
      uVar1 = ((uint)(uVar7 >> 2) & 0x3fffffff) + 1;
      uVar6 = 0;
      do {
        pfVar10 = (float *)(*param_1 + uVar6 * *(ushort *)(param_1 + 2) * 4);
        pfVar8 = pfVar10 + uVar5;
        if (pfVar10 < pfVar8) {
          if ((uVar1 & 3) == 0) {
            fVar13 = 1.0;
          }
          else {
            fVar13 = 1.0;
            pfVar9 = pfVar10;
            lVar11 = -((ulong)uVar1 & 3);
            do {
              fVar15 = *pfVar9 * fVar13;
              fVar13 = fVar13 - fVar12;
              pfVar10 = pfVar9 + 1;
              *pfVar9 = fVar15;
              bVar3 = lVar11 != -1;
              lVar11 = lVar11 + 1;
              pfVar9 = pfVar10;
            } while (bVar3);
          }
          if (0xb < uVar7) {
            do {
              fVar15 = (fVar13 - fVar12) - fVar12;
              *pfVar10 = *pfVar10 * fVar13;
              pfVar10[1] = pfVar10[1] * (fVar13 - fVar12);
              fVar14 = fVar15 - fVar12;
              fVar13 = fVar14 - fVar12;
              pfVar10[2] = pfVar10[2] * fVar15;
              pfVar10[3] = pfVar10[3] * fVar14;
              pfVar10 = pfVar10 + 4;
            } while (pfVar10 < pfVar8);
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar4);
    }
    else if ((int)(uVar5 & 0xfffc) == 0) {
      uVar7 = uVar5 * 4 - 1;
      uVar1 = ((uint)(uVar7 >> 2) & 0x3fffffff) + 1;
      uVar6 = 0;
      do {
        pfVar10 = (float *)(*param_1 + uVar6 * *(ushort *)(param_1 + 2) * 4);
        pfVar8 = pfVar10 + uVar5;
        if (pfVar10 < pfVar8) {
          if ((uVar1 & 3) == 0) {
            fVar13 = 1.0;
          }
          else {
            fVar13 = 1.0;
            pfVar9 = pfVar10;
            lVar11 = -((ulong)uVar1 & 3);
            do {
              fVar15 = *pfVar9 * fVar13;
              fVar13 = fVar13 - fVar12;
              pfVar10 = pfVar9 + 1;
              *pfVar9 = fVar15;
              bVar3 = lVar11 != -1;
              lVar11 = lVar11 + 1;
              pfVar9 = pfVar10;
            } while (bVar3);
          }
          if (0xb < uVar7) {
            do {
              fVar15 = (fVar13 - fVar12) - fVar12;
              *pfVar10 = *pfVar10 * fVar13;
              pfVar10[1] = pfVar10[1] * (fVar13 - fVar12);
              fVar14 = fVar15 - fVar12;
              fVar13 = fVar14 - fVar12;
              pfVar10[2] = pfVar10[2] * fVar15;
              pfVar10[3] = pfVar10[3] * fVar14;
              pfVar10 = pfVar10 + 4;
            } while (pfVar10 < pfVar8);
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar4);
    }
    else {
      fVar15 = -1.0 / (float)(uVar2 & 0xfffc);
      auVar16 = NEON_fmov(0x3f800000,4);
      fVar13 = fVar15 * 4.0;
      fVar14 = fVar15 + 1.0 + fVar15;
      uVar6 = 0;
      do {
        pfVar10 = (float *)(*param_1 + uVar6 * *(ushort *)(param_1 + 2) * 4);
        pfVar8 = pfVar10;
        fVar19 = fVar14;
        fVar20 = fVar14 + fVar15;
        fVar17 = auVar16._0_4_;
        fVar18 = fVar15 + 1.0;
        do {
          fVar21 = (float)*(undefined8 *)pfVar8 * fVar17;
          fVar22 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20) * fVar18;
          fVar23 = (float)*(undefined8 *)(pfVar8 + 2) * fVar19;
          fVar24 = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20) * fVar20;
          fVar17 = fVar17 + fVar13;
          fVar18 = fVar18 + fVar13;
          fVar19 = fVar19 + fVar13;
          fVar20 = fVar20 + fVar13;
          pfVar9 = pfVar8 + 4;
          *(ulong *)(pfVar8 + 2) = CONCAT44(fVar24,fVar23);
          *(ulong *)pfVar8 = CONCAT44(fVar22,fVar21);
          pfVar8 = pfVar9;
        } while (pfVar9 < pfVar10 + (uVar5 & 0xfffc));
        if (pfVar9 < pfVar10 + uVar5) {
          fVar19 = 1.0;
          do {
            fVar20 = *pfVar9 * fVar19;
            fVar19 = fVar19 - fVar12;
            pfVar8 = pfVar9 + 1;
            *pfVar9 = fVar20;
            pfVar9 = pfVar8;
          } while (pfVar8 < pfVar10 + uVar5);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar4);
    }
  }
  return;
}


