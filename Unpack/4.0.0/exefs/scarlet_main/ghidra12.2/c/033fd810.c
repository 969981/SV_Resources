/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033fd810; name: FUN_033fd810
 */


void FUN_033fd810(float param_1,float param_2,long *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
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
  
  iVar3 = 0;
  if ((param_4 & 1) == 0) {
    iVar3 = -(*(uint *)(param_3 + 1) >> 0xf & 1);
  }
  uVar1 = iVar3 + (*(uint *)(param_3 + 1) & 0xff);
  uVar4 = *(ushort *)((long)param_3 + 0x12);
  uVar6 = (ulong)uVar4;
  if (param_2 == param_1) {
    bVar5 = true;
    if ((uVar1 != 0) && (bVar5 = false, !NAN(param_1))) {
      bVar5 = param_1 == 1.0;
    }
    if (!bVar5) {
      if (uVar4 < 4) {
        uVar8 = uVar6 * 4 - 1;
        uVar2 = ((uint)(uVar8 >> 2) & 0x3fffffff) + 1;
        uVar7 = 0;
        do {
          pfVar10 = (float *)(*param_3 + uVar7 * *(ushort *)(param_3 + 2) * 4);
          pfVar11 = pfVar10 + uVar6;
          if (pfVar10 < pfVar11) {
            if ((uVar2 & 7) != 0) {
              pfVar12 = pfVar10;
              lVar13 = -((ulong)uVar2 & 7);
              do {
                bVar5 = lVar13 != -1;
                lVar13 = lVar13 + 1;
                pfVar10 = pfVar12 + 1;
                *pfVar12 = *pfVar12 * param_1;
                pfVar12 = pfVar10;
              } while (bVar5);
            }
            if (0x1b < uVar8) {
              do {
                pfVar10[1] = pfVar10[1] * param_1;
                *pfVar10 = *pfVar10 * param_1;
                pfVar10[3] = pfVar10[3] * param_1;
                pfVar10[2] = pfVar10[2] * param_1;
                pfVar10[5] = pfVar10[5] * param_1;
                pfVar10[4] = pfVar10[4] * param_1;
                pfVar10[7] = pfVar10[7] * param_1;
                pfVar10[6] = pfVar10[6] * param_1;
                pfVar10 = pfVar10 + 8;
              } while (pfVar10 < pfVar11);
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar1);
      }
      else {
        uVar7 = 0;
        do {
          pfVar10 = (float *)(*param_3 + uVar7 * *(ushort *)(param_3 + 2) * 4);
          pfVar11 = pfVar10 + uVar6;
          if ((int)(uVar6 & 0xfffc) != 0) {
            pfVar12 = pfVar10 + (uVar6 & 0xfffc);
            pfVar9 = pfVar10;
            do {
              pfVar10 = pfVar9 + 4;
              *(ulong *)(pfVar9 + 2) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) * param_1,
                            (float)*(undefined8 *)(pfVar9 + 2) * param_1);
              *(ulong *)pfVar9 =
                   CONCAT44((float)((ulong)*(undefined8 *)pfVar9 >> 0x20) * param_1,
                            (float)*(undefined8 *)pfVar9 * param_1);
              pfVar9 = pfVar10;
            } while (pfVar10 < pfVar12);
          }
          for (; pfVar10 < pfVar11; pfVar10 = pfVar10 + 1) {
            *pfVar10 = *pfVar10 * param_1;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar1);
      }
    }
  }
  else if (uVar1 != 0) {
    fVar14 = (param_2 - param_1) / (float)uVar6;
    if (uVar4 < 4) {
      uVar8 = uVar6 * 4 - 1;
      uVar2 = ((uint)(uVar8 >> 2) & 0x3fffffff) + 1;
      uVar7 = 0;
      do {
        pfVar10 = (float *)(*param_3 + uVar7 * *(ushort *)(param_3 + 2) * 4);
        pfVar11 = pfVar10 + uVar6;
        if (pfVar10 < pfVar11) {
          fVar15 = param_1;
          if ((uVar2 & 3) != 0) {
            pfVar12 = pfVar10;
            lVar13 = -((ulong)uVar2 & 3);
            do {
              fVar17 = *pfVar12 * fVar15;
              fVar15 = fVar15 + fVar14;
              pfVar10 = pfVar12 + 1;
              *pfVar12 = fVar17;
              bVar5 = lVar13 != -1;
              lVar13 = lVar13 + 1;
              pfVar12 = pfVar10;
            } while (bVar5);
          }
          if (0xb < uVar8) {
            do {
              fVar17 = fVar15 + fVar14 + fVar14;
              *pfVar10 = *pfVar10 * fVar15;
              pfVar10[1] = pfVar10[1] * (fVar15 + fVar14);
              fVar16 = fVar17 + fVar14;
              fVar15 = fVar16 + fVar14;
              pfVar10[2] = pfVar10[2] * fVar17;
              pfVar10[3] = pfVar10[3] * fVar16;
              pfVar10 = pfVar10 + 4;
            } while (pfVar10 < pfVar11);
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
    else {
      uVar7 = uVar6 & 0xfffc;
      if ((int)uVar7 == 0) {
        uVar8 = uVar6 * 4 - 1;
        uVar2 = ((uint)(uVar8 >> 2) & 0x3fffffff) + 1;
        uVar7 = 0;
        do {
          pfVar10 = (float *)(*param_3 + uVar7 * *(ushort *)(param_3 + 2) * 4);
          pfVar11 = pfVar10 + uVar6;
          if (pfVar10 < pfVar11) {
            fVar15 = param_1;
            if ((uVar2 & 3) != 0) {
              pfVar12 = pfVar10;
              lVar13 = -((ulong)uVar2 & 3);
              do {
                fVar17 = *pfVar12 * fVar15;
                fVar15 = fVar15 + fVar14;
                pfVar10 = pfVar12 + 1;
                *pfVar12 = fVar17;
                bVar5 = lVar13 != -1;
                lVar13 = lVar13 + 1;
                pfVar12 = pfVar10;
              } while (bVar5);
            }
            if (0xb < uVar8) {
              do {
                fVar17 = fVar15 + fVar14 + fVar14;
                *pfVar10 = *pfVar10 * fVar15;
                pfVar10[1] = pfVar10[1] * (fVar15 + fVar14);
                fVar16 = fVar17 + fVar14;
                fVar15 = fVar16 + fVar14;
                pfVar10[2] = pfVar10[2] * fVar17;
                pfVar10[3] = pfVar10[3] * fVar16;
                pfVar10 = pfVar10 + 4;
              } while (pfVar10 < pfVar11);
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar1);
      }
      else {
        fVar17 = (param_2 - param_1) / (float)uVar7;
        fVar16 = fVar17 + param_1 + fVar17;
        fVar15 = fVar17 * 4.0;
        uVar8 = 0;
        do {
          pfVar10 = (float *)(*param_3 + uVar8 * *(ushort *)(param_3 + 2) * 4);
          pfVar11 = pfVar10;
          fVar18 = param_1;
          fVar19 = fVar17 + param_1;
          fVar20 = fVar16;
          fVar21 = fVar16 + fVar17;
          do {
            fVar22 = (float)*(undefined8 *)pfVar11 * fVar18;
            fVar23 = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20) * fVar19;
            fVar24 = (float)*(undefined8 *)(pfVar11 + 2) * fVar20;
            fVar25 = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20) * fVar21;
            fVar18 = fVar18 + fVar15;
            fVar19 = fVar19 + fVar15;
            fVar20 = fVar20 + fVar15;
            fVar21 = fVar21 + fVar15;
            pfVar12 = pfVar11 + 4;
            *(ulong *)(pfVar11 + 2) = CONCAT44(fVar25,fVar24);
            *(ulong *)pfVar11 = CONCAT44(fVar23,fVar22);
            pfVar11 = pfVar12;
          } while (pfVar12 < pfVar10 + uVar7);
          if (pfVar12 < pfVar10 + uVar6) {
            fVar18 = param_1;
            do {
              fVar19 = *pfVar12 * fVar18;
              fVar18 = fVar18 + fVar14;
              pfVar11 = pfVar12 + 1;
              *pfVar12 = fVar19;
              pfVar12 = pfVar11;
            } while (pfVar11 < pfVar10 + uVar6);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar1);
      }
    }
  }
  return;
}


