/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0135e6c4; name: FUN_0135e6c4
 */


void FUN_0135e6c4(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  ulong uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  uint uVar13;
  long lVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ushort *puVar21;
  uint uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  long lVar25;
  long *plVar26;
  undefined1 *puVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  byte *__s;
  long *plVar31;
  size_t local_d0;
  undefined1 *local_c8;
  undefined4 local_c0 [2];
  int *local_b8;
  int *local_b0;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *plStack_68;
  
  lVar14 = *(long *)(param_1 + 0x78);
  if (lVar14 == *(long *)(param_1 + 0x80)) {
    *(undefined1 *)(param_1 + 0x72) = 1;
  }
  else {
    do {
      if ((*(long *)(lVar14 + 8) != 0) && ((*(byte *)(*(long *)(lVar14 + 8) + 0x1e8) & 1) == 0)) {
        return;
      }
      lVar14 = lVar14 + 0x40;
    } while (*(long *)(param_1 + 0x80) != lVar14);
    lVar14 = *(long *)(param_1 + 0x78);
    lVar3 = *(long *)(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0x72) = 1;
    if (lVar14 != lVar3) {
      do {
        if (*(long **)(lVar14 + 8) != (long *)0x0) {
          puVar10 = (uint *)(**(code **)(**(long **)(lVar14 + 8) + 0x70))();
          piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
             (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar17 == 0)) {
            puVar10 = (uint *)0x0;
          }
          else {
            puVar10 = (uint *)((long)piVar1 + uVar17);
            puVar10 = (uint *)((long)puVar10 + (ulong)*puVar10);
          }
          puVar11 = (uint *)(**(code **)(**(long **)(lVar14 + 8) + 0x70))();
          piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
             (uVar17 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar17 == 0)) {
            lVar30 = 0;
          }
          else {
            puVar11 = (uint *)((long)piVar1 + uVar17);
            lVar30 = (long)puVar11 + (ulong)*puVar11;
          }
          if (*(long *)(lVar14 + 8) == 0) {
            plVar31 = (long *)FUN_00da5204();
          }
          else {
            plVar31 = (long *)(*(long *)(lVar14 + 8) + 0x40);
          }
          puVar2 = (undefined8 *)PTR_PTR_047d4508;
          if (*plVar31 != 0) {
            puVar2 = (undefined8 *)(*plVar31 + 0x38);
          }
          pcVar12 = strrchr((char *)*puVar2,0x2f);
          if (pcVar12 == (char *)0x0) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            local_d0 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
            local_c8 = *(undefined1 **)PTR_DAT_047d3e30;
            __s = *(byte **)(PTR_DAT_047d3e30 + 8);
            plVar31 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (plVar31 != (long *)0x0) {
              (**(code **)(*plVar31 + 0x18))(plVar31);
            }
          }
          else {
            __s = (byte *)(pcVar12 + 1);
            local_d0 = strlen((char *)__s);
            bVar5 = *__s;
            if (bVar5 == 0) {
              local_c8 = &DAT_cbf29ce484222645;
            }
            else {
              local_c8 = &DAT_cbf29ce484222645;
              pbVar16 = (byte *)(pcVar12 + 2);
              do {
                local_c8 = (undefined1 *)(((ulong)local_c8 ^ (ulong)bVar5) * 0x100000001b3);
                bVar5 = *pbVar16;
                pbVar16 = pbVar16 + 1;
              } while (bVar5 != 0);
            }
            plVar31 = (long *)0x0;
          }
          if (*puVar10 != 0) {
            uVar17 = 0;
LAB_0135e85c:
            cVar6 = *(char *)(lVar30 + 4 + uVar17);
            if (cVar6 == '\x06') {
              piVar1 = (int *)((long)(puVar10 + uVar17 + 1) + (ulong)puVar10[uVar17 + 1]);
              lVar18 = (long)*piVar1;
              uVar7 = *(ushort *)((long)piVar1 - lVar18);
              if (uVar7 < 5) {
                local_b8 = (int *)0x0;
              }
              else {
                uVar20 = (ulong)((ushort *)((long)piVar1 - lVar18))[2];
                local_b8 = (int *)0x0;
                if (uVar20 != 0) {
                  puVar11 = (uint *)((long)piVar1 + uVar20);
                  local_b8 = (int *)((long)puVar11 + (ulong)*puVar11);
                }
              }
              local_c0[0] = 5;
              local_a0 = 0;
              local_98 = 0;
              local_90 = 0;
              local_88 = 0xbf800000;
              if ((*(ushort *)((long)local_b8 - (long)*local_b8) < 0xd) ||
                 (uVar20 = (ulong)((ushort *)((long)local_b8 - (long)*local_b8))[6], uVar20 == 0)) {
                local_84 = false;
              }
              else {
                local_84 = *(char *)((long)local_b8 + uVar20) != '\0';
              }
              local_80 = local_c8;
              local_70 = local_d0;
              pbStack_78 = __s;
              plStack_68 = plVar31;
              if (plVar31 != (long *)0x0) {
                (**(code **)(*plVar31 + 0x18))(plVar31);
                lVar18 = (long)*piVar1;
                uVar7 = *(ushort *)((long)piVar1 - lVar18);
              }
              local_a0 = local_a0 & 0xffff000000000000;
              if ((uVar7 < 7) ||
                 (uVar20 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar18)), uVar20 == 0)) {
                lVar18 = 0;
              }
              else {
                puVar11 = (uint *)((long)piVar1 + uVar20);
                lVar18 = (long)puVar11 + (ulong)*puVar11;
              }
              bVar5 = *(byte *)(lVar18 + 4);
              puVar15 = &DAT_cbf29ce484222645;
              if (bVar5 != 0) {
                puVar15 = &DAT_cbf29ce484222645;
                pbVar16 = (byte *)(lVar18 + 5);
                do {
                  puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar16;
                  pbVar16 = pbVar16 + 1;
                } while (bVar5 != 0);
              }
              plVar28 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
LAB_0135e978:
              local_b0 = piVar1;
              if (plVar28 != *(long **)(*(long *)(param_1 + 0x68) + 0x38)) {
                puVar23 = *(undefined1 **)(*plVar28 + 0x40);
                if (puVar23 != (undefined1 *)0x0) {
                  uVar20 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
                  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
                  uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar20 < 2) {
                    puVar24 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar15);
                  }
                  else {
                    puVar24 = puVar15;
                    if (puVar23 <= puVar15) {
                      uVar8 = 0;
                      if (puVar23 != (undefined1 *)0x0) {
                        uVar8 = (ulong)puVar15 / (ulong)puVar23;
                      }
                      puVar24 = puVar15 + -(uVar8 * (long)puVar23);
                    }
                  }
                  plVar26 = *(long **)(*(long *)(*plVar28 + 0x38) + (long)puVar24 * 8);
                  if ((plVar26 != (long *)0x0) &&
                     (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
                    if (uVar20 < 2) {
                      do {
                        if ((undefined1 *)plVar26[1] == puVar15) {
                          if ((undefined1 *)plVar26[2] == puVar15) goto LAB_0135ea74;
                        }
                        else if ((undefined1 *)((ulong)plVar26[1] & (ulong)(puVar23 + -1)) !=
                                 puVar24) break;
                        plVar26 = (long *)*plVar26;
                      } while (plVar26 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar27 = (undefined1 *)plVar26[1];
                        if (puVar27 == puVar15) {
                          if ((undefined1 *)plVar26[2] == puVar15) goto LAB_0135ea74;
                        }
                        else {
                          if (puVar23 <= puVar27) {
                            uVar20 = 0;
                            if (puVar23 != (undefined1 *)0x0) {
                              uVar20 = (ulong)puVar27 / (ulong)puVar23;
                            }
                            puVar27 = puVar27 + -(uVar20 * (long)puVar23);
                          }
                          if (puVar27 != puVar24) break;
                        }
                        plVar26 = (long *)*plVar26;
                      } while (plVar26 != (long *)0x0);
                    }
                  }
                }
                goto LAB_0135ea7c;
              }
              goto LAB_0135ea84;
            }
            switch(cVar6) {
            case '\x01':
              piVar1 = (int *)((long)(puVar10 + uVar17 + 1) + (ulong)puVar10[uVar17 + 1]);
              lVar18 = (long)*piVar1;
              uVar7 = *(ushort *)((long)piVar1 - lVar18);
              if (uVar7 < 5) {
                local_b8 = (int *)0x0;
              }
              else {
                uVar20 = (ulong)((ushort *)((long)piVar1 - lVar18))[2];
                local_b8 = (int *)0x0;
                if (uVar20 != 0) {
                  puVar11 = (uint *)((long)piVar1 + uVar20);
                  local_b8 = (int *)((long)puVar11 + (ulong)*puVar11);
                }
              }
              local_c0[0] = 0;
              local_90 = 0;
              local_88 = 0xbf800000;
              local_a0 = 0;
              local_98 = 0;
              if ((*(ushort *)((long)local_b8 - (long)*local_b8) < 0xd) ||
                 (uVar20 = (ulong)((ushort *)((long)local_b8 - (long)*local_b8))[6], uVar20 == 0)) {
                local_84 = false;
              }
              else {
                local_84 = *(char *)((long)local_b8 + uVar20) != '\0';
              }
              local_80 = local_c8;
              local_70 = local_d0;
              pbStack_78 = __s;
              plStack_68 = plVar31;
              if (plVar31 != (long *)0x0) {
                (**(code **)(*plVar31 + 0x18))(plVar31);
                lVar18 = (long)*piVar1;
                uVar7 = *(ushort *)((long)piVar1 - lVar18);
              }
              if ((uVar7 < 7) ||
                 (uVar20 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar18)), uVar20 == 0)) {
                lVar18 = 0;
              }
              else {
                puVar11 = (uint *)((long)piVar1 + uVar20);
                lVar18 = (long)puVar11 + (ulong)*puVar11;
              }
              bVar5 = *(byte *)(lVar18 + 4);
              puVar15 = &DAT_cbf29ce484222645;
              if (bVar5 != 0) {
                puVar15 = &DAT_cbf29ce484222645;
                pbVar16 = (byte *)(lVar18 + 5);
                do {
                  puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar16;
                  pbVar16 = pbVar16 + 1;
                } while (bVar5 != 0);
              }
              plVar28 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
