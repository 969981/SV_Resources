/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a16a0; name: FUN_030a16a0
 */


undefined8 FUN_030a16a0(long *param_1,long *param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  bool bVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((((*(float *)(param_2 + 3) < *(float *)(param_1 + 2)) ||
       (*(float *)(param_1 + 3) < *(float *)(param_2 + 2))) ||
      (*(float *)((long)param_2 + 0x1c) < *(float *)((long)param_1 + 0x14))) ||
     (*(float *)((long)param_1 + 0x1c) < *(float *)((long)param_2 + 0x14))) {
    return 0;
  }
  iVar3 = (int)param_1[1];
  iVar4 = (int)param_2[1];
  pfVar9 = (float *)*param_1;
  lVar8 = *param_2;
  uVar11 = iVar4 - 1;
  if (1 < iVar4) {
    lVar15 = lVar8 + (long)(int)uVar11 * 0x14;
    pfVar7 = (float *)(lVar8 + 0xc);
    uVar13 = 0;
    fVar19 = pfVar9[(long)(iVar3 + -1) * 5 + 3] * *(float *)(lVar15 + 8) -
             pfVar9[(long)(iVar3 + -1) * 5 + 2] * *(float *)(lVar15 + 0xc);
    do {
      bVar16 = fVar19 <= 0.0;
      fVar19 = pfVar9[(long)(iVar3 + -1) * 5 + 3] * pfVar7[-1] -
               pfVar9[(long)(iVar3 + -1) * 5 + 2] * *pfVar7;
      if ((bVar16) && (0.0 < fVar19)) {
        uVar11 = (uint)uVar13;
        break;
      }
      uVar13 = uVar13 + 1;
      pfVar7 = pfVar7 + 5;
    } while (uVar11 != uVar13);
  }
  iVar14 = 0;
  uVar12 = uVar11;
  do {
    pfVar6 = (float *)(lVar8 + (long)(int)uVar12 * 0x14);
    lVar15 = (long)iVar14;
    pfVar7 = pfVar9 + (long)iVar14 * 5 + 2;
    lVar17 = (long)(int)uVar12;
    while( true ) {
      if ((pfVar7[-2] == *pfVar6) && (pfVar7[-1] == pfVar6[1])) {
        return 0;
      }
      if (0.0 <= *pfVar7 * pfVar6[3] - pfVar7[1] * pfVar6[2]) break;
      if (0.0 <= pfVar7[2] + *pfVar6 * *pfVar7 + pfVar7[1] * pfVar6[1]) {
        return 0;
      }
      lVar15 = lVar15 + 1;
      pfVar7 = pfVar7 + 5;
      if (iVar3 == (int)lVar15) {
        lVar15 = (long)iVar3;
        goto LAB_030a1868;
      }
    }
    if (0.0 <= *(float *)(lVar8 + lVar17 * 0x14 + 0x10) +
               pfVar7[-2] * pfVar6[2] + pfVar6[3] * pfVar7[-1]) {
      return 0;
    }
    uVar2 = 0;
    if (uVar12 + 1 != iVar4) {
      uVar2 = uVar12 + 1;
    }
    iVar14 = (int)lVar15;
    uVar12 = uVar2;
    if (uVar2 == uVar11) {
      lVar17 = (long)(int)uVar11;
      uVar12 = uVar11;
LAB_030a1868:
      pfVar10 = (float *)(lVar8 + lVar17 * 0x14);
      pfVar7 = pfVar10 + 1;
      lVar17 = (iVar3 - lVar15) + 1;
      pfVar6 = pfVar9 + lVar15 * 5 + 2;
      do {
        lVar17 = lVar17 + -1;
        if (lVar17 == 0) {
          if (uVar12 == uVar11) {
            return 1;
          }
          do {
            if ((*pfVar9 == *(float *)(lVar8 + (long)(int)uVar12 * 0x14)) &&
               (pfVar9[1] == *(float *)(lVar8 + (long)(int)uVar12 * 0x14 + 4))) {
              return 0;
            }
            lVar15 = lVar8 + (long)(int)uVar12 * 0x14;
            if (0.0 <= *(float *)(lVar15 + 0x10) +
                       *pfVar9 * *(float *)(lVar15 + 8) + pfVar9[1] * *(float *)(lVar15 + 0xc)) {
              return 0;
            }
            uVar2 = 0;
            if (uVar12 + 1 != iVar4) {
              uVar2 = uVar12 + 1;
            }
            uVar12 = uVar2;
          } while (uVar2 != uVar11);
          return 1;
        }
        fVar19 = *pfVar10;
        if (pfVar6[-2] == fVar19) {
          fVar18 = *pfVar7;
          if (pfVar6[-1] == fVar18) {
            return 0;
          }
        }
        else {
          fVar18 = *pfVar7;
        }
        fVar20 = *pfVar6;
        pfVar5 = pfVar6 + 1;
        pfVar1 = pfVar6 + 2;
        pfVar6 = pfVar6 + 5;
      } while (*pfVar1 + fVar19 * fVar20 + fVar18 * *pfVar5 < 0.0);
      return 0;
    }
  } while( true );
}


