/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d1fc4; name: FUN_002d1fc4
 */


void FUN_002d1fc4(long param_1,uint *param_2,uint *param_3,long *param_4,uint *param_5,long *param_6
                 )

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  size_t sVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  long *plVar21;
  long *plVar20;
  uint uVar22;
  ulong *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  long *plVar26;
  uint *puVar27;
  undefined8 uVar28;
  uint local_68;
  uint local_64;
  
  lVar9 = *(long *)(param_2 + 6);
  if ((lVar9 != 0) && (param_2[8] != 0)) {
    uVar14 = *param_2;
    puVar17 = *(uint **)(param_2 + 2);
    *puVar17 = uVar14;
    uVar22 = *param_2 + 1;
    *(undefined4 *)(lVar9 + (long)(int)*param_2 * 8) = 0;
    *param_2 = uVar22;
    *(uint *)(lVar9 + (long)(int)*puVar17 * 8 + 4) = uVar14;
    uVar16 = param_2[8];
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar14 = uVar22;
    if (uVar2 < uVar16) {
      uVar3 = *(uint *)(*(long *)(param_2 + 2) + (long)(int)uVar2 * 4);
      if ((uVar22 <= uVar3) || (*(uint *)(lVar9 + (long)(int)uVar3 * 8) != uVar2)) {
        lVar18 = *(long *)(param_2 + 2);
        lVar19 = (long)(int)uVar2 * 4;
        *(uint *)(lVar18 + lVar19) = uVar22;
        uVar14 = *param_2;
        *(uint *)(lVar9 + (long)(int)uVar14 * 8) = uVar2;
        uVar14 = uVar14 + 1;
        *param_2 = uVar14;
        *(uint *)(lVar9 + (long)*(int *)(lVar18 + lVar19) * 8 + 4) = uVar22;
        uVar16 = param_2[8];
      }
    }
    uVar22 = *(uint *)(param_1 + 8);
    if (uVar22 < uVar16) {
      uVar16 = *(uint *)(*(long *)(param_2 + 2) + (long)(int)uVar22 * 4);
      if ((uVar14 <= uVar16) || (*(uint *)(lVar9 + (long)(int)uVar16 * 8) != uVar22)) {
        lVar19 = *(long *)(param_2 + 2);
        lVar18 = (long)(int)uVar22 * 4;
        *(uint *)(lVar19 + lVar18) = uVar14;
        uVar16 = *param_2;
        *(uint *)(lVar9 + (long)(int)uVar16 * 8) = uVar22;
        *param_2 = uVar16 + 1;
        *(uint *)(lVar9 + (long)*(int *)(lVar19 + lVar18) * 8 + 4) = uVar14;
      }
    }
  }
  *param_5 = 0;
  puVar24 = (undefined4 *)*param_6;
  param_6[1] = (long)puVar24;
  uVar4 = param_6[2] - (long)puVar24;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if ((undefined4 *)param_6[2] < puVar24 || uVar4 == 0) {
    uVar11 = uVar4 >> 1;
    if (uVar4 == 0) {
      uVar11 = 1;
    }
    if (0x1ffffffffffffffe < (ulong)((long)uVar4 >> 2)) {
      uVar11 = 0x3fffffffffffffff;
    }
    puVar6 = (undefined4 *)FUN_0049e770(PTR_FUN_047cba38,uVar11 * 4);
    pvVar7 = (void *)*param_6;
    lVar9 = param_6[1];
    puVar25 = puVar6 + 1;
    *puVar6 = uVar1;
    sVar8 = lVar9 - (long)pvVar7;
    puVar24 = (undefined4 *)((long)puVar6 - sVar8);
    if (0 < (long)sVar8) {
      memcpy(puVar24,pvVar7,sVar8);
      pvVar7 = (void *)*param_6;
    }
    *param_6 = (long)puVar24;
    param_6[1] = (long)puVar25;
    param_6[2] = (long)(puVar6 + uVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
      puVar24 = (undefined4 *)*param_6;
      puVar25 = (undefined4 *)param_6[1];
    }
    if (puVar24 == puVar25) {
      return;
    }
  }
  else {
    puVar25 = puVar24 + 1;
    *puVar24 = uVar1;
    param_6[1] = (long)puVar25;
  }
  puVar5 = PTR_LAB_047cba48;