LAB_0135f2a8:
              local_b0 = piVar1;
              if (plVar28 != *(long **)(*(long *)(param_1 + 0x68) + 0x38)) {
                puVar23 = *(undefined1 **)(*plVar28 + 0x40);
                if (puVar23 != (undefined1 *)0x0) {
                  uVar20 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
                  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
                  uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar20 < 2) {
                    puVar24 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar15);
                  }
                  else {
                    puVar24 = puVar15;
                    if (puVar23 <= puVar15) {
                      uVar8 = 0;
                      if (puVar23 != (undefined1 *)0x0) {
                        uVar8 = (ulong)puVar15 / (ulong)puVar23;
                      }
                      puVar24 = puVar15 + -(uVar8 * (long)puVar23);
                    }
                  }
                  plVar26 = *(long **)(*(long *)(*plVar28 + 0x38) + (long)puVar24 * 8);
                  if ((plVar26 != (long *)0x0) &&
                     (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
                    if (uVar20 < 2) {
                      do {
                        if ((undefined1 *)plVar26[1] == puVar15) {
                          if ((undefined1 *)plVar26[2] == puVar15) goto LAB_0135f3a4;
                        }
                        else if ((undefined1 *)((ulong)plVar26[1] & (ulong)(puVar23 + -1)) !=
                                 puVar24) break;
                        plVar26 = (long *)*plVar26;
                      } while (plVar26 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar27 = (undefined1 *)plVar26[1];
                        if (puVar27 == puVar15) {
                          if ((undefined1 *)plVar26[2] == puVar15) goto LAB_0135f3a4;
                        }
                        else {
                          if (puVar23 <= puVar27) {
                            uVar20 = 0;
                            if (puVar23 != (undefined1 *)0x0) {
                              uVar20 = (ulong)puVar27 / (ulong)puVar23;
                            }
                            puVar27 = puVar27 + -(uVar20 * (long)puVar23);
                          }
                          if (puVar27 != puVar24) break;
                        }
                        plVar26 = (long *)*plVar26;
                      } while (plVar26 != (long *)0x0);
                    }
                  }
                }
                goto LAB_0135f3ac;
              }
