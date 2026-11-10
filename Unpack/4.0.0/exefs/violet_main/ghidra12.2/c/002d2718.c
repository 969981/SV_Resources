/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d2718; name: FUN_002d2718
 */


void FUN_002d2718(long param_1,uint param_2,uint *param_3,uint *param_4,long *param_5,uint *param_6,
                 long *param_7)

{
  ulong uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  size_t sVar8;
  undefined4 *puVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint *puVar20;
  long lVar21;
  
  *param_6 = 0;
  puVar12 = (uint *)*param_7;
  param_7[1] = (long)puVar12;
  if ((uint *)param_7[2] == puVar12) {
    puVar12 = (uint *)FUN_0049e770(PTR_FUN_047cba38,4);
    puVar13 = puVar12 + 1;
    pvVar7 = (void *)*param_7;
    sVar8 = param_7[1] - (long)pvVar7;
    puVar20 = (uint *)((long)puVar12 - sVar8);
    *puVar12 = param_2;
    if (0 < (long)sVar8) {
      memcpy(puVar20,pvVar7,sVar8);
      pvVar7 = (void *)*param_7;
    }
    *param_7 = (long)puVar20;
    param_7[2] = (long)(puVar12 + 1);
    param_7[1] = (long)puVar13;
    if (pvVar7 == (void *)0x0) {
      if (puVar20 == puVar13) goto LAB_002d299c;
    }
    else {
      FUN_0049e790(PTR_LAB_047cba48);
      puVar13 = (uint *)param_7[1];
      if ((uint *)*param_7 == puVar13) {
LAB_002d299c:
        puVar12 = *(uint **)(param_6 + 6);
LAB_002d29a0:
        if (*param_6 != 0) {
          lVar21 = *(long *)(param_4 + 6);
          puVar13 = puVar12;
          do {
            if ((lVar21 != 0) && (uVar5 = *puVar13, uVar5 < param_4[8])) {
              lVar11 = (long)(int)uVar5;
              uVar10 = *(uint *)(*(long *)(param_4 + 2) + lVar11 * 4);
              if ((uVar10 < *param_4) && (*(uint *)(lVar21 + (long)(int)uVar10 * 8) == uVar5)) {
                plVar15 = (long *)(*param_5 +
                                  (long)*(int *)(lVar21 + (long)(int)uVar10 * 8 + 4) * 0x18);
                puVar20 = (uint *)*plVar15;
                puVar3 = (uint *)plVar15[1];
                if (puVar20 != puVar3) {
                  lVar16 = lVar11 * 4;
                  if (puVar12 == (uint *)0x0) {
                    lVar18 = *(long *)(param_3 + 6);
                    lVar17 = (long)puVar3 - (long)puVar20;
                    do {
                      if ((lVar18 != 0) && (uVar5 < param_3[8])) {
                        uVar6 = *(uint *)(*(long *)(param_3 + 2) + lVar11 * 4);
                        uVar10 = *param_3;
                        if ((uVar10 <= uVar6) || (*(uint *)(lVar18 + (long)(int)uVar6 * 8) != uVar5)
                           ) {
                          lVar19 = *(long *)(param_3 + 2);
                          *(uint *)(lVar19 + lVar16) = uVar10;
                          uVar6 = *param_3;
                          *(uint *)(lVar18 + (long)(int)uVar6 * 8) = uVar5;
                          *param_3 = uVar6 + 1;
                          *(uint *)(lVar18 + (long)*(int *)(lVar19 + lVar16) * 8 + 4) = uVar10;
                        }
                      }
                      lVar17 = lVar17 + -4;
                    } while (lVar17 != 0);
                  }
                  else {
                    do {
                      uVar10 = *puVar20;
                      if ((((param_6[8] <= uVar10) ||
                           (uVar6 = *(uint *)(*(long *)(param_6 + 2) + (long)(int)uVar10 * 4),
                           *param_6 <= uVar6)) || (puVar12[(int)uVar6] != uVar10)) &&
                         ((lVar17 = *(long *)(param_3 + 6), lVar17 != 0 && (uVar5 < param_3[8])))) {
                        uVar6 = *(uint *)(*(long *)(param_3 + 2) + lVar11 * 4);
                        uVar10 = *param_3;
                        if ((uVar10 <= uVar6) || (*(uint *)(lVar17 + (long)(int)uVar6 * 8) != uVar5)
                           ) {
                          lVar18 = *(long *)(param_3 + 2);
                          *(uint *)(lVar18 + lVar16) = uVar10;
                          uVar6 = *param_3;
                          *(uint *)(lVar17 + (long)(int)uVar6 * 8) = uVar5;
                          *param_3 = uVar6 + 1;
                          *(uint *)(lVar17 + (long)*(int *)(lVar18 + lVar16) * 8 + 4) = uVar10;
                        }
                      }
                      puVar20 = puVar20 + 1;
                    } while (puVar3 != puVar20);
                  }
                }
              }
            }
            puVar13 = puVar13 + 1;
          } while (puVar13 != puVar12 + (int)*param_6);
        }
        return;
      }
    }
  }
  else {
    puVar13 = puVar12 + 1;
    *puVar12 = param_2;
    param_7[1] = (long)puVar13;
  }
LAB_002d2984:
  uVar5 = puVar13[-1];
  param_7[1] = (long)(puVar13 + -1);
  do {
    puVar12 = *(uint **)(param_6 + 6);
    if ((puVar12 != (uint *)0x0) && (uVar5 < param_6[8])) {
      uVar10 = *(uint *)(*(long *)(param_6 + 2) + (long)(int)uVar5 * 4);
      if ((uVar10 < *param_6) && (puVar12[(int)uVar10] == uVar5)) break;
      *(uint *)(*(long *)(param_6 + 2) + (long)(int)uVar5 * 4) = *param_6;
      puVar12[(int)*param_6] = uVar5;
      *param_6 = *param_6 + 1;
    }
    if ((((uVar5 != param_2) && (*(long *)(param_3 + 6) != 0)) && (uVar5 < param_3[8])) &&
       ((uVar10 = *(uint *)(*(long *)(param_3 + 2) + (long)(int)uVar5 * 4), uVar10 < *param_3 &&
        (*(uint *)(*(long *)(param_3 + 6) + (long)(int)uVar10 * 8) == uVar5)))) break;
    puVar13 = (uint *)(*(long *)(param_1 + 0x60) + (long)(int)uVar5 * 8);
    uVar10 = *puVar13;
    uVar6 = 1 << (ulong)(uVar10 & 7);
    if ((uVar6 & 0xbc) != 0) break;
    if ((uVar6 & 3) != 0) {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x60) + (long)(int)uVar5 * 8 + 4);
      puVar9 = (undefined4 *)param_7[1];
      if (puVar9 < (undefined4 *)param_7[2]) {
        *puVar9 = uVar4;
        param_7[1] = (long)(puVar9 + 1);
      }
      else {
        pvVar7 = (void *)*param_7;
        lVar21 = (long)puVar9 - (long)pvVar7 >> 2;
        uVar1 = lVar21 + 1;
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar11 = param_7[2] - (long)pvVar7;
        uVar14 = lVar11 >> 1;
        if (uVar1 <= uVar14) {
          uVar1 = uVar14;
        }
        if (0x1ffffffffffffffe < (ulong)(lVar11 >> 2)) {
          uVar1 = 0x3fffffffffffffff;
        }
        if (uVar1 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 2);
          pvVar7 = (void *)*param_7;
          puVar9 = (undefined4 *)param_7[1];
        }
        puVar2 = (undefined4 *)(lVar11 + lVar21 * 4);
        sVar8 = (long)puVar9 - (long)pvVar7;
        *puVar2 = uVar4;
        if (0 < (long)sVar8) {
          memcpy((void *)((long)puVar2 - sVar8),pvVar7,sVar8);
          pvVar7 = (void *)*param_7;
        }
        *param_7 = (long)((long)puVar2 - sVar8);
        param_7[1] = (long)(puVar2 + 1);
        param_7[2] = lVar11 + uVar1 * 4;
        if (pvVar7 != (void *)0x0) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
      uVar10 = *puVar13;
    }
    uVar5 = uVar10 >> 4;
  } while( true );
  puVar13 = (uint *)param_7[1];
  if ((uint *)*param_7 == puVar13) goto LAB_002d29a0;
  goto LAB_002d2984;
}


