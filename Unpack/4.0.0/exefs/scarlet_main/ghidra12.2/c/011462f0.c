/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011462f0; name: FUN_011462f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_011462f0(undefined8 *param_1,long *******param_2,long param_3,long param_4)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  undefined2 uVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long ******pppppplVar13;
  char *pcVar14;
  long lVar15;
  long ******pppppplVar16;
  ulong uVar17;
  long lVar18;
  uint *puVar19;
  undefined1 *puVar20;
  long *plVar21;
  ulong uVar22;
  byte *pbVar23;
  undefined1 *puVar24;
  ulong uVar25;
  undefined1 *puVar26;
  uint uVar27;
  long lVar28;
  uint *puVar29;
  ushort *puVar30;
  ushort uVar31;
  long *******ppppppplVar32;
  long *******ppppppplVar33;
  long ******pppppplVar34;
  long *plVar35;
  undefined8 *puVar36;
  long *******ppppppplVar37;
  long *****ppppplVar38;
  short sVar39;
  ulong uVar40;
  char *pcVar41;
  undefined1 *puVar42;
  long *plVar43;
  ulong uVar44;
  ulong uVar45;
  long *plVar46;
  long *****ppppplVar47;
  undefined1 *puVar48;
  uint uVar49;
  ulong uVar50;
  int *piVar51;
  long *******ppppppplVar52;
  uint uVar53;
  long ******pppppplVar54;
  long ******pppppplVar55;
  uint uVar56;
  ulong local_2a0;
  uint *local_298;
  undefined8 *local_290;
  int local_284;
  ulong local_280;
  int *local_278;
  long *******local_270;
  long *******local_268;
  uint *local_260;
  long ******local_258;
  long *******local_250;
  long ******local_248;
  long *******local_240;
  long *******local_238;
  ulong local_230;
  long ******local_228;
  ulong local_220;
  long ******local_218;
  long ******local_210;
  long *******local_208;
  long *******local_200;
  uint *local_1f8;
  long local_1f0;
  long *******local_1e8;
  long *******local_1e0;
  long *******local_1d8;
  long ******local_1d0;
  long *******local_1c8;
  undefined8 local_1c0;
  long *******local_1b8;
  long *******local_1b0;
  long *******local_1a8;
  long *******local_1a0;
  undefined8 local_198;
  long *******local_190;
  long *local_188;
  undefined2 local_180;
  long local_178;
  long local_170;
  long local_168;
  long *******ppppppplStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  ulong local_140;
  long *******local_138;
  long *******local_130;
  long local_128;
  long *******local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  ulong local_100;
  long local_f8;
  long ******local_f0;
  long *******local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  long *******local_c8;
  long *******local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  ulong local_a0;
  float local_98;
  long *******local_90;
  char *local_88;
  long *local_78;
  uint auStack_70 [4];
  
  if ((*(long *)(param_3 + 8) == 0) || ((*(byte *)(*(long *)(param_3 + 8) + 0x1e8) & 1) == 0)) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  local_290 = param_1;
  lVar28 = *(long *)(param_4 + 0x250) - *(long *)(param_4 + 0x248) >> 4;
  local_280 = lVar28 * -0x5555555555555555;
  puVar42 = (undefined1 *)
            ((long)&local_2a0 -
            ((-(local_280 >> 0xf & 1) & 0xfffffffffffe0000 | lVar28 * 0x5555555555555556 & 0x1fffeU)
             + 0xf & 0xfffffffffffffff0));
  local_284 = (uint)local_280 * 0x10000;
  local_1f0 = param_4;
  if (0 < local_284) {
    uVar49 = (uint)local_280 & 0xffff;
    uVar50 = 0;
    if (uVar49 < 2) {
      uVar49 = 1;
    }
    do {
      uVar8 = FUN_00c9edd0(param_4,uVar50 & 0xffffffff);
      param_4 = local_1f0;
      *(undefined2 *)(puVar42 + uVar50 * 2) = uVar8;
      uVar50 = uVar50 + 1;
    } while (uVar49 != uVar50);
  }
  if (((*(long *)(param_3 + 8) == 0) || ((*(byte *)(*(long *)(param_3 + 8) + 0x1e8) & 1) == 0)) ||
     ((*(byte *)(*(long *)(param_3 + 8) + 0x1e8) & 1) == 0)) {
    local_278 = (int *)0x0;
  }
  else {
    puVar29 = *(uint **)(*(long *)(param_3 + 8) + 0x1f0);
    local_278 = (int *)((long)puVar29 + (ulong)*puVar29);
  }
  puVar30 = (ushort *)((long)local_278 - (long)*local_278);
  uVar31 = *puVar30;
  if (uVar31 < 5) {
    local_1f8 = auStack_70;
    local_298 = (uint *)0x0;
    uVar40 = 0;
    uVar50 = 0;
    pppppplVar55 = (long ******)puVar42;
LAB_01146f54:
  }
  else {
    uVar50 = 0;
    if ((ulong)puVar30[2] != 0) {
      puVar29 = (uint *)((long)local_278 + (ulong)puVar30[2]);
      puVar29 = (uint *)((long)puVar29 + (ulong)*puVar29);
      uVar49 = *puVar29;
      if (uVar49 == 0) {
        uVar50 = 0;
      }
      else {
        uVar40 = 0;
        uVar50 = 0;
        uVar44 = (*(long *)(local_1f0 + 0x250) - *(long *)(local_1f0 + 0x248) >> 4) *
                 -0x5555555555555555;
        uVar53 = (uint)(short)uVar44;
        uVar27 = uVar53;
        if (uVar53 < 2) {
          uVar27 = 1;
        }
        do {
          puVar19 = puVar29 + uVar40 + 1;
          piVar51 = (int *)((long)puVar19 + (ulong)*puVar19);
          if (*(ushort *)((long)piVar51 - (long)*piVar51) < 0xb) {
            bVar7 = false;
          }
          else {
            uVar17 = (ulong)((ushort *)((long)piVar51 - (long)*piVar51))[5];
            bVar7 = false;
            if (uVar17 != 0) {
              bVar7 = *(char *)((long)piVar51 + uVar17) != '\0';
            }
          }
          if ((*(ushort *)((long)piVar51 - (long)*piVar51) < 7) ||
             (uVar17 = (ulong)((ushort *)((long)piVar51 - (long)*piVar51))[3], uVar17 == 0)) {
            puVar19 = (uint *)0x0;
          }
          else {
            puVar19 = (uint *)((long)piVar51 + uVar17);
            puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
          }
          uVar56 = *puVar19;
          if (bVar7) {
            if (uVar56 != 0) {
              uVar17 = 0;
              lVar28 = (long)puVar19 + 9;
              do {
                puVar20 = &DAT_cbf29ce484222645;
                uVar12 = (ulong)puVar19[uVar17 + 1];
                bVar5 = *(byte *)((long)(puVar19 + uVar17 + 1) + uVar12 + 4);
                if (bVar5 != 0) {
                  pbVar23 = (byte *)(lVar28 + uVar12);
                  do {
                    puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar5) * 0x100000001b3);
                    bVar5 = *pbVar23;
                    pbVar23 = pbVar23 + 1;
                  } while (bVar5 != 0);
                }
                plVar35 = *(long **)(local_1f0 + 0x30);
                if (*(long **)(local_1f0 + 0x30) != *(long **)(local_1f0 + 0x38)) {
LAB_01146558:
                  puVar24 = *(undefined1 **)(*plVar35 + 0x40);
                  if (puVar24 != (undefined1 *)0x0) {
                    uVar12 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
                    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
                    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38;
                    if (uVar12 < 2) {
                      puVar26 = (undefined1 *)((ulong)(puVar24 + -1) & (ulong)puVar20);
                    }
                    else {
                      puVar26 = puVar20;
                      if (puVar24 <= puVar20) {
                        uVar22 = 0;
                        if (puVar24 != (undefined1 *)0x0) {
                          uVar22 = (ulong)puVar20 / (ulong)puVar24;
                        }
                        puVar26 = puVar20 + -(uVar22 * (long)puVar24);
                      }
                    }
                    plVar43 = *(long **)(*(long *)(*plVar35 + 0x38) + (long)puVar26 * 8);
                    if ((plVar43 != (long *)0x0) &&
                       (plVar43 = (long *)*plVar43, plVar43 != (long *)0x0)) {
                      if (uVar12 < 2) {
                        do {
                          if ((undefined1 *)plVar43[1] == puVar20) {
                            if ((undefined1 *)plVar43[2] == puVar20) goto LAB_0114664c;
                          }
                          else if ((undefined1 *)((ulong)plVar43[1] & (ulong)(puVar24 + -1)) !=
                                   puVar26) break;
                          plVar43 = (long *)*plVar43;
                        } while (plVar43 != (long *)0x0);
                      }
                      else {
                        do {
                          puVar48 = (undefined1 *)plVar43[1];
                          if (puVar48 == puVar20) {
                            if ((undefined1 *)plVar43[2] == puVar20) goto LAB_0114664c;
                          }
                          else {
                            if (puVar24 <= puVar48) {
                              uVar12 = 0;
                              if (puVar24 != (undefined1 *)0x0) {
                                uVar12 = (ulong)puVar48 / (ulong)puVar24;
                              }
                              puVar48 = puVar48 + -(uVar12 * (long)puVar24);
                            }
                            if (puVar48 != puVar26) break;
                          }
                          plVar43 = (long *)*plVar43;
                        } while (plVar43 != (long *)0x0);
                      }
                    }
                  }
                  goto LAB_01146654;
                }
LAB_01146660:
                sVar9 = -1;
LAB_01146664:
                uVar10 = (uint)sVar9;
                uVar50 = (ulong)((int)uVar50 + 1);
                if ((int)uVar10 < 0) {
                  uVar10 = 0xffffffff;
                }
                if ((uVar44 & 0xffff) != 0) {
                  if (uVar53 < 2) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = 0;
                    uVar22 = (ulong)uVar27 & 0xfffffffe;
                    do {
                      uVar6 = *(ushort *)(puVar42 + uVar12 * 2);
                      while( true ) {
                        if (uVar6 == 0xffff) break;
                        if (uVar10 == uVar6) {
                          uVar50 = (ulong)((int)uVar50 + 1);
                          break;
                        }
                        uVar6 = *(ushort *)(puVar42 + (ulong)uVar6 * 2);
                      }
                      uVar6 = *(ushort *)(puVar42 + (uVar12 << 1 | 2));
                      while( true ) {
                        if (uVar6 == 0xffff) break;
                        if (uVar10 == uVar6) {
                          uVar50 = (ulong)((int)uVar50 + 1);
                          break;
                        }
                        uVar6 = *(ushort *)(puVar42 + (ulong)uVar6 * 2);
                      }
                      uVar12 = uVar12 + 2;
                      uVar22 = uVar22 - 2;
                    } while (uVar22 != 0);
                  }
                  if ((uVar27 & 1) != 0) {
                    do {
                      uVar6 = *(ushort *)(puVar42 + uVar12 * 2);
                      uVar12 = (ulong)uVar6;
                      if (uVar6 == 0xffff) goto LAB_01146710;
                    } while (uVar10 != uVar6);
                    uVar50 = (ulong)((int)uVar50 + 1);
                  }
                }
LAB_01146710:
                uVar17 = uVar17 + 1;
                lVar28 = lVar28 + 4;
              } while (uVar17 < uVar56);
            }
          }
          else {
            uVar50 = (ulong)(uVar56 + (int)uVar50);
          }
          uVar40 = uVar40 + 1;
        } while (uVar40 < uVar49);
      }
    }
    if (uVar31 < 7) {
LAB_0114689c:
      local_1f8 = (uint *)(puVar42 + -(uVar50 * 4 + 0xf & 0x7fffffff0));
      if (4 < uVar31) goto LAB_011468c4;
LAB_01146f44:
      uVar40 = 0;
      uVar50 = 0;
      pppppplVar55 = (long ******)local_1f8;
      local_298 = (uint *)0x0;
LAB_01146f50:
      param_4 = local_1f0;
      goto LAB_01146f54;
    }
    uVar40 = (ulong)puVar30[3];
    if (uVar40 != 0) {
      uVar44 = (ulong)*(uint *)((long)local_278 + uVar40);
      uVar49 = *(uint *)((long)((long)local_278 + uVar40) + uVar44);
      if (uVar49 != 0) {
        lVar18 = uVar40 + uVar44;
        lVar28 = 0;
        do {
          uVar40 = (ulong)*(uint *)((long)local_278 + lVar28 + lVar18 + 4);
          lVar15 = uVar40 + *(ushort *)
                             ((long)local_278 +
                             lVar28 + (uVar40 - (long)*(int *)((long)local_278 +
                                                              lVar28 + uVar40 + lVar18 + 4)) +
                                      lVar18 + 10);
          lVar15 = lVar28 + lVar15 + (ulong)*(uint *)((long)local_278 + lVar28 + lVar15 + lVar18 + 4
                                                     ) + lVar18;
          lVar28 = lVar28 + 4;
          uVar50 = (ulong)(uint)(*(int *)((long)local_278 + lVar15 + 4) + (int)uVar50);
        } while ((ulong)uVar49 * 4 != lVar28);
      }
    }
    if (uVar31 < 9) goto LAB_0114689c;
    uVar40 = (ulong)puVar30[4];
    if (uVar40 != 0) {
      uVar44 = (ulong)*(uint *)((long)local_278 + uVar40);
      puVar29 = (uint *)((long)((long)local_278 + uVar40) + uVar44);
      uVar49 = *puVar29;
      if (uVar49 != 0) {
        piVar51 = (int *)((long)(puVar29 + 1) + (ulong)puVar29[1]);
        puVar19 = (uint *)((long)piVar51 + (ulong)*(ushort *)((long)piVar51 + (6 - (long)*piVar51)))
        ;
        uVar27 = *(int *)((long)puVar19 + (ulong)*puVar19) + (int)uVar50;
        uVar50 = (ulong)uVar27;
        if (uVar49 != 1) {
          piVar51 = (int *)((long)(puVar29 + 2) + (ulong)puVar29[2]);
          puVar29 = (uint *)((long)piVar51 +
                            (ulong)*(ushort *)((long)piVar51 + (6 - (long)*piVar51)));
          uVar50 = (ulong)(*(int *)((long)puVar29 + (ulong)*puVar29) + uVar27);
          if (uVar49 != 2) {
            lVar28 = (ulong)uVar49 - 2;
            puVar29 = (uint *)((long)local_278 + uVar44 + uVar40 + 0xc);
            do {
              uVar40 = (ulong)*puVar29;
              lVar28 = lVar28 + -1;
              lVar18 = uVar40 + *(ushort *)
                                 ((long)puVar29 +
                                 (uVar40 - (long)*(int *)((long)puVar29 + uVar40)) + 6);
              piVar51 = (int *)((long)puVar29 + lVar18 + (ulong)*(uint *)((long)puVar29 + lVar18));
              puVar29 = puVar29 + 1;
              uVar50 = (ulong)(uint)(*piVar51 + (int)uVar50);
            } while (lVar28 != 0);
          }
        }
        goto LAB_0114689c;
      }
    }
    local_1f8 = (uint *)(puVar42 + -(uVar50 * 4 + 0xf & 0x7fffffff0));
