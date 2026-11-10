/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034460b4; name: FUN_034460b4
 */


void FUN_034460b4(uint param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long alStack_460 [128];
  
  uVar11 = (ulong)param_1;
  lVar4 = -0x60 - (uVar11 * 8 + 0xf & 0xffffffff0);
  lVar5 = lVar4 - ((ulong)param_1 * 0xc + 0xf & 0x1ffffffff0);
  uVar12 = uVar11 * 4 + 0xf & 0x7fffffff0;
  lVar6 = lVar5 - uVar12;
  lVar7 = lVar6 - uVar12;
  lVar8 = lVar7 - uVar12;
  if (*(int *)(param_4 + 0x160) != 0) {
    uVar12 = 0;
    do {
      while (plVar9 = *(long **)(param_4 + 0x158),
            *(int *)((long)plVar9 + uVar12 * 0x158 + 0x6c) != 0) {
        if (param_1 == 0) {
          return;
        }
        uVar2 = *(uint *)(param_4 + 0x160);
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        uVar10 = 0;
        lVar14 = plVar9[uVar12 * 0x2b];
        bVar3 = false;
        do {
          pfVar16 = (float *)((long)alStack_460 + uVar10 * 0xc + lVar5 + 0x460);
          uVar17 = 0;
          *(undefined4 *)((long)alStack_460 + uVar10 * 4 + lVar6 + 0x460) = 0x3dcccccd;
          *(undefined4 *)((long)alStack_460 + uVar10 * 4 + lVar7 + 0x460) = 0x3dcccccd;
          *(undefined4 *)((long)alStack_460 + uVar10 * 4 + lVar8 + 0x460) = 0x3f800000;
          pfVar16[0] = 0.0;
          pfVar16[1] = 0.0;
          pfVar16[2] = 0.0;
          plVar18 = plVar9;
          do {
            lVar19 = *plVar18;
            if ((lVar19 == lVar14) &&
               ((int)plVar18[2] == *(int *)(*(long *)(param_2 + uVar10 * 8) + 0x5c))) {
              *(long **)((long)alStack_460 + uVar10 * 8 + lVar4 + 0x460) = plVar18;
              fVar20 = *(float *)((long)plVar18 + 0x4c);
              if (fVar20 <= 0.1) {
                fVar20 = 0.1;
              }
              *(float *)((long)alStack_460 + uVar10 * 4 + lVar6 + 0x460) = fVar20;
              fVar20 = *(float *)(param_3 + uVar10 * 4);
              if (fVar20 <= 0.1) {
                fVar20 = 0.1;
              }
              *(float *)((long)alStack_460 + uVar10 * 4 + lVar7 + 0x460) = fVar20;
              fVar20 = *(float *)(plVar18 + 8);
              fVar23 = *(float *)((long)plVar18 + 0x44);
              fVar22 = *(float *)(plVar18 + 9);
              fVar21 = fVar20 * fVar20 + fVar23 * fVar23 + fVar22 * fVar22;
              if (0.0 < fVar21) {
                fVar21 = 1.0 / SQRT(fVar21);
                *pfVar16 = fVar21 * fVar20;
                pfVar16[1] = fVar21 * fVar23;
                pfVar16[2] = fVar21 * fVar22;
              }
              break;
            }
            bVar1 = uVar12 < uVar17;
            uVar13 = (uint)uVar17;
            if (!bVar1 || (bVar3 || lVar19 == lVar14)) {
              uVar13 = (uint)uVar12;
            }
            uVar12 = (ulong)uVar13;
            uVar17 = uVar17 + 1;
            if (bVar1 && (!bVar3 && lVar19 != lVar14)) {
              bVar3 = true;
            }
            plVar18 = plVar18 + 0x2b;
          } while (uVar2 != uVar17);
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar11);
        uVar10 = 0;
        do {
          pfVar15 = (float *)((long)alStack_460 + uVar10 * 0xc + lVar5 + 0x460);
          fVar20 = 0.0;
          uVar17 = 0;
          pfVar16 = (float *)((long)alStack_460 + lVar5 + 0x464);
          do {
            if (uVar10 == uVar17) {
              fVar21 = *(float *)((long)alStack_460 + uVar10 * 4 + lVar6 + 0x460);
              fVar23 = 1.0;
              fVar22 = fVar21;
            }
            else {
              fVar21 = *(float *)((long)alStack_460 + uVar10 * 4 + lVar6 + 0x460);
              fVar22 = *(float *)((long)alStack_460 + uVar17 * 4 + lVar6 + 0x460);
              fVar23 = fVar22 + fVar21 + fVar22 + fVar21;
              fVar23 = (float)NEON_fminnm((*pfVar15 * pfVar16[-1] + -1.0 + pfVar15[1] * *pfVar16 +
                                           pfVar15[2] * pfVar16[1] + fVar23) /
                                          (fVar23 + ABS(fVar21 - fVar22) * -2.0),0x3f800000);
              if (fVar23 <= 0.0) {
                fVar23 = 0.0;
              }
            }
            fVar24 = *(float *)((long)alStack_460 + uVar17 * 4 + lVar7 + 0x460);
            fVar20 = fVar20 + fVar23 * fVar22 * fVar24 * fVar24;
            uVar17 = uVar17 + 1;
            pfVar16 = pfVar16 + 3;
          } while (uVar11 != uVar17);
          fVar23 = *(float *)((long)alStack_460 + uVar10 * 4 + lVar7 + 0x460);
          *(float *)((long)alStack_460 + uVar10 * 4 + lVar8 + 0x460) =
               (fVar23 * fVar23 * fVar21) / fVar20;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar11);
        uVar10 = 0;
        do {
          lVar14 = *(long *)((long)alStack_460 + uVar10 * 8 + lVar4 + 0x460);
          uVar2 = *(uint *)(lVar14 + 0x120);
          if ((*(uint *)(lVar14 + 0xb8) & 0xf00) != 0x300) {
            uVar2 = *(uint *)(lVar14 + 0xb8);
          }
          lVar19 = ((ulong)((uVar2 & 0xff) + 3) & 0x1fc) * ((ulong)*(uint *)(lVar14 + 0x120) & 0xff)
          ;
          if ((int)lVar19 != 0) {
            fVar20 = *(float *)((long)alStack_460 + uVar10 * 4 + lVar8 + 0x460);
            pfVar16 = (float *)(*(long *)(lVar14 + 0x138) + 8);
            do {
              pfVar16[-2] = pfVar16[-2] * fVar20;
              pfVar16[-1] = pfVar16[-1] * fVar20;
              *pfVar16 = *pfVar16 * fVar20;
              pfVar16[1] = pfVar16[1] * fVar20;
              lVar19 = lVar19 + -4;
              pfVar16 = pfVar16 + 4;
            } while (lVar19 != 0);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar11);
        if (!bVar3) {
          return;
        }
      }
      uVar2 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar2;
    } while (uVar2 < *(uint *)(param_4 + 0x160));
  }
  return;
}


