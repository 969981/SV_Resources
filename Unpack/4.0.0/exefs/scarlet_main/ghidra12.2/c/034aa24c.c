/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034aa24c; name: FUN_034aa24c
 */


void FUN_034aa24c(long *param_1,undefined8 param_2,uint param_3,undefined8 param_4,uint param_5,
                 undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  
  uVar8 = (uint)((ulong)param_4 >> 0x20);
  fVar7 = (float)param_4;
  uVar10 = *(uint *)(param_1 + 1);
  if (uVar10 != 0) {
    iVar12 = 0;
    lVar9 = *param_1;
    uVar17 = uVar10;
    do {
      uVar1 = iVar12 + (uVar17 >> 1);
      lVar14 = *(long *)(lVar9 + (long)(int)uVar1 * 8);
      if (*(float *)(lVar14 + 0x2c0) == (float)param_2) {
        uVar19 = *(uint *)(lVar14 + 0x2c4);
        uVar15 = (uint)((ulong)param_2 >> 0x20);
        uVar2 = *(uint *)(lVar14 + 0x2c8);
        if (uVar19 == uVar15 && uVar2 == param_3) {
          uVar17 = uVar10 - 1;
          if (uVar1 == 0) {
LAB_034aa334:
            if (uVar17 <= uVar1) {
              return;
            }
            uVar18 = (ulong)(uVar1 + 1);
            lVar16 = *(long *)(lVar9 + uVar18 * 8);
            if (*(float *)(lVar16 + 0x2c0) == fVar7) {
              bVar4 = *(uint *)(lVar16 + 0x2c4) < uVar8;
              uVar19 = *(uint *)(lVar16 + 0x2c8);
              if (*(char *)((long)param_1 + 0x12) == '\0') {
                bVar4 = uVar8 < *(uint *)(lVar16 + 0x2c4);
                bVar5 = param_5 < uVar19;
              }
              else {
                bVar5 = uVar19 < param_5;
              }
              if (uVar19 != param_5) {
                bVar4 = bVar5;
              }
              if (!bVar4) {
                return;
              }
            }
            else if (*(float *)(lVar16 + 0x2c0) <= fVar7) {
              return;
            }
            if (uVar10 - 2 <= uVar1) goto LAB_034aa42c;
            lVar20 = *(long *)(lVar9 + (ulong)(uVar1 + 2) * 8);
            if (*(float *)(lVar20 + 0x2c0) == fVar7) {
              uVar19 = *(uint *)(lVar20 + 0x2c8);
              uVar2 = *(uint *)(lVar20 + 0x2c4);
              bVar4 = uVar8 <= uVar2;
              if (*(char *)((long)param_1 + 0x12) == '\0') goto LAB_034aa3b8;
LAB_034aa418:
              bVar4 = bVar4 && uVar2 != uVar8;
              bVar6 = uVar19 == param_5;
              bVar5 = param_5 <= uVar19 && !bVar6;
              goto LAB_034aa424;
            }
            if (*(float *)(lVar20 + 0x2c0) < fVar7) goto LAB_034aa42c;
          }
          else {
            uVar18 = (ulong)(uVar1 - 1);
            lVar16 = *(long *)(lVar9 + uVar18 * 8);
            if (*(float *)(lVar16 + 0x2c0) == fVar7) {
              bVar4 = *(uint *)(lVar16 + 0x2c4) < uVar8;
              uVar19 = *(uint *)(lVar16 + 0x2c8);
              if (*(char *)((long)param_1 + 0x12) == '\0') {
                bVar5 = uVar19 < param_5;
              }
              else {
                bVar4 = uVar8 < *(uint *)(lVar16 + 0x2c4);
                bVar5 = param_5 < uVar19;
              }
              if (uVar19 != param_5) {
                bVar4 = bVar5;
              }
              if (!bVar4) goto LAB_034aa334;
            }
            else if (fVar7 <= *(float *)(lVar16 + 0x2c0)) goto LAB_034aa334;
            if (uVar1 < 2) goto LAB_034aa42c;
            lVar20 = *(long *)(lVar9 + (ulong)(uVar1 - 2) * 8);
            if (*(float *)(lVar20 + 0x2c0) == fVar7) {
              uVar19 = *(uint *)(lVar20 + 0x2c8);
              uVar2 = *(uint *)(lVar20 + 0x2c4);
              bVar4 = uVar8 <= uVar2;
              if (*(char *)((long)param_1 + 0x12) == '\0') goto LAB_034aa418;
LAB_034aa3b8:
              bVar4 = !bVar4;
              bVar5 = uVar19 < param_5;
              bVar6 = uVar19 == param_5;
LAB_034aa424:
              if (!bVar6) {
                bVar4 = bVar5;
              }
              if (bVar4) {
LAB_034aa42c:
                *(long *)(lVar9 + uVar18 * 8) = lVar14;
                *(long *)(lVar9 + (long)(int)uVar1 * 8) = lVar16;
                return;
              }
            }
            else if (fVar7 < *(float *)(lVar20 + 0x2c0)) goto LAB_034aa42c;
          }
          uVar19 = 0;
          goto LAB_034aa440;
        }
        bVar4 = uVar15 < uVar19;
        if (uVar2 != param_3) {
          bVar4 = param_3 < uVar2;
        }
        bVar5 = uVar19 < uVar15;
        if (uVar2 != param_3) {
          bVar5 = uVar2 < param_3;
        }
        if (*(char *)((long)param_1 + 0x12) != '\0') {
          bVar4 = bVar5;
        }
      }
      else {
        bVar4 = (float)param_2 < *(float *)(lVar14 + 0x2c0);
      }
      if (bVar4 != 0) {
        iVar12 = uVar1 + 1;
      }
      uVar17 = uVar17 - bVar4 >> 1;
    } while (uVar17 != 0);
  }
  return;
LAB_034aa440:
  do {
    uVar2 = uVar19 + (uVar10 >> 1);
    lVar14 = *(long *)(lVar9 + (long)(int)uVar2 * 8);
    if (*(float *)(lVar14 + 0x2c0) == fVar7) {
      uVar15 = *(uint *)(lVar14 + 0x2c4);
      uVar3 = *(uint *)(lVar14 + 0x2c8);
      if (uVar15 == uVar8 && uVar3 == param_5) {
        uVar19 = uVar2;
        break;
      }
      bVar4 = uVar8 < uVar15;
      if (uVar3 != param_5) {
        bVar4 = param_5 < uVar3;
      }
      bVar5 = uVar15 < uVar8;
      if (uVar3 != param_5) {
        bVar5 = uVar3 < param_5;
      }
      if (*(char *)((long)param_1 + 0x12) != '\0') {
        bVar4 = bVar5;
      }
    }
    else {
      bVar4 = fVar7 < *(float *)(lVar14 + 0x2c0);
    }
    if (bVar4 != 0) {
      uVar19 = uVar2 + 1;
    }
    uVar10 = uVar10 - bVar4 >> 1;
  } while (uVar10 != 0);
  if (lVar9 != 0) {
    uVar17 = uVar19 - (uVar1 < uVar19);
  }
  uVar18 = (ulong)uVar17;
  uVar11 = (ulong)uVar1;
  if (uVar17 < uVar1) {
    if (uVar11 != uVar18) {
      lVar14 = uVar18 * 8 + uVar11 * -8;
      puVar13 = (undefined8 *)(lVar9 + (ulong)uVar1 * 8);
      do {
        *puVar13 = puVar13[-1];
        lVar14 = lVar14 + 8;
        puVar13 = puVar13 + -1;
      } while (lVar14 != 0);
    }
  }
  else if (uVar11 != uVar18) {
    lVar14 = uVar18 * 8 + uVar11 * -8;
    puVar13 = (undefined8 *)(lVar9 + uVar11 * 8);
    do {
      *puVar13 = puVar13[1];
      lVar14 = lVar14 + -8;
      puVar13 = puVar13 + 1;
    } while (lVar14 != 0);
  }
  *(undefined8 *)(lVar9 + uVar18 * 8) = *param_6;
  return;
}


