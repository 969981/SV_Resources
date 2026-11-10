/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d9434; name: FUN_002d9434
 */


void FUN_002d9434(ulong *param_1)

{
  uint uVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 local_68;
  
  puVar3 = PTR_FUN_047cba38;
  if (param_1[4] < 0x100) {
    uVar10 = (long)(param_1[2] - param_1[1]) >> 3;
    lVar14 = param_1[3] - *param_1;
    if ((ulong)(lVar14 >> 3) <= uVar10) {
      uVar11 = lVar14 >> 2;
      if (lVar14 == 0) {
        uVar11 = 1;
      }
      puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,uVar11 * 8);
      puVar13 = puVar7 + uVar10;
      puVar9 = puVar7 + uVar11;
      uVar19 = FUN_0049e770(puVar3,0x1000);
      puVar15 = puVar7;
      if (uVar10 == uVar11) {
        if (puVar13 < puVar7 || (long)puVar13 - (long)puVar7 == 0) {
          uVar10 = (long)puVar9 - (long)puVar7 >> 2;
          if ((long)puVar9 - (long)puVar7 == 0) {
            uVar10 = 1;
          }
          puVar15 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,uVar10 * 8);
          puVar13 = (undefined8 *)((long)puVar15 + (uVar10 & 0x7ffffffffffffffc) * 2);
          puVar9 = puVar15 + uVar10;
          if (puVar7 != (undefined8 *)0x0) {
            FUN_0049e790(PTR_LAB_047cba48,puVar7);
          }
        }
        else {
          lVar14 = (long)puVar13 - (long)puVar7 >> 3;
          uVar10 = lVar14 + 2;
          if (-1 < lVar14 + 1) {
            uVar10 = lVar14 + 1;
          }
          puVar13 = (undefined8 *)((long)puVar13 + (uVar10 & 0x3ffffffffffffffe) * -4);
        }
      }
      *puVar13 = uVar19;
      puVar4 = PTR_LAB_047cba48;
      puVar3 = PTR_FUN_047cba38;
      puVar16 = (undefined8 *)param_1[2];
      puVar7 = puVar13 + 1;
      if (puVar16 != (undefined8 *)param_1[1]) {
        do {
          puVar16 = puVar16 + -1;
          if (puVar13 == puVar15) {
            if (puVar7 < puVar9) {
              lVar14 = (long)puVar9 - (long)puVar7 >> 3;
              uVar10 = lVar14 + 2;
              if (-1 < lVar14 + 1) {
                uVar10 = lVar14 + 1;
              }
              sVar2 = (long)puVar7 - (long)puVar13;
              puVar7 = (undefined8 *)((long)puVar7 + (uVar10 & 0x3ffffffffffffffe) * 4);
              puVar20 = puVar7;
              if (sVar2 != 0) {
                puVar20 = (undefined8 *)((long)puVar7 - sVar2);
                memmove(puVar20,puVar13,sVar2);
              }
              puVar13 = puVar20;
            }
            else {
              lVar14 = (long)puVar9 - (long)puVar15 >> 2;
              if ((long)puVar9 - (long)puVar15 == 0) {
                lVar14 = 1;
              }
              uVar10 = lVar14 + 3U >> 2;
              puVar8 = (undefined8 *)FUN_0049e770(puVar3,lVar14 * 8);
              puVar20 = puVar8 + uVar10;
              puVar9 = puVar8 + lVar14;
              lVar14 = (long)puVar7 - (long)puVar13;
              if (lVar14 == 0) {
                puVar7 = puVar20;
              }
              else {
                uVar1 = ((uint)(lVar14 - 8U >> 3) & 0x1fffffff) + 1;
                puVar12 = puVar20;
                if ((uVar1 & 7) != 0) {
                  lVar17 = -((ulong)uVar1 & 7);
                  puVar7 = puVar20;
                  puVar18 = puVar13;
                  do {
                    puVar13 = puVar18 + 1;
                    bVar5 = lVar17 != -1;
                    lVar17 = lVar17 + 1;
                    puVar12 = puVar7 + 1;
                    *puVar7 = *puVar18;
                    puVar7 = puVar12;
                    puVar18 = puVar13;
                  } while (bVar5);
                }
                puVar7 = (undefined8 *)((long)puVar20 + lVar14);
                if (0x37 < lVar14 - 8U) {
                  do {
                    *puVar12 = *puVar13;
                    puVar12[1] = puVar13[1];
                    puVar12[2] = puVar13[2];
                    puVar12[3] = puVar13[3];
                    puVar12[4] = puVar13[4];
                    puVar12[5] = puVar13[5];
                    puVar12[6] = puVar13[6];
                    puVar12[7] = puVar13[7];
                    puVar12 = puVar12 + 8;
                    puVar13 = puVar13 + 8;
                  } while (puVar8 + uVar10 + (lVar14 >> 3) != puVar12);
                }
              }
              if (puVar15 != (undefined8 *)0x0) {
                FUN_0049e790(puVar4,puVar15);
              }
              puVar15 = puVar8;
              puVar13 = puVar20;
            }
          }
          puVar13 = puVar13 + -1;
          *puVar13 = *puVar16;
        } while (puVar16 != (undefined8 *)param_1[1]);
      }
      uVar10 = *param_1;
      *param_1 = (ulong)puVar15;
      param_1[1] = (ulong)puVar13;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)puVar9;
      if (uVar10 == 0) {
        return;
      }
      FUN_0049e790(PTR_LAB_047cba48);
      return;
    }
    if (param_1[3] != param_1[2]) {
      local_68 = FUN_0049e770(PTR_FUN_047cba38,0x1000);
      FUN_002d99c0(param_1,&local_68);
      return;
    }
    local_68 = FUN_0049e770(PTR_FUN_047cba38,0x1000);
    FUN_002d9b40(param_1,&local_68);
    puVar13 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)param_1[1] + 1;
    uVar19 = *(undefined8 *)param_1[1];
    param_1[1] = (ulong)puVar9;
    if (puVar13 != (undefined8 *)param_1[3]) goto LAB_002d9940;
    puVar15 = (undefined8 *)*param_1;
    lVar14 = (long)puVar9 - (long)puVar15;
    if (puVar15 <= puVar9 && lVar14 != 0) goto LAB_002d9564;
    lVar14 = (long)param_1[3] - (long)puVar15;
    uVar10 = lVar14 >> 2;
    if (lVar14 == 0) {
      uVar10 = 1;
    }
    uVar6 = FUN_0049e770(PTR_FUN_047cba38,uVar10 * 8);
    puVar9 = (undefined8 *)param_1[1];
    puVar15 = (undefined8 *)(uVar6 + (uVar10 >> 2) * 8);
    uVar11 = uVar6 + uVar10 * 8;
    lVar14 = param_1[2] - (long)puVar9;
    puVar13 = puVar15;
    if (lVar14 == 0) goto LAB_002d98cc;
    uVar1 = ((uint)(lVar14 - 8U >> 3) & 0x1fffffff) + 1;
    puVar13 = (undefined8 *)((long)puVar15 + lVar14);
    if ((uVar1 & 3) == 0) {
      puVar7 = puVar15;
    }
    else {
      lVar17 = -((ulong)uVar1 & 3);
      puVar16 = puVar9;
      puVar20 = puVar15;
      do {
        puVar9 = puVar16 + 1;
        bVar5 = lVar17 != -1;
        lVar17 = lVar17 + 1;
        puVar7 = puVar20 + 1;
        *puVar20 = *puVar16;
        puVar16 = puVar9;
        puVar20 = puVar7;
      } while (bVar5);
    }
    if (0x17 < lVar14 - 8U) {
      do {
        *puVar7 = *puVar9;
        puVar7[1] = puVar9[1];
        puVar7[2] = puVar9[2];
        puVar7[3] = puVar9[3];
        puVar7 = puVar7 + 4;
        puVar9 = puVar9 + 4;
      } while ((undefined8 *)(uVar6 + (lVar14 >> 3) * 8 + (uVar10 >> 2) * 8) != puVar7);
    }
  }
  else {
    param_1[4] = param_1[4] - 0x100;
    puVar13 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)param_1[1] + 1;
    uVar19 = *(undefined8 *)param_1[1];
    param_1[1] = (ulong)puVar9;
    if (puVar13 != (undefined8 *)param_1[3]) goto LAB_002d9940;
    puVar15 = (undefined8 *)*param_1;
    lVar14 = (long)puVar9 - (long)puVar15;
    if (puVar15 <= puVar9 && lVar14 != 0) {
LAB_002d9564:
      lVar14 = lVar14 >> 3;
      lVar17 = lVar14 + 2;
      if (-1 < lVar14 + 1) {
        lVar17 = lVar14 + 1;
      }
      sVar2 = (long)puVar13 - (long)puVar9;
      puVar13 = puVar9 + -(lVar17 >> 1);
      if (sVar2 != 0) {
        memmove(puVar13,puVar9,sVar2);
        puVar9 = (undefined8 *)param_1[1];
      }
      puVar13 = (undefined8 *)((long)puVar13 + sVar2);
      param_1[1] = (ulong)(puVar9 + -(lVar17 >> 1));
      param_1[2] = (ulong)puVar13;
      goto LAB_002d9940;
    }
    lVar14 = (long)param_1[3] - (long)puVar15;
    uVar10 = lVar14 >> 2;
    if (lVar14 == 0) {
      uVar10 = 1;
    }
    uVar6 = FUN_0049e770(PTR_FUN_047cba38,uVar10 * 8);
    puVar9 = (undefined8 *)param_1[1];
    puVar15 = (undefined8 *)(uVar6 + (uVar10 >> 2) * 8);
    uVar11 = uVar6 + uVar10 * 8;
    lVar14 = param_1[2] - (long)puVar9;
    puVar13 = puVar15;
    if (lVar14 == 0) {
LAB_002d98cc:
      puVar15 = puVar13;
    }
    else {
      uVar1 = ((uint)(lVar14 - 8U >> 3) & 0x1fffffff) + 1;
      puVar13 = (undefined8 *)((long)puVar15 + lVar14);
      puVar7 = puVar15;
      if ((uVar1 & 3) != 0) {
        lVar17 = -((ulong)uVar1 & 3);
        puVar16 = puVar9;
        puVar20 = puVar15;
        do {
          puVar9 = puVar16 + 1;
          bVar5 = lVar17 != -1;
          lVar17 = lVar17 + 1;
          puVar7 = puVar20 + 1;
          *puVar20 = *puVar16;
          puVar16 = puVar9;
          puVar20 = puVar7;
        } while (bVar5);
      }
      if (0x17 < lVar14 - 8U) {
        do {
          *puVar7 = *puVar9;
          puVar7[1] = puVar9[1];
          puVar7[2] = puVar9[2];
          puVar7[3] = puVar9[3];
          puVar7 = puVar7 + 4;
          puVar9 = puVar9 + 4;
        } while ((undefined8 *)(uVar6 + (lVar14 >> 3) * 8 + (uVar10 >> 2) * 8) != puVar7);
      }
    }
  }
  uVar10 = *param_1;
  *param_1 = uVar6;
  param_1[1] = (ulong)puVar15;
  param_1[2] = (ulong)puVar13;
  param_1[3] = uVar11;
  if (uVar10 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
    puVar13 = (undefined8 *)param_1[2];
  }
LAB_002d9940:
  *puVar13 = uVar19;
  param_1[2] = param_1[2] + 8;
  return;
}