LAB_0135ea84:
              local_a8 = 0xffff;
              break;
            case '\x02':
              piVar1 = (int *)((long)(puVar10 + uVar17 + 1) + (ulong)puVar10[uVar17 + 1]);
              lVar18 = (long)*piVar1;
              uVar7 = *(ushort *)((long)piVar1 - lVar18);
              if (uVar7 < 5) {
                local_b8 = (int *)0x0;
              }
              else {
                uVar20 = (ulong)((ushort *)((long)piVar1 - lVar18))[2];
                local_b8 = (int *)0x0;
                if (uVar20 != 0) {
                  puVar11 = (uint *)((long)piVar1 + uVar20);
                  local_b8 = (int *)((long)puVar11 + (ulong)*puVar11);
                }
              }
              local_c0[0] = 1;
              local_90 = 0;
              local_88 = 0xbf800000;
              local_a0 = 0;
              local_98 = 0;
              if ((*(ushort *)((long)local_b8 - (long)*local_b8) < 0xd) ||
                 (uVar20 = (ulong)((ushort *)((long)local_b8 - (long)*local_b8))[6], uVar20 == 0)) {
                local_84 = false;
              }
              else {
                local_84 = *(char *)((long)local_b8 + uVar20) != '\0';
              }
              local_80 = local_c8;
              local_70 = local_d0;
              pbStack_78 = __s;
              plStack_68 = plVar31;
              if (plVar31 != (long *)0x0) {
                (**(code **)(*plVar31 + 0x18))(plVar31);
                lVar18 = (long)*piVar1;
                uVar7 = *(ushort *)((long)piVar1 - lVar18);
              }
              if ((uVar7 < 7) ||
                 (uVar20 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar18)), uVar20 == 0)) {
                lVar18 = 0;
              }
              else {
                puVar11 = (uint *)((long)piVar1 + uVar20);
                lVar18 = (long)puVar11 + (ulong)*puVar11;
              }
              bVar5 = *(byte *)(lVar18 + 4);
              puVar15 = &DAT_cbf29ce484222645;
              if (bVar5 != 0) {
                puVar15 = &DAT_cbf29ce484222645;
                pbVar16 = (byte *)(lVar18 + 5);
                do {
                  puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar16;
                  pbVar16 = pbVar16 + 1;
                } while (bVar5 != 0);
              }
              plVar28 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
