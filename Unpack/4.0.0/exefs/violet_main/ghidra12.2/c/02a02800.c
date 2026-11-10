/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a02800; name: FUN_02a02800
 */


void FUN_02a02800(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5,long param_6,undefined8 *param_7,long param_8)

{
  long lVar1;
  size_t sVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 local_68;
  
  if (param_6 != 0) {
    while ((param_8 < param_5 && (param_8 < param_6))) {
      if (param_5 == 0) {
        return;
      }
      lVar21 = -param_5;
      while (uVar4 = FUN_02a021a8(param_4,*param_2,*param_1), (uVar4 & 1) == 0) {
        param_1 = param_1 + 1;
        bVar3 = lVar21 == -1;
        lVar21 = lVar21 + 1;
        if (bVar3) {
          return;
        }
      }
      param_5 = -lVar21;
      if (param_5 < param_6) {
        lVar7 = param_6;
        if (param_6 < 0) {
          lVar7 = param_6 + 1;
        }
        lVar7 = lVar7 >> 1;
        puVar20 = param_2 + lVar7;
        puVar19 = param_1;
        if ((long)param_2 - (long)param_1 != 0) {
          uVar4 = (long)param_2 - (long)param_1 >> 3;
          do {
            uVar18 = uVar4 >> 1;
            uVar5 = FUN_02a021a8(param_4,*puVar20,puVar19[uVar18]);
            uVar6 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
            uVar4 = uVar18;
            if ((uVar5 & 1) == 0) {
              puVar19 = puVar19 + uVar18 + 1;
              uVar4 = uVar6;
            }
          } while (uVar4 != 0);
        }
        param_5 = (long)puVar19 - (long)param_1 >> 3;
      }
      else {
        if (lVar21 == -1) {
          uVar11 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar11;
          return;
        }
        if (param_5 < 0) {
          param_5 = param_5 + 1;
        }
        param_5 = param_5 >> 1;
        puVar19 = param_1 + param_5;
        if ((long)param_3 - (long)param_2 == 0) {
          puVar20 = param_2;
        }
        else {
          uVar4 = (long)param_3 - (long)param_2 >> 3;
          puVar9 = param_2;
          do {
            uVar5 = uVar4 >> 1;
            uVar6 = FUN_02a021a8(param_4,puVar9[uVar5],*puVar19);
            puVar20 = puVar9 + uVar5 + 1;
            uVar4 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
            if ((uVar6 & 1) == 0) {
              puVar20 = puVar9;
              uVar4 = uVar5;
            }
            puVar9 = puVar20;
          } while (uVar4 != 0);
        }
        lVar7 = (long)puVar20 - (long)param_2 >> 3;
      }
      if (puVar19 == param_2) {
        param_2 = puVar20;
      }
      else if (param_2 == puVar20) {
        param_2 = puVar19;
      }
      else if (puVar19 + 1 == param_2) {
        uVar11 = *puVar19;
        sVar2 = (long)puVar20 - (long)param_2;
        if (sVar2 != 0) {
          memmove(puVar19,param_2,sVar2);
        }
        *(undefined8 *)((long)puVar19 + sVar2) = uVar11;
        param_2 = (undefined8 *)((long)puVar19 + sVar2);
      }
      else if (param_2 + 1 == puVar20) {
        uVar11 = puVar20[-1];
        sVar2 = (long)(puVar20 + -1) - (long)puVar19;
        if (sVar2 == 0) {
          param_2 = puVar20;
        }
        else {
          memmove((undefined8 *)((long)puVar20 - sVar2),puVar19,sVar2);
          param_2 = (undefined8 *)((long)puVar20 - sVar2);
        }
        *puVar19 = uVar11;
      }
      else {
        lVar8 = (long)param_2 - (long)puVar19 >> 3;
        lVar1 = (long)puVar20 - (long)param_2 >> 3;
        if (lVar8 == lVar1) {
          puVar9 = param_2;
          puVar10 = puVar19;
          do {
            uVar11 = *puVar10;
            puVar17 = puVar10 + 1;
            *puVar10 = *puVar9;
            *puVar9 = uVar11;
            puVar9 = puVar9 + 1;
            puVar10 = puVar17;
          } while (param_2 != puVar17);
        }
        else {
          lVar13 = lVar1;
          lVar14 = lVar8;
          do {
            lVar12 = lVar13;
            lVar13 = 0;
            if (lVar12 != 0) {
              lVar13 = lVar14 / lVar12;
            }
            lVar13 = lVar14 - lVar13 * lVar12;
            lVar14 = lVar12;
          } while (lVar13 != 0);
          if (lVar12 != 0) {
            puVar9 = puVar19 + lVar12;
            lVar13 = lVar12 * 8 + -8;
            if (((uint)lVar13 >> 3 & 1) == 0) {
              puVar9 = puVar9 + -1;
              uVar11 = *puVar9;
              puVar10 = puVar9 + lVar8;
              puVar17 = puVar9;
              do {
                puVar15 = puVar10;
                *puVar17 = *puVar15;
                lVar14 = (long)puVar20 - (long)puVar15 >> 3;
                puVar10 = puVar15 + lVar8;
                if (lVar14 <= lVar8) {
                  puVar10 = puVar19 + (lVar8 - lVar14);
                }
                puVar17 = puVar15;
              } while (puVar10 != puVar9);
              *puVar15 = uVar11;
            }
            if (lVar13 != 0) {
              do {
                puVar15 = puVar9 + -1;
                uVar11 = *puVar15;
                puVar10 = puVar15 + lVar8;
                puVar17 = puVar15;
                do {
                  puVar16 = puVar10;
                  *puVar17 = *puVar16;
                  lVar13 = (long)puVar20 - (long)puVar16 >> 3;
                  puVar10 = puVar16 + lVar8;
                  if (lVar13 <= lVar8) {
                    puVar10 = puVar19 + (lVar8 - lVar13);
                  }
                  puVar17 = puVar16;
                } while (puVar10 != puVar15);
                *puVar16 = uVar11;
                puVar9 = puVar9 + -2;
                uVar11 = *puVar9;
                puVar10 = puVar9 + lVar8;
                puVar17 = puVar9;
                do {
                  puVar15 = puVar10;
                  *puVar17 = *puVar15;
                  lVar13 = (long)puVar20 - (long)puVar15 >> 3;
                  puVar10 = puVar15 + lVar8;
                  if (lVar13 <= lVar8) {
                    puVar10 = puVar19 + (lVar8 - lVar13);
                  }
                  puVar17 = puVar15;
                } while (puVar10 != puVar9);
                *puVar15 = uVar11;
              } while (puVar9 != puVar19);
            }
          }
          param_2 = puVar19 + lVar1;
        }
      }
      if (param_5 + lVar7 < (param_6 - (param_5 + lVar7)) - lVar21) {
        FUN_02a02800(param_1,puVar19,param_2,param_4,param_5,lVar7,param_7,param_8);
        lVar7 = param_6 - lVar7;
        param_1 = param_2;
        param_5 = -(param_5 + lVar21);
        param_2 = param_3;
        puVar19 = puVar20;
      }
      else {
        FUN_02a02800(param_2,puVar20,param_3,param_4,-(param_5 + lVar21),param_6 - lVar7,param_7,
                     param_8);
      }
      param_3 = param_2;
      param_2 = puVar19;
      param_6 = lVar7;
      if (lVar7 == 0) {
        return;
      }
    }
    if (param_5 <= param_6) {
      if (param_1 == param_2) {
        return;
      }
      lVar21 = 0;
      do {
        *(undefined8 *)((long)param_7 + lVar21) = *(undefined8 *)((long)param_1 + lVar21);
        lVar21 = lVar21 + 8;
      } while ((long)param_2 - (long)param_1 != lVar21);
      local_68 = *param_4;
      if (lVar21 == 0) {
        return;
      }
      puVar19 = param_7;
      do {
        if (param_2 == param_3) {
          sVar2 = (long)param_7 + (lVar21 - (long)puVar19);
          if (sVar2 == 0) {
            return;
          }
          memmove(param_1,puVar19,sVar2);
          return;
        }
        uVar4 = FUN_02a021a8(&local_68,*param_2,*puVar19);
        if ((uVar4 & 1) == 0) {
          puVar20 = puVar19 + 1;
          uVar11 = *puVar19;
        }
        else {
          uVar11 = *param_2;
          param_2 = param_2 + 1;
          puVar20 = puVar19;
        }
        *param_1 = uVar11;
        param_1 = param_1 + 1;
        puVar19 = puVar20;
      } while ((long)puVar20 - (long)param_7 != lVar21);
      return;
    }
    if (param_3 == param_2) {
      return;
    }
    lVar21 = 0;
    do {
      *(undefined8 *)((long)param_7 + lVar21) = *(undefined8 *)((long)param_2 + lVar21);
      lVar21 = lVar21 + 8;
    } while ((long)param_3 - (long)param_2 != lVar21);
    if (lVar21 != 0) {
      puVar19 = (undefined8 *)((long)param_7 + lVar21);
      do {
        param_3 = param_3 + -1;
        if (param_2 == param_1) {
          lVar21 = 0;
          do {
            *(undefined8 *)((long)param_3 + lVar21) = *(undefined8 *)((long)puVar19 + lVar21 + -8);
            lVar21 = lVar21 + -8;
          } while ((long)param_7 - (long)puVar19 != lVar21);
          return;
        }
        puVar9 = param_2 + -1;
        puVar20 = puVar19 + -1;
        uVar4 = FUN_02a021a8(param_4,*puVar20,*puVar9);
        if ((uVar4 & 1) == 0) {
          *param_3 = *puVar20;
        }
        else {
          *param_3 = *puVar9;
          puVar20 = puVar19;
          param_2 = puVar9;
        }
        puVar19 = puVar20;
      } while (puVar20 != param_7);
    }
  }
  return;
}


