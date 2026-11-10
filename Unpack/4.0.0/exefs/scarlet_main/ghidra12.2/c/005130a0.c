/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005130a0; name: FUN_005130a0
 */


void FUN_005130a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      uVar3 = FUN_00512dd0(param_3,param_2[-1],*param_1);
      if ((uVar3 & 1) == 0) {
        *param_5 = *param_1;
        uVar5 = param_2[-1];
      }
      else {
        *param_5 = param_2[-1];
        uVar5 = *param_1;
      }
      param_5[1] = uVar5;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        puVar6 = param_1 + 1;
        uVar5 = *param_1;
        *param_5 = uVar5;
        if (puVar6 != param_2) {
          lVar11 = 0;
          puVar10 = param_5;
          do {
            puVar8 = puVar10 + 1;
            uVar3 = FUN_00512dd0(param_3,*puVar6,uVar5);
            if ((uVar3 & 1) == 0) {
              *puVar8 = *puVar6;
            }
            else {
              puVar10[1] = *puVar10;
              if (puVar10 != param_5) {
                lVar12 = 0;
                do {
                  puVar7 = (undefined8 *)((long)puVar10 + lVar12);
                  uVar3 = FUN_00512dd0(param_3,*puVar6,puVar7[-1]);
                  if ((uVar3 & 1) == 0) goto LAB_0051318c;
                  lVar12 = lVar12 + -8;
                  *puVar7 = puVar7[-1];
                } while (lVar11 != lVar12);
              }
              puVar7 = param_5;
LAB_0051318c:
              *puVar7 = *puVar6;
            }
            if (puVar6 + 1 == param_2) {
              return;
            }
            puVar6 = puVar6 + 1;
            uVar5 = *puVar8;
            lVar11 = lVar11 + -8;
            puVar10 = puVar8;
          } while( true );
        }
      }
    }
    else {
      uVar3 = param_4 >> 1;
      puVar6 = param_1 + uVar3;
      FUN_00512a70(param_1,puVar6,param_3,uVar3,param_5,uVar3);
      FUN_00512a70(puVar6,param_2,param_3,param_4 - uVar3,param_5 + uVar3,param_4 - uVar3);
      puVar10 = puVar6;
      if (uVar3 != 0) {
        puVar8 = param_1;
        do {
          if (puVar10 == param_2) {
            if (puVar8 == puVar6) {
              return;
            }
            uVar3 = (long)param_1 + (uVar3 * 8 - (long)puVar8) + -8;
            puVar10 = param_5;
            if (uVar3 < 0x38) {
              puVar7 = puVar8;
            }
            else if ((param_5 < (undefined8 *)((long)puVar8 + (uVar3 & 0xfffffffffffffff8) + 8)) &&
                    (puVar8 < (undefined8 *)((long)param_5 + (uVar3 & 0xfffffffffffffff8) + 8))) {
              puVar7 = puVar8;
            }
            else {
              uVar3 = (uVar3 >> 3) + 1;
              uVar9 = uVar3 & 0x3ffffffffffffff8;
              puVar10 = (undefined8 *)((long)param_5 + (uVar3 * 8 & 0xffffffffffffffc0));
              puVar7 = puVar8 + uVar9;
              lVar11 = 0;
              uVar4 = uVar9;
              do {
                puVar1 = (undefined8 *)((long)puVar8 + lVar11);
                puVar2 = (undefined8 *)((long)param_5 + lVar11);
                uVar4 = uVar4 - 8;
                uVar5 = *puVar1;
                uVar14 = puVar1[3];
                uVar13 = puVar1[2];
                uVar16 = puVar1[5];
                uVar15 = puVar1[4];
                uVar18 = puVar1[7];
                uVar17 = puVar1[6];
                lVar11 = lVar11 + 0x40;
                puVar2[1] = puVar1[1];
                *puVar2 = uVar5;
                puVar2[3] = uVar14;
                puVar2[2] = uVar13;
                puVar2[5] = uVar16;
                puVar2[4] = uVar15;
                puVar2[7] = uVar18;
                puVar2[6] = uVar17;
              } while (uVar4 != 0);
              if (uVar3 == uVar9) {
                return;
              }
            }
            do {
              puVar8 = puVar7 + 1;
              *puVar10 = *puVar7;
              puVar7 = puVar8;
              puVar10 = puVar10 + 1;
            } while (puVar6 != puVar8);
            return;
          }
          uVar4 = FUN_00512dd0(param_3,*puVar10,*puVar8);
          if ((uVar4 & 1) == 0) {
            *param_5 = *puVar8;
            puVar8 = puVar8 + 1;
          }
          else {
            *param_5 = *puVar10;
            puVar10 = puVar10 + 1;
          }
          param_5 = param_5 + 1;
        } while (puVar8 != puVar6);
      }
      if (puVar10 != param_2) {
        uVar3 = (long)param_2 + (-8 - (long)puVar10);
        if ((uVar3 < 0x38) ||
           ((lVar11 = (uVar3 & 0xfffffffffffffff8) + 8,
            param_5 < (undefined8 *)((long)puVar10 + lVar11) &&
            (puVar10 < (undefined8 *)((long)param_5 + lVar11))))) {
          puVar6 = param_5;
          puVar8 = puVar10;
        }
        else {
          uVar3 = (uVar3 >> 3) + 1;
          uVar9 = uVar3 & 0x3ffffffffffffff8;
          puVar6 = param_5 + uVar9;
          puVar8 = puVar10 + uVar9;
          puVar7 = param_5 + 4;
          puVar10 = puVar10 + 4;
          uVar4 = uVar9;
          do {
            uVar5 = puVar10[-4];
            uVar14 = puVar10[-1];
            uVar13 = puVar10[-2];
            uVar4 = uVar4 - 8;
            uVar16 = puVar10[1];
            uVar15 = *puVar10;
            uVar18 = puVar10[3];
            uVar17 = puVar10[2];
            puVar7[-3] = puVar10[-3];
            puVar7[-4] = uVar5;
            puVar7[-1] = uVar14;
            puVar7[-2] = uVar13;
            puVar7[1] = uVar16;
            *puVar7 = uVar15;
            puVar7[3] = uVar18;
            puVar7[2] = uVar17;
            puVar7 = puVar7 + 8;
            puVar10 = puVar10 + 8;
          } while (uVar4 != 0);
          if (uVar3 == uVar9) {
            return;
          }
        }
        do {
          puVar10 = puVar8 + 1;
          *puVar6 = *puVar8;
          puVar6 = puVar6 + 1;
          puVar8 = puVar10;
        } while (param_2 != puVar10);
      }
    }
  }
  return;
}