LAB_0135f4b8:
              local_b0 = piVar1;
              if (plVar28 != *(long **)(*(long *)(param_1 + 0x68) + 0x38)) {
                puVar23 = *(undefined1 **)(*plVar28 + 0x40);
                if (puVar23 != (undefined1 *)0x0) {
                  uVar20 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
                  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
                  uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar20 < 2) {
                    puVar24 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar15);
                  }
                  else {
                    puVar24 = puVar15;
                    if (puVar23 <= puVar15) {
                      uVar8 = 0;
                      if (puVar23 != (undefined1 *)0x0) {
                        uVar8 = (ulong)puVar15 / (ulong)puVar23;
                      }
                      puVar24 = puVar15 + -(uVar8 * (long)puVar23);
                    }
                  }
                  plVar26 = *(long **)(*(long *)(*plVar28 + 0x38) + (long)puVar24 * 8);
                  if ((plVar26 != (long *)0x0) &&
                     (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
                    if (uVar20 < 2) {
                      do {
                        if ((undefined1 *)plVar26[1] == puVar15) {
                          if ((undefined1 *)plVar26[2] == puVar15) goto LAB_0135f5b4;
                        }
                        else if ((undefined1 *)((ulong)plVar26[1] & (ulong)(puVar23 + -1)) !=
                                 puVar24) break;
                        plVar26 = (long *)*plVar26;
                      } while (plVar26 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar27 = (undefined1 *)plVar26[1];
                        if (puVar27 == puVar15) {
                          if ((undefined1 *)plVar26[2] == puVar15) goto LAB_0135f5b4;
                        }
                        else {
                          if (puVar23 <= puVar27) {
                            uVar20 = 0;
                            if (puVar23 != (undefined1 *)0x0) {
                              uVar20 = (ulong)puVar27 / (ulong)puVar23;
                            }
                            puVar27 = puVar27 + -(uVar20 * (long)puVar23);
                          }
                          if (puVar27 != puVar24) break;
                        }
                        plVar26 = (long *)*plVar26;
                      } while (plVar26 != (long *)0x0);
                    }
                  }
                }
                goto LAB_0135f5bc;
              }
              goto LAB_0135ea84;
            case '\x03':
              piVar1 = (int *)((long)(puVar10 + uVar17 + 1) + (ulong)puVar10[uVar17 + 1]);
              lVar18 = (long)*piVar1;
              uVar7 = *(ushort *)((long)piVar1 - lVar18);
              if (uVar7 < 5) {
                local_b8 = (int *)0x0;
              }
              else {
                uVar20 = (ulong)((ushort *)((long)piVar1 - lVar18))[2];
                local_b8 = (int *)0x0;
                if (uVar20 != 0) {
                  puVar11 = (uint *)((long)piVar1 + uVar20);
                  local_b8 = (int *)((long)puVar11 + (ulong)*puVar11);
                }
              }
              local_c0[0] = 2;
              local_90 = 0;
              local_88 = 0xbf800000;
              local_a0 = 0;
              local_98 = 0;
              if ((*(ushort *)((long)local_b8 - (long)*local_b8) < 0xd) ||
                 (uVar20 = (ulong)((ushort *)((long)local_b8 - (long)*local_b8))[6], uVar20 == 0)) {
                local_84 = false;
              }
              else {
                local_84 = *(char *)((long)local_b8 + uVar20) != '\0';
              }
              local_80 = local_c8;
              local_70 = local_d0;
              pbStack_78 = __s;
              plStack_68 = plVar31;
              if (plVar31 != (long *)0x0) {
                (**(code **)(*plVar31 + 0x18))(plVar31);
                lVar18 = (long)*piVar1;
                uVar7 = *(ushort *)((long)piVar1 - lVar18);
              }
              if ((uVar7 < 7) ||
                 (uVar20 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar18)), uVar20 == 0)) {
                lVar18 = 0;
              }
              else {
                puVar11 = (uint *)((long)piVar1 + uVar20);
                lVar18 = (long)puVar11 + (ulong)*puVar11;
              }
              bVar5 = *(byte *)(lVar18 + 4);
              puVar15 = &DAT_cbf29ce484222645;
              if (bVar5 != 0) {
                puVar15 = &DAT_cbf29ce484222645;
                pbVar16 = (byte *)(lVar18 + 5);
                do {
                  puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar16;
                  pbVar16 = pbVar16 + 1;
                } while (bVar5 != 0);
              }
              plVar28 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
