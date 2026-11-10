/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0105f008; name: FUN_0105f008
 */


void FUN_0105f008(long param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  uint *puVar3;
  short sVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  ulong uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  uint *puVar12;
  char *pcVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  int *piVar19;
  undefined1 *puVar20;
  uint *puVar21;
  ulong uVar22;
  ushort *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  byte *pbVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  long *plVar34;
  long *local_1f8;
  long local_1c8;
  long *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long *local_1a0;
  undefined4 local_198;
  undefined1 *local_180;
  byte *pbStack_178;
  size_t local_170;
  long *local_168;
  long *local_160;
  long local_158;
  long local_150;
  long local_148;
  long *local_140;
  undefined4 local_138;
  undefined8 *local_130;
  char *local_128;
  size_t local_120;
  long *local_118;
  undefined1 *local_110;
  byte *pbStack_108;
  size_t local_100;
  long *local_f8;
  long local_f0;
  long *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  byte *pbStack_c8;
  size_t local_c0;
  long *local_b8;
  undefined8 *local_b0;
  char *pcStack_a8;
  size_t local_a0;
  long *local_98;
  long *local_70 [2];
  
  uVar28 = *(ulong *)(param_1 + 0x2e0);
  if (uVar28 != 0) {
    uVar17 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar22 = param_2[4];
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar29 = uVar28 - 1 & uVar22;
    }
    else if (uVar22 < uVar28) {
      uVar29 = uVar22;
    }
    else {
      uVar29 = 0;
      if (uVar28 != 0) {
        uVar29 = uVar22 / uVar28;
      }
      uVar29 = uVar22 - uVar29 * uVar28;
    }
    plVar18 = *(long **)(*(long *)(param_1 + 0x2d8) + uVar29 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar18[1] == uVar22) {
            if (plVar18[2] == uVar22) goto LAB_0105f124;
          }
          else if ((plVar18[1] & uVar28 - 1) != uVar29) goto LAB_0105f250;
          plVar18 = (long *)*plVar18;
          local_1c8 = 0;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar18[1];
          if (uVar17 == uVar22) {
            if (plVar18[2] == uVar22) goto LAB_0105f124;
          }
          else {
            if (uVar28 <= uVar17) {
              uVar8 = 0;
              if (uVar28 != 0) {
                uVar8 = uVar17 / uVar28;
              }
              uVar17 = uVar17 - uVar8 * uVar28;
            }
            if (uVar17 != uVar29) goto LAB_0105f250;
          }
          plVar18 = (long *)*plVar18;
          local_1c8 = 0;
        } while (plVar18 != (long *)0x0);
      }
      goto LAB_0105f254;
    }
  }
  goto LAB_0105f250;
LAB_0105f124:
  uVar28 = plVar18[7];
  if (uVar28 != 0) {
    uVar17 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar22 = param_2[8];
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar29 = uVar28 - 1 & uVar22;
    }
    else if (uVar22 < uVar28) {
      uVar29 = uVar22;
    }
    else {
      uVar29 = 0;
      if (uVar28 != 0) {
        uVar29 = uVar22 / uVar28;
      }
      uVar29 = uVar22 - uVar29 * uVar28;
    }
    plVar18 = *(long **)(plVar18[6] + uVar29 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar18[1] == uVar22) {
            if (plVar18[2] == uVar22) goto LAB_0105f1c4;
          }
          else if ((plVar18[1] & uVar28 - 1) != uVar29) goto LAB_0105f250;
          plVar18 = (long *)*plVar18;
          local_1c8 = 0;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar18[1];
          if (uVar17 == uVar22) {
            if (plVar18[2] == uVar22) goto LAB_0105f1c4;
          }
          else {
            if (uVar28 <= uVar17) {
              uVar8 = 0;
              if (uVar28 != 0) {
                uVar8 = uVar17 / uVar28;
              }
              uVar17 = uVar17 - uVar8 * uVar28;
            }
            if (uVar17 != uVar29) goto LAB_0105f250;
          }
          plVar18 = (long *)*plVar18;
          local_1c8 = 0;
        } while (plVar18 != (long *)0x0);
      }
      goto LAB_0105f254;
    }
  }
  goto LAB_0105f250;
LAB_0105f1c4:
  piVar19 = (int *)plVar18[6];
  if ((0xe < *(ushort *)((long)piVar19 - (long)*piVar19)) &&
     (uVar28 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[7], uVar28 != 0)) {
    puVar12 = (uint *)((long)piVar19 + uVar28);
    local_1c8 = (long)puVar12 + (ulong)*puVar12;
    goto LAB_0105f254;
  }