LAB_011468c4:
    uVar50 = (ulong)puVar30[2];
    if (uVar50 == 0) goto LAB_01146f44;
    uVar44 = (ulong)*(uint *)((long)local_278 + uVar50);
    puVar29 = (uint *)((long)((long)local_278 + uVar50) + uVar44);
    uVar49 = *puVar29;
    uVar40 = (ulong)uVar49;
    pppppplVar55 = (long ******)(local_1f8 + uVar40 * -8);
    local_298 = (uint *)pppppplVar55;
    if (uVar49 != 0) {
      plVar35 = *(long **)(local_1f0 + 0x30);
      plVar43 = *(long **)(local_1f0 + 0x38);
      uVar17 = (*(long *)(local_1f0 + 0x250) - *(long *)(local_1f0 + 0x248) >> 4) *
               -0x5555555555555555;
      uVar27 = (uint)(short)uVar17;
      lVar28 = (long)local_278 + uVar44 + uVar50 + 0xd;
      uVar49 = uVar27;
      if (uVar27 < 2) {
        uVar49 = 1;
      }
      uVar44 = 0;
      uVar50 = 0;
      local_200 = (long *******)((ulong)uVar49 & 0xfffffffe);
      do {
        puVar19 = puVar29 + uVar44 + 1;
        uVar53 = *puVar19;
        piVar51 = (int *)((long)puVar19 + (ulong)uVar53);
        if (*(ushort *)((long)piVar51 - (long)*piVar51) < 5) {
          lVar18 = 0;
        }
        else {
          uVar12 = (ulong)((ushort *)((long)piVar51 - (long)*piVar51))[2];
          lVar18 = 0;
          if (uVar12 != 0) {
            puVar2 = (uint *)((long)piVar51 + uVar12);
            lVar18 = (long)puVar2 + (ulong)*puVar2;
          }
        }
        puVar2 = (uint *)((long)pppppplVar55 + uVar44 * 8 * 4);
        *(long *)(puVar2 + 4) = lVar18 + 4;
        uVar56 = 0;
        if (8 < *(ushort *)((long)piVar51 - (long)*piVar51)) {
          uVar12 = (ulong)((ushort *)((long)piVar51 - (long)*piVar51))[4];
          uVar56 = 0;
          if (uVar12 != 0) {
            uVar56 = *(uint *)((long)piVar51 + uVar12);
          }
        }
        puVar2[6] = uVar56;
        puVar30 = (ushort *)((long)piVar51 - (long)*piVar51);
        if (((*puVar30 < 0xb) || ((ulong)puVar30[5] == 0)) ||
           (puVar1 = local_1f8 + uVar50, *(char *)((long)piVar51 + (ulong)puVar30[5]) == '\0')) {
          uVar56 = *(uint *)((long)((long)piVar51 + (ulong)puVar30[3]) +
                            (ulong)*(uint *)((long)piVar51 + (ulong)puVar30[3]));
          *(uint **)puVar2 = local_1f8 + uVar50;
          *(ulong *)(puVar2 + 2) = (ulong)uVar56;
          lVar18 = (long)*piVar51;
          puVar19 = (uint *)((long)piVar51 + (ulong)*(ushort *)((long)piVar51 + (6 - lVar18)));
          if (*(int *)((long)puVar19 + (ulong)*puVar19) != 0) {
            uVar12 = 0;
            lVar15 = lVar28 + (ulong)uVar53;
            do {
              uVar22 = (ulong)*(ushort *)((long)piVar51 + (6 - (long)(int)lVar18));
              puVar19 = (uint *)((long)piVar51 + uVar22);
              uVar25 = (ulong)*puVar19;
              puVar19 = (uint *)((long)puVar19 + uVar12 * 4 + uVar25 + 4);
              uVar45 = (ulong)*puVar19;
              bVar5 = *(byte *)((long)puVar19 + uVar45 + 4);
              puVar20 = &DAT_cbf29ce484222645;
              if (bVar5 != 0) {
                pbVar23 = (byte *)(lVar15 + uVar45 + uVar25 + uVar22);
                do {
                  puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar23;
                  pbVar23 = pbVar23 + 1;
                } while (bVar5 != 0);
              }
              plVar21 = plVar35;
              if (plVar35 != plVar43) {
LAB_01146a78:
                puVar24 = *(undefined1 **)(*plVar21 + 0x40);
                if (puVar24 != (undefined1 *)0x0) {
                  uVar22 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
                  uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
                  uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar22 < 2) {
                    puVar26 = (undefined1 *)((ulong)(puVar24 + -1) & (ulong)puVar20);
                  }
                  else {
                    puVar26 = puVar20;
                    if (puVar24 <= puVar20) {
                      uVar25 = 0;
                      if (puVar24 != (undefined1 *)0x0) {
                        uVar25 = (ulong)puVar20 / (ulong)puVar24;
                      }
                      puVar26 = puVar20 + -(uVar25 * (long)puVar24);
                    }
                  }
                  plVar46 = *(long **)(*(long *)(*plVar21 + 0x38) + (long)puVar26 * 8);
                  if ((plVar46 != (long *)0x0) &&
                     (plVar46 = (long *)*plVar46, plVar46 != (long *)0x0)) {
                    if (uVar22 < 2) {
                      do {
                        if ((undefined1 *)plVar46[1] == puVar20) {
                          if ((undefined1 *)plVar46[2] == puVar20) goto LAB_01146b6c;
                        }
                        else if ((undefined1 *)((ulong)plVar46[1] & (ulong)(puVar24 + -1)) !=
                                 puVar26) break;
                        plVar46 = (long *)*plVar46;
                      } while (plVar46 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar48 = (undefined1 *)plVar46[1];
                        if (puVar48 == puVar20) {
                          if ((undefined1 *)plVar46[2] == puVar20) goto LAB_01146b6c;
                        }
                        else {
                          if (puVar24 <= puVar48) {
                            uVar22 = 0;
                            if (puVar24 != (undefined1 *)0x0) {
                              uVar22 = (ulong)puVar48 / (ulong)puVar24;
                            }
                            puVar48 = puVar48 + -(uVar22 * (long)puVar24);
                          }
                          if (puVar48 != puVar26) break;
                        }
                        plVar46 = (long *)*plVar46;
                      } while (plVar46 != (long *)0x0);
                    }
                  }
                }
                goto LAB_01146b74;
              }
LAB_01146b80:
              sVar9 = -1;
LAB_01146b84:
              uVar53 = (uint)sVar9;
              if ((int)uVar53 < 0) {
                uVar53 = 0xffffffff;
              }
              local_1f8[uVar50] = uVar53;
              lVar18 = (long)*piVar51;
              uVar50 = (ulong)((int)uVar50 + 1);
              puVar19 = (uint *)((long)piVar51 + (ulong)*(ushort *)((long)piVar51 + (6 - lVar18)));
              uVar12 = uVar12 + 1;
              lVar15 = lVar15 + 4;
            } while (uVar12 < *(uint *)((long)puVar19 + (ulong)*puVar19));
          }
        }
        else {
          piVar51 = (int *)((long)puVar19 + (ulong)*puVar19);
          if ((*(ushort *)((long)piVar51 - (long)*piVar51) < 7) ||
             (uVar12 = (ulong)((ushort *)((long)piVar51 - (long)*piVar51))[3], uVar12 == 0)) {
            puVar19 = (uint *)0x0;
          }
          else {
            puVar19 = (uint *)((long)piVar51 + uVar12);
            puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
          }
          if (*puVar19 != 0) {
            uVar12 = 0;
            lVar18 = (long)puVar19 + 9;
            do {
              puVar20 = &DAT_cbf29ce484222645;
              uVar22 = (ulong)puVar19[uVar12 + 1];
              bVar5 = *(byte *)((long)(puVar19 + uVar12 + 1) + uVar22 + 4);
              if (bVar5 != 0) {
                pbVar23 = (byte *)(lVar18 + uVar22);
                do {
                  puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar23;
                  pbVar23 = pbVar23 + 1;
                } while (bVar5 != 0);
              }
              plVar21 = plVar35;
              if (plVar35 != plVar43) {
LAB_01146ca0:
                puVar24 = *(undefined1 **)(*plVar21 + 0x40);
                if (puVar24 != (undefined1 *)0x0) {
                  uVar22 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
                  uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
                  uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar22 < 2) {
                    puVar26 = (undefined1 *)((ulong)(puVar24 + -1) & (ulong)puVar20);
                  }
                  else {
                    puVar26 = puVar20;
                    if (puVar24 <= puVar20) {
                      uVar25 = 0;
                      if (puVar24 != (undefined1 *)0x0) {
                        uVar25 = (ulong)puVar20 / (ulong)puVar24;
                      }
                      puVar26 = puVar20 + -(uVar25 * (long)puVar24);
                    }
                  }
                  plVar46 = *(long **)(*(long *)(*plVar21 + 0x38) + (long)puVar26 * 8);
                  if ((plVar46 != (long *)0x0) &&
                     (plVar46 = (long *)*plVar46, plVar46 != (long *)0x0)) {
                    if (uVar22 < 2) {
                      do {
                        if ((undefined1 *)plVar46[1] == puVar20) {
                          if ((undefined1 *)plVar46[2] == puVar20) goto LAB_01146d94;
                        }
                        else if ((undefined1 *)((ulong)plVar46[1] & (ulong)(puVar24 + -1)) !=
                                 puVar26) break;
                        plVar46 = (long *)*plVar46;
                      } while (plVar46 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar48 = (undefined1 *)plVar46[1];
                        if (puVar48 == puVar20) {
                          if ((undefined1 *)plVar46[2] == puVar20) goto LAB_01146d94;
                        }
                        else {
                          if (puVar24 <= puVar48) {
                            uVar22 = 0;
                            if (puVar24 != (undefined1 *)0x0) {
                              uVar22 = (ulong)puVar48 / (ulong)puVar24;
                            }
                            puVar48 = puVar48 + -(uVar22 * (long)puVar24);
                          }
                          if (puVar48 != puVar26) break;
                        }
                        plVar46 = (long *)*plVar46;
                      } while (plVar46 != (long *)0x0);
                    }
                  }
                }
                goto LAB_01146d9c;
              }
LAB_01146da8:
              sVar9 = -1;
LAB_01146dac:
              uVar53 = (uint)sVar9;
              if ((int)uVar53 < 0) {
                uVar53 = 0xffffffff;
              }
              uVar56 = (int)uVar50 + 1;
              local_1f8[uVar50] = uVar53;
              if ((uVar17 & 0xffff) == 0) {
LAB_01146e98:
                uVar50 = (ulong)uVar56;
              }
              else {
                if (uVar27 < 2) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = 0;
                  ppppppplVar32 = local_200;
                  do {
                    uVar31 = *(ushort *)(puVar42 + uVar22 * 2);
                    while( true ) {
                      if (uVar31 == 0xffff) break;
                      if (uVar53 == uVar31) {
                        local_1f8[uVar56] = (uint)uVar22;
                        uVar56 = uVar56 + 1;
                        break;
                      }
                      uVar31 = *(ushort *)(puVar42 + (ulong)uVar31 * 2);
                    }
                    uVar31 = *(ushort *)(puVar42 + (uVar22 | 1) * 2);
                    while( true ) {
                      if (uVar31 == 0xffff) break;
                      if (uVar53 == uVar31) {
                        local_1f8[uVar56] = (uint)(uVar22 | 1);
                        uVar56 = uVar56 + 1;
                        break;
                      }
                      uVar31 = *(ushort *)(puVar42 + (ulong)uVar31 * 2);
                    }
                    uVar22 = uVar22 + 2;
                    ppppppplVar32 = (long *******)((long)ppppppplVar32 + -2);
                  } while (ppppppplVar32 != (long *******)0x0);
                }
                uVar50 = (ulong)uVar56;
                if ((uVar49 & 1) != 0) {
                  uVar31 = *(ushort *)(puVar42 + uVar22 * 2);
                  while( true ) {
                    if (uVar31 == 0xffff) break;
                    if (uVar53 == uVar31) {
                      uVar50 = (ulong)(uVar56 + 1);
                      local_1f8[uVar56] = (uint)uVar22;
                      goto LAB_01146e60;
                    }
                    uVar31 = *(ushort *)(puVar42 + (ulong)uVar31 * 2);
                  }
                  goto LAB_01146e98;
                }
              }
LAB_01146e60:
              uVar12 = uVar12 + 1;
              lVar18 = lVar18 + 4;
            } while (uVar12 < *puVar19);
          }
          puVar20 = (undefined1 *)((long)local_1f8 + (uVar50 * 4 - (long)puVar1));
          *(uint **)puVar2 = puVar1;
          *(long *)(puVar2 + 2) = (long)puVar20 >> 2;
        }
        uVar44 = uVar44 + 1;
        lVar28 = lVar28 + 4;
      } while (uVar44 != uVar40);
      goto LAB_01146f50;
    }
    uVar40 = 0;
    uVar50 = 0;
    param_4 = local_1f0;
  }
  piVar51 = local_278;
  local_2a0 = uVar40;
  if (*(long **)(param_4 + 0x38) == *(long **)(param_4 + 0x30)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  sVar9 = (**(code **)(*(long *)(*(long *)(**(long **)(param_4 + 0x30) + 0x30) + 0x30) + 0x10))();
  local_d8 = 0;
  local_e8 = param_2;
  uStack_e0 = 0x666666666666666;
  local_d0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_250 = param_2;
  local_b8 = 0x666666666666666;
  uStack_b0 = 0;
  local_98 = 1.0;
  local_f8 = 0;
  local_f0 = (long ******)0x0;
  local_c8 = (long *******)0x0;
  local_c0 = param_2;
  lVar28 = (long)*piVar51;
  uVar31 = *(ushort *)((long)piVar51 - lVar28);
  if (uVar31 < 7) {
    local_230 = 0;
    local_228 = (long ******)0x0;
    pppppplVar54 = (long ******)0x0;
    local_248 = (long ******)0x0;
  }
  else {
    uVar40 = (ulong)((ushort *)((long)piVar51 - lVar28))[3];
    if (uVar40 == 0) {
      pppppplVar54 = (long ******)0x0;
LAB_01148b0c:
      local_248 = (long ******)0x0;
    }
    else {
      uVar44 = (ulong)*(uint *)((long)piVar51 + uVar40);
      puVar29 = (uint *)((long)((long)piVar51 + uVar40) + uVar44);
      uVar49 = *puVar29;
      pppppplVar55 = (long ******)
                     ((long)pppppplVar55 - ((long)(ulong)uVar49 * 0x28 + 0xfU & 0x7ffffffff0));
      local_248 = (long ******)(ulong)uVar49;
      pppppplVar54 = pppppplVar55;
      if (uVar49 == 0) goto LAB_01148b0c;
      local_230 = (ulong)(uint)(int)sVar9;
      local_258 = pppppplVar55;
      local_268 = (long *******)&local_1e0;
      local_260 = puVar29 + 1;
      local_270 = (long *******)&local_c8;
      local_240 = (long *******)&local_130;
      local_238 = (long *******)&local_c0;
      pppppplVar16 = (long ******)0x0;
      uVar40 = (long)piVar51 + uVar44 + uVar40 + 0xd;
      do {
        uVar44 = (ulong)local_260[(long)pppppplVar16];
        piVar51 = (int *)((long)(local_260 + (long)pppppplVar16) + uVar44);
        puVar30 = (ushort *)((long)piVar51 - (long)*piVar51);
        if (*puVar30 < 0xb) {
          pppppplVar34 = pppppplVar54 + (long)pppppplVar16 * 5;
          pcVar14 = (char *)0x0;
          pcVar41 = (char *)0x0;
          if (4 < *puVar30) goto LAB_011470a0;
        }
        else {
          pcVar14 = (char *)0x0;
          if ((ulong)puVar30[5] != 0) {
            puVar29 = (uint *)((long)piVar51 + (ulong)puVar30[5]);
            pcVar14 = (char *)((long)puVar29 + (ulong)*puVar29);
          }
          pppppplVar34 = pppppplVar54 + (long)pppppplVar16 * 5;
LAB_011470a0:
          if ((ulong)puVar30[2] == 0) {
            pcVar41 = (char *)0x0;
          }
          else {
            puVar29 = (uint *)((long)piVar51 + (ulong)puVar30[2]);
            pcVar41 = (char *)((long)puVar29 + (ulong)*puVar29);
          }
        }
        pppppplVar54[(long)pppppplVar16 * 5 + 2] = (long *****)(pcVar41 + 4);
        uVar4 = *(undefined4 *)(pcVar14 + 0xc);
        *(undefined8 *)((long)pppppplVar54 + (long)pppppplVar16 * 0x28 + 0x1c) =
             *(undefined8 *)(pcVar14 + 4);
        *(undefined4 *)((long)pppppplVar54 + (long)pppppplVar16 * 0x28 + 0x24) = uVar4;
        puVar29 = (uint *)((long)piVar51 + (ulong)*(ushort *)((long)piVar51 + (6 - (long)*piVar51)))
        ;
        uVar49 = *(uint *)((long)puVar29 + (ulong)*puVar29);
        *pppppplVar34 = (long *****)(local_1f8 + uVar50);
        pppppplVar34[1] = (long *****)(ulong)uVar49;
        if (*(ushort *)((long)piVar51 - (long)*piVar51) < 9) {
          uVar49 = 0;
        }
        else {
          uVar17 = (ulong)((ushort *)((long)piVar51 - (long)*piVar51))[4];
          uVar49 = 0;
          if (uVar17 != 0) {
            uVar49 = (uint)*(byte *)((long)piVar51 + uVar17);
          }
        }
        *(uint *)(pppppplVar54 + (long)pppppplVar16 * 5 + 3) = uVar49;
        lVar28 = (long)*piVar51;
        puVar29 = (uint *)((long)piVar51 + (ulong)*(ushort *)((long)piVar51 + (6 - lVar28)));
        if (*(int *)((long)puVar29 + (ulong)*puVar29) != 0) {
          uVar17 = 0;
          lVar18 = uVar40 + uVar44;
          do {
            uVar44 = (ulong)*(ushort *)((long)piVar51 + (6 - (long)(int)lVar28));
            puVar29 = (uint *)((long)piVar51 + uVar44);
            uVar12 = (ulong)*puVar29;
            puVar29 = (uint *)((long)puVar29 + uVar17 * 4 + uVar12 + 4);
            uVar22 = (ulong)*puVar29;
            bVar5 = *(byte *)((long)puVar29 + uVar22 + 4);
            puVar20 = &DAT_cbf29ce484222645;
            if (bVar5 != 0) {
              pbVar23 = (byte *)(lVar18 + uVar22 + uVar12 + uVar44);
              do {
                puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar5) * 0x100000001b3);
                bVar5 = *pbVar23;
                pbVar23 = pbVar23 + 1;
              } while (bVar5 != 0);
            }
            plVar35 = *(long **)(local_1f0 + 0x30);
LAB_0114719c:
            if (plVar35 != *(long **)(local_1f0 + 0x38)) {
              puVar24 = *(undefined1 **)(*plVar35 + 0x40);
              if (puVar24 != (undefined1 *)0x0) {
                uVar44 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
                uVar44 = (uVar44 & 0x3333333333333333) + (uVar44 >> 2 & 0x3333333333333333);
                uVar44 = (uVar44 + (uVar44 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                if (uVar44 < 2) {
                  puVar26 = (undefined1 *)((ulong)(puVar24 + -1) & (ulong)puVar20);
                }
                else {
                  puVar26 = puVar20;
                  if (puVar24 <= puVar20) {
                    uVar12 = 0;
                    if (puVar24 != (undefined1 *)0x0) {
                      uVar12 = (ulong)puVar20 / (ulong)puVar24;
                    }
                    puVar26 = puVar20 + -(uVar12 * (long)puVar24);
                  }
                }
                plVar43 = *(long **)(*(long *)(*plVar35 + 0x38) + (long)puVar26 * 8);
                if ((plVar43 != (long *)0x0) && (plVar43 = (long *)*plVar43, plVar43 != (long *)0x0)
                   ) {
                  if (uVar44 < 2) {
                    do {
                      if ((undefined1 *)plVar43[1] == puVar20) {
                        if ((undefined1 *)plVar43[2] == puVar20) goto LAB_01147298;
                      }
                      else if ((undefined1 *)((ulong)plVar43[1] & (ulong)(puVar24 + -1)) != puVar26)
                      break;
                      plVar43 = (long *)*plVar43;
                    } while (plVar43 != (long *)0x0);
                  }
                  else {
                    do {
                      puVar48 = (undefined1 *)plVar43[1];
                      if (puVar48 == puVar20) {
                        if ((undefined1 *)plVar43[2] == puVar20) goto LAB_01147298;
                      }
                      else {
                        if (puVar24 <= puVar48) {
                          uVar44 = 0;
                          if (puVar24 != (undefined1 *)0x0) {
                            uVar44 = (ulong)puVar48 / (ulong)puVar24;
                          }
                          puVar48 = puVar48 + -(uVar44 * (long)puVar24);
                        }
                        if (puVar48 != puVar26) break;
                      }
                      plVar43 = (long *)*plVar43;
                    } while (plVar43 != (long *)0x0);
                  }
                }
              }
              goto LAB_011472a0;
            }
            sVar39 = -1;
LAB_011472ac:
            uVar49 = (uint)sVar39;
            if ((int)uVar49 < 0) {
              uVar49 = 0xffffffff;
            }
            local_1f8[uVar50] = uVar49;
            lVar28 = (long)*piVar51;
            uVar50 = (ulong)((int)uVar50 + 1);
            puVar29 = (uint *)((long)piVar51 + (ulong)*(ushort *)((long)piVar51 + (6 - lVar28)));
            uVar17 = uVar17 + 1;
            lVar18 = lVar18 + 4;
          } while (uVar17 < *(uint *)((long)puVar29 + (ulong)*puVar29));
        }
        local_218 = pppppplVar16;
        local_210 = pppppplVar54 + (long)pppppplVar16 * 5 + 1;
        if (pppppplVar54[(long)pppppplVar16 * 5 + 1] != (long *****)0x0) {
          ppppppplVar32 = (long *******)0x0;
          local_228 = pppppplVar34;
          local_220 = uVar40;
          do {
            uVar49 = *(uint *)((long)*local_228 + (long)ppppppplVar32 * 4);
            local_208 = ppppppplVar32;
            ppppppplVar32 = (long *******)(*(code *)(*param_2)[2])(param_2,0x38,8);
            if (ppppppplVar32 == (long *******)0x0) {
              local_128 = 0;
              local_120 = (long *******)0x0;
              local_138 = (long *******)0x0;
              local_130 = (long *******)0x0;
            }
            else {
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar28 = nn::os::GetTlsValue(DAT_04865a30);
              if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_01148ae8;
              *(long ********)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = param_2;
              *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
              *ppppppplVar32 = (long ******)0x0;
              ppppppplVar32[1] = (long ******)0x0;
              ppppppplVar32[2] = (long ******)0x0;
              ppppppplVar32[3] = (long ******)param_2;
              *(undefined4 *)(ppppppplVar32 + 6) = 0;
              ppppppplVar32[4] = (long ******)0x7fffffffffffffff;
              ppppppplVar32[5] = (long ******)0x0;
              local_138 = ppppppplVar32;
              local_130 = param_2;
              local_128 = 0x38;
              local_120 = (long *******)&DAT_00000008;
              *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
            }
            if (0 < (int)local_230) {
              uVar40 = 0;
              lVar28 = local_1f0;
              do {
                if (uVar49 == *(ushort *)(puVar42 + uVar40 * 2)) {
                  FUN_00e1561c(&local_1e8,lVar28,uVar40 & 0xffffffff);
                  ppppppplVar52 = local_1e0;
                  if (local_1d0 != (long ******)0x0) {
                    (*(code *)(*local_1d0)[4])();
                  }
                  pcVar14 = strstr((char *)ppppppplVar52,"_roll");
                  lVar28 = local_1f0;
                  if (pcVar14 == (char *)0x0) {
                    pcVar14 = strstr((char *)ppppppplVar52,"_sub");
                    lVar28 = local_1f0;
                    if (pcVar14 == (char *)0x0) {
                      pppppplVar54 = ppppppplVar32[1];
                      ppppppplVar52 = ppppppplVar32 + 3;
                      uVar8 = (undefined2)uVar40;
                      if (pppppplVar54 < ppppppplVar32[2]) {
                        pppppplVar16 = *ppppppplVar52;
                        if (((DAT_04865a38 & 1) == 0) &&
                           (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
                          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                          __cxa_guard_release(&DAT_04865a38);
                        }
                        lVar28 = nn::os::GetTlsValue(DAT_04865a30);
                        if (lVar28 == 0) {
                          *(undefined2 *)pppppplVar54 = uVar8;
                        }
                        else {
                          if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_01148ae8;
                          *(long *******)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = pppppplVar16;
                          *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
                          *(undefined2 *)pppppplVar54 = uVar8;
                          *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
                        }
                        ppppppplVar32[1] = (long ******)((long)pppppplVar54 + 2);
                      }
                      else {
                        pppppplVar16 = ppppppplVar32[4];
                        lVar28 = (long)pppppplVar54 - (long)*ppppppplVar32 >> 1;
                        pppppplVar54 = (long ******)(lVar28 + 1);
                        if ((long ******)0x7ffffffffffffffe < pppppplVar16) {
                          pppppplVar16 = (long ******)0x7fffffffffffffff;
                        }
                        if (pppppplVar16 < pppppplVar54) {
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        pppppplVar34 = (long ******)((long)ppppppplVar32[2] - (long)*ppppppplVar32);
                        local_1d0 = (long ******)0x0;
                        if (pppppplVar54 <= pppppplVar34) {
                          pppppplVar54 = pppppplVar34;
                        }
                        if ((ulong)pppppplVar16 >> 1 <= (ulong)((long)pppppplVar34 >> 1)) {
                          pppppplVar54 = pppppplVar16;
                        }
                        local_200 = ppppppplVar52;
                        local_1c8 = ppppppplVar52;
                        if (pppppplVar54 == (long ******)0x0) {
                          ppppppplVar52 = (long *******)0x0;
                        }
                        else {
                          ppppppplVar52 =
                               (long *******)
                               (*(code *)(**ppppppplVar52)[2])
                                         (*ppppppplVar52,(long)pppppplVar54 << 1,2);
                          if (ppppppplVar52 == (long *******)0x0) {
                            (*(code *)(**local_200)[0x1d])();
                          }
                        }
                        ppppppplVar37 = (long *******)((long)ppppppplVar52 + lVar28 * 2);
                        local_1d0 = (long ******)((long)ppppppplVar52 + (long)pppppplVar54 * 2);
                        pppppplVar54 = *local_200;
                        local_1e8 = ppppppplVar52;
                        local_1e0 = ppppppplVar37;
                        local_1d8 = ppppppplVar37;
                        if (((DAT_04865a38 & 1) == 0) &&
                           (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
                          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                          __cxa_guard_release(&DAT_04865a38);
                        }
                        lVar28 = nn::os::GetTlsValue(DAT_04865a30);
                        if (lVar28 == 0) {
                          *(undefined2 *)ppppppplVar37 = uVar8;
                        }
                        else {
                          if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_01148ae8;
                          *(long *******)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = pppppplVar54;
                          *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
                          *(undefined2 *)ppppppplVar37 = uVar8;
                          *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
                          ppppppplVar37 = local_1d8;
                        }
                        local_1d8 = (long *******)((long)ppppppplVar37 + 2);
                        FUN_01148b34(local_200,*ppppppplVar32,ppppppplVar32[1],local_268);
                        ppppppplVar37 = (long *******)*ppppppplVar32;
                        *ppppppplVar32 = (long ******)local_1e0;
                        local_1e8 = ppppppplVar37;
                        local_1e0 = ppppppplVar37;
                        ppppppplVar52 = (long *******)ppppppplVar32[1];
                        ppppppplVar32[1] = (long ******)local_1d8;
                        local_1d8 = ppppppplVar52;
                        pppppplVar54 = ppppppplVar32[2];
                        ppppppplVar32[2] = local_1d0;
                        local_1d0 = pppppplVar54;
                        if ((long)ppppppplVar52 - (long)ppppppplVar37 != 0) {
                          local_1d8 = (long *******)
                                      ((long)ppppppplVar52 +
                                      (((long)ppppppplVar52 - (long)ppppppplVar37) - 2U >> 1 ^
                                      0xffffffffffffffff) * 2);
                        }
                        if (ppppppplVar37 != (long *******)0x0) {
                          lVar28 = (long)pppppplVar54 - (long)ppppppplVar37;
                          pppppplVar54 = *local_1c8;
                          uVar44 = (*(code *)(*pppppplVar54)[0x1f])(pppppplVar54);
                          if (((uVar44 & 1) == 0) ||
                             (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
                            (*(code *)(*pppppplVar54)[3])(pppppplVar54,ppppppplVar37,lVar28,2);
                          }
                          else {
                            FUN_00c48fe8(pppppplVar54,ppppppplVar37,lVar28,2);
                          }
                        }
                      }
                      lVar28 = local_1f0;
                      pppppplVar54 = local_258;
                      param_2 = local_250;
                    }
                  }
                }
                uVar40 = uVar40 + 1;
              } while ((long)(int)sVar9 != uVar40);
            }
            ppppppplVar32 = (long *******)(*(code *)(*local_c0)[2])(local_c0,0x38,8);
            if (ppppppplVar32 == (long *******)0x0) {
              (*(code *)(*local_c0)[0x1d])();
            }
            ppppppplVar52 = local_c0;
            local_1e0 = local_238;
            local_1d8 = (long *******)((ulong)local_1d8 & 0xffffffffffffff00);
            local_1e8 = ppppppplVar32;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar28 = nn::os::GetTlsValue(DAT_04865a30);
            ppppppplVar33 = local_138;
            ppppppplVar37 = local_1e8;
            if (lVar28 != 0) {
              if (0xf < *(ulong *)(lVar28 + 0x80)) goto LAB_01148ae8;
              *(long ********)(lVar28 + *(ulong *)(lVar28 + 0x80) * 8) = ppppppplVar52;
              *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + 1;
            }
            *(short *)(ppppppplVar32 + 2) = (short)uVar49;
            local_138 = (long *******)0x0;
            ppppppplVar32[3] = (long ******)ppppppplVar33;
            pppppplVar16 = *local_240;
            pppppplVar34 = local_240[2];
            ppppppplVar32[5] = local_240[1];
            ppppppplVar32[6] = pppppplVar34;
            ppppppplVar32[4] = pppppplVar16;
            if (lVar28 != 0) {
              *(long *)(lVar28 + 0x80) = *(long *)(lVar28 + 0x80) + -1;
              uVar49 = (uint)*(ushort *)(ppppppplVar32 + 2);
            }
            local_1d8 = (long *******)CONCAT71(local_1d8._1_7_,1);
            pppppplVar16 = (long ******)(long)(short)uVar49;
            *ppppppplVar32 = (long ******)0x0;
            ppppppplVar32[1] = pppppplVar16;
            if (local_f0 == (long ******)0x0) {
LAB_011476d0:
              if ((local_f0 == (long ******)0x0) ||
                 (local_98 * (float)local_f0 < (float)(local_a0 + 1))) {
                pppppplVar16 = (long ******)
                               ((ulong)(local_f0 < (long ******)0x3 ||
                                       ((ulong)local_f0 & (long)local_f0 - 1U) != 0) |
                               (long)local_f0 << 1);
                pppppplVar34 = (long ******)(long)((float)(local_a0 + 1) / local_98);
                if (pppppplVar34 <= pppppplVar16) {
                  pppppplVar34 = pppppplVar16;
                }
                if ((long)pppppplVar34 - 1U == 0) {
                  pppppplVar34 = (long ******)0x2;
                }
                else if (((ulong)pppppplVar34 & (long)pppppplVar34 - 1U) != 0) {
                  pppppplVar34 = (long ******)std::__next_prime((ulong)pppppplVar34);
                }
                pppppplVar16 = local_f0;
                if (local_f0 < pppppplVar34) {
                  pppppplVar13 = pppppplVar34;
LAB_0114785c:
                  FUN_01149078(&local_f8,pppppplVar13);
                }
                else if (pppppplVar34 < local_f0) {
                  pppppplVar13 = (long ******)(long)((float)local_a0 / local_98);
                  if ((local_f0 < (long ******)0x3) ||
                     (uVar40 = (long)local_f0 - ((ulong)local_f0 >> 1 & 0x5555555555555555),
                     uVar40 = (uVar40 & 0x3333333333333333) + (uVar40 >> 2 & 0x3333333333333333),
                     1 < (uVar40 + (uVar40 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
                  {
                    pppppplVar13 = (long ******)std::__next_prime((ulong)pppppplVar13);
                  }
                  else if ((long ******)0x1 < pppppplVar13) {
                    pppppplVar13 = (long ******)(1L << (-LZCOUNT((long)pppppplVar13 + -1) & 0x3fU));
                  }
                  if (pppppplVar13 <= pppppplVar34) {
                    pppppplVar13 = pppppplVar34;
                  }
                  if (pppppplVar13 < pppppplVar16) goto LAB_0114785c;
                }
                pppppplVar16 = ppppppplVar32[1];
              }
              uVar40 = (long)local_f0 - ((ulong)local_f0 >> 1 & 0x5555555555555555);
              uVar40 = (uVar40 & 0x3333333333333333) + (uVar40 >> 2 & 0x3333333333333333);
              uVar40 = (uVar40 + (uVar40 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar40 < 2) {
                pppppplVar16 = (long ******)((long)local_f0 - 1U & (ulong)pppppplVar16);
              }
              else if (local_f0 <= pppppplVar16) {
                uVar44 = 0;
                if (local_f0 != (long ******)0x0) {
                  uVar44 = (ulong)pppppplVar16 / (ulong)local_f0;
                }
                pppppplVar16 = (long ******)((long)pppppplVar16 - uVar44 * (long)local_f0);
              }
              puVar36 = *(undefined8 **)(local_f8 + (long)pppppplVar16 * 8);
              if (puVar36 == (undefined8 *)0x0) {
                *ppppppplVar32 = (long ******)local_c8;
                local_c8 = ppppppplVar32;
                *(long ********)(local_f8 + (long)pppppplVar16 * 8) = local_270;
                if (*ppppppplVar32 != (long ******)0x0) {
                  pppppplVar16 = (long ******)(*ppppppplVar32)[1];
                  if (uVar40 < 2) {
                    pppppplVar16 = (long ******)((ulong)pppppplVar16 & (long)local_f0 - 1U);
                  }
                  else if (local_f0 <= pppppplVar16) {
                    uVar40 = 0;
                    if (local_f0 != (long ******)0x0) {
                      uVar40 = (ulong)pppppplVar16 / (ulong)local_f0;
                    }
                    pppppplVar16 = (long ******)((long)pppppplVar16 - uVar40 * (long)local_f0);
                  }
                  puVar36 = (undefined8 *)(local_f8 + (long)pppppplVar16 * 8);
                  goto LAB_01147788;
                }
              }
              else {
                *ppppppplVar32 = (long ******)*puVar36;
LAB_01147788:
                *puVar36 = ppppppplVar32;
              }
              local_a0 = local_a0 + 1;
              local_1e8 = (long *******)0x0;
            }
            else {
              uVar40 = (long)local_f0 - 1;
              if (((ulong)local_f0 & uVar40) == 0) {
                plVar35 = *(long **)(local_f8 + (uVar40 & (ulong)pppppplVar16) * 8);
                if (plVar35 == (long *)0x0) goto LAB_011476d0;
                do {
                  plVar35 = (long *)*plVar35;
                  if ((plVar35 == (long *)0x0) ||
                     ((plVar35[1] & uVar40) != (uVar40 & (ulong)pppppplVar16))) goto LAB_011476d0;
                } while ((uint)*(ushort *)(plVar35 + 2) != (uVar49 & 0xffff));
              }
              else {
                pppppplVar34 = pppppplVar16;
                if (local_f0 <= pppppplVar16) {
                  uVar40 = 0;
                  if (local_f0 != (long ******)0x0) {
                    uVar40 = (ulong)pppppplVar16 / (ulong)local_f0;
                  }
                  pppppplVar34 = (long ******)((long)pppppplVar16 - uVar40 * (long)local_f0);
                }
                plVar35 = *(long **)(local_f8 + (long)pppppplVar34 * 8);
                if (plVar35 == (long *)0x0) goto LAB_011476d0;
                do {
                  plVar35 = (long *)*plVar35;
                  if (plVar35 == (long *)0x0) goto LAB_011476d0;
                  pppppplVar13 = (long ******)plVar35[1];
                  if (local_f0 <= pppppplVar13) {
                    uVar40 = 0;
                    if (local_f0 != (long ******)0x0) {
                      uVar40 = (ulong)pppppplVar13 / (ulong)local_f0;
                    }
                    pppppplVar13 = (long ******)((long)pppppplVar13 - uVar40 * (long)local_f0);
                  }
                  if (pppppplVar13 != pppppplVar34) goto LAB_011476d0;
                } while ((uint)*(ushort *)(plVar35 + 2) != (uVar49 & 0xffff));
              }
              local_1e8 = (long *******)0x0;
              if (ppppppplVar37 != (long *******)0x0) {
                FUN_0114caec(&local_1e0);
              }
            }
            ppppppplVar32 = (long *******)((long)local_208 + 1);
            uVar40 = local_220;
          } while (ppppppplVar32 < *local_210);
        }
        pppppplVar16 = (long ******)((long)local_218 + 1);
        uVar40 = uVar40 + 4;
      } while (pppppplVar16 != local_248);
      lVar28 = (long)*local_278;
      uVar31 = *(ushort *)((long)local_278 - lVar28);
      piVar51 = local_278;
    }
    lVar28 = -lVar28;
    if (uVar31 < 9) {
      local_230 = 0;
      local_228 = (long ******)0x0;
    }
    else {
      uVar40 = (ulong)*(ushort *)((long)piVar51 + lVar28 + 8);
      if (uVar40 == 0) {
        pppppplVar16 = (long ******)0x0;
        uVar44 = 0;
      }
      else {
        uVar17 = (ulong)*(uint *)((long)piVar51 + uVar40);
        puVar29 = (uint *)((long)((long)piVar51 + uVar40) + uVar17);
        uVar49 = *puVar29;
        pppppplVar16 = (long ******)(ulong)uVar49;
        uVar44 = (long)pppppplVar55 - ((long)pppppplVar16 * 0x18 + 0xfU & 0x3ffffffff0);
        if (uVar49 == 0) {
          pppppplVar16 = (long ******)0x0;
        }
        else {
          pppppplVar55 = (long ******)0x0;
          lVar28 = (long)piVar51 + uVar17 + uVar40 + 0xd;
          do {
            puVar19 = puVar29 + (long)pppppplVar55 + 1;
            uVar40 = (ulong)*puVar19;
            piVar3 = (int *)((long)puVar19 + uVar40);
            if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
              lVar18 = 0;
            }
            else {
              uVar17 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
              lVar18 = 0;
              if (uVar17 != 0) {
                puVar19 = (uint *)((long)piVar3 + uVar17);
                lVar18 = (long)puVar19 + (ulong)*puVar19;
              }
            }
            plVar35 = (long *)(uVar44 + (long)pppppplVar55 * 0x18);
            plVar35[2] = lVar18 + 4;
            puVar19 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (6 - (long)*piVar3))
                              );
            uVar49 = *(uint *)((long)puVar19 + (ulong)*puVar19);
            *plVar35 = (long)(local_1f8 + uVar50);
            plVar35[1] = (ulong)uVar49;
            lVar18 = (long)*piVar3;
            puVar19 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (6 - lVar18)));
            if (*(int *)((long)puVar19 + (ulong)*puVar19) != 0) {
              uVar17 = 0;
              lVar15 = lVar28 + uVar40;
              do {
                uVar22 = (ulong)*(ushort *)((long)piVar3 + (6 - (long)(int)lVar18));
                puVar19 = (uint *)((long)piVar3 + uVar22);
                uVar40 = (ulong)*puVar19;
                puVar19 = (uint *)((long)puVar19 + uVar17 * 4 + uVar40 + 4);
                uVar12 = (ulong)*puVar19;
                bVar5 = *(byte *)((long)puVar19 + uVar12 + 4);
                puVar42 = &DAT_cbf29ce484222645;
                if (bVar5 != 0) {
                  puVar42 = &DAT_cbf29ce484222645;
                  pbVar23 = (byte *)(lVar15 + uVar12 + uVar40 + uVar22);
                  do {
                    puVar42 = (undefined1 *)(((ulong)puVar42 ^ (ulong)bVar5) * 0x100000001b3);
                    bVar5 = *pbVar23;
                    pbVar23 = pbVar23 + 1;
                  } while (bVar5 != 0);
                }
                plVar35 = *(long **)(local_1f0 + 0x30);
LAB_01147a94:
                if (plVar35 != *(long **)(local_1f0 + 0x38)) {
                  puVar20 = *(undefined1 **)(*plVar35 + 0x40);
                  if (puVar20 != (undefined1 *)0x0) {
                    uVar40 = (long)puVar20 - ((ulong)puVar20 >> 1 & 0x5555555555555555);
                    uVar40 = (uVar40 & 0x3333333333333333) + (uVar40 >> 2 & 0x3333333333333333);
                    uVar40 = (uVar40 + (uVar40 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38;
                    if (uVar40 < 2) {
                      puVar24 = (undefined1 *)((ulong)(puVar20 + -1) & (ulong)puVar42);
                    }
                    else {
                      puVar24 = puVar42;
                      if (puVar20 <= puVar42) {
                        uVar12 = 0;
                        if (puVar20 != (undefined1 *)0x0) {
                          uVar12 = (ulong)puVar42 / (ulong)puVar20;
                        }
                        puVar24 = puVar42 + -(uVar12 * (long)puVar20);
                      }
                    }
                    plVar43 = *(long **)(*(long *)(*plVar35 + 0x38) + (long)puVar24 * 8);
                    if ((plVar43 != (long *)0x0) &&
                       (plVar43 = (long *)*plVar43, plVar43 != (long *)0x0)) {
                      if (uVar40 < 2) {
                        do {
                          if ((undefined1 *)plVar43[1] == puVar42) {
                            if ((undefined1 *)plVar43[2] == puVar42) goto LAB_01147b90;
                          }
                          else if ((undefined1 *)((ulong)plVar43[1] & (ulong)(puVar20 + -1)) !=
                                   puVar24) break;
                          plVar43 = (long *)*plVar43;
                        } while (plVar43 != (long *)0x0);
                      }
                      else {
                        do {
                          puVar26 = (undefined1 *)plVar43[1];
                          if (puVar26 == puVar42) {
                            if ((undefined1 *)plVar43[2] == puVar42) goto LAB_01147b90;
                          }
                          else {
                            if (puVar20 <= puVar26) {
                              uVar40 = 0;
                              if (puVar20 != (undefined1 *)0x0) {
                                uVar40 = (ulong)puVar26 / (ulong)puVar20;
                              }
                              puVar26 = puVar26 + -(uVar40 * (long)puVar20);
                            }
                            if (puVar26 != puVar24) break;
                          }
                          plVar43 = (long *)*plVar43;
                        } while (plVar43 != (long *)0x0);
                      }
                    }
                  }
                  goto LAB_01147b98;
                }
                sVar9 = -1;
LAB_01147ba4:
                uVar49 = (uint)sVar9;
                if ((int)uVar49 < 0) {
                  uVar49 = 0xffffffff;
                }
                local_1f8[uVar50] = uVar49;
                lVar18 = (long)*piVar3;
                puVar19 = (uint *)((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (6 - lVar18)));
                uVar50 = (ulong)((int)uVar50 + 1);
                uVar17 = uVar17 + 1;
                lVar15 = lVar15 + 4;
              } while (uVar17 < *(uint *)((long)puVar19 + (ulong)*puVar19));
            }
            pppppplVar55 = (long ******)((long)pppppplVar55 + 1);
            lVar28 = lVar28 + 4;
          } while (pppppplVar55 != pppppplVar16);
          lVar28 = -(long)*piVar51;
          uVar31 = *(ushort *)((long)piVar51 - (long)*piVar51);
        }
      }
      local_230 = uVar44;
      local_228 = pppppplVar16;
      if ((10 < uVar31) && (uVar50 = (ulong)*(ushort *)((long)piVar51 + lVar28 + 10), uVar50 != 0))
      {
        uVar40 = (ulong)*(uint *)((long)piVar51 + uVar50);
        piVar3 = (int *)((long)((long)piVar51 + uVar50) + uVar40);
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar44 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar44 == 0)) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          local_268 = *(long ********)PTR_DAT_047d3e30;
          local_260 = *(uint **)(PTR_DAT_047d3e30 + 8);
          local_240 = *(long ********)(PTR_DAT_047d3e30 + 0x10);
          local_238 = *(long ********)(PTR_DAT_047d3e30 + 0x18);
          if (local_238 != (long *******)0x0) {
            (*(code *)(*local_238)[3])();
          }
        }
        else {
          puVar29 = (uint *)((long)piVar3 + uVar44);
          uVar17 = (ulong)*puVar29;
          local_260 = (uint *)((long)puVar29 + uVar17 + 4);
          local_240 = (long *******)strlen((char *)local_260);
          bVar5 = *(byte *)((long)puVar29 + uVar17 + 4);
          piVar51 = local_278;
          if (bVar5 == 0) {
            local_238 = (long *******)0x0;
            local_268 = (long *******)&DAT_cbf29ce484222645;
          }
          else {
            local_268 = (long *******)&DAT_cbf29ce484222645;
            pbVar23 = (byte *)((long)local_278 + uVar17 + uVar44 + uVar40 + uVar50 + 5);
            do {
              local_268 = (long *******)(((ulong)local_268 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar23;
              pbVar23 = pbVar23 + 1;
            } while (bVar5 != 0);
            local_238 = (long *******)0x0;
          }
        }
        goto LAB_01147cac;
      }
    }
  }
  local_240 = (long *******)0x0;
  local_238 = (long *******)0x0;
  local_268 = (long *******)&DAT_cbf29ce484222645;
  local_260 = (uint *)&DAT_03c886bc;
LAB_01147cac:
  uVar40 = (ulong)(short)local_280;
  local_108 = 0;
  local_118 = 0x3fffffffffffffff;
  uStack_110 = 0;
  uVar50 = uVar40 >> 5;
  ppppppplVar32 = (long *******)(local_280 & 0x1f);
  if (ppppppplVar32 != (long *******)0x0) {
    uVar50 = uVar50 + 1;
  }
  local_100 = 0;
  local_138 = (long *******)0x0;
  local_130 = (long *******)0x0;
  local_1e8 = (long *******)((ulong)local_1e8 & 0xffffffff00000000);
  local_128 = 0;
  local_120 = param_2;
  if (uVar50 != 0) {
    FUN_00eda21c(&local_138,uVar50,&local_1e8);
  }
  if (ppppppplVar32 != (long *******)0x0) {
    *(uint *)((long)local_130 + -4) =
         *(uint *)((long)local_130 + -4) & (-1 << (long)ppppppplVar32 ^ 0xffffffffU);
  }
  local_258 = pppppplVar54;
  local_100 = uVar40;
  if (local_284 < 1) {
    local_220 = local_220 & 0xffffffff00000000;
  }
  else {
    uVar27 = (uint)local_280 & 0xffff;
    uVar49 = 0;
    if (uVar27 < 2) {
      uVar27 = 1;
    }
    do {
      FUN_00e1561c(&local_1e8,local_1f0,uVar49);
      ppppppplVar52 = local_1e8;
      if (local_1d0 != (long ******)0x0) {
        (*(code *)(*local_1d0)[4])();
      }
      if (ppppppplVar52 == (long *******)0x94aeaab4737159ef) goto LAB_01147f5c;
      uVar49 = uVar49 + 1;
    } while (uVar27 != uVar49);
    uVar49 = 0;
LAB_01147f5c:
    uVar53 = 0;
    local_220 = CONCAT44(local_220._4_4_,uVar49);
    lVar28 = local_1f0;
    do {
      uVar56 = 1 << (ulong)(uVar53 & 0x1f);
      uVar10 = uVar53;
      if ((uint)(int)(short)uVar49 < uVar53) {
        do {
          uVar31 = *(ushort *)(*(long *)(lVar28 + 0xa0) + (long)(short)uVar10 * 2);
          if ((*(uint *)(*(long *)(lVar28 + 0x150) +
                        ((ulong)(long)(short)uVar31 >> 3 & 0x1ffffffffffffffc)) >>
               (ulong)(uVar31 & 0x1f) & 1) == 0) {
            puVar29 = (uint *)((long)local_138 + (ulong)(uVar53 >> 5) * 4);
            uVar56 = *puVar29 & (uVar56 ^ 0xffffffff);
            goto LAB_01147fd0;
          }
          uVar10 = FUN_00c9edd0(lVar28);
          lVar28 = local_1f0;
        } while ((int)(short)uVar49 < (int)(uVar10 & 0xffff));
      }
      puVar29 = (uint *)((long)local_138 + (ulong)(uVar53 >> 5) * 4);
      uVar56 = *puVar29 | uVar56;
LAB_01147fd0:
      uVar53 = uVar53 + 1;
      *puVar29 = uVar56;
    } while (uVar53 != uVar27);
    piVar51 = local_278;
    param_2 = local_250;
  }
  local_178 = 0;
  local_170 = 0;
  local_148 = 0;
  local_140 = 0;
  local_1e8 = (long *******)((ulong)local_1e8 & 0xffffffff00000000);
  local_168 = 0;
  local_158 = 0x3fffffffffffffff;
  uStack_150 = 0;
  ppppppplStack_160 = param_2;
  if (uVar50 != 0) {
    FUN_00eda21c(&local_178,uVar50,&local_1e8);
  }
  if (ppppppplVar32 != (long *******)0x0) {
    *(uint *)(local_170 + -4) =
         *(uint *)(local_170 + -4) & (-1 << (long)ppppppplVar32 ^ 0xffffffffU);
  }
  local_1d0 = (long ******)0x7ffffffffffffff;
  local_1c8 = (long *******)0x0;
  local_1c0 = (long ******)((ulong)local_1c0._4_4_ << 0x20);
  local_198 = (long *)((ulong)local_198._4_4_ << 0x20);
  local_190 = (long *******)0x0;
  local_1a8 = (long *******)0x7ffffffffffffff;
  local_1a0 = (long *******)0x0;
  local_188 = (long *)CONCAT44(local_188._4_4_,0x3f800000);
  local_1e8 = (long *******)0x0;
  local_1e0 = (long *******)0x0;
  local_1b8 = (long *******)0x0;
  local_1d8 = param_2;
  local_1b0 = param_2;
  local_140 = uVar40;
  if ((4 < *(ushort *)((long)piVar51 - (long)*piVar51)) &&
     (uVar50 = (ulong)((ushort *)((long)piVar51 - (long)*piVar51))[2], uVar50 != 0)) {
    uVar40 = (ulong)*(uint *)((long)piVar51 + uVar50);
    puVar29 = (uint *)((long)((long)piVar51 + uVar50) + uVar40);
    pppppplVar55 = (long ******)(puVar29 + 1);
    uVar44 = (ulong)*puVar29;
    if (uVar44 != 0) {
      local_218 = (long ******)((long)pppppplVar55 + uVar44 * 4);
      local_208 = (long *******)&local_1b8;
      local_200 = (long *******)((long)piVar51 + uVar40 + uVar50 + 0xd);
      do {
        piVar51 = (int *)((long)pppppplVar55 + (ulong)*(uint *)pppppplVar55);
        uVar50 = (ulong)*(ushort *)((long)piVar51 + (6 - (long)*piVar51));
        puVar19 = (uint *)((long)piVar51 + uVar50);
        uVar40 = (ulong)*puVar19;
        puVar19 = (uint *)((long)puVar19 + uVar40);
        puVar29 = puVar19 + 1;
        uVar44 = (ulong)*puVar19;
        local_210 = pppppplVar55;
        if (uVar44 != 0) {
          local_1f8 = puVar29 + uVar44;
          lVar28 = (long)local_200 + uVar40 + uVar50 + (ulong)*(uint *)pppppplVar55;
          do {
            ppppppplVar52 = (long *******)&DAT_cbf29ce484222645;
            uVar49 = *puVar29;
            puVar19 = (uint *)((long)puVar29 + (ulong)uVar49);
            ppppplVar38 = (long *****)(puVar19 + 1);
            uVar27 = *puVar19;
            ppppplVar47 = (long *****)(ulong)uVar27;
            if (uVar27 == 0) {
              ppppplVar47 = (long *****)strlen((char *)ppppplVar38);
            }
            ppppppplVar37 = local_1e0;
            bVar5 = *(byte *)ppppplVar38;
            if (bVar5 != 0) {
              pbVar23 = (byte *)(lVar28 + (ulong)uVar49);
              do {
                ppppppplVar52 =
                     (long *******)(((ulong)ppppppplVar52 ^ (ulong)bVar5) * 0x100000001b3);
                bVar5 = *pbVar23;
                pbVar23 = pbVar23 + 1;
              } while (bVar5 != 0);
            }
            if (local_1e0 == (long *******)0x0) {
LAB_0114823c:
              pppppplVar55 = (long ******)(*(code *)(*local_1b0)[2])(local_1b0,0x30,8);
              if (pppppplVar55 == (long ******)0x0) {
                (*(code *)(*local_1b0)[0x1d])();
              }
              ppppppplVar33 = local_1b0;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar18 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar18 != 0) {
                if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_01148ae8:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(long ********)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = ppppppplVar33;
                *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
              }
              pppppplVar55[2] = (long *****)ppppppplVar52;
              pppppplVar55[3] = ppppplVar38;
              pppppplVar55[4] = ppppplVar47;
              pppppplVar55[5] = (long *****)0x0;
              if (lVar18 != 0) {
                *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
              }
              *pppppplVar55 = (long *****)0x0;
              pppppplVar55[1] = (long *****)ppppppplVar52;
              if (ppppppplVar37 == (long *******)0x0) {
LAB_01148360:
                uVar50 = (ulong)(ppppppplVar37 < (long *******)0x3 ||
                                ((ulong)ppppppplVar37 & (long)ppppppplVar37 - 1U) != 0) |
                         (long)ppppppplVar37 << 1;
                uVar40 = (ulong)((float)((long)local_190 + 1) / local_188._0_4_);
                if (uVar40 <= uVar50) {
                  uVar40 = uVar50;
                }
                FUN_00db35b8(&local_1e8,uVar40);
                ppppppplVar37 = local_1e0;
                if (((ulong)local_1e0 & (long)local_1e0 - 1U) == 0) {
                  ppppppplVar32 = (long *******)((long)local_1e0 - 1U & (ulong)ppppppplVar52);
                }
                else if (ppppppplVar52 < local_1e0) {
                  ppppppplVar32 = ppppppplVar52;
                }
                else {
                  uVar50 = 0;
                  if (local_1e0 != (long *******)0x0) {
                    uVar50 = (ulong)ppppppplVar52 / (ulong)local_1e0;
                  }
                  ppppppplVar32 = (long *******)((long)ppppppplVar52 - uVar50 * (long)local_1e0);
                }
              }
              else if (local_188._0_4_ * (float)ppppppplVar37 < (float)((long)local_190 + 1))
              goto LAB_01148360;
              ppppppplVar52 = (long *******)local_1e8[(long)ppppppplVar32];
              if (ppppppplVar52 == (long *******)0x0) {
                *pppppplVar55 = (long *****)local_1b8;
                local_1e8[(long)ppppppplVar32] = (long ******)local_208;
                local_1b8 = (long *******)pppppplVar55;
                if (*pppppplVar55 != (long *****)0x0) {
                  ppppppplVar52 = (long *******)(*pppppplVar55)[1];
                  if (((ulong)ppppppplVar37 & (long)ppppppplVar37 - 1U) == 0) {
                    ppppppplVar52 = (long *******)((ulong)ppppppplVar52 & (long)ppppppplVar37 - 1U);
                  }
                  else if (ppppppplVar37 <= ppppppplVar52) {
                    uVar50 = 0;
                    if (ppppppplVar37 != (long *******)0x0) {
                      uVar50 = (ulong)ppppppplVar52 / (ulong)ppppppplVar37;
                    }
                    ppppppplVar52 =
                         (long *******)((long)ppppppplVar52 - uVar50 * (long)ppppppplVar37);
                  }
                  ppppppplVar52 = local_1e8 + (long)ppppppplVar52;
                  goto LAB_011482f0;
                }
              }
              else {
                *pppppplVar55 = (long *****)*ppppppplVar52;
LAB_011482f0:
                *ppppppplVar52 = pppppplVar55;
              }
              local_190 = (long *******)((long)local_190 + 1);
            }
            else {
              uVar50 = (long)local_1e0 - 1;
              if (((ulong)local_1e0 & uVar50) == 0) {
                ppppppplVar32 = (long *******)(uVar50 & (ulong)ppppppplVar52);
                pppppplVar55 = local_1e8[(long)ppppppplVar32];
                if (pppppplVar55 == (long ******)0x0) goto LAB_0114823c;
                do {
                  pppppplVar55 = (long ******)*pppppplVar55;
                  if ((pppppplVar55 == (long ******)0x0) ||
                     ((long *******)pppppplVar55[1] != ppppppplVar52 &&
                      (long *******)((ulong)pppppplVar55[1] & uVar50) != ppppppplVar32))
                  goto LAB_0114823c;
                } while ((long *******)pppppplVar55[2] != ppppppplVar52);
              }
              else {
                ppppppplVar32 = ppppppplVar52;
                if (local_1e0 <= ppppppplVar52) {
                  uVar50 = 0;
                  if (local_1e0 != (long *******)0x0) {
                    uVar50 = (ulong)ppppppplVar52 / (ulong)local_1e0;
                  }
                  ppppppplVar32 = (long *******)((long)ppppppplVar52 - uVar50 * (long)local_1e0);
                }
                pppppplVar55 = local_1e8[(long)ppppppplVar32];
                if (pppppplVar55 == (long ******)0x0) goto LAB_0114823c;
                do {
                  pppppplVar55 = (long ******)*pppppplVar55;
                  if (pppppplVar55 == (long ******)0x0) goto LAB_0114823c;
                  ppppppplVar33 = (long *******)pppppplVar55[1];
                  if (ppppppplVar33 != ppppppplVar52) {
                    if (local_1e0 <= ppppppplVar33) {
                      uVar50 = 0;
                      if (local_1e0 != (long *******)0x0) {
                        uVar50 = (ulong)ppppppplVar33 / (ulong)local_1e0;
                      }
                      ppppppplVar33 = (long *******)((long)ppppppplVar33 - uVar50 * (long)local_1e0)
                      ;
                    }
                    if (ppppppplVar33 != ppppppplVar32) goto LAB_0114823c;
                  }
                } while ((long *******)pppppplVar55[2] != ppppppplVar52);
              }
            }
            puVar29 = puVar29 + 1;
            lVar28 = lVar28 + 4;
          } while (puVar29 != local_1f8);
        }
        local_200 = (long *******)((long)local_200 + 4);
        pppppplVar55 = (long ******)((long)local_210 + 4);
      } while (pppppplVar55 != local_218);
    }
  }
  if (local_284 < 1) {
LAB_01148604:
    FUN_00f60478(&local_1e8);
    ppppppplVar52 = local_238;
    ppppppplVar32 = local_250;
    local_180 = 0;
    local_190 = (long *******)0x0;
    local_188 = (long *)0x0;
    local_1a0 = (long *******)0x0;
    local_198 = (long *)0x0;
    local_1d8 = (long *******)local_298;
    local_1d0 = (long ******)local_2a0;
    local_1e8 = (long *******)local_258;
    local_1e0 = (long *******)local_248;
    local_1c8 = (long *******)local_230;
    local_1c0 = local_228;
    local_1b8 = local_268;
    local_1b0 = (long *******)local_260;
    local_1a8 = local_240;
    if (local_238 == (long *******)0x0) {
      uVar8 = (undefined2)local_220;
      local_1a0 = (long *******)0x0;
    }
    else {
      (*(code *)(*local_238)[3])(local_238);
      ppppppplVar37 = local_1a0;
      local_1a0 = ppppppplVar52;
      uVar8 = (undefined2)local_220;
      if (ppppppplVar37 != (long *******)0x0) {
        (**(code **)((long)*ppppppplVar37 + 0x20))();
      }
    }
    local_198 = &local_f8;
    local_190 = (long *******)&local_138;
    local_188 = &local_178;
    local_180 = uVar8;
    FUN_011493c0(local_290,ppppppplVar32,&local_1e8);
    if (local_1a0 != (long *******)0x0) {
      (*(code *)(*local_1a0)[4])();
    }
    ppppppplVar32 = ppppppplStack_160;
    lVar28 = local_178;
    if (local_178 != 0) {
      local_170 = local_178;
      lVar18 = local_168 - local_178;
      uVar50 = (*(code *)(*ppppppplStack_160)[0x1f])(ppppppplStack_160);
      if (((uVar50 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
        (*(code *)(*ppppppplVar32)[3])(ppppppplVar32,lVar28,lVar18,4);
      }
      else {
        FUN_00c48fe8(ppppppplVar32,lVar28,lVar18,4);
      }
    }
    ppppppplVar37 = local_120;
    ppppppplVar32 = local_138;
    if (local_138 != (long *******)0x0) {
      local_130 = local_138;
      lVar28 = local_128 - (long)local_138;
      uVar50 = (*(code *)(*local_120)[0x1f])(local_120);
      if (((uVar50 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
        (*(code *)(*ppppppplVar37)[3])(ppppppplVar37,ppppppplVar32,lVar28,4);
      }
      else {
        FUN_00c48fe8(ppppppplVar37,ppppppplVar32,lVar28,4);
      }
    }
    lVar28 = local_f8;
    ppppppplVar32 = local_e8;
    ppppppplVar37 = local_c8;
    if (ppppppplVar52 != (long *******)0x0) {
      (*(code *)(*ppppppplVar52)[4])(ppppppplVar52);
      lVar28 = local_f8;
      ppppppplVar32 = local_e8;
      ppppppplVar37 = local_c8;
    }
    while (local_e8 = ppppppplVar32, ppppppplVar37 != (long *******)0x0) {
      pppppplVar55 = ppppppplVar37[3];
      ppppppplVar37[3] = (long ******)0x0;
      ppppppplVar52 = (long *******)*ppppppplVar37;
      local_f8 = lVar28;
      if (pppppplVar55 != (long ******)0x0) {
        FUN_01148c54(ppppppplVar37 + 4);
      }
      ppppppplVar32 = local_c0;
      uVar50 = (*(code *)(*local_c0)[0x1f])(local_c0);
      if (((uVar50 & 1) == 0) || (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1)) {
        (*(code *)(*ppppppplVar32)[3])(ppppppplVar32,ppppppplVar37,0x38,8);
        lVar28 = local_f8;
        ppppppplVar32 = local_e8;
        ppppppplVar37 = ppppppplVar52;
      }
      else {
        FUN_00c48fe8(ppppppplVar32,ppppppplVar37,0x38,8);
        lVar28 = local_f8;
        ppppppplVar32 = local_e8;
        ppppppplVar37 = ppppppplVar52;
      }
    }
    local_f8 = 0;
    if (lVar28 != 0) {
      lVar18 = (long)local_f0 << 3;
      uVar50 = (*(code *)(*ppppppplVar32)[0x1f])(ppppppplVar32);
      if (((uVar50 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
        (*(code *)(*ppppppplVar32)[3])(ppppppplVar32,lVar28,lVar18,8);
      }
      else {
        FUN_00c48fe8(ppppppplVar32,lVar28,lVar18,8);
      }
    }
    return;
  }
  uVar27 = (uint)local_280;
  uVar49 = 0;
  sVar9 = (short)local_220;
  lVar28 = local_1f0;
LAB_01148434:
  uVar53 = 1 << (ulong)(uVar49 & 0x1f);
  if ((sVar9 < (short)uVar49) &&
     ((*(uint *)((long)local_138 + ((ulong)(long)(short)uVar49 >> 3 & 0x1ffffffffffffffc)) & uVar53)
      != 0)) {
    FUN_00e1561c(&local_90,lVar28,uVar49);
    ppppppplVar32 = local_90;
    if ((local_90 != (long *******)0x71049961b0194c50) &&
       (pcVar14 = strstr(local_88,"_attach_off"), pcVar14 == (char *)0x0)) {
      if (local_1e0 == (long *******)0x0) {
LAB_01148530:
        ppppplVar38 = (long *****)0x0;
      }
      else {
        uVar50 = (long)local_1e0 - ((ulong)local_1e0 >> 1 & 0x5555555555555555);
        uVar50 = (uVar50 & 0x3333333333333333) + (uVar50 >> 2 & 0x3333333333333333);
        uVar50 = (uVar50 + (uVar50 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar50 < 2) {
          ppppppplVar52 = (long *******)((long)local_1e0 - 1U & (ulong)ppppppplVar32);
        }
        else if (ppppppplVar32 < local_1e0) {
          ppppppplVar52 = ppppppplVar32;
        }
        else {
          uVar40 = 0;
          if (local_1e0 != (long *******)0x0) {
            uVar40 = (ulong)ppppppplVar32 / (ulong)local_1e0;
          }
          ppppppplVar52 = (long *******)((long)ppppppplVar32 - uVar40 * (long)local_1e0);
        }
        if ((local_1e8[(long)ppppppplVar52] == (long ******)0x0) ||
           (ppppplVar47 = *local_1e8[(long)ppppppplVar52], ppppplVar47 == (long *****)0x0))
        goto LAB_01148530;
        if (1 < uVar50) {
          do {
            ppppppplVar37 = (long *******)ppppplVar47[1];
            if (ppppppplVar37 == ppppppplVar32) {
              if ((long *******)ppppplVar47[2] == ppppppplVar32) goto LAB_011485a0;
            }
            else {
              if (local_1e0 <= ppppppplVar37) {
                uVar50 = 0;
                if (local_1e0 != (long *******)0x0) {
                  uVar50 = (ulong)ppppppplVar37 / (ulong)local_1e0;
                }
                ppppppplVar37 = (long *******)((long)ppppppplVar37 - uVar50 * (long)local_1e0);
              }
              if (ppppppplVar37 != ppppppplVar52) break;
            }
            ppppplVar47 = (long *****)*ppppplVar47;
          } while (ppppplVar47 != (long *****)0x0);
          goto LAB_01148530;
        }
        do {
          if ((long *******)ppppplVar47[1] == ppppppplVar32) {
            if ((long *******)ppppplVar47[2] == ppppppplVar32) goto LAB_011485a0;
          }
          else if ((long *******)((ulong)ppppplVar47[1] & (long)local_1e0 - 1U) != ppppppplVar52)
          goto LAB_01148530;
          ppppplVar47 = (long *****)*ppppplVar47;
          ppppplVar38 = (long *****)0x0;
        } while (ppppplVar47 != (long *****)0x0);
      }
      goto LAB_011485a4;
    }
    bVar7 = false;
    goto LAB_011485ac;
  }
  puVar29 = (uint *)(local_178 + (ulong)(uVar49 >> 5) * 4);
  goto LAB_011485d4;
LAB_0114664c:
  if (-1 < (short)plVar43[6]) {
    sVar9 = *(short *)((long)plVar35 + 10) + (short)plVar43[6];
    goto LAB_01146664;
  }
LAB_01146654:
  plVar35 = plVar35 + 2;
  if (plVar35 == *(long **)(local_1f0 + 0x38)) goto LAB_01146660;
  goto LAB_01146558;
LAB_01146b6c:
  if (-1 < (short)plVar46[6]) {
    sVar9 = *(short *)((long)plVar21 + 10) + (short)plVar46[6];
    goto LAB_01146b84;
  }
LAB_01146b74:
  plVar21 = plVar21 + 2;
  if (plVar21 == plVar43) goto LAB_01146b80;
  goto LAB_01146a78;
LAB_01146d94:
  if (-1 < (short)plVar46[6]) {
    sVar9 = *(short *)((long)plVar21 + 10) + (short)plVar46[6];
    goto LAB_01146dac;
  }
LAB_01146d9c:
  plVar21 = plVar21 + 2;
  if (plVar21 == plVar43) goto LAB_01146da8;
  goto LAB_01146ca0;
LAB_01147298:
  if (-1 < (short)plVar43[6]) {
    sVar39 = *(short *)((long)plVar35 + 10) + (short)plVar43[6];
    goto LAB_011472ac;
  }
LAB_011472a0:
  plVar35 = plVar35 + 2;
  goto LAB_0114719c;
LAB_01147b90:
  if (-1 < (short)plVar43[6]) {
    sVar9 = *(short *)((long)plVar35 + 10) + (short)plVar43[6];
    goto LAB_01147ba4;
  }
LAB_01147b98:
  plVar35 = plVar35 + 2;
  goto LAB_01147a94;
LAB_011485a0:
  ppppplVar38 = ppppplVar47;
LAB_011485a4:
  bVar7 = ppppplVar38 == (long *****)0x0;
LAB_011485ac:
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  puVar29 = (uint *)(local_178 + (ulong)(uVar49 >> 5) * 4);
  lVar28 = local_1f0;
  if (bVar7) {
    uVar53 = *puVar29 | uVar53;
  }
  else {
LAB_011485d4:
    uVar53 = *puVar29 & (uVar53 ^ 0xffffffff);
  }
  uVar49 = uVar49 + 1;
  *puVar29 = uVar53;
  if ((uVar27 & 0xffff) <= uVar49) goto LAB_01148604;
  goto LAB_01148434;
}