LAB_0135f6c8:
              local_b0 = piVar1;
              if (plVar28 != *(long **)(*(long *)(param_1 + 0x68) + 0x38)) {
                puVar23 = *(undefined1 **)(*plVar28 + 0x40);
                if (puVar23 != (undefined1 *)0x0) {
                  uVar20 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
                  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
                  uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar20 < 2) {
                    puVar24 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar15);
                  }
                  else {
                    puVar24 = puVar15;
                    if (puVar23 <= puVar15) {
                      uVar8 = 0;
                      if (puVar23 != (undefined1 *)0x0) {
                        uVar8 = (ulong)puVar15 / (ulong)puVar23;
                      }
                      puVar24 = puVar15 + -(uVar8 * (long)puVar23);
                    }
                  }
                  plVar26 = *(long **)(*(long *)(*plVar28 + 0x38) + (long)puVar24 * 8);
                  if ((plVar26 != (long *)0x0) &&
                     (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
                    if (uVar20 < 2) {
                      do {
                        if ((undefined1 *)plVar26[1] == puVar15) {
                          if ((undefined1 *)plVar26[2] == puVar15) goto LAB_0135f7c4;
                        }
                        else if ((undefined1 *)((ulong)plVar26[1] & (ulong)(puVar23 + -1)) !=
                                 puVar24) break;
                        plVar26 = (long *)*plVar26;
                      } while (plVar26 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar27 = (undefined1 *)plVar26[1];
                        if (puVar27 == puVar15) {
                          if ((undefined1 *)plVar26[2] == puVar15) goto LAB_0135f7c4;
                        }
                        else {
                          if (puVar23 <= puVar27) {
                            uVar20 = 0;
                            if (puVar23 != (undefined1 *)0x0) {
                              uVar20 = (ulong)puVar27 / (ulong)puVar23;
                            }
                            puVar27 = puVar27 + -(uVar20 * (long)puVar23);
                          }
                          if (puVar27 != puVar24) break;
                        }
                        plVar26 = (long *)*plVar26;
                      } while (plVar26 != (long *)0x0);
                    }
                  }
                }
                goto LAB_0135f7cc;
              }
              goto LAB_0135ea84;
            case '\x04':
              piVar1 = (int *)((long)(puVar10 + uVar17 + 1) + (ulong)puVar10[uVar17 + 1]);
              lVar18 = (long)*piVar1;
              uVar7 = *(ushort *)((long)piVar1 - lVar18);
              if (uVar7 < 5) {
                local_b8 = (int *)0x0;
              }
              else {
                uVar20 = (ulong)((ushort *)((long)piVar1 - lVar18))[2];
                local_b8 = (int *)0x0;
                if (uVar20 != 0) {
                  puVar11 = (uint *)((long)piVar1 + uVar20);
                  local_b8 = (int *)((long)puVar11 + (ulong)*puVar11);
                }
              }
              local_c0[0] = 3;
              local_90 = 0;
              local_88 = 0xbf800000;
              local_a0 = 0;
              local_98 = 0;
              if ((*(ushort *)((long)local_b8 - (long)*local_b8) < 0xd) ||
                 (uVar20 = (ulong)((ushort *)((long)local_b8 - (long)*local_b8))[6], uVar20 == 0)) {
                local_84 = false;
              }
              else {
                local_84 = *(char *)((long)local_b8 + uVar20) != '\0';
              }
              local_80 = local_c8;
              local_70 = local_d0;
              pbStack_78 = __s;
              plStack_68 = plVar31;
              if (plVar31 != (long *)0x0) {
                (**(code **)(*plVar31 + 0x18))(plVar31);
                lVar18 = (long)*piVar1;
                uVar7 = *(ushort *)((long)piVar1 - lVar18);
              }
              if ((uVar7 < 7) ||
                 (uVar20 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar18)), uVar20 == 0)) {
                lVar25 = 0;
              }
              else {
                puVar11 = (uint *)((long)piVar1 + uVar20);
                lVar25 = (long)puVar11 + (ulong)*puVar11;
              }
              bVar5 = *(byte *)(lVar25 + 4);
              puVar15 = &DAT_cbf29ce484222645;
              if (bVar5 != 0) {
                puVar15 = &DAT_cbf29ce484222645;
                pbVar16 = (byte *)(lVar25 + 5);
                do {
                  puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar16;
                  pbVar16 = pbVar16 + 1;
                } while (bVar5 != 0);
              }
              plVar26 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
              plVar4 = *(long **)(*(long *)(param_1 + 0x68) + 0x38);
              plVar28 = plVar26;
              if (plVar26 != plVar4) {
LAB_0135eb3c:
                puVar23 = *(undefined1 **)(*plVar28 + 0x40);
                if (puVar23 != (undefined1 *)0x0) {
                  uVar20 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
                  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
                  uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar20 < 2) {
                    puVar24 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar15);
                  }
                  else {
                    puVar24 = puVar15;
                    if (puVar23 <= puVar15) {
                      uVar8 = 0;
                      if (puVar23 != (undefined1 *)0x0) {
                        uVar8 = (ulong)puVar15 / (ulong)puVar23;
                      }
                      puVar24 = puVar15 + -(uVar8 * (long)puVar23);
                    }
                  }
                  plVar29 = *(long **)(*(long *)(*plVar28 + 0x38) + (long)puVar24 * 8);
                  if ((plVar29 != (long *)0x0) &&
                     (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
                    if (uVar20 < 2) {
                      do {
                        if ((undefined1 *)plVar29[1] == puVar15) {
                          if ((undefined1 *)plVar29[2] == puVar15) goto LAB_0135ec30;
                        }
                        else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar23 + -1)) !=
                                 puVar24) break;
                        plVar29 = (long *)*plVar29;
                      } while (plVar29 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar27 = (undefined1 *)plVar29[1];
                        if (puVar27 == puVar15) {
                          if ((undefined1 *)plVar29[2] == puVar15) goto LAB_0135ec30;
                        }
                        else {
                          if (puVar23 <= puVar27) {
                            uVar20 = 0;
                            if (puVar23 != (undefined1 *)0x0) {
                              uVar20 = (ulong)puVar27 / (ulong)puVar23;
                            }
                            puVar27 = puVar27 + -(uVar20 * (long)puVar23);
                          }
                          if (puVar27 != puVar24) break;
                        }
                        plVar29 = (long *)*plVar29;
                      } while (plVar29 != (long *)0x0);
                    }
                  }
                }
                goto LAB_0135ec38;
              }
LAB_0135f0f8:
              uVar19 = 0xffff;
