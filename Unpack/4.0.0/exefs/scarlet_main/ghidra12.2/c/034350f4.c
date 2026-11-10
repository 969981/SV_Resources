/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034350f4; name: FUN_034350f4
 */


uint FUN_034350f4(undefined8 param_1,float *param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (*(int *)(param_4 + 0x38) == 0) {
    uVar12 = 1;
  }
  else {
    fVar19 = param_2[2];
    fVar17 = *param_2;
    fVar18 = param_2[1];
    uVar8 = 0;
    uVar12 = 1;
    do {
      pfVar11 = *(float **)(*(long *)(param_4 + 0x30) + uVar8 * 8);
      if (*(char *)(pfVar11 + 0x1f) == '\0') {
        fVar14 = fVar18 - pfVar11[1];
        fVar13 = fVar17 - *pfVar11;
        fVar16 = fVar19 - pfVar11[2];
        fVar15 = pfVar11[6] * fVar13 + fVar14 * pfVar11[7] + fVar16 * pfVar11[8];
        fVar13 = pfVar11[9] * fVar13 + fVar14 * pfVar11[10] + fVar16 * pfVar11[0xb];
        bVar1 = false;
        bVar2 = false;
        if (-0.0001 < fVar15) {
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar13)) {
            bVar1 = fVar13 < 0.0001;
            bVar2 = false;
          }
        }
        if (bVar1 == bVar2) {
          bVar1 = false;
          bVar2 = true;
          bVar3 = false;
          if (fVar15 < 0.0001) {
            bVar1 = false;
            bVar2 = false;
            bVar3 = true;
            if (!NAN(fVar13)) {
              bVar1 = fVar13 < -0.0001;
              bVar2 = fVar13 == -0.0001;
              bVar3 = false;
            }
          }
          if (bVar2 || bVar1 != bVar3) {
            bVar1 = false;
            bVar2 = true;
            bVar3 = false;
            if (0.0001 < fVar15) {
              bVar1 = false;
              bVar2 = false;
              bVar3 = true;
              if (!NAN(fVar13)) {
                bVar1 = fVar13 < 0.0001;
                bVar2 = fVar13 == 0.0001;
                bVar3 = false;
              }
            }
            if (!bVar2 && bVar1 == bVar3) {
              lVar9 = *(long *)(*(long *)(pfVar11 + 0x1a) + 0x38);
              if (lVar9 == param_4) {
                lVar9 = *(long *)(*(long *)(pfVar11 + 0x1c) + 0x38);
              }
              uVar5 = *(uint *)(lVar9 + 0x38);
              if (uVar5 != 0) {
                uVar10 = 0;
                do {
                  pfVar6 = *(float **)(*(long *)(lVar9 + 0x30) + uVar10 * 8);
                  if (pfVar6 != pfVar11 && *(char *)(pfVar6 + 0x1f) == '\0') {
                    fVar14 = fVar18 - pfVar6[1];
                    fVar13 = fVar17 - *pfVar6;
                    fVar16 = fVar19 - pfVar6[2];
                    fVar15 = pfVar6[6] * fVar13 + fVar14 * pfVar6[7] + fVar16 * pfVar6[8];
                    fVar13 = pfVar6[9] * fVar13 + fVar14 * pfVar6[10] + fVar16 * pfVar6[0xb];
                    bVar1 = false;
                    bVar2 = false;
                    if (-0.0001 < fVar15) {
                      bVar1 = false;
                      bVar2 = true;
                      if (!NAN(fVar13)) {
                        bVar1 = fVar13 < 0.0001;
                        bVar2 = false;
                      }
                    }
                    if (bVar1 == bVar2) {
                      bVar1 = false;
                      bVar2 = true;
                      bVar3 = false;
                      if (fVar15 < 0.0001) {
                        bVar1 = false;
                        bVar2 = false;
                        bVar3 = true;
                        if (!NAN(fVar13)) {
                          bVar1 = fVar13 < -0.0001;
                          bVar2 = fVar13 == -0.0001;
                          bVar3 = false;
                        }
                      }
                      if (bVar2 || bVar1 != bVar3) goto LAB_034352bc;
                      uVar7 = 1;
                    }
                    else {
                      uVar7 = 0;
                    }
                    uVar4 = FUN_03435714(param_1,pfVar6,uVar7,param_2,param_3,param_5,param_6,
                                         param_7,param_8,param_9);
                    uVar5 = *(uint *)(lVar9 + 0x38);
                    uVar12 = uVar12 & uVar4;
                  }
LAB_034352bc:
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar5);
              }
            }
            goto LAB_03435304;
          }
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
        }
        uVar5 = FUN_03435714(param_1,pfVar11,uVar7,param_2,param_3,param_5,param_6,param_7,param_8,
                             param_9);
        uVar12 = uVar12 & uVar5;
      }
LAB_03435304:
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_4 + 0x38));
  }
  return uVar12;
}