LAB_002d21d8:
  uVar22 = puVar25[-1];
  param_6[1] = (long)(puVar25 + -1);
  do {
    lVar9 = *(long *)(param_5 + 6);
    if ((lVar9 != 0) && (uVar22 < param_5[8])) {
      uVar14 = *(uint *)(*(long *)(param_5 + 2) + (long)(int)uVar22 * 4);
      if ((uVar14 < *param_5) && (*(uint *)(lVar9 + (long)(int)uVar14 * 4) == uVar22)) break;
      *(uint *)(*(long *)(param_5 + 2) + (long)(int)uVar22 * 4) = *param_5;
      *(uint *)(lVar9 + (long)(int)*param_5 * 4) = uVar22;
      *param_5 = *param_5 + 1;
    }
    puVar17 = (uint *)(*(long *)(param_1 + 0x60) + (long)(int)uVar22 * 8);
    uVar14 = *puVar17;
    switch(uVar14 & 7) {
    case 0:
    case 1:
      uVar14 = uVar14 >> 4;
      puVar24 = (undefined4 *)(*(long *)(param_1 + 0x60) + (long)(int)uVar22 * 8 + 4);
      puVar27 = &local_68;
      local_64 = *puVar24;
      lVar9 = *(long *)(param_3 + 6);
      local_68 = uVar14;
      if (lVar9 != 0) goto LAB_002d233c;
LAB_002d24f4:
      lVar18 = *param_4;
      puVar12 = (undefined8 *)param_4[1];
      puVar15 = (undefined8 *)param_4[2];
      if (puVar15 <= puVar12) goto LAB_002d23c4;
      do {
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        param_4[1] = (long)(puVar12 + 3);
        while( true ) {
          do {
            plVar26 = (long *)(*param_4 +
                              (long)*(int *)(*(long *)(param_3 + 6) +
                                             (long)*(int *)(*(long *)(param_3 + 2) +
                                                           (long)(int)uVar14 * 4) * 8 + 4) * 0x18);
            puVar23 = (ulong *)(plVar26 + 1);
            puVar10 = (uint *)*puVar23;
            puVar13 = (uint *)plVar26[2];
            if (puVar10 < puVar13) {
              *puVar10 = uVar22;
              *puVar23 = (ulong)(puVar10 + 1);
            }
            else {
              pvVar7 = (void *)*plVar26;
              lVar9 = (long)puVar10 - (long)pvVar7 >> 2;
              uVar4 = lVar9 + 1;
              if (uVar4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar18 = (long)puVar13 - (long)pvVar7;
              uVar11 = lVar18 >> 1;
              if (uVar4 <= uVar11) {
                uVar4 = uVar11;
              }
              if (0x1ffffffffffffffe < (ulong)(lVar18 >> 2)) {
                uVar4 = 0x3fffffffffffffff;
              }
              if (uVar4 == 0) {
                lVar18 = 0;
              }
              else {
                lVar18 = FUN_0049e770(PTR_FUN_047cba38,uVar4 << 2);
                pvVar7 = (void *)*plVar26;
                puVar10 = (uint *)*puVar23;
              }
              puVar13 = (uint *)(lVar18 + lVar9 * 4);
              sVar8 = (long)puVar10 - (long)pvVar7;
              *puVar13 = uVar22;
              if (0 < (long)sVar8) {
                memcpy((void *)((long)puVar13 - sVar8),pvVar7,sVar8);
                pvVar7 = (void *)*plVar26;
              }
              *plVar26 = (long)((long)puVar13 - sVar8);
              *puVar23 = (ulong)(puVar13 + 1);
              plVar26[2] = lVar18 + uVar4 * 4;
              if (pvVar7 != (void *)0x0) {
                FUN_0049e790(puVar5);
              }
            }
            puVar27 = puVar27 + 1;
            if (puVar27 == (uint *)((long)register0x00000008 + -0x60)) {
              uVar1 = *puVar24;
              puVar24 = (undefined4 *)param_6[1];
              if (puVar24 < (undefined4 *)param_6[2]) {
                *puVar24 = uVar1;
                param_6[1] = (long)(puVar24 + 1);
              }
              else {
                pvVar7 = (void *)*param_6;
                lVar9 = (long)puVar24 - (long)pvVar7 >> 2;
                uVar4 = lVar9 + 1;
                if (uVar4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar18 = param_6[2] - (long)pvVar7;
                uVar11 = lVar18 >> 1;
                if (uVar4 <= uVar11) {
                  uVar4 = uVar11;
                }
                if (0x1ffffffffffffffe < (ulong)(lVar18 >> 2)) {
                  uVar4 = 0x3fffffffffffffff;
                }
                if (uVar4 == 0) {
                  lVar18 = 0;
                }
                else {
                  lVar18 = FUN_0049e770(PTR_FUN_047cba38,uVar4 << 2);
                  pvVar7 = (void *)*param_6;
                  puVar24 = (undefined4 *)param_6[1];
                }
                puVar25 = (undefined4 *)(lVar18 + lVar9 * 4);
                sVar8 = (long)puVar24 - (long)pvVar7;
                *puVar25 = uVar1;
                if (0 < (long)sVar8) {
                  memcpy((void *)((long)puVar25 - sVar8),pvVar7,sVar8);
                  pvVar7 = (void *)*param_6;
                }
                *param_6 = (long)((long)puVar25 - sVar8);
                param_6[1] = (long)(puVar25 + 1);
                param_6[2] = lVar18 + uVar4 * 4;
                if (pvVar7 != (void *)0x0) {
                  FUN_0049e790(puVar5);
                }
              }
              goto LAB_002d21f8;
            }
            uVar14 = *puVar27;
            lVar9 = *(long *)(param_3 + 6);
            if (lVar9 == 0) goto LAB_002d24f4;
LAB_002d233c:
            if (param_3[8] <= uVar14) goto LAB_002d24f4;
            uVar16 = *(uint *)(*(long *)(param_3 + 2) + (long)(int)uVar14 * 4);
          } while ((uVar16 < *param_3) && (*(uint *)(lVar9 + (long)(int)uVar16 * 8) == uVar14));
          lVar19 = *(long *)(param_3 + 2);
          lVar18 = *param_4;
          puVar12 = (undefined8 *)param_4[1];
          *(uint *)(lVar19 + (long)(int)uVar14 * 4) = *param_3;
          uVar16 = *param_3;
          *(uint *)(lVar9 + (long)(int)uVar16 * 8) = uVar14;
          *param_3 = uVar16 + 1;
          *(int *)(lVar9 + (long)*(int *)(lVar19 + (long)(int)uVar14 * 4) * 8 + 4) =
               (int)((ulong)((long)puVar12 - lVar18) >> 3) * -0x55555555;
          puVar15 = (undefined8 *)param_4[2];
          if (puVar12 < puVar15) break;
LAB_002d23c4:
          lVar9 = (long)puVar12 - lVar18 >> 3;
          uVar4 = lVar9 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar4) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar18 = (long)puVar15 - lVar18 >> 3;
          uVar11 = lVar18 * 0x5555555555555556;
          if (uVar4 <= uVar11) {
            uVar4 = uVar11;
          }
          if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
            uVar4 = 0xaaaaaaaaaaaaaaa;
          }
          if (uVar4 == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = FUN_0049e770(PTR_FUN_047cba38,uVar4 * 0x18);
          }
          puVar12 = (undefined8 *)(lVar18 + lVar9 * 8);
          lVar18 = lVar18 + uVar4 * 0x18;
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
          plVar26 = (long *)*param_4;
          plVar20 = (long *)param_4[1];
          if (plVar20 == plVar26) {
            *param_4 = (long)puVar12;
            param_4[1] = (long)(puVar12 + 3);
            param_4[2] = lVar18;
          }
          else {
            lVar9 = 0;
            do {
              *(undefined8 *)((long)puVar12 + lVar9 + -8) = 0;
              *(undefined8 *)((long)puVar12 + lVar9 + -0x18) = 0;
              *(undefined8 *)((long)puVar12 + lVar9 + -0x10) = 0;
              uVar28 = *(undefined8 *)((long)plVar20 + lVar9 + -0x18);
              lVar19 = lVar9 + -0x18;
              *(undefined8 *)((long)puVar12 + lVar9 + -0x10) =
                   *(undefined8 *)((long)plVar20 + lVar9 + -0x10);
              *(undefined8 *)((long)puVar12 + lVar9 + -0x18) = uVar28;
              *(undefined8 *)((long)puVar12 + lVar9 + -8) =
                   *(undefined8 *)((long)plVar20 + lVar9 + -8);
              *(undefined8 *)((long)plVar20 + lVar9 + -0x18) = 0;
              *(undefined8 *)((long)plVar20 + lVar9 + -0x10) = 0;
              *(undefined8 *)((long)plVar20 + lVar9 + -8) = 0;
              lVar9 = lVar19;
            } while ((long)plVar26 - (long)plVar20 != lVar19);
            plVar26 = (long *)*param_4;
            plVar20 = (long *)param_4[1];
            *param_4 = (long)puVar12 + lVar19;
            param_4[1] = (long)(puVar12 + 3);
            param_4[2] = lVar18;
            if (plVar20 != plVar26) {
              do {
                plVar21 = plVar20 + -3;
                if (*plVar21 != 0) {
                  plVar20[-2] = *plVar21;
                  FUN_0049e790(puVar5);
                }
                plVar20 = plVar21;
              } while (plVar26 != plVar21);
            }
          }
          if (plVar26 != (long *)0x0) {
            FUN_0049e790(puVar5,plVar26);
          }
        }
      } while( true );
    default:
      lVar9 = *(long *)(param_2 + 6);
      if (lVar9 != 0) {
        uVar22 = uVar14 >> 4;
        if ((uVar22 < param_2[8]) &&
           ((uVar16 = *(uint *)(*(long *)(param_2 + 2) + (ulong)uVar22 * 4), *param_2 <= uVar16 ||
            (*(uint *)(lVar9 + (long)(int)uVar16 * 8) != uVar22)))) {
          uVar14 = *param_2;
          lVar19 = (ulong)uVar22 * 4;
          lVar18 = *(long *)(param_2 + 2);
          *(uint *)(lVar18 + lVar19) = uVar14;
          uVar16 = *param_2;
          *(uint *)(lVar9 + (long)(int)uVar16 * 8) = uVar22;
          *param_2 = uVar16 + 1;
          *(uint *)(lVar9 + (long)*(int *)(lVar18 + lVar19) * 8 + 4) = uVar14;
LAB_002d21f8:
          uVar14 = *puVar17;
        }
      }
    case 6:
      uVar22 = uVar14 >> 4;
      break;
    case 5:
    case 7:
      goto switchD_002d2288_caseD_5;
    }
  } while( true );
switchD_002d2288_caseD_5:
  puVar25 = (undefined4 *)param_6[1];
  if ((undefined4 *)*param_6 == puVar25) {
    return;
  }
  goto LAB_002d21d8;
}