LAB_0135efa4:
              puVar21 = (ushort *)((long)piVar1 - (long)(int)lVar18);
              local_a8 = (undefined2)uVar19;
              if ((*puVar21 < 9) || ((ulong)puVar21[4] == 0)) {
                lVar18 = 0;
              }
              else {
                puVar11 = (uint *)((long)piVar1 + (ulong)puVar21[4]);
                lVar18 = (long)puVar11 + (ulong)*puVar11;
              }
              bVar5 = *(byte *)(lVar18 + 4);
              puVar15 = &DAT_cbf29ce484222645;
              if (bVar5 != 0) {
                puVar15 = &DAT_cbf29ce484222645;
                pbVar16 = (byte *)(lVar18 + 5);
                do {
                  puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar16;
                  pbVar16 = pbVar16 + 1;
                } while (bVar5 != 0);
              }
              plVar28 = plVar26;
              if (plVar26 != plVar4) {
LAB_0135ec48:
                puVar23 = *(undefined1 **)(*plVar28 + 0x40);
                if (puVar23 != (undefined1 *)0x0) {
                  uVar20 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
                  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
                  uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar20 < 2) {
                    puVar24 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar15);
                  }
                  else {
                    puVar24 = puVar15;
                    if (puVar23 <= puVar15) {
                      uVar8 = 0;
                      if (puVar23 != (undefined1 *)0x0) {
                        uVar8 = (ulong)puVar15 / (ulong)puVar23;
                      }
                      puVar24 = puVar15 + -(uVar8 * (long)puVar23);
                    }
                  }
                  plVar29 = *(long **)(*(long *)(*plVar28 + 0x38) + (long)puVar24 * 8);
                  if ((plVar29 != (long *)0x0) &&
                     (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
                    if (uVar20 < 2) {
                      do {
                        if ((undefined1 *)plVar29[1] == puVar15) {
                          if ((undefined1 *)plVar29[2] == puVar15) goto LAB_0135ed3c;
                        }
                        else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar23 + -1)) !=
                                 puVar24) break;
                        plVar29 = (long *)*plVar29;
                      } while (plVar29 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar27 = (undefined1 *)plVar29[1];
                        if (puVar27 == puVar15) {
                          if ((undefined1 *)plVar29[2] == puVar15) goto LAB_0135ed3c;
                        }
                        else {
                          if (puVar23 <= puVar27) {
                            uVar20 = 0;
                            if (puVar23 != (undefined1 *)0x0) {
                              uVar20 = (ulong)puVar27 / (ulong)puVar23;
                            }
                            puVar27 = puVar27 + -(uVar20 * (long)puVar23);
                          }
                          if (puVar27 != puVar24) break;
                        }
                        plVar29 = (long *)*plVar29;
                      } while (plVar29 != (long *)0x0);
                    }
                  }
                }
                goto LAB_0135ed44;
              }
LAB_0135f100:
              uVar22 = 0xffff;
LAB_0135efe4:
              local_a6 = (undefined2)uVar22;
              if ((*puVar21 < 0xb) || ((ulong)puVar21[5] == 0)) {
                lVar18 = 0;
              }
              else {
                puVar11 = (uint *)((long)piVar1 + (ulong)puVar21[5]);
                lVar18 = (long)puVar11 + (ulong)*puVar11;
              }
              bVar5 = *(byte *)(lVar18 + 4);
              puVar15 = &DAT_cbf29ce484222645;
              if (bVar5 != 0) {
                puVar15 = &DAT_cbf29ce484222645;
                pbVar16 = (byte *)(lVar18 + 5);
                do {
                  puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar16;
                  pbVar16 = pbVar16 + 1;
                } while (bVar5 != 0);
              }