LAB_0105f250:
  local_1c8 = 0;
LAB_0105f254:
  puVar12 = (uint *)(**(code **)(**(long **)(*param_2 + 8) + 0x70))();
  if (puVar12 != (uint *)0x0) {
    piVar19 = (int *)((long)puVar12 + (ulong)*puVar12);
    if ((6 < *(ushort *)((long)piVar19 - (long)*piVar19)) &&
       (uVar28 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[3], uVar28 != 0)) {
      puVar3 = (uint *)((long)piVar19 + uVar28);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      puVar12 = puVar3 + 1;
      uVar28 = (ulong)*puVar3;
      if (uVar28 != 0) {
        puVar3 = puVar12 + uVar28;
        puVar31 = (undefined8 *)PTR_PTR_047d4508;
        pbVar27 = PTR_DAT_047d3e28;
        do {
          piVar19 = (int *)((long)puVar12 + (ulong)*puVar12);
          puVar23 = (ushort *)((long)piVar19 - (long)*piVar19);
          if ((((4 < *puVar23) && ((ulong)puVar23[2] != 0)) &&
              (6 < *puVar23 && *(char *)((long)piVar19 + (ulong)puVar23[2]) == '\x02')) &&
             ((ulong)puVar23[3] != 0)) {
            puVar21 = (uint *)((long)piVar19 + (ulong)puVar23[3]);
            piVar19 = (int *)((long)puVar21 + (ulong)*puVar21);
            if (*(long *)(*param_2 + 8) == 0) {
              plVar18 = (long *)FUN_00da5204();
            }
            else {
              plVar18 = (long *)(*(long *)(*param_2 + 8) + 0x40);
            }
            puVar32 = puVar31;
            if (*plVar18 != 0) {
              puVar32 = (undefined8 *)(*plVar18 + 0x38);
            }
            pcVar13 = strrchr((char *)*puVar32,0x2f);
            if (pcVar13 == (char *)0x0) {
              if (((*pbVar27 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar27), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(pbVar27);
              }
              local_110 = *(undefined1 **)PTR_DAT_047d3e30;
              pbStack_108 = *(byte **)(PTR_DAT_047d3e30 + 8);
              local_100 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
              local_f8 = *(long **)(PTR_DAT_047d3e30 + 0x18);
              if (local_f8 != (long *)0x0) {
                (**(code **)(*local_f8 + 0x18))();
              }
            }
            else {
              pbVar27 = (byte *)(pcVar13 + 1);
              local_100 = strlen((char *)pbVar27);
              bVar6 = *pbVar27;
              local_110 = &DAT_cbf29ce484222645;
              if (bVar6 != 0) {
                local_110 = &DAT_cbf29ce484222645;
                pbVar26 = (byte *)(pcVar13 + 2);
                do {
                  local_110 = (undefined1 *)(((ulong)local_110 ^ (ulong)bVar6) * 0x100000001b3);
                  bVar6 = *pbVar26;
                  pbVar26 = pbVar26 + 1;
                } while (bVar6 != 0);
              }
              local_f8 = (long *)0x0;
              pbStack_108 = pbVar27;
            }
            if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 5) ||
               (uVar28 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[2], uVar28 == 0)) {
              lVar16 = 0;
            }
            else {
              puVar21 = (uint *)((long)piVar19 + uVar28);
              lVar16 = (long)puVar21 + (ulong)*puVar21;
            }
            local_120 = strlen((char *)(lVar16 + 4));
            bVar6 = *(byte *)(lVar16 + 4);
            puVar32 = (undefined8 *)&DAT_cbf29ce484222645;
            if (bVar6 != 0) {
              puVar32 = (undefined8 *)&DAT_cbf29ce484222645;
              pbVar27 = (byte *)(lVar16 + 5);
              do {
                puVar32 = (undefined8 *)(((ulong)puVar32 ^ (ulong)bVar6) * 0x100000001b3);
                bVar6 = *pbVar27;
                pbVar27 = pbVar27 + 1;
              } while (bVar6 != 0);
            }
            local_118 = (long *)0x0;
            local_130 = puVar32;
            local_128 = (char *)(lVar16 + 4);
            plVar18 = (long *)FUN_00da5a60(param_1 + 0x2d8,&local_110);
            puVar30 = (undefined8 *)plVar18[1];
            if (puVar30 == (undefined8 *)0x0) {
LAB_0105f4c0:
              plVar24 = (long *)(**(code **)(*(long *)plVar18[7] + 0x10))((long *)plVar18[7],0x38,8)
              ;
              if (plVar24 == (long *)0x0) {
                (**(code **)(*(long *)plVar18[7] + 0xe8))();
              }
              lVar16 = plVar18[7];
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar15 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar15 != 0) {
                if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(long *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = lVar16;
                *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
              }
              plVar24[2] = (long)local_130;
              plVar24[3] = (long)local_128;
              plVar24[4] = local_120;
              plVar24[5] = (long)local_118;
              if (local_118 != (long *)0x0) {
                (**(code **)(*local_118 + 0x18))();
              }
              plVar24[6] = (long)piVar19;
              if (lVar15 != 0) {
                *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
              }
              *plVar24 = 0;
              plVar24[1] = (long)puVar32;
              if ((puVar30 == (undefined8 *)0x0) ||
                 (*(float *)(plVar18 + 0xc) * (float)puVar30 < (float)(plVar18[0xb] + 1))) {
                uVar28 = (ulong)(puVar30 < (undefined8 *)0x3 ||
                                ((ulong)puVar30 & (ulong)((long)puVar30 + -1)) != 0) |
                         (long)puVar30 << 1;
                uVar17 = (ulong)((float)(plVar18[0xb] + 1) / *(float *)(plVar18 + 0xc));
                if (uVar17 <= uVar28) {
                  uVar17 = uVar28;
                }
                FUN_0106078c(plVar18,uVar17);
                puVar30 = (undefined8 *)plVar18[1];
                if (((ulong)puVar30 & (ulong)((long)puVar30 + -1)) == 0) {
                  puVar31 = (undefined8 *)((ulong)((long)puVar30 + -1) & (ulong)puVar32);
                }
                else if (puVar32 < puVar30) {
                  puVar31 = puVar32;
                }
                else {
                  uVar28 = 0;
                  if (puVar30 != (undefined8 *)0x0) {
                    uVar28 = (ulong)puVar32 / (ulong)puVar30;
                  }
                  puVar31 = (undefined8 *)((long)puVar32 - uVar28 * (long)puVar30);
                }
              }
              plVar34 = *(long **)(*plVar18 + (long)puVar31 * 8);
              if (plVar34 == (long *)0x0) {
                plVar34 = plVar18 + 6;
                *plVar24 = *plVar34;
                *plVar34 = (long)plVar24;
                *(long **)(*plVar18 + (long)puVar31 * 8) = plVar34;
                if (*plVar24 != 0) {
                  puVar31 = *(undefined8 **)(*plVar24 + 8);
                  if (((ulong)puVar30 & (ulong)((long)puVar30 + -1)) == 0) {
                    puVar31 = (undefined8 *)((ulong)puVar31 & (ulong)((long)puVar30 + -1));
                  }
                  else if (puVar30 <= puVar31) {
                    uVar28 = 0;
                    if (puVar30 != (undefined8 *)0x0) {
                      uVar28 = (ulong)puVar31 / (ulong)puVar30;
                    }
                    puVar31 = (undefined8 *)((long)puVar31 - uVar28 * (long)puVar30);
                  }
                  plVar34 = (long *)(*plVar18 + (long)puVar31 * 8);
                  goto LAB_0105f5d0;
                }
              }
              else {
                *plVar24 = *plVar34;
LAB_0105f5d0:
                *plVar34 = (long)plVar24;
              }
              plVar18[0xb] = plVar18[0xb] + 1;
            }
            else {
              puVar20 = (undefined1 *)((long)puVar30 + -1);
              if (((ulong)puVar30 & (ulong)puVar20) == 0) {
                puVar31 = (undefined8 *)((ulong)puVar20 & (ulong)puVar32);
                plVar24 = *(long **)(*plVar18 + (long)puVar31 * 8);
                if (plVar24 == (long *)0x0) goto LAB_0105f4c0;
                do {
                  plVar24 = (long *)*plVar24;
                  if ((plVar24 == (long *)0x0) ||
                     ((undefined8 *)plVar24[1] != puVar32 &&
                      (undefined8 *)((ulong)plVar24[1] & (ulong)puVar20) != puVar31))
                  goto LAB_0105f4c0;
                } while ((undefined8 *)plVar24[2] != puVar32);
              }
              else {
                puVar31 = puVar32;
                if (puVar30 <= puVar32) {
                  uVar28 = 0;
                  if (puVar30 != (undefined8 *)0x0) {
                    uVar28 = (ulong)puVar32 / (ulong)puVar30;
                  }
                  puVar31 = (undefined8 *)((long)puVar32 - uVar28 * (long)puVar30);
                }
                plVar24 = *(long **)(*plVar18 + (long)puVar31 * 8);
                if (plVar24 == (long *)0x0) goto LAB_0105f4c0;
                do {
                  plVar24 = (long *)*plVar24;
                  if (plVar24 == (long *)0x0) goto LAB_0105f4c0;
                  puVar25 = (undefined8 *)plVar24[1];
                  if (puVar25 != puVar32) {
                    if (puVar30 <= puVar25) {
                      uVar28 = 0;
                      if (puVar30 != (undefined8 *)0x0) {
                        uVar28 = (ulong)puVar25 / (ulong)puVar30;
                      }
                      puVar25 = (undefined8 *)((long)puVar25 - uVar28 * (long)puVar30);
                    }
                    if (puVar25 != puVar31) goto LAB_0105f4c0;
                  }
                } while ((undefined8 *)plVar24[2] != puVar32);
              }
            }
            plVar18 = (long *)FUN_00da5204();
            local_160 = (long *)*plVar18;
            if (local_160 != (long *)0x0) {
              (**(code **)(*local_160 + 0x18))();
            }
            puVar31 = (undefined8 *)PTR_PTR_047d4508;
            pbVar27 = PTR_DAT_047d3e28;
            local_158 = plVar18[1];
            local_150 = plVar18[2];
            local_148 = plVar18[3];
            local_140 = (long *)plVar18[4];
            if (local_140 != (long *)0x0) {
              (**(code **)(*local_140 + 0x18))();
            }
            local_138 = (undefined4)plVar18[5];
            piVar14 = (int *)FUN_00da5470(local_1c8,&local_130);
            if (((piVar14 == (int *)0x0) || (*(ushort *)((long)piVar14 - (long)*piVar14) < 7)) ||
               (uVar28 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar28 == 0)) {
              if (*(ushort *)((long)piVar19 - (long)*piVar19) < 7) {
                lVar16 = 0;
              }
              else {
                uVar28 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[3];
                lVar16 = 0;
                if (uVar28 != 0) {
                  puVar21 = (uint *)((long)piVar19 + uVar28);
                  goto LAB_0105f670;
                }
              }
            }
            else {
              puVar21 = (uint *)((long)piVar14 + uVar28);
LAB_0105f670:
              lVar16 = (long)puVar21 + (ulong)*puVar21;
            }
            snprintf((char *)&local_f0,0x80,"%s/%s.trabt",*(char **)(param_1 + 0x28),
                     (char *)(lVar16 + 4));
            FUN_00da52ec(&local_1c0,&local_f0);
            plVar18 = local_160;
            local_160 = (long *)0x0;
            if (plVar18 != (long *)0x0) {
              (**(code **)(*plVar18 + 0x20))();
            }
            plVar18 = local_140;
            local_160 = local_1c0;
            local_1c0 = (long *)0x0;
            local_158 = uStack_1b8;
            local_140 = (long *)0x0;
            local_150 = local_1b0;
            local_148 = uStack_1a8;
            if (plVar18 != (long *)0x0) {
              (**(code **)(*plVar18 + 0x20))();
            }
            local_140 = local_1a0;
            local_138 = local_198;
            plVar18 = puVar31;
            if (local_160 != (long *)0x0) {
              plVar18 = local_160 + 7;
            }
            pcVar13 = strrchr((char *)*plVar18,0x2f);
            if (pcVar13 == (char *)0x0) {
              if (((*pbVar27 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar27), iVar11 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(pbVar27);
              }
              local_180 = *(undefined1 **)PTR_DAT_047d3e30;
              pbStack_178 = *(byte **)(PTR_DAT_047d3e30 + 8);
              local_170 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
              local_168 = *(long **)(PTR_DAT_047d3e30 + 0x18);
              if (local_168 != (long *)0x0) {
                (**(code **)(*local_168 + 0x18))();
              }
            }
            else {
              pbVar26 = (byte *)(pcVar13 + 1);
              local_170 = strlen((char *)pbVar26);
              bVar6 = *pbVar26;
              local_180 = &DAT_cbf29ce484222645;
              if (bVar6 != 0) {
                local_180 = &DAT_cbf29ce484222645;
                pbVar27 = (byte *)(pcVar13 + 2);
                do {
                  local_180 = (undefined1 *)(((ulong)local_180 ^ (ulong)bVar6) * 0x100000001b3);
                  bVar6 = *pbVar27;
                  pbVar27 = pbVar27 + 1;
                } while (bVar6 != 0);
              }
              local_168 = (long *)0x0;
              puVar31 = (undefined8 *)PTR_PTR_047d4508;
              pbVar27 = PTR_DAT_047d3e28;
              pbStack_178 = pbVar26;
            }
            uVar33 = *(undefined8 *)(param_1 + 0x60);
            FUN_010601e8(&local_1c0,param_1,&local_160);
            FUN_01060010(&local_f0,uVar33,&local_1c0);
            local_d0 = local_110;
            pbStack_c8 = pbStack_108;
            local_c0 = local_100;
            local_b8 = local_f8;
            if (local_f8 != (long *)0x0) {
              (**(code **)(*local_f8 + 0x18))();
            }
            local_b0 = local_130;
            pcStack_a8 = local_128;
            local_a0 = local_120;
            local_98 = local_118;
            if (local_118 != (long *)0x0) {
              (**(code **)(*local_118 + 0x18))();
            }
            FUN_00db239c(&local_1c0);
            lVar16 = local_f0;
            if (((*(long *)(local_f0 + 8) == 0) ||
                ((*(byte *)(*(long *)(local_f0 + 8) + 0x1e8) & 1) == 0)) &&
               ((uVar28 = FUN_00dc5c18(local_f0,1,&local_160,0,*(undefined8 *)(param_1 + 0x60)),
                (uVar28 & 1) != 0 && (plVar18 = *(long **)(lVar16 + 0x20), plVar18 != (long *)0x0)))
               ) {
              lVar16 = plVar18[6];
              if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("m_object != nullptr","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x3d);
              }
              psVar1 = (short *)(lVar16 + 0x1a);
              do {
                sVar4 = *psVar1;
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar10) {
                  *psVar1 = sVar4 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar4 == 0) {
                uVar33 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
                *(undefined8 *)(lVar16 + 8) = uVar33;
                *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
              }
              else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x58,"Reference counter overflows.");
              }
              lVar16 = plVar18[6];
              psVar1 = (short *)(lVar16 + 0x1a);
              do {
                sVar4 = *psVar1;
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar10) {
                  *psVar1 = sVar4 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar4 == 1) {
                *(undefined8 *)(lVar16 + 0x10) = 0;
                (**(code **)(*plVar18 + 0x50))(plVar18);
              }
              else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            FUN_0106041c(param_1 + 0x1a0,&local_180,&local_f0);
            if (local_98 != (long *)0x0) {
              (**(code **)(*local_98 + 0x20))();
            }
            if (local_b8 != (long *)0x0) {
              (**(code **)(*local_b8 + 0x20))();
            }
            lVar16 = local_f0;
            local_f0 = 0;
            if (lVar16 != 0) {
              FUN_00c4e600();
              FUN_00c4e600();
              lVar15 = FUN_00c4e600();
              iVar5 = *(int *)(lVar15 + 0x12c8);
              iVar11 = iVar5 + 1;
              *(int *)(lVar15 + 0x12c8) = iVar11;
              if (*(int *)(lVar15 + 0x12cc) <= iVar5) {
                *(int *)(lVar15 + 0x12cc) = iVar11;
              }
              FUN_00db239c(lVar16);
              uVar9 = local_d8;
              uVar33 = uStack_e0;
              plVar18 = local_e8;
              uVar28 = (**(code **)(*local_e8 + 0xf8))(local_e8);
              if (((uVar28 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar18 + 0x18))(plVar18,lVar16,uVar33,uVar9);
              }
              else {
                FUN_00c48fe8(plVar18,lVar16,uVar33,uVar9);
              }
              lVar16 = FUN_00c4e600();
              iVar11 = *(int *)(lVar16 + 0x12c8) + -1;
              *(int *)(lVar16 + 0x12c8) = iVar11;
              if (iVar11 == 0) {
                plVar18 = (long *)FUN_00c4e600();
                if (plVar18[600] != 0) {
                  local_70[0] = plVar18 + plVar18[600] * 3;
                  local_1c0 = plVar18;
                  FUN_00c4ea30(&local_1c0,local_70);
                  plVar34 = (long *)*plVar18;
                  plVar24 = plVar18;
                  if (plVar18[600] != 0) {
                    plVar24 = plVar18 + plVar18[600] * 3;
                  }
                  if (plVar24 == plVar18) {
                    uVar17 = 0;
                    uVar28 = 0;
                  }
                  else {
                    (**(code **)(*(long *)*plVar18 + 0xd0))();
                    if ((long *)*plVar18 != plVar34) {
                      (**(code **)(*plVar34 + 0x100))(plVar34,plVar18,plVar18);
                      plVar34 = (long *)*plVar18;
                    }
                    plVar2 = plVar18 + 3;
                    if (plVar24 == plVar2) {
                      uVar17 = 0;
                      uVar28 = 1;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      bVar10 = (long *)*plVar2 != plVar34;
                      if (bVar10) {
                        (**(code **)(*plVar34 + 0x100))(plVar34,plVar18,plVar18 + 3);
                        plVar34 = (long *)plVar18[3];
                      }
                      uVar17 = (ulong)bVar10;
                      plVar2 = plVar18 + 6;
                      if (plVar24 == plVar2) {
                        uVar28 = 2;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar34) {
                          (**(code **)(*plVar34 + 0x100))(plVar34,plVar18 + uVar17 * 3,plVar18 + 6);
                          plVar34 = (long *)plVar18[6];
                          uVar17 = 2;
                        }
                        plVar2 = plVar18 + 9;
                        if (plVar24 == plVar2) {
                          uVar28 = 3;
                        }
                        else {
                          (**(code **)(*(long *)*plVar2 + 0xd0))();
                          if ((long *)*plVar2 != plVar34) {
                            (**(code **)(*plVar34 + 0x100))
                                      (plVar34,plVar18 + uVar17 * 3,plVar18 + 9);
                            plVar34 = (long *)plVar18[9];
                            uVar17 = 3;
                          }
                          plVar2 = plVar18 + 0xc;
                          if (plVar24 == plVar2) {
                            uVar28 = 4;
                          }
                          else {
                            (**(code **)(*(long *)*plVar2 + 0xd0))();
                            if ((long *)*plVar2 != plVar34) {
                              (**(code **)(*plVar34 + 0x100))
                                        (plVar34,plVar18 + uVar17 * 3,plVar18 + 0xc);
                              plVar34 = (long *)plVar18[0xc];
                              uVar17 = 4;
                            }
                            plVar2 = plVar18 + 0xf;
                            if (plVar24 == plVar2) {
                              uVar28 = 5;
                            }
                            else {
                              (**(code **)(*(long *)*plVar2 + 0xd0))();
                              if ((long *)*plVar2 != plVar34) {
                                (**(code **)(*plVar34 + 0x100))
                                          (plVar34,plVar18 + uVar17 * 3,plVar18 + 0xf);
                                plVar34 = (long *)plVar18[0xf];
                                uVar17 = 5;
                              }
                              local_1f8 = plVar18 + 0x12;
                              uVar28 = 6;
                              if (plVar24 != local_1f8) {
                                do {
                                  (**(code **)(*(long *)*local_1f8 + 0xd0))();
                                  if ((long *)*local_1f8 != plVar34) {
                                    (**(code **)(*plVar34 + 0x100))
                                              (plVar34,plVar18 + uVar17 * 3,local_1f8);
                                    plVar34 = (long *)*local_1f8;
                                    uVar17 = uVar28;
                                  }
                                  local_1f8 = local_1f8 + 3;
                                  uVar28 = uVar28 + 1;
                                } while (plVar24 != local_1f8);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  (**(code **)(*plVar34 + 0x100))(plVar34,plVar18 + uVar17 * 3,plVar18 + uVar28 * 3)
                  ;
                  plVar18[600] = 0;
                  puVar31 = (undefined8 *)PTR_PTR_047d4508;
                  pbVar27 = PTR_DAT_047d3e28;
                }
                *(undefined4 *)(lVar16 + 0x12cc) = 0;
              }
            }
            if (local_168 != (long *)0x0) {
              (**(code **)(*local_168 + 0x20))();
            }
            if (local_140 != (long *)0x0) {
              (**(code **)(*local_140 + 0x20))();
            }
            if (local_160 != (long *)0x0) {
              (**(code **)(*local_160 + 0x20))();
            }
            if (local_118 != (long *)0x0) {
              (**(code **)(*local_118 + 0x20))();
            }
            if (local_f8 != (long *)0x0) {
              (**(code **)(*local_f8 + 0x20))();
            }
          }
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar3);
      }
    }
  }
  return;
}


