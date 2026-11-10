/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01207fb4; name: FUN_01207fb4
 */


float FUN_01207fb4(undefined8 param_1,undefined8 param_2,long param_3,ulong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_258;
  int local_254;
  int iStack_250;
  int local_24c;
  int iStack_248;
  int local_244;
  ulong auStack_240 [64];
  
  if (*(long *)(param_3 + 0x48) != 0) {
    memset(&local_258,0,0x218);
    FUN_01208e3c(param_1,param_2,&local_258);
    FUN_01208278(&local_258);
    iVar2 = *(int *)(param_3 + 0x60);
    iVar4 = *(int *)(param_3 + 100);
    iVar3 = *(int *)(param_3 + 0x38);
    iVar5 = iVar4 + *(int *)(param_3 + 0x3c) + -1;
    iVar6 = iVar2 + iVar3 + -1;
    iVar15 = iVar4;
    if (iVar4 <= local_24c) {
      iVar15 = local_24c;
    }
    if (iStack_248 <= iVar6) {
      iVar6 = iStack_248;
    }
    if (local_244 <= iVar5) {
      iVar5 = local_244;
    }
    if (iVar15 <= iVar5) {
      fVar20 = (float)((ulong)param_1 >> 0x20);
      iVar7 = iVar2;
      if (iVar2 <= iStack_250) {
        iVar7 = iStack_250;
      }
      iVar7 = iVar7 + -1;
      iVar16 = iVar3 * (iVar15 - iVar4) - iVar2;
      iVar17 = iVar7;
      if (iVar7 <= iVar6) {
        iVar17 = iVar6;
      }
      do {
        iVar9 = iVar7;
        while ((iVar17 != iVar9 &&
               (uVar11 = (ulong)((iVar9 - local_258) + 1),
               auStack_240[iVar15 - local_254] >> (uVar11 & 0x3f) != 0))) {
          iVar18 = iVar9 + 1;
          iVar1 = iVar16 + iVar9;
          iVar9 = iVar18;
          if ((iVar1 != -2) && ((1L << (uVar11 & 0x3f) & auStack_240[iVar15 - local_254]) != 0)) {
            uVar10 = iVar16 + iVar18;
            if ((int)uVar10 < 0) {
              return 0.0;
            }
            if (*(long *)(param_3 + 0x48) == 0) {
              return 0.0;
            }
            iVar17 = 0;
            iVar16 = 0;
LAB_01208124:
            if (((int)uVar10 < *(int *)(param_3 + 0x44)) &&
               (lVar12 = *(long *)(*(long *)(param_3 + 0x48) + (ulong)uVar10 * 8), lVar12 != 0)) {
              lVar12 = *(long *)(lVar12 + 0x20);
              if (lVar12 != 0) {
                if (*(char *)(lVar12 + 0x10) < '\0') {
                  fVar21 = *(float *)(lVar12 + 0x20);
                }
                else {
                  fVar21 = *(float *)(lVar12 + 4);
                }
                fVar21 = fVar20 - fVar21;
                fVar21 = fVar21 * fVar21;
                lVar14 = lVar12;
                if (3.4028235e+38 <= fVar21) {
                  lVar14 = 0;
                }
                lVar12 = *(long *)(lVar12 + 0x28);
                if (lVar12 != 0) {
                  fVar21 = (float)NEON_fminnm(fVar21,0x7f7fffff);
                  lVar13 = lVar14;
                  do {
                    if (*(char *)(lVar12 + 0x10) < '\0') {
                      fVar22 = *(float *)(lVar12 + 0x20);
                    }
                    else {
                      fVar22 = *(float *)(lVar12 + 4);
                    }
                    fVar22 = fVar20 - fVar22;
                    fVar22 = fVar22 * fVar22;
                    lVar14 = lVar12;
                    if (fVar21 <= fVar22) {
                      lVar14 = lVar13;
                    }
                    lVar12 = *(long *)(lVar12 + 0x28);
                    if (fVar21 <= fVar22) {
                      fVar22 = fVar21;
                    }
                    lVar13 = lVar14;
                    fVar21 = fVar22;
                  } while (lVar12 != 0);
                }
                if ((lVar14 != 0) &&
                   ((iVar16 = iVar16 + 1, (*(ulong *)(lVar14 + 0x10) & *param_4) != 0 ||
                    ((*(ulong *)(lVar14 + 0x18) & param_4[1]) != 0)))) {
                  iVar17 = iVar17 + 1;
                }
              }
              if (iVar15 <= iVar5) {
                iVar9 = iVar3 * (iVar15 - iVar4) - iVar2;
                do {
                  iVar1 = iVar18;
                  if (iVar18 <= iVar6) {
                    iVar1 = iVar6;
                  }
                  while ((iVar19 = iVar18, iVar1 != iVar19 &&
                         (uVar11 = (ulong)(uint)((1 - local_258) + iVar19),
                         auStack_240[iVar15 - local_254] >> (uVar11 & 0x3f) != 0))) {
                    iVar18 = iVar19 + 1;
                    if (((auStack_240[iVar15 - local_254] >> (uVar11 & 0x3f) & 1) != 0) &&
                       (iVar9 + iVar19 != -2)) {
                      uVar10 = iVar9 + iVar18;
                      if ((int)uVar10 < 0) goto LAB_01208234;
                      goto LAB_01208124;
                    }
                  }
                  bVar8 = iVar15 != iVar5;
                  iVar15 = iVar15 + 1;
                  iVar9 = iVar9 + iVar3;
                  iVar18 = iVar7;
                } while (bVar8);
              }
            }
LAB_01208234:
            if (iVar16 < 1) {
              return 0.0;
            }
            return (float)iVar17 / (float)iVar16;
          }
        }
        bVar8 = iVar15 != iVar5;
        iVar15 = iVar15 + 1;
        iVar16 = iVar16 + iVar3;
      } while (bVar8);
    }
  }
  return 0.0;
}