LAB_0135ed58:
              local_b0 = piVar1;
              if (plVar26 != plVar4) {
                puVar23 = *(undefined1 **)(*plVar26 + 0x40);
                if (puVar23 != (undefined1 *)0x0) {
                  uVar20 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
                  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
                  uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar20 < 2) {
                    puVar24 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar15);
                  }
                  else {
                    puVar24 = puVar15;
                    if (puVar23 <= puVar15) {
                      uVar8 = 0;
                      if (puVar23 != (undefined1 *)0x0) {
                        uVar8 = (ulong)puVar15 / (ulong)puVar23;
                      }
                      puVar24 = puVar15 + -(uVar8 * (long)puVar23);
                    }
                  }
                  plVar28 = *(long **)(*(long *)(*plVar26 + 0x38) + (long)puVar24 * 8);
                  if ((plVar28 != (long *)0x0) &&
                     (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
                    if (uVar20 < 2) {
                      do {
                        if ((undefined1 *)plVar28[1] == puVar15) {
                          if ((undefined1 *)plVar28[2] == puVar15) goto LAB_0135ee54;
                        }
                        else if ((undefined1 *)((ulong)plVar28[1] & (ulong)(puVar23 + -1)) !=
                                 puVar24) break;
                        plVar28 = (long *)*plVar28;
                      } while (plVar28 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar27 = (undefined1 *)plVar28[1];
                        if (puVar27 == puVar15) {
                          if ((undefined1 *)plVar28[2] == puVar15) goto LAB_0135ee54;
                        }
                        else {
                          if (puVar23 <= puVar27) {
                            uVar20 = 0;
                            if (puVar23 != (undefined1 *)0x0) {
                              uVar20 = (ulong)puVar27 / (ulong)puVar23;
                            }
                            puVar27 = puVar27 + -(uVar20 * (long)puVar23);
                          }
                          if (puVar27 != puVar24) break;
                        }
                        plVar28 = (long *)*plVar28;
                      } while (plVar28 != (long *)0x0);
                    }
                  }
                }
                goto LAB_0135ed54;
              }
              local_a4 = 0xffff;
              break;
            case '\x05':
              piVar1 = (int *)((long)(puVar10 + uVar17 + 1) + (ulong)puVar10[uVar17 + 1]);
              lVar18 = (long)*piVar1;
              uVar7 = *(ushort *)((long)piVar1 - lVar18);
              if (uVar7 < 5) {
                local_b8 = (int *)0x0;
              }
              else {
                uVar20 = (ulong)((ushort *)((long)piVar1 - lVar18))[2];
                local_b8 = (int *)0x0;
                if (uVar20 != 0) {
                  puVar11 = (uint *)((long)piVar1 + uVar20);
                  local_b8 = (int *)((long)puVar11 + (ulong)*puVar11);
                }
              }
              local_c0[0] = 4;
              local_90 = 0;
              local_88 = 0xbf800000;
              local_a0 = 0;
              local_98 = 0;
              if ((*(ushort *)((long)local_b8 - (long)*local_b8) < 0xd) ||
                 (uVar20 = (ulong)((ushort *)((long)local_b8 - (long)*local_b8))[6], uVar20 == 0)) {
                local_84 = false;
              }
              else {
                local_84 = *(char *)((long)local_b8 + uVar20) != '\0';
              }
              local_80 = local_c8;
              local_70 = local_d0;
              pbStack_78 = __s;
              plStack_68 = plVar31;
              if (plVar31 != (long *)0x0) {
                (**(code **)(*plVar31 + 0x18))(plVar31);
                lVar18 = (long)*piVar1;
                uVar7 = *(ushort *)((long)piVar1 - lVar18);
              }
              if ((uVar7 < 7) ||
                 (uVar20 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar18)), uVar20 == 0)) {
                lVar25 = 0;
              }
              else {
                puVar11 = (uint *)((long)piVar1 + uVar20);
                lVar25 = (long)puVar11 + (ulong)*puVar11;
              }
              bVar5 = *(byte *)(lVar25 + 4);
              puVar15 = &DAT_cbf29ce484222645;
              if (bVar5 != 0) {
                puVar15 = &DAT_cbf29ce484222645;
                pbVar16 = (byte *)(lVar25 + 5);
                do {
                  puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar16;
                  pbVar16 = pbVar16 + 1;
                } while (bVar5 != 0);
              }
              plVar26 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
              plVar4 = *(long **)(*(long *)(param_1 + 0x68) + 0x38);
              plVar28 = plVar26;
              if (plVar26 != plVar4) {
LAB_0135f900:
                puVar23 = *(undefined1 **)(*plVar28 + 0x40);
                if (puVar23 != (undefined1 *)0x0) {
                  uVar20 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
                  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
                  uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar20 < 2) {
                    puVar24 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar15);
                  }
                  else {
                    puVar24 = puVar15;
                    if (puVar23 <= puVar15) {
                      uVar8 = 0;
                      if (puVar23 != (undefined1 *)0x0) {
                        uVar8 = (ulong)puVar15 / (ulong)puVar23;
                      }
                      puVar24 = puVar15 + -(uVar8 * (long)puVar23);
                    }
                  }
                  plVar29 = *(long **)(*(long *)(*plVar28 + 0x38) + (long)puVar24 * 8);
                  if ((plVar29 != (long *)0x0) &&
                     (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
                    if (uVar20 < 2) {
                      do {
                        if ((undefined1 *)plVar29[1] == puVar15) {
                          if ((undefined1 *)plVar29[2] == puVar15) goto LAB_0135f9f4;
                        }
                        else if ((undefined1 *)((ulong)plVar29[1] & (ulong)(puVar23 + -1)) !=
                                 puVar24) break;
                        plVar29 = (long *)*plVar29;
                      } while (plVar29 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar27 = (undefined1 *)plVar29[1];
                        if (puVar27 == puVar15) {
                          if ((undefined1 *)plVar29[2] == puVar15) goto LAB_0135f9f4;
                        }
                        else {
                          if (puVar23 <= puVar27) {
                            uVar20 = 0;
                            if (puVar23 != (undefined1 *)0x0) {
                              uVar20 = (ulong)puVar27 / (ulong)puVar23;
                            }
                            puVar27 = puVar27 + -(uVar20 * (long)puVar23);
                          }
                          if (puVar27 != puVar24) break;
                        }
                        plVar29 = (long *)*plVar29;
                      } while (plVar29 != (long *)0x0);
                    }
                  }
                }
                goto LAB_0135f9fc;
              }
LAB_0135fa08:
              uVar22 = 0xffff;
LAB_0135fa0c:
              puVar21 = (ushort *)((long)piVar1 - (long)(int)lVar18);
              local_a8 = (undefined2)uVar22;
              if ((*puVar21 < 9) || (uVar20 = (ulong)puVar21[4], uVar20 == 0)) {
                lVar18 = 0;
              }
              else {
                puVar11 = (uint *)((long)piVar1 + uVar20);
                lVar18 = (long)puVar11 + (ulong)*puVar11;
              }
              bVar5 = *(byte *)(lVar18 + 4);
              puVar15 = &DAT_cbf29ce484222645;
              if (bVar5 != 0) {
                puVar15 = &DAT_cbf29ce484222645;
                pbVar16 = (byte *)(lVar18 + 5);
                do {
                  puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar16;
                  pbVar16 = pbVar16 + 1;
                } while (bVar5 != 0);
              }
