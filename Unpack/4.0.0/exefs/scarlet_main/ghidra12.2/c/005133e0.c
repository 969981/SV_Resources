/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005133e0; name: FUN_005133e0
 */


void FUN_005133e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 *param_7,long param_8)

{
  size_t sVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auStack_e0 [128];
  
  if (param_6 == 0) {
    return;
  }
  while ((param_8 < param_6 && (param_8 < param_5))) {
    if (param_5 == 0) {
      return;
    }
    lVar21 = -param_5;
    while (uVar3 = FUN_00512dd0(param_4,*param_2,*param_1), (uVar3 & 1) == 0) {
      param_1 = param_1 + 1;
      bVar2 = lVar21 == -1;
      lVar21 = lVar21 + 1;
      if (bVar2) {
        return;
      }
    }
    lVar6 = -lVar21;
    if (lVar6 < param_6) {
      lVar10 = param_6;
      if (param_6 < 0) {
        lVar10 = param_6 + 1;
      }
      lVar10 = lVar10 >> 1;
      puVar18 = param_2 + lVar10;
      puVar9 = param_1;
      if ((long)param_2 - (long)param_1 != 0) {
        uVar3 = (long)param_2 - (long)param_1 >> 3;
        do {
          uVar22 = uVar3 >> 1;
          uVar4 = FUN_00512dd0(param_4,*puVar18,puVar9[uVar22]);
          uVar5 = uVar3 + ~uVar22;
          uVar3 = uVar22;
          if ((uVar4 & 1) == 0) {
            puVar9 = puVar9 + uVar22 + 1;
            uVar3 = uVar5;
          }
        } while (uVar3 != 0);
      }
      lVar6 = (long)puVar9 - (long)param_1 >> 3;
    }
    else {
      if (lVar21 == -1) {
        uVar13 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar13;
        return;
      }
      if (lVar6 < 0) {
        lVar6 = lVar6 + 1;
      }
      lVar6 = lVar6 >> 1;
      puVar9 = param_1 + lVar6;
      if ((long)param_3 - (long)param_2 == 0) {
        puVar18 = param_2;
      }
      else {
        uVar3 = (long)param_3 - (long)param_2 >> 3;
        puVar8 = param_2;
        do {
          uVar4 = uVar3 >> 1;
          uVar5 = FUN_00512dd0(param_4,puVar8[uVar4],*puVar9);
          puVar18 = puVar8 + uVar4 + 1;
          uVar3 = uVar3 + ~uVar4;
          if ((uVar5 & 1) == 0) {
            puVar18 = puVar8;
            uVar3 = uVar4;
          }
          puVar8 = puVar18;
        } while (uVar3 != 0);
      }
      lVar10 = (long)puVar18 - (long)param_2 >> 3;
    }
    param_5 = -(lVar6 + lVar21);
    if (puVar9 == param_2) {
      param_2 = puVar18;
    }
    else if (param_2 == puVar18) {
      param_2 = puVar9;
    }
    else {
      if (puVar9 + 1 == param_2) {
        uVar13 = *puVar9;
        sVar1 = (long)puVar18 - (long)param_2;
        if (sVar1 != 0) {
          memmove(puVar9,param_2,sVar1);
        }
        param_2 = (undefined8 *)((long)puVar9 + sVar1);
        *param_2 = uVar13;
      }
      else {
        if (param_2 + 1 != puVar18) {
          lVar7 = (long)param_2 - (long)puVar9 >> 3;
          lVar11 = (long)puVar18 - (long)param_2 >> 3;
          if (lVar7 == lVar11) {
            uVar3 = ((long)param_2 - (long)puVar9) - 8;
            if ((uVar3 < 0x38) ||
               ((puVar9 < (undefined8 *)((long)param_2 + (uVar3 & 0xfffffffffffffff8) + 8) &&
                (param_2 < (undefined8 *)((long)puVar9 + (uVar3 & 0xfffffffffffffff8) + 8))))) {
              puVar8 = param_2;
              puVar12 = puVar9;
            }
            else {
              uVar3 = (uVar3 >> 3) + 1;
              uVar4 = uVar3 & 0x3ffffffffffffff8;
              lVar7 = 0;
              puVar8 = param_2 + uVar4;
              puVar12 = puVar9 + uVar4;
              uVar5 = uVar4;
              do {
                puVar20 = (undefined8 *)((long)param_2 + lVar7);
                puVar17 = (undefined8 *)((long)puVar9 + lVar7 + 0x20);
                uVar5 = uVar5 - 8;
                uVar26 = *puVar20;
                uVar28 = puVar20[3];
                uVar27 = puVar20[2];
                uVar23 = puVar17[-3];
                uVar13 = puVar17[-4];
                uVar25 = puVar17[-1];
                uVar24 = puVar17[-2];
                lVar7 = lVar7 + 0x40;
                uVar31 = puVar20[5];
                uVar30 = puVar20[4];
                uVar33 = puVar20[7];
                uVar32 = puVar20[6];
                puVar17[-3] = puVar20[1];
                puVar17[-4] = uVar26;
                puVar17[-1] = uVar28;
                puVar17[-2] = uVar27;
                uVar27 = puVar17[1];
                uVar26 = *puVar17;
                uVar29 = puVar17[3];
                uVar28 = puVar17[2];
                puVar17[1] = uVar31;
                *puVar17 = uVar30;
                puVar17[3] = uVar33;
                puVar17[2] = uVar32;
                puVar20[1] = uVar23;
                *puVar20 = uVar13;
                puVar20[3] = uVar25;
                puVar20[2] = uVar24;
                puVar20[5] = uVar27;
                puVar20[4] = uVar26;
                puVar20[7] = uVar29;
                puVar20[6] = uVar28;
              } while (uVar5 != 0);
              if (uVar3 == uVar4) goto LAB_005137b0;
            }
            do {
              uVar13 = *puVar12;
              puVar20 = puVar12 + 1;
              *puVar12 = *puVar8;
              *puVar8 = uVar13;
              puVar8 = puVar8 + 1;
              puVar12 = puVar20;
            } while (param_2 != puVar20);
          }
          else {
            lVar16 = lVar7;
            lVar15 = lVar11;
            do {
              lVar14 = lVar15;
              lVar15 = 0;
              if (lVar14 != 0) {
                lVar15 = lVar16 / lVar14;
              }
              lVar15 = lVar16 - lVar15 * lVar14;
              lVar16 = lVar14;
            } while (lVar15 != 0);
            if (lVar14 != 0) {
              puVar8 = puVar9 + lVar14;
              lVar16 = lVar14 * 8 + -8;
              if (((uint)lVar16 >> 3 & 1) == 0) {
                puVar8 = puVar8 + -1;
                uVar13 = *puVar8;
                puVar12 = puVar8 + lVar7;
                puVar20 = puVar8;
                do {
                  puVar17 = puVar12;
                  *puVar20 = *puVar17;
                  lVar15 = (long)puVar18 - (long)puVar17 >> 3;
                  puVar12 = puVar17 + lVar7;
                  if (lVar15 <= lVar7) {
                    puVar12 = puVar9 + (lVar7 - lVar15);
                  }
                  puVar20 = puVar17;
                } while (puVar12 != puVar8);
                *puVar17 = uVar13;
              }
              if (lVar16 != 0) {
                do {
                  puVar17 = puVar8 + -1;
                  uVar13 = *puVar17;
                  puVar12 = puVar17 + lVar7;
                  puVar20 = puVar17;
                  do {
                    puVar19 = puVar12;
                    *puVar20 = *puVar19;
                    lVar16 = (long)puVar18 - (long)puVar19 >> 3;
                    puVar12 = puVar19 + lVar7;
                    if (lVar16 <= lVar7) {
                      puVar12 = puVar9 + (lVar7 - lVar16);
                    }
                    puVar20 = puVar19;
                  } while (puVar12 != puVar17);
                  *puVar19 = uVar13;
                  puVar8 = puVar8 + -2;
                  uVar13 = *puVar8;
                  puVar12 = puVar8 + lVar7;
                  puVar20 = puVar8;
                  do {
                    puVar17 = puVar12;
                    *puVar20 = *puVar17;
                    lVar16 = (long)puVar18 - (long)puVar17 >> 3;
                    puVar12 = puVar17 + lVar7;
                    if (lVar16 <= lVar7) {
                      puVar12 = puVar9 + (lVar7 - lVar16);
                    }
                    puVar20 = puVar17;
                  } while (puVar12 != puVar8);
                  *puVar17 = uVar13;
                } while (puVar8 != puVar9);
              }
            }
            param_2 = puVar9 + lVar11;
          }
          goto LAB_005137b0;
        }
        uVar13 = puVar18[-1];
        sVar1 = (long)(puVar18 + -1) - (long)puVar9;
        if (sVar1 == 0) {
          param_2 = puVar18;
        }
        else {
          memmove((undefined8 *)((long)puVar18 - sVar1),puVar9,sVar1);
          param_2 = (undefined8 *)((long)puVar18 - sVar1);
        }
        *puVar9 = uVar13;
      }
    }
LAB_005137b0:
    if (lVar6 + lVar10 < (param_6 - (lVar6 + lVar10)) - lVar21) {
      FUN_005133e0(param_1,puVar9,param_2,param_4,lVar6,lVar10,param_7,param_8);
      param_6 = param_6 - lVar10;
      param_1 = param_2;
    }
    else {
      FUN_005133e0(param_2,puVar18,param_3,param_4,param_5,param_6 - lVar10,param_7,param_8);
      param_5 = lVar6;
      param_6 = lVar10;
      puVar18 = puVar9;
      param_3 = param_2;
    }
    param_2 = puVar18;
    if (param_6 == 0) {
      return;
    }
  }
  if (param_5 <= param_6) {
    if (param_1 == param_2) {
      return;
    }
    uVar3 = (long)param_2 + (-8 - (long)param_1);
    puVar9 = param_1;
    puVar18 = param_7;
    if (0x37 < uVar3) {
      lVar21 = (uVar3 & 0xfffffffffffffff8) + 8;
      if (param_7 < (undefined8 *)((long)param_1 + lVar21)) {
        if (param_1 < (undefined8 *)((long)param_7 + lVar21)) goto LAB_00513ae0;
      }
      uVar3 = (uVar3 >> 3) + 1;
      uVar4 = uVar3 & 0x3ffffffffffffff8;
      puVar8 = param_7 + uVar4;
      puVar9 = param_7 + 4;
      puVar18 = param_1 + 4;
      uVar5 = uVar4;
      do {
        uVar13 = puVar18[-4];
        uVar24 = puVar18[-1];
        uVar23 = puVar18[-2];
        uVar5 = uVar5 - 8;
        uVar26 = puVar18[1];
        uVar25 = *puVar18;
        uVar28 = puVar18[3];
        uVar27 = puVar18[2];
        puVar9[-3] = puVar18[-3];
        puVar9[-4] = uVar13;
        puVar9[-1] = uVar24;
        puVar9[-2] = uVar23;
        puVar9[1] = uVar26;
        *puVar9 = uVar25;
        puVar9[3] = uVar28;
        puVar9[2] = uVar27;
        puVar9 = puVar9 + 8;
        puVar18 = puVar18 + 8;
      } while (uVar5 != 0);
      puVar9 = param_1 + uVar4;
      puVar18 = puVar8;
      if (uVar3 == uVar4) goto joined_r0x00513afc;
    }
LAB_00513ae0:
    do {
      puVar12 = puVar9 + 1;
      puVar8 = puVar18 + 1;
      *puVar18 = *puVar9;
      puVar9 = puVar12;
      puVar18 = puVar8;
    } while (param_2 != puVar12);
joined_r0x00513afc:
    do {
      puVar9 = param_1;
      if (puVar8 == param_7) {
        return;
      }
      while( true ) {
        if (param_2 == param_3) {
          if ((long)puVar8 - (long)param_7 == 0) {
            return;
          }
          memmove(puVar9,param_7,(long)puVar8 - (long)param_7);
          return;
        }
        uVar3 = FUN_00512dd0(auStack_e0 + 0x98,*param_2,*param_7);
        if ((uVar3 & 1) == 0) break;
        *puVar9 = *param_2;
        puVar9 = puVar9 + 1;
        param_2 = param_2 + 1;
        if (param_7 == puVar8) {
          return;
        }
      }
      param_1 = puVar9 + 1;
      *puVar9 = *param_7;
      param_7 = param_7 + 1;
    } while( true );
  }
  if (param_2 == param_3) {
    return;
  }
  uVar3 = (long)param_3 + (-8 - (long)param_2);
  puVar9 = param_2;
  puVar18 = param_7;
  if (0x37 < uVar3) {
    lVar21 = (uVar3 & 0xfffffffffffffff8) + 8;
    if (param_7 < (undefined8 *)((long)param_2 + lVar21)) {
      if (param_2 < (undefined8 *)((long)param_7 + lVar21)) goto LAB_005139dc;
    }
    uVar3 = (uVar3 >> 3) + 1;
    uVar4 = uVar3 & 0x3ffffffffffffff8;
    puVar8 = param_7 + uVar4;
    puVar9 = param_7 + 4;
    puVar18 = param_2 + 4;
    uVar5 = uVar4;
    do {
      uVar13 = puVar18[-4];
      uVar24 = puVar18[-1];
      uVar23 = puVar18[-2];
      uVar5 = uVar5 - 8;
      uVar26 = puVar18[1];
      uVar25 = *puVar18;
      uVar28 = puVar18[3];
      uVar27 = puVar18[2];
      puVar9[-3] = puVar18[-3];
      puVar9[-4] = uVar13;
      puVar9[-1] = uVar24;
      puVar9[-2] = uVar23;
      puVar9[1] = uVar26;
      *puVar9 = uVar25;
      puVar9[3] = uVar28;
      puVar9[2] = uVar27;
      puVar9 = puVar9 + 8;
      puVar18 = puVar18 + 8;
    } while (uVar5 != 0);
    puVar9 = param_2 + uVar4;
    puVar18 = puVar8;
    if (uVar3 == uVar4) goto LAB_005139ec;
  }
LAB_005139dc:
  do {
    puVar12 = puVar9 + 1;
    puVar8 = puVar18 + 1;
    *puVar18 = *puVar9;
    puVar9 = puVar12;
    puVar18 = puVar8;
  } while (param_3 != puVar12);
LAB_005139ec:
  if (puVar8 != param_7) {
    do {
      while( true ) {
        if (param_2 == param_1) {
          do {
            param_3 = param_3 + -1;
            puVar8 = puVar8 + -1;
            *param_3 = *puVar8;
          } while (param_7 != puVar8);
          return;
        }
        puVar18 = param_2 + -1;
        puVar9 = puVar8 + -1;
        uVar3 = FUN_00512dd0(param_4,*puVar9,*puVar18);
        if ((uVar3 & 1) == 0) break;
        param_3[-1] = *puVar18;
        param_3 = param_3 + -1;
        param_2 = puVar18;
        if (puVar8 == param_7) {
          return;
        }
      }
      param_3[-1] = *puVar9;
      param_3 = param_3 + -1;
      puVar8 = puVar9;
    } while (puVar9 != param_7);
  }
  return;
}


