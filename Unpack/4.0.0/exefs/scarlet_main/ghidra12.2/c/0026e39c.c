/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026e39c; name: FUN_0026e39c
 */


void FUN_0026e39c(int *param_1)

{
  void *pvVar1;
  void *__dest;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long *local_68;
  
  if (*param_1 == 2) {
    if ((char)param_1[1] == '\0') {
      puVar14 = *(ulong **)(param_1 + 2);
      if (puVar14 == *(ulong **)(param_1 + 4)) {
        puVar16 = *(undefined8 **)(param_1 + 10);
        puVar8 = *(undefined8 **)(param_1 + 0xc);
        if (puVar16 != puVar8) {
          puVar6 = *(ulong **)(param_1 + 6);
          puVar3 = (ulong *)*puVar16;
          if (puVar14 != puVar6) goto LAB_0026e74c;
          do {
            lVar9 = (long)puVar6 - *(long *)(param_1 + 2);
            uVar10 = lVar9 >> 5;
            uVar21 = uVar10 + 1;
            if (uVar21 >> 0x3b != 0) {
                    /* try { // try from 0026e99c to 0026e9a3 has its CatchHandler @ 0026e9d8 */
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar7 = lVar9 >> 4;
            if (uVar21 <= uVar7) {
              uVar21 = uVar7;
            }
            if (0x3fffffffffffffe < uVar10) {
              uVar21 = 0x7ffffffffffffff;
            }
            if (uVar21 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = (**(code **)(**(long **)(param_1 + 8) + 0x10))
                                (*(long **)(param_1 + 8),uVar21 << 5,8);
            }
            puVar14 = (ulong *)(lVar9 + uVar10 * 0x20);
            plVar2 = (long *)FUN_01cf7e20();
            puVar14[3] = (ulong)plVar2;
            if ((*puVar3 & 1) == 0) {
              uVar7 = puVar3[1];
              uVar10 = *puVar3;
              puVar14[2] = puVar3[2];
              puVar14[1] = uVar7;
              *puVar14 = uVar10;
            }
            else {
              uVar10 = puVar3[1];
              pvVar1 = (void *)puVar3[2];
              if (uVar10 < 0x17) {
                puVar5 = (undefined1 *)((long)puVar14 + 1);
                *(char *)puVar14 = (char)((int)uVar10 << 1);
              }
              else {
                if (0xffffffffffffffef < uVar10) {
                    /* try { // try from 0026e9ac to 0026e9b3 has its CatchHandler @ 0026e9b4 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                uVar7 = uVar10 + 0x10 & 0xfffffffffffffff0;
                puVar5 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar7,1);
                puVar14[1] = uVar10;
                puVar14[2] = (ulong)puVar5;
                *puVar14 = uVar7 | 1;
              }
              memcpy(puVar5,pvVar1,uVar10 + 1);
            }
            pbVar18 = *(byte **)(param_1 + 2);
            pbVar12 = *(byte **)(param_1 + 4);
            puVar6 = puVar14 + 4;
            puVar3 = puVar14;
            if (pbVar12 == pbVar18) {
              pbVar12 = pbVar18;
            }
            else {
              do {
                uVar10 = *(ulong *)(pbVar12 + -0x20);
                uVar22 = *(ulong *)(pbVar12 + -8);
                uVar7 = *(ulong *)(pbVar12 + -0x10);
                puVar14 = puVar3 + -4;
                puVar3[-3] = *(ulong *)(pbVar12 + -0x18);
                *puVar14 = uVar10;
                puVar3[-1] = uVar22;
                puVar3[-2] = uVar7;
                pbVar12[-0x18] = 0;
                pbVar12[-0x17] = 0;
                pbVar12[-0x16] = 0;
                pbVar12[-0x15] = 0;
                pbVar12[-0x14] = 0;
                pbVar12[-0x13] = 0;
                pbVar12[-0x12] = 0;
                pbVar12[-0x11] = 0;
                pbVar12[-0x10] = 0;
                pbVar12[-0xf] = 0;
                pbVar12[-0xe] = 0;
                pbVar12[-0xd] = 0;
                pbVar12[-0xc] = 0;
                pbVar12[-0xb] = 0;
                pbVar12[-10] = 0;
                pbVar12[-9] = 0;
                pbVar12[-0x20] = 0;
                pbVar12[-0x1f] = 0;
                pbVar12[-0x1e] = 0;
                pbVar12[-0x1d] = 0;
                pbVar12[-0x1c] = 0;
                pbVar12[-0x1b] = 0;
                pbVar12[-0x1a] = 0;
                pbVar12[-0x19] = 0;
                pbVar12 = pbVar12 + -0x20;
                puVar3 = puVar14;
              } while (pbVar18 != pbVar12);
              pbVar18 = *(byte **)(param_1 + 4);
              pbVar12 = *(byte **)(param_1 + 2);
            }
            *(ulong **)(param_1 + 2) = puVar14;
            *(ulong **)(param_1 + 4) = puVar6;
            lVar17 = *(long *)(param_1 + 6);
            *(ulong *)(param_1 + 6) = lVar9 + uVar21 * 0x20;
            if (pbVar18 != pbVar12) {
              do {
                pbVar19 = pbVar18 + -0x20;
                if ((*pbVar19 & 1) != 0) {
                  (**(code **)(**(long **)(pbVar18 + -8) + 0x18))
                            (*(long **)(pbVar18 + -8),*(undefined8 *)(pbVar18 + -0x10),
                             *(ulong *)(pbVar18 + -0x20) & 0xfffffffffffffffe,1);
                }
                pbVar18 = pbVar19;
              } while (pbVar12 != pbVar19);
            }
            if (pbVar12 != (byte *)0x0) {
              (**(code **)(**(long **)(param_1 + 8) + 0x18))
                        (*(long **)(param_1 + 8),pbVar12,lVar17 - (long)pbVar12,8);
            }
            while( true ) {
              puVar16 = puVar16 + 4;
              if (puVar16 == puVar8) {
                return;
              }
              puVar14 = *(ulong **)(param_1 + 4);
              puVar6 = *(ulong **)(param_1 + 6);
              puVar3 = (ulong *)*puVar16;
              if (puVar14 == puVar6) break;
LAB_0026e74c:
              plVar2 = (long *)FUN_01cf7e20();
              puVar14[3] = (ulong)plVar2;
              if ((*puVar3 & 1) == 0) {
                uVar10 = puVar3[1];
                uVar21 = *puVar3;
                puVar14[2] = puVar3[2];
                puVar14[1] = uVar10;
                *puVar14 = uVar21;
              }
              else {
                uVar21 = puVar3[1];
                pvVar1 = (void *)puVar3[2];
                if (uVar21 < 0x17) {
                  puVar5 = (undefined1 *)((long)puVar14 + 1);
                  *(char *)puVar14 = (char)((int)uVar21 << 1);
                }
                else {
                  if (0xffffffffffffffef < uVar21) {
                    /* try { // try from 0026e9a4 to 0026e9ab has its CatchHandler @ 0026e9d0 */
                    /* WARNING: Subroutine does not return */
                    std::__basic_string_common<true>::__throw_length_error();
                  }
                  uVar10 = uVar21 + 0x10 & 0xfffffffffffffff0;
                  puVar5 = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar10,1);
                  puVar14[1] = uVar21;
                  puVar14[2] = (ulong)puVar5;
                  *puVar14 = uVar10 | 1;
                }
                memcpy(puVar5,pvVar1,uVar21 + 1);
              }
              *(ulong **)(param_1 + 4) = puVar14 + 4;
            }
          } while( true );
        }
      }
    }
    else if (*(long *)(param_1 + 10) == *(long *)(param_1 + 0xc)) {
      puVar14 = *(ulong **)(param_1 + 2);
      puVar6 = *(ulong **)(param_1 + 4);
      if (puVar14 != puVar6) {
        do {
          local_68 = (long *)FUN_01cf7e20();
          if ((*puVar14 & 1) == 0) {
            uStack_78 = puVar14[1];
            local_80 = *puVar14;
            local_70 = (void *)puVar14[2];
          }
          else {
            uVar21 = puVar14[1];
            pvVar1 = (void *)puVar14[2];
            if (uVar21 < 0x17) {
              local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar21 << 1));
              __dest = (void *)((ulong)&local_80 | 1);
            }
            else {
              if (0xffffffffffffffef < uVar21) {
                    /* try { // try from 0026e98c to 0026e993 has its CatchHandler @ 0026e9e8 */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              uVar10 = uVar21 + 0x10 & 0xfffffffffffffff0;
              __dest = (void *)(**(code **)(*local_68 + 0x10))(local_68,uVar10,1);
              local_80 = uVar10 | 1;
              uStack_78 = uVar21;
              local_70 = __dest;
            }
            memcpy(__dest,pvVar1,uVar21 + 1);
          }
          plVar2 = (long *)FUN_01cf7e20();
          puVar3 = (ulong *)(**(code **)(*plVar2 + 0x10))(plVar2,0x20,8);
          plVar4 = (long *)FUN_01cf7e20();
          pvVar1 = local_70;
          uVar21 = uStack_78;
          puVar3[3] = (ulong)plVar4;
          if ((local_80 & 1) == 0) {
            puVar3[2] = (ulong)local_70;
            puVar3[1] = uStack_78;
            *puVar3 = local_80;
          }
          else {
            if (uStack_78 < 0x17) {
              puVar5 = (undefined1 *)((long)puVar3 + 1);
              *(char *)puVar3 = (char)((int)uStack_78 << 1);
            }
            else {
              if (0xffffffffffffffef < uStack_78) {
                    /* try { // try from 0026e994 to 0026e99b has its CatchHandler @ 0026e9dc */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              uVar10 = uStack_78 + 0x10 & 0xfffffffffffffff0;
              puVar5 = (undefined1 *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar10,1);
              puVar3[1] = uVar21;
              puVar3[2] = (ulong)puVar5;
              *puVar3 = uVar10 | 1;
            }
            memcpy(puVar5,pvVar1,uVar21 + 1);
          }
          puVar16 = *(undefined8 **)(param_1 + 0xc);
          if (puVar16 < *(undefined8 **)(param_1 + 0xe)) {
            *puVar16 = puVar3;
            puVar16[1] = puVar3 + 4;
            puVar16[2] = puVar3 + 4;
            puVar16[3] = plVar2;
            *(undefined8 **)(param_1 + 0xc) = puVar16 + 4;
          }
          else {
            lVar9 = *(long *)(param_1 + 10);
            lVar17 = (long)puVar16 - lVar9 >> 5;
            uVar21 = lVar17 + 1;
            if (uVar21 >> 0x3b != 0) {
                    /* try { // try from 0026e984 to 0026e98b has its CatchHandler @ 0026e9f0 */
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar9 = (long)*(undefined8 **)(param_1 + 0xe) - lVar9;
            uVar10 = lVar9 >> 4;
            if (uVar21 <= uVar10) {
              uVar21 = uVar10;
            }
            if (0x3fffffffffffffe < (ulong)(lVar9 >> 5)) {
              uVar21 = 0x7ffffffffffffff;
            }
            if (uVar21 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                                (*(long **)(param_1 + 0x10),uVar21 << 5,8);
            }
            puVar8 = (undefined8 *)(lVar9 + lVar17 * 0x20);
            *puVar8 = puVar3;
            puVar8[1] = puVar3 + 4;
            puVar8[2] = puVar3 + 4;
            puVar8[3] = plVar2;
            puVar13 = *(undefined8 **)(param_1 + 10);
            puVar15 = *(undefined8 **)(param_1 + 0xc);
            puVar16 = puVar8 + 4;
            if (puVar15 == puVar13) {
              puVar15 = puVar13;
            }
            else {
              lVar17 = 0;
              do {
                *(undefined8 *)((long)puVar8 + lVar17 + -0x10) = 0;
                *(undefined8 *)((long)puVar8 + lVar17 + -0x20) = 0;
                *(undefined8 *)((long)puVar8 + lVar17 + -0x18) = 0;
                lVar11 = lVar17 + -0x20;
                *(undefined8 *)((long)puVar8 + lVar17 + -8) =
                     *(undefined8 *)((long)puVar15 + lVar17 + -8);
                uVar20 = *(undefined8 *)((long)puVar15 + lVar17 + -0x20);
                *(undefined8 *)((long)puVar8 + lVar17 + -0x18) =
                     *(undefined8 *)((long)puVar15 + lVar17 + -0x18);
                *(undefined8 *)((long)puVar8 + lVar17 + -0x20) = uVar20;
                *(undefined8 *)((long)puVar8 + lVar17 + -0x10) =
                     *(undefined8 *)((long)puVar15 + lVar17 + -0x10);
                *(undefined8 *)((long)puVar15 + lVar17 + -0x10) = 0;
                *(undefined8 *)((long)puVar15 + lVar17 + -0x20) = 0;
                *(undefined8 *)((long)puVar15 + lVar17 + -0x18) = 0;
                lVar17 = lVar11;
              } while ((long)puVar13 - (long)puVar15 != lVar11);
              puVar13 = *(undefined8 **)(param_1 + 10);
              puVar8 = (undefined8 *)((long)puVar8 + lVar11);
              puVar15 = *(undefined8 **)(param_1 + 0xc);
            }
            lVar17 = *(long *)(param_1 + 0xe);
            *(ulong *)(param_1 + 0xe) = lVar9 + uVar21 * 0x20;
            *(undefined8 **)(param_1 + 10) = puVar8;
            *(undefined8 **)(param_1 + 0xc) = puVar16;
            if (puVar15 != puVar13) {
              do {
                puVar16 = puVar15 + -4;
                pbVar18 = (byte *)*puVar16;
                if (pbVar18 != (byte *)0x0) {
                  if ((byte *)puVar15[-3] == pbVar18) {
                    pbVar12 = pbVar18;
                  }
                  else {
                    pbVar12 = (byte *)puVar15[-3];
                    do {
                      pbVar19 = pbVar12 + -0x20;
                      if ((*pbVar19 & 1) != 0) {
                        (**(code **)(**(long **)(pbVar12 + -8) + 0x18))
                                  (*(long **)(pbVar12 + -8),*(undefined8 *)(pbVar12 + -0x10),
                                   *(ulong *)(pbVar12 + -0x20) & 0xfffffffffffffffe,1);
                      }
                      pbVar12 = pbVar19;
                    } while (pbVar18 != pbVar19);
                    pbVar12 = (byte *)*puVar16;
                  }
                  puVar15[-3] = pbVar18;
                  (**(code **)(*(long *)puVar15[-1] + 0x18))
                            ((long *)puVar15[-1],pbVar12,puVar15[-2] - (long)pbVar12,8);
                }
                puVar15 = puVar16;
              } while (puVar16 != puVar13);
            }
            if (puVar13 != (undefined8 *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                        (*(long **)(param_1 + 0x10),puVar13,lVar17 - (long)puVar13,8);
            }
          }
          if ((local_80 & 1) != 0) {
            (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
          }
          puVar14 = puVar14 + 4;
        } while (puVar14 != puVar6);
      }
    }
  }
  return;
}