LAB_0135fa7c:
              local_b0 = piVar1;
              if (plVar26 != plVar4) {
                puVar23 = *(undefined1 **)(*plVar26 + 0x40);
                if (puVar23 != (undefined1 *)0x0) {
                  uVar20 = (long)puVar23 - ((ulong)puVar23 >> 1 & 0x5555555555555555);
                  uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
                  uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar20 < 2) {
                    puVar24 = (undefined1 *)((ulong)(puVar23 + -1) & (ulong)puVar15);
                  }
                  else {
                    puVar24 = puVar15;
                    if (puVar23 <= puVar15) {
                      uVar8 = 0;
                      if (puVar23 != (undefined1 *)0x0) {
                        uVar8 = (ulong)puVar15 / (ulong)puVar23;
                      }
                      puVar24 = puVar15 + -(uVar8 * (long)puVar23);
                    }
                  }
                  plVar28 = *(long **)(*(long *)(*plVar26 + 0x38) + (long)puVar24 * 8);
                  if ((plVar28 != (long *)0x0) &&
                     (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
                    if (uVar20 < 2) {
                      do {
                        if ((undefined1 *)plVar28[1] == puVar15) {
                          if ((undefined1 *)plVar28[2] == puVar15) goto LAB_0135fb78;
                        }
                        else if ((undefined1 *)((ulong)plVar28[1] & (ulong)(puVar23 + -1)) !=
                                 puVar24) break;
                        plVar28 = (long *)*plVar28;
                      } while (plVar28 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar27 = (undefined1 *)plVar28[1];
                        if (puVar27 == puVar15) {
                          if ((undefined1 *)plVar28[2] == puVar15) goto LAB_0135fb78;
                        }
                        else {
                          if (puVar23 <= puVar27) {
                            uVar20 = 0;
                            if (puVar23 != (undefined1 *)0x0) {
                              uVar20 = (ulong)puVar27 / (ulong)puVar23;
                            }
                            puVar27 = puVar27 + -(uVar20 * (long)puVar23);
                          }
                          if (puVar27 != puVar24) break;
                        }
                        plVar28 = (long *)*plVar28;
                      } while (plVar28 != (long *)0x0);
                    }
                  }
                }
                goto LAB_0135fa78;
              }
              local_a6 = 0xffff;
              break;
            default:
              goto switchD_0135eec4_default;
            }
            goto LAB_0135ea8c;
          }
LAB_0135ee8c:
          if (plVar31 != (long *)0x0) {
            (**(code **)(*plVar31 + 0x20))(plVar31);
          }
        }
        lVar14 = lVar14 + 0x40;
      } while (lVar14 != lVar3);
    }
  }
  return;
LAB_0135ea74:
  iVar9 = (int)(short)plVar26[6];
  if (-1 < (short)plVar26[6]) goto LAB_0135ead8;
LAB_0135ea7c:
  plVar28 = plVar28 + 2;
  goto LAB_0135e978;
LAB_0135f9f4:
  if (-1 < (short)plVar29[6]) {
    uVar22 = (uint)*(ushort *)((long)plVar28 + 10) + (int)(short)plVar29[6];
    goto LAB_0135fa0c;
  }
LAB_0135f9fc:
  plVar28 = plVar28 + 2;
  if (plVar28 == plVar4) goto LAB_0135fa08;
  goto LAB_0135f900;
LAB_0135fb78:
  if (-1 < (short)plVar28[6]) {
    uVar13 = (uint)*(ushort *)((long)plVar26 + 10) + (int)(short)plVar28[6];
    local_a6 = (undefined2)uVar13;
    goto LAB_0135f164;
  }
LAB_0135fa78:
  plVar26 = plVar26 + 2;
  goto LAB_0135fa7c;
LAB_0135ec30:
  if (-1 < (short)plVar29[6]) {
    uVar19 = (uint)*(ushort *)((long)plVar28 + 10) + (int)(short)plVar29[6];
    goto LAB_0135efa4;
  }
LAB_0135ec38:
  plVar28 = plVar28 + 2;
  if (plVar28 == plVar4) goto LAB_0135f0f8;
  goto LAB_0135eb3c;
LAB_0135ed3c:
  if (-1 < (short)plVar29[6]) {
    uVar22 = (uint)*(ushort *)((long)plVar28 + 10) + (int)(short)plVar29[6];
    goto LAB_0135efe4;
  }
LAB_0135ed44:
  plVar28 = plVar28 + 2;
  if (plVar28 == plVar4) goto LAB_0135f100;
  goto LAB_0135ec48;
LAB_0135ee54:
  if ((short)plVar28[6] < 0) {
LAB_0135ed54:
    plVar26 = plVar26 + 2;
    goto LAB_0135ed58;
  }
  uVar13 = (uint)*(ushort *)((long)plVar26 + 10) + (int)(short)plVar28[6];
  local_a4 = (undefined2)uVar13;
  if ((~uVar19 & 0xffff) == 0) goto LAB_0135ea8c;
LAB_0135f164:
  if ((~uVar22 & 0xffff) != 0) goto joined_r0x0135f178;
LAB_0135ea8c:
  local_84 = 0;
LAB_0135ea90:
  FUN_0135fd2c(param_1 + 0xb0,local_c0);
  if (plVar31 != (long *)0x0) {
    (**(code **)(*plVar31 + 0x20))(plVar31);
  }
switchD_0135eec4_default:
  uVar17 = uVar17 + 1;
  if (*puVar10 <= uVar17) goto LAB_0135ee8c;
  goto LAB_0135e85c;
LAB_0135f7c4:
  iVar9 = (int)(short)plVar26[6];
  if (-1 < iVar9) goto LAB_0135ead8;
LAB_0135f7cc:
  plVar28 = plVar28 + 2;
  goto LAB_0135f6c8;
LAB_0135f5b4:
  iVar9 = (int)(short)plVar26[6];
  if (-1 < iVar9) goto LAB_0135ead8;
LAB_0135f5bc:
  plVar28 = plVar28 + 2;
  goto LAB_0135f4b8;
LAB_0135f3a4:
  iVar9 = (int)(short)plVar26[6];
  if (-1 < iVar9) goto LAB_0135ead8;
LAB_0135f3ac:
  plVar28 = plVar28 + 2;
  goto LAB_0135f2a8;
LAB_0135ead8:
  uVar13 = (uint)*(ushort *)((long)plVar28 + 10) + iVar9;
  local_a8 = (undefined2)uVar13;
joined_r0x0135f178:
  if ((~uVar13 & 0xffff) != 0) goto LAB_0135ea90;
  goto LAB_0135ea8c;
}


