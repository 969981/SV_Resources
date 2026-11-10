/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033ebf00; name: FUN_033ebf00
 */


undefined4
FUN_033ebf00(uint param_1,long param_2,ushort param_3,long param_4,long param_5,long param_6,
            int *param_7)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  long *plVar8;
  float *pfVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  float *__s;
  float *pfVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float afStack_260 [128];
  
  *param_7 = 0x11;
  __s = (float *)((long)afStack_260 + (0x200 - ((ulong)((uint)param_3 * 4 + 0xf) & 0x7fff0)));
  memset(__s,0,(ulong)param_3 << 2);
  if (param_1 != 0) {
    uVar4 = 0;
    do {
      plVar8 = *(long **)(param_2 + uVar4 * 8);
      bVar2 = *(byte *)(plVar8 + 1);
      if (bVar2 != 0) {
        uVar5 = 0;
        do {
          pfVar7 = (float *)(*plVar8 + uVar5 * *(ushort *)(plVar8 + 2) * 4);
          pfVar13 = pfVar7 + *(ushort *)((long)plVar8 + 0x12);
          if (pfVar7 < pfVar13) {
            fVar14 = *(float *)(param_6 + uVar4 * 4);
            uVar11 = (ulong)*(ushort *)((long)plVar8 + 0x12) * 4 - 1;
            fVar16 = *(float *)(param_5 + uVar4 * 4);
            uVar1 = ((uint)(uVar11 >> 2) & 0x3fffffff) + 1;
            if ((uVar1 & 3) == 0) {
              pfVar10 = __s;
            }
            else {
              lVar12 = -((ulong)uVar1 & 3);
              pfVar6 = pfVar7;
              pfVar9 = __s;
              do {
                pfVar7 = pfVar6 + 1;
                bVar3 = lVar12 != -1;
                lVar12 = lVar12 + 1;
                pfVar10 = pfVar9 + 1;
                *pfVar9 = *pfVar9 + fVar16 * *pfVar6;
                fVar16 = fVar16 + fVar14;
                pfVar6 = pfVar7;
                pfVar9 = pfVar10;
              } while (bVar3);
            }
            if (0xb < uVar11) {
              do {
                fVar18 = fVar16 + fVar14 + fVar14;
                *pfVar10 = *pfVar10 + fVar16 * *pfVar7;
                pfVar10[1] = pfVar10[1] + (fVar16 + fVar14) * pfVar7[1];
                fVar17 = fVar18 + fVar14;
                pfVar10[2] = pfVar10[2] + fVar18 * pfVar7[2];
                pfVar6 = pfVar7 + 3;
                pfVar7 = pfVar7 + 4;
                fVar16 = fVar17 + fVar14;
                pfVar10[3] = pfVar10[3] + fVar17 * *pfVar6;
                pfVar10 = pfVar10 + 4;
              } while (pfVar7 < pfVar13);
            }
            plVar8 = *(long **)(param_2 + uVar4 * 8);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != bVar2);
      }
      if (*(int *)((long)plVar8 + 0xc) != 0x11) {
        *param_7 = *(int *)((long)plVar8 + 0xc);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_1);
  }
  if (param_3 == 0) {
    fVar14 = 0.0;
  }
  else if (*(int *)(param_4 + 0x14) == 0) {
    uVar15 = 0x4f000000;
    fVar16 = -2.1474836e+09;
    pfVar7 = __s;
    do {
      pfVar13 = pfVar7 + 1;
      fVar14 = *pfVar7;
      uVar15 = NEON_fminnm(uVar15,fVar14);
      if (fVar16 <= fVar14) {
        fVar16 = fVar14;
      }
      pfVar7 = pfVar13;
    } while (pfVar13 < __s + param_3);
    fVar17 = (float)NEON_fminnm(uVar15,0x4f000000);
    if (fVar16 <= -2.1474836e+09) {
      fVar16 = -2.1474836e+09;
    }
    fVar14 = ABS(fVar17);
    if (ABS(fVar17) <= fVar16) {
      fVar14 = fVar16;
    }
  }
  else {
    fVar14 = 0.0;
    pfVar7 = __s;
    do {
      pfVar13 = pfVar7 + 1;
      fVar14 = fVar14 + *pfVar7 * *pfVar7;
      pfVar7 = pfVar13;
    } while (pfVar13 < __s + param_3);
    fVar14 = fVar14 / (float)param_3;
    if (fVar14 <= -2.1474836e+09) {
      fVar14 = -2.1474836e+09;
    }
    fVar14 = SQRT(fVar14);
  }
  log10f(fVar14);
  uVar15 = NEON_fminnm(*(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + 8));
  return uVar15;
}


