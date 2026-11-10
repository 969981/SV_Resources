/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015b9d10; name: FUN_015b9d10
 */


void FUN_015b9d10(long param_1,ushort *param_2)

{
  long lVar1;
  ushort **ppuVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  ushort uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  ushort **ppuVar12;
  int iVar13;
  long lVar14;
  byte *__s;
  long *plVar15;
  long *plVar16;
  ushort *extraout_x1;
  ushort *extraout_x1_00;
  ushort *extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar17;
  ushort *extraout_x1_03;
  ushort *extraout_x1_04;
  ushort *extraout_x1_05;
  ushort *extraout_x1_06;
  ushort *extraout_x1_07;
  ushort *extraout_x1_08;
  ushort *extraout_x1_09;
  ushort *extraout_x1_10;
  ushort *extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  ushort *extraout_x1_14;
  undefined8 extraout_x1_15;
  ushort *extraout_x1_16;
  undefined4 uVar18;
  long lVar19;
  byte *pbVar20;
  ushort *puVar21;
  bool bVar22;
  ushort *puVar23;
  long lVar24;
  undefined8 *puVar25;
  ushort *puVar26;
  long *plVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 *local_b8;
  undefined8 uStack_b0;
  ushort **local_a8;
  undefined8 uStack_a0;
  ushort *local_98;
  byte *local_90;
  size_t local_88;
  long *local_80;
  long *local_78;
  undefined1 local_70 [4];
  ushort local_6c [2];
  long local_68;
  
  puVar11 = PTR_DAT_047d3e30;
  puVar10 = PTR_DAT_047d3e28;
  puVar21 = *(ushort **)(param_1 + 0x108);
  if (puVar21 != *(ushort **)(param_1 + 0x110)) {
    lVar1 = param_1 + 0x108;
    do {
      if ((char)puVar21[0x1c] == '\0') {
        puVar23 = puVar21 + 0x18;
        if (*(long *)puVar23 != 0) {
          auVar28 = FUN_01848ae0(*(long *)puVar23,param_2);
          param_2 = auVar28._8_8_;
          if ((auVar28._0_8_ & 1) != 0) {
            plVar16 = (long *)FUN_015bb48c(*(undefined8 *)puVar23);
            lVar14 = *plVar16;
            plVar16 = (long *)(lVar14 + 0x78);
            lVar19 = nn::os::GetCurrentThread();
LAB_015b9fcc:
            if (*plVar16 == 0) goto code_r0x015b9fd4;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x80));
            do {
              if (*plVar16 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x80));
                  while (*plVar16 == 0) {
                    cVar8 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                    if (bVar22) {
                      *plVar16 = lVar19;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                    if (cVar8 == '\0') goto LAB_015b9fdc;
                  }
                } while( true );
              }
              cVar8 = '\x01';
              bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar22) {
                *plVar16 = lVar19;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
LAB_015b9fdc:
            iVar13 = *(int *)(lVar14 + 0x68);
            cVar8 = *(char *)(lVar14 + 100);
            *(undefined8 *)(lVar14 + 0x78) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x80));
            if ((iVar13 != 0) || (cVar8 == '\0')) {
              auVar28 = FUN_015bb494(lVar1,puVar21);
              goto LAB_015b9d70;
            }
            if ((*(long *)(puVar21 + 0x10) == 0) ||
               (lVar19 = *(long *)(*(long *)(puVar21 + 0x10) + 0x10), lVar19 == 0))
            goto LAB_015ba1b4;
            local_6c[0] = *puVar21 & 3;
            local_70[0] = (undefined1)puVar21[0xc];
            local_98 = local_6c;
            local_90 = local_70;
            __s = (byte *)FUN_015bb620(&local_98);
            if (__s == (byte *)0x0) {
              if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,puVar11,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar10);
              }
              local_98 = *(ushort **)puVar11;
              local_90 = *(byte **)(puVar11 + 8);
              local_88 = *(size_t *)(puVar11 + 0x10);
              local_80 = *(long **)(puVar11 + 0x18);
              if (local_80 != (long *)0x0) {
                (**(code **)(*local_80 + 0x18))();
              }
            }
            else {
              local_88 = strlen((char *)__s);
              bVar7 = *__s;
              if (bVar7 == 0) {
                local_98 = (ushort *)&DAT_cbf29ce484222645;
              }
              else {
                local_98 = (ushort *)&DAT_cbf29ce484222645;
                pbVar20 = __s;
                do {
                  pbVar20 = pbVar20 + 1;
                  local_98 = (ushort *)(((ulong)local_98 ^ (ulong)bVar7) * 0x100000001b3);
                  bVar7 = *pbVar20;
                } while (bVar7 != 0);
              }
              local_80 = (long *)0x0;
              local_90 = __s;
            }
            FUN_010b6530(&local_78,lVar19 + -0x28,&local_98,puVar23,1,0);
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x20))();
            }
            plVar16 = local_78;
            if (local_78 == (long *)0x0) {
              auVar29 = FUN_015bb494(lVar1,puVar21);
              bVar22 = false;
            }
            else {
              plVar15 = local_78 + 0x22;
              lVar14 = *plVar15;
              lVar19 = nn::os::GetCurrentThread();
              if (lVar19 != lVar14) {
                lVar19 = nn::os::GetCurrentThread();
LAB_015ba0bc:
                if (*plVar15 == 0) goto code_r0x015ba0c4;
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(plVar16 + 0x23));
                do {
                  if (*plVar15 != 0) {
                    do {
                      ClearExclusiveLocal();
                      nn::os::WaitLightEvent((LightEventType *)(plVar16 + 0x23));
                      while (*plVar15 == 0) {
                        cVar8 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                        if (bVar22) {
                          *plVar15 = lVar19;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                        if (cVar8 == '\0') goto LAB_015ba0cc;
                      }
                    } while( true );
                  }
                  cVar8 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar22) {
                    *plVar15 = lVar19;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
LAB_015ba0cc:
                bVar22 = false;
                goto LAB_015ba0d0;
              }
              bVar22 = true;
LAB_015ba0d0:
              plVar15 = (long *)FUN_015bb500(plVar16[0x25],plVar16[0x26]);
              if (((long *)plVar16[0x26] == plVar15) || (*plVar15 == 0)) {
                plVar15 = (long *)FUN_015bb500(plVar16[0x2c],plVar16[0x2d]);
                if ((long *)plVar16[0x2d] == plVar15) {
                  lVar19 = 0;
                }
                else {
                  lVar19 = 0;
                  if (*plVar15 != 0) {
                    lVar19 = *plVar15 + -0x20;
                  }
                }
              }
              else {
                lVar19 = *plVar15 + -0x20;
              }
              if (!bVar22) {
                plVar16[0x22] = 0;
                nn::os::SignalLightEvent((LightEventType *)(plVar16 + 0x23));
              }
              if (lVar19 != 0) {
                FUN_0143cdb0(lVar19,0);
              }
              plVar15 = local_78;
              plVar27 = local_78 + 5;
              (**(code **)(*local_78 + 0x18))(&local_98,local_78);
              local_a8 = (ushort **)0x0;
              uStack_a0 = 0;
              plVar16 = (long *)0x0;
              if (plVar15 != (long *)0x0) {
                plVar16 = plVar27;
              }
              if (*(long **)(local_98 + 8) == plVar16) {
                FUN_00cbc6dc(&local_a8,&local_98);
              }
              puVar23 = local_98;
              if (local_98 != (ushort *)0x0) {
                puVar26 = local_98 + 0xc;
                do {
                  uVar6 = *puVar26;
                  cVar8 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(puVar26,0x10);
                  if (bVar22) {
                    *puVar26 = uVar6 - 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (uVar6 == 1) {
                  puVar26 = local_98 + 0xe;
                  do {
                    cVar8 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(puVar26,0x10);
                    if (bVar22) {
                      puVar26[0] = 0xffff;
                      puVar26[1] = 0xffff;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (*(int *)puVar26 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar19 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar19;
                    local_68 = *(long *)puVar23;
                    FUN_00c44438(lVar19 + 0x8040,&local_68);
                  }
                }
                else if (uVar6 == 0) goto LAB_015ba7dc;
              }
              FUN_00ca1ea4(puVar21 + 4,&local_a8);
              ppuVar12 = local_a8;
              uVar17 = extraout_x1_02;
              if (local_a8 != (ushort **)0x0) {
                ppuVar2 = local_a8 + 3;
                do {
                  sVar5 = *(short *)ppuVar2;
                  cVar8 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
                  if (bVar22) {
                    *(short *)ppuVar2 = sVar5 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (sVar5 == 1) {
                  piVar4 = (int *)((long)local_a8 + 0x1c);
                  do {
                    iVar13 = *piVar4;
                    cVar8 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                    if (bVar22) {
                      *piVar4 = -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (iVar13 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar19 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar19;
                    local_98 = *ppuVar12;
                    FUN_00c44438(lVar19 + 0x8040,&local_98);
                    uVar17 = extraout_x1_12;
                  }
                }
                else if (sVar5 == 0) goto LAB_015ba7dc;
              }
              puVar25 = *(undefined8 **)(puVar21 + 0x10);
              puVar21[0x10] = 0;
              puVar21[0x11] = 0;
              puVar21[0x12] = 0;
              puVar21[0x13] = 0;
              if (puVar25 != (undefined8 *)0x0) {
                psVar3 = (short *)(puVar25 + 3);
                do {
                  sVar5 = *psVar3;
                  cVar8 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                  if (bVar22) {
                    *psVar3 = sVar5 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (sVar5 == 1) {
                  piVar4 = (int *)((long)puVar25 + 0x1c);
                  do {
                    iVar13 = *piVar4;
                    cVar8 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                    if (bVar22) {
                      *piVar4 = -1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (iVar13 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar19 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar19;
                    local_98 = (ushort *)*puVar25;
                    FUN_00c44438(lVar19 + 0x8040,&local_98);
                    uVar17 = extraout_x1_13;
                  }
                }
                else if (sVar5 == 0) goto LAB_015ba7dc;
              }
              puVar21[0x14] = 0;
              puVar21[0x15] = 0;
              puVar21[0x16] = 0;
              puVar21[0x17] = 0;
              plVar16 = *(long **)(puVar21 + 0x18);
              puVar21[0x18] = 0;
              puVar21[0x19] = 0;
              puVar21[0x1a] = 0;
              puVar21[0x1b] = 0;
              if (plVar16 != (long *)0x0) {
                lVar19 = plVar16[6];
                psVar3 = (short *)(lVar19 + 0x1a);
                do {
                  sVar5 = *psVar3;
                  cVar8 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                  if (bVar22) {
                    *psVar3 = sVar5 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (sVar5 == 1) {
                  *(undefined8 *)(lVar19 + 0x10) = 0;
                  (**(code **)(*plVar16 + 0x50))();
                  uVar17 = extraout_x1_15;
                }
                else if (sVar5 == 0) goto LAB_015ba880;
              }
              auVar29._8_8_ = uVar17;
              auVar29._0_8_ = puVar21;
              bVar22 = true;
            }
            param_2 = auVar29._8_8_;
            puVar21 = auVar29._0_8_;
            if (local_78 != (long *)0x0) {
              lVar19 = local_78[6];
              psVar3 = (short *)(lVar19 + 0x1a);
              do {
                sVar5 = *psVar3;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar9) {
                  *psVar3 = sVar5 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (sVar5 == 1) {
                *(undefined8 *)(lVar19 + 0x10) = 0;
                (**(code **)(*local_78 + 0x50))();
                param_2 = extraout_x1_16;
              }
              else if (sVar5 == 0) {
LAB_015ba880:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            auVar28._8_8_ = param_2;
            auVar28._0_8_ = puVar21;
            if (!bVar22) goto LAB_015b9d70;
          }
          goto LAB_015b9d6c;
        }
        puVar23 = puVar21 + 4;
        if ((*(long *)puVar23 != 0) && (lVar19 = *(long *)(*(long *)puVar23 + 0x10), lVar19 != 0)) {
          puVar26 = (ushort *)(lVar19 + -0x28);
          auVar28 = (**(code **)(*(long *)puVar26 + 0xd8))(puVar26);
          param_2 = auVar28._8_8_;
          if ((auVar28._0_8_ & 1) != 0) {
            bVar7 = (byte)puVar21[0xc];
            if (bVar7 - 1 < 2) {
              plVar16 = (long *)(lVar19 + 0xe8);
              lVar24 = *plVar16;
              lVar14 = nn::os::GetCurrentThread();
              if (lVar14 != lVar24) {
                lVar14 = nn::os::GetCurrentThread();
LAB_015ba22c:
                if (*plVar16 == 0) goto code_r0x015ba234;
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                do {
                  if (*plVar16 != 0) {
                    do {
                      ClearExclusiveLocal();
                      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                      while (*plVar16 == 0) {
                        cVar8 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                        if (bVar22) {
                          *plVar16 = lVar14;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                        if (cVar8 == '\0') goto LAB_015ba23c;
                      }
                    } while( true );
                  }
                  cVar8 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar22) {
                    *plVar16 = lVar14;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
LAB_015ba23c:
                bVar22 = false;
                goto LAB_015ba240;
              }
              bVar22 = true;
LAB_015ba240:
              auVar28 = FUN_015bb500(*(undefined8 *)(lVar19 + 0x100),*(undefined8 *)(lVar19 + 0x108)
                                    );
              param_2 = auVar28._8_8_;
              if ((*(long **)(lVar19 + 0x108) == auVar28._0_8_) ||
                 (lVar14 = *auVar28._0_8_, lVar14 == 0)) {
                auVar28 = FUN_015bb500(*(undefined8 *)(lVar19 + 0x138),
                                       *(undefined8 *)(lVar19 + 0x140));
                param_2 = auVar28._8_8_;
                if (*(long **)(lVar19 + 0x140) == auVar28._0_8_) {
                  lVar14 = 0;
                }
                else {
                  lVar24 = *auVar28._0_8_;
                  lVar14 = 0;
                  if (lVar24 != 0) {
                    lVar14 = lVar24 + -0x20;
                  }
                }
              }
              else {
                lVar14 = lVar14 + -0x20;
              }
              if (!bVar22) {
                *(undefined8 *)(lVar19 + 0xe8) = 0;
                nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xf0));
                param_2 = extraout_x1_03;
              }
              if ((lVar14 != 0) && (*(char *)(lVar14 + 0x11a) != '\0')) {
                lVar24 = *plVar16;
                lVar14 = nn::os::GetCurrentThread();
                if (lVar14 != lVar24) {
                  lVar14 = nn::os::GetCurrentThread();
LAB_015ba2ac:
                  if (*plVar16 == 0) goto code_r0x015ba2b4;
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                  do {
                    if (*plVar16 != 0) {
                      do {
                        ClearExclusiveLocal();
                        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                        while (*plVar16 == 0) {
                          cVar8 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                          if (bVar22) {
                            *plVar16 = lVar14;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                          if (cVar8 == '\0') goto LAB_015ba2bc;
                        }
                      } while( true );
                    }
                    cVar8 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                    if (bVar22) {
                      *plVar16 = lVar14;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
LAB_015ba2bc:
                  bVar22 = false;
                  goto LAB_015ba2c0;
                }
                bVar22 = true;
LAB_015ba2c0:
                auVar28 = FUN_015bb6f0(*(undefined8 *)(lVar19 + 0x100),
                                       *(undefined8 *)(lVar19 + 0x108));
                param_2 = auVar28._8_8_;
                if ((*(long **)(lVar19 + 0x108) == auVar28._0_8_) ||
                   (lVar14 = *auVar28._0_8_, lVar14 == 0)) {
                  auVar28 = FUN_015bb6f0(*(undefined8 *)(lVar19 + 0x138),
                                         *(undefined8 *)(lVar19 + 0x140));
                  param_2 = auVar28._8_8_;
                  if (*(long **)(lVar19 + 0x140) == auVar28._0_8_) {
                    lVar14 = 0;
                  }
                  else {
                    lVar24 = *auVar28._0_8_;
                    lVar14 = 0;
                    if (lVar24 != 0) {
                      lVar14 = lVar24 + -0x20;
                    }
                  }
                }
                else {
                  lVar14 = lVar14 + -0x20;
                }
                if (!bVar22) {
                  *(undefined8 *)(lVar19 + 0xe8) = 0;
                  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xf0));
                  param_2 = extraout_x1_04;
                }
                if ((lVar14 != 0) && (*(char *)(lVar14 + 0x11a) != '\0')) {
                  local_a8 = &local_98;
                  local_98 = puVar26;
                  auVar28 = FUN_015bb5d8(&local_a8);
                  param_2 = auVar28._8_8_;
                  if ((auVar28._0_8_ & 1) != 0) {
                    lVar24 = *plVar16;
                    lVar14 = nn::os::GetCurrentThread();
                    if (lVar14 != lVar24) {
                      lVar14 = nn::os::GetCurrentThread();
LAB_015ba348:
                      if (*plVar16 == 0) goto code_r0x015ba350;
                      ClearExclusiveLocal();
                      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                      do {
                        if (*plVar16 != 0) {
                          do {
                            ClearExclusiveLocal();
                            nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                            while (*plVar16 == 0) {
                              cVar8 = '\x01';
                              bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                              if (bVar22) {
                                *plVar16 = lVar14;
                                cVar8 = ExclusiveMonitorsStatus();
                              }
                              if (cVar8 == '\0') goto LAB_015ba358;
                            }
                          } while( true );
                        }
                        cVar8 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                        if (bVar22) {
                          *plVar16 = lVar14;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
LAB_015ba358:
                      bVar22 = false;
                      goto LAB_015ba35c;
                    }
LAB_015bb124:
                    bVar22 = true;
LAB_015ba35c:
                    plVar16 = (long *)FUN_01eaafe0(*(undefined8 *)(lVar19 + 0x100),
                                                   *(undefined8 *)(lVar19 + 0x108));
                    if ((*(long **)(lVar19 + 0x108) == plVar16) || (*plVar16 == 0)) {
                      plVar16 = (long *)FUN_01eaafe0(*(undefined8 *)(lVar19 + 0x138),
                                                     *(undefined8 *)(lVar19 + 0x140));
                      if (*(long **)(lVar19 + 0x140) == plVar16) {
                        lVar14 = 0;
                      }
                      else {
                        lVar14 = 0;
                        if (*plVar16 != 0) {
                          lVar14 = *plVar16 + -0x20;
                        }
                      }
                    }
                    else {
                      lVar14 = *plVar16 + -0x20;
                    }
                    if (!bVar22) {
                      *(undefined8 *)(lVar19 + 0xe8) = 0;
LAB_015ba398:
                      nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xf0));
                    }
LAB_015ba39c:
                    param_2 = puVar23;
                    if ((lVar14 != 0) && (*(char *)(lVar14 + 0x11a) != '\0')) {
                      *(undefined1 *)(puVar21 + 0x1c) = 1;
                      local_b8 = (undefined8 *)0x0;
                      uStack_b0 = 0;
                      FUN_00ca1a48(&local_b8);
                      bVar7 = (byte)puVar21[0xc];
                      if (bVar7 < 4) {
                        uVar18 = *(undefined4 *)(&DAT_03cac010 + (long)(char)bVar7 * 4);
                      }
                      else {
                        uVar18 = 5;
                        if (9 < bVar7) {
                          if (bVar7 != 10) {
LAB_015bb188:
                    /* WARNING: Subroutine does not return */
                            nn::diag::detail::AbortImpl
                                      ("0","ToObjectType",
                                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/network/net_contents/mo/network_player_manager.cpp"
                                       ,0x97,"ObjectTemplateIndex %u");
                          }
                          uVar18 = 6;
                        }
                      }
                      FUN_015bb800(puVar21,&local_b8,uVar18);
                      puVar25 = local_b8;
                      param_2 = extraout_x1_05;
                      if (local_b8 != (undefined8 *)0x0) {
                        psVar3 = (short *)(local_b8 + 3);
                        do {
                          sVar5 = *psVar3;
                          cVar8 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                          if (bVar22) {
                            *psVar3 = sVar5 + -1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        if (sVar5 == 1) {
                          piVar4 = (int *)((long)local_b8 + 0x1c);
                          do {
                            iVar13 = *piVar4;
                            cVar8 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                            if (bVar22) {
                              *piVar4 = -1;
                              cVar8 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar8 != '\0');
                          if (iVar13 != -1) {
                            if (((*PTR_DAT_047d3908 & 1) == 0) &&
                               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                              __cxa_guard_release(PTR_DAT_047d3908);
                            }
                            lVar19 = *(long *)PTR_DAT_047d3910;
                            *(long *)PTR_DAT_047d3918 = lVar19;
                            local_98 = (ushort *)*puVar25;
                            FUN_00c44438(lVar19 + 0x8040,&local_98);
                            param_2 = extraout_x1_14;
                          }
                        }
                        else if (sVar5 == 0) {
LAB_015ba7dc:
                    /* WARNING: Subroutine does not return */
                          nn::diag::detail::AbortImpl
                                    ("count != std::numeric_limits<uint16_t>::max()",
                                     "ReleaseWeakReference",
                                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                                     ,0x33,"Reference counter underflows.");
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (bVar7 == 0) {
              plVar16 = (long *)(lVar19 + 0xe8);
              lVar24 = *plVar16;
              lVar14 = nn::os::GetCurrentThread();
              if (lVar14 != lVar24) {
                lVar14 = nn::os::GetCurrentThread();
LAB_015ba4cc:
                if (*plVar16 == 0) goto code_r0x015ba4d4;
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                do {
                  if (*plVar16 != 0) {
                    do {
                      ClearExclusiveLocal();
                      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                      while (*plVar16 == 0) {
                        cVar8 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                        if (bVar22) {
                          *plVar16 = lVar14;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                        if (cVar8 == '\0') goto LAB_015ba4dc;
                      }
                    } while( true );
                  }
                  cVar8 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar22) {
                    *plVar16 = lVar14;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
LAB_015ba4dc:
                bVar22 = false;
                goto LAB_015ba4e0;
              }
              bVar22 = true;
LAB_015ba4e0:
              auVar28 = FUN_015bb500(*(undefined8 *)(lVar19 + 0x100),*(undefined8 *)(lVar19 + 0x108)
                                    );
              param_2 = auVar28._8_8_;
              if ((*(long **)(lVar19 + 0x108) == auVar28._0_8_) ||
                 (lVar14 = *auVar28._0_8_, lVar14 == 0)) {
                auVar28 = FUN_015bb500(*(undefined8 *)(lVar19 + 0x138),
                                       *(undefined8 *)(lVar19 + 0x140));
                param_2 = auVar28._8_8_;
                if (*(long **)(lVar19 + 0x140) == auVar28._0_8_) {
                  lVar14 = 0;
                }
                else {
                  lVar24 = *auVar28._0_8_;
                  lVar14 = 0;
                  if (lVar24 != 0) {
                    lVar14 = lVar24 + -0x20;
                  }
                }
              }
              else {
                lVar14 = lVar14 + -0x20;
              }
              if (!bVar22) {
                *(undefined8 *)(lVar19 + 0xe8) = 0;
                nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xf0));
                param_2 = extraout_x1_06;
              }
              if ((lVar14 != 0) && (*(char *)(lVar14 + 0x11a) != '\0')) {
                lVar24 = *plVar16;
                lVar14 = nn::os::GetCurrentThread();
                if (lVar14 != lVar24) {
                  lVar14 = nn::os::GetCurrentThread();
LAB_015ba54c:
                  if (*plVar16 == 0) goto code_r0x015ba554;
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                  do {
                    if (*plVar16 != 0) {
                      do {
                        ClearExclusiveLocal();
                        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                        while (*plVar16 == 0) {
                          cVar8 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                          if (bVar22) {
                            *plVar16 = lVar14;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                          if (cVar8 == '\0') goto LAB_015ba55c;
                        }
                      } while( true );
                    }
                    cVar8 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                    if (bVar22) {
                      *plVar16 = lVar14;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
LAB_015ba55c:
                  bVar22 = false;
                  goto LAB_015ba560;
                }
                bVar22 = true;
LAB_015ba560:
                auVar28 = FUN_015bb6f0(*(undefined8 *)(lVar19 + 0x100),
                                       *(undefined8 *)(lVar19 + 0x108));
                param_2 = auVar28._8_8_;
                if ((*(long **)(lVar19 + 0x108) == auVar28._0_8_) ||
                   (lVar14 = *auVar28._0_8_, lVar14 == 0)) {
                  auVar28 = FUN_015bb6f0(*(undefined8 *)(lVar19 + 0x138),
                                         *(undefined8 *)(lVar19 + 0x140));
                  param_2 = auVar28._8_8_;
                  if (*(long **)(lVar19 + 0x140) == auVar28._0_8_) {
                    lVar14 = 0;
                  }
                  else {
                    lVar24 = *auVar28._0_8_;
                    lVar14 = 0;
                    if (lVar24 != 0) {
                      lVar14 = lVar24 + -0x20;
                    }
                  }
                }
                else {
                  lVar14 = lVar14 + -0x20;
                }
                if (!bVar22) {
                  *(undefined8 *)(lVar19 + 0xe8) = 0;
                  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xf0));
                  param_2 = extraout_x1_07;
                }
                if ((lVar14 != 0) && (*(char *)(lVar14 + 0x11a) != '\0')) {
                  lVar24 = *plVar16;
                  lVar14 = nn::os::GetCurrentThread();
                  if (lVar14 != lVar24) {
                    lVar14 = nn::os::GetCurrentThread();
LAB_015bb31c:
                    if (*plVar16 == 0) goto code_r0x015bb328;
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                    do {
                      if (*plVar16 != 0) {
                        do {
                          ClearExclusiveLocal();
                          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                          while (*plVar16 == 0) {
                            bVar22 = false;
                            cVar8 = '\x01';
                            bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                            if (bVar9) {
                              *plVar16 = lVar14;
                              cVar8 = ExclusiveMonitorsStatus();
                            }
                            if (cVar8 == '\0') goto LAB_015ba5c4;
                          }
                        } while( true );
                      }
                      bVar22 = false;
                      cVar8 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                      if (bVar9) {
                        *plVar16 = lVar14;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    goto LAB_015ba5c4;
                  }
                  bVar22 = true;
LAB_015ba5c4:
                  auVar28 = FUN_01eaaec0(*(undefined8 *)(lVar19 + 0x100),
                                         *(undefined8 *)(lVar19 + 0x108));
                  param_2 = auVar28._8_8_;
                  if ((*(long **)(lVar19 + 0x108) == auVar28._0_8_) ||
                     (lVar14 = *auVar28._0_8_, lVar14 == 0)) {
                    auVar28 = FUN_01eaaec0(*(undefined8 *)(lVar19 + 0x138),
                                           *(undefined8 *)(lVar19 + 0x140));
                    param_2 = auVar28._8_8_;
                    if (*(long **)(lVar19 + 0x140) == auVar28._0_8_) {
                      lVar14 = 0;
                    }
                    else {
                      lVar24 = *auVar28._0_8_;
                      lVar14 = 0;
                      if (lVar24 != 0) {
                        lVar14 = lVar24 + -0x20;
                      }
                    }
                  }
                  else {
                    lVar14 = lVar14 + -0x20;
                  }
                  if (!bVar22) {
                    *(undefined8 *)(lVar19 + 0xe8) = 0;
                    nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xf0));
                    param_2 = extraout_x1_08;
                  }
                  if ((lVar14 != 0) && (*(char *)(lVar14 + 0x11a) != '\0')) {
                    local_a8 = &local_98;
                    local_98 = puVar26;
                    auVar28 = FUN_015bb5d8(&local_a8);
                    param_2 = auVar28._8_8_;
                    if ((auVar28._0_8_ & 1) != 0) {
                      lVar24 = *plVar16;
                      lVar14 = nn::os::GetCurrentThread();
                      if (lVar14 != lVar24) {
                        lVar14 = nn::os::GetCurrentThread();
LAB_015ba64c:
                        if (*plVar16 == 0) goto code_r0x015ba654;
                        ClearExclusiveLocal();
                        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                        do {
                          if (*plVar16 != 0) {
                            do {
                              ClearExclusiveLocal();
                              nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                              while (*plVar16 == 0) {
                                cVar8 = '\x01';
                                bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                                if (bVar22) {
                                  *plVar16 = lVar14;
                                  cVar8 = ExclusiveMonitorsStatus();
                                }
                                if (cVar8 == '\0') goto LAB_015ba65c;
                              }
                            } while( true );
                          }
                          cVar8 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                          if (bVar22) {
                            *plVar16 = lVar14;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        goto LAB_015ba65c;
                      }
                      goto LAB_015bb140;
                    }
                  }
                }
              }
            }
            else if (bVar7 == 3) {
              plVar16 = (long *)(lVar19 + 0xe8);
              lVar24 = *plVar16;
              lVar14 = nn::os::GetCurrentThread();
              if (lVar14 != lVar24) {
                lVar14 = nn::os::GetCurrentThread();
LAB_015b9e18:
                if (*plVar16 == 0) goto code_r0x015b9e20;
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                do {
                  if (*plVar16 != 0) {
                    do {
                      ClearExclusiveLocal();
                      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                      while (*plVar16 == 0) {
                        cVar8 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                        if (bVar22) {
                          *plVar16 = lVar14;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                        if (cVar8 == '\0') goto LAB_015b9e28;
                      }
                    } while( true );
                  }
                  cVar8 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar22) {
                    *plVar16 = lVar14;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
LAB_015b9e28:
                bVar22 = false;
                goto LAB_015b9e2c;
              }
              bVar22 = true;
LAB_015b9e2c:
              auVar28 = FUN_015bb500(*(undefined8 *)(lVar19 + 0x100),*(undefined8 *)(lVar19 + 0x108)
                                    );
              param_2 = auVar28._8_8_;
              if ((*(long **)(lVar19 + 0x108) == auVar28._0_8_) ||
                 (lVar14 = *auVar28._0_8_, lVar14 == 0)) {
                auVar28 = FUN_015bb500(*(undefined8 *)(lVar19 + 0x138),
                                       *(undefined8 *)(lVar19 + 0x140));
                param_2 = auVar28._8_8_;
                if (*(long **)(lVar19 + 0x140) == auVar28._0_8_) {
                  lVar14 = 0;
                }
                else {
                  lVar24 = *auVar28._0_8_;
                  lVar14 = 0;
                  if (lVar24 != 0) {
                    lVar14 = lVar24 + -0x20;
                  }
                }
              }
              else {
                lVar14 = lVar14 + -0x20;
              }
              if (!bVar22) {
                *(undefined8 *)(lVar19 + 0xe8) = 0;
                nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xf0));
                param_2 = extraout_x1;
              }
              if ((lVar14 != 0) && (*(char *)(lVar14 + 0x11a) != '\0')) {
                lVar24 = *plVar16;
                lVar14 = nn::os::GetCurrentThread();
                if (lVar14 != lVar24) {
                  lVar14 = nn::os::GetCurrentThread();
LAB_015b9e98:
                  if (*plVar16 == 0) goto code_r0x015b9ea0;
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                  do {
                    if (*plVar16 != 0) {
                      do {
                        ClearExclusiveLocal();
                        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                        while (*plVar16 == 0) {
                          cVar8 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                          if (bVar22) {
                            *plVar16 = lVar14;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                          if (cVar8 == '\0') goto LAB_015b9ea8;
                        }
                      } while( true );
                    }
                    cVar8 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                    if (bVar22) {
                      *plVar16 = lVar14;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
LAB_015b9ea8:
                  bVar22 = false;
                  goto LAB_015b9eac;
                }
                bVar22 = true;
LAB_015b9eac:
                auVar28 = FUN_015bb6f0(*(undefined8 *)(lVar19 + 0x100),
                                       *(undefined8 *)(lVar19 + 0x108));
                param_2 = auVar28._8_8_;
                if ((*(long **)(lVar19 + 0x108) == auVar28._0_8_) ||
                   (lVar14 = *auVar28._0_8_, lVar14 == 0)) {
                  auVar28 = FUN_015bb6f0(*(undefined8 *)(lVar19 + 0x138),
                                         *(undefined8 *)(lVar19 + 0x140));
                  param_2 = auVar28._8_8_;
                  if (*(long **)(lVar19 + 0x140) == auVar28._0_8_) {
                    lVar14 = 0;
                  }
                  else {
                    lVar24 = *auVar28._0_8_;
                    lVar14 = 0;
                    if (lVar24 != 0) {
                      lVar14 = lVar24 + -0x20;
                    }
                  }
                }
                else {
                  lVar14 = lVar14 + -0x20;
                }
                if (!bVar22) {
                  *(undefined8 *)(lVar19 + 0xe8) = 0;
                  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xf0));
                  param_2 = extraout_x1_00;
                }
                if ((lVar14 != 0) && (*(char *)(lVar14 + 0x11a) != '\0')) {
                  lVar24 = *plVar16;
                  lVar14 = nn::os::GetCurrentThread();
                  if (lVar14 != lVar24) {
                    lVar14 = nn::os::GetCurrentThread();
LAB_015bb2f0:
                    if (*plVar16 == 0) goto code_r0x015bb2fc;
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                    do {
                      if (*plVar16 != 0) {
                        do {
                          ClearExclusiveLocal();
                          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                          while (*plVar16 == 0) {
                            bVar22 = false;
                            cVar8 = '\x01';
                            bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                            if (bVar9) {
                              *plVar16 = lVar14;
                              cVar8 = ExclusiveMonitorsStatus();
                            }
                            if (cVar8 == '\0') goto LAB_015b9f10;
                          }
                        } while( true );
                      }
                      bVar22 = false;
                      cVar8 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                      if (bVar9) {
                        *plVar16 = lVar14;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    goto LAB_015b9f10;
                  }
                  bVar22 = true;
LAB_015b9f10:
                  auVar28 = FUN_01eaaec0(*(undefined8 *)(lVar19 + 0x100),
                                         *(undefined8 *)(lVar19 + 0x108));
                  param_2 = auVar28._8_8_;
                  if ((*(long **)(lVar19 + 0x108) == auVar28._0_8_) ||
                     (lVar14 = *auVar28._0_8_, lVar14 == 0)) {
                    auVar28 = FUN_01eaaec0(*(undefined8 *)(lVar19 + 0x138),
                                           *(undefined8 *)(lVar19 + 0x140));
                    param_2 = auVar28._8_8_;
                    if (*(long **)(lVar19 + 0x140) == auVar28._0_8_) {
                      lVar14 = 0;
                    }
                    else {
                      lVar24 = *auVar28._0_8_;
                      lVar14 = 0;
                      if (lVar24 != 0) {
                        lVar14 = lVar24 + -0x20;
                      }
                    }
                  }
                  else {
                    lVar14 = lVar14 + -0x20;
                  }
                  if (!bVar22) {
                    *(undefined8 *)(lVar19 + 0xe8) = 0;
                    nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xf0));
                    param_2 = extraout_x1_01;
                  }
                  if ((lVar14 != 0) && (*(char *)(lVar14 + 0x11a) != '\0')) {
                    local_a8 = &local_98;
                    local_98 = puVar26;
                    auVar28 = FUN_015bb5d8(&local_a8);
                    param_2 = auVar28._8_8_;
                    if ((auVar28._0_8_ & 1) != 0) {
                      lVar24 = *plVar16;
                      lVar14 = nn::os::GetCurrentThread();
                      if (lVar14 != lVar24) {
                        lVar14 = nn::os::GetCurrentThread();
LAB_015b9f98:
                        if (*plVar16 == 0) goto code_r0x015b9fa0;
                        ClearExclusiveLocal();
                        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                        do {
                          if (*plVar16 != 0) {
                            do {
                              ClearExclusiveLocal();
                              nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                              while (*plVar16 == 0) {
                                cVar8 = '\x01';
                                bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                                if (bVar22) {
                                  *plVar16 = lVar14;
                                  cVar8 = ExclusiveMonitorsStatus();
                                }
                                if (cVar8 == '\0') goto LAB_015ba65c;
                              }
                            } while( true );
                          }
                          cVar8 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                          if (bVar22) {
                            *plVar16 = lVar14;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        goto LAB_015ba65c;
                      }
                      goto LAB_015bb140;
                    }
                  }
                }
              }
            }
            else if (bVar7 < 10) {
              plVar16 = (long *)(lVar19 + 0xe8);
              lVar24 = *plVar16;
              lVar14 = nn::os::GetCurrentThread();
              if (lVar14 != lVar24) {
                lVar14 = nn::os::GetCurrentThread();
LAB_015ba6cc:
                if (*plVar16 == 0) goto code_r0x015ba6d4;
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                do {
                  if (*plVar16 != 0) {
                    do {
                      ClearExclusiveLocal();
                      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                      while (*plVar16 == 0) {
                        cVar8 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                        if (bVar22) {
                          *plVar16 = lVar14;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                        if (cVar8 == '\0') goto LAB_015ba6dc;
                      }
                    } while( true );
                  }
                  cVar8 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar22) {
                    *plVar16 = lVar14;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
LAB_015ba6dc:
                bVar22 = false;
                goto LAB_015ba6e0;
              }
              bVar22 = true;
LAB_015ba6e0:
              auVar28 = FUN_015bb500(*(undefined8 *)(lVar19 + 0x100),*(undefined8 *)(lVar19 + 0x108)
                                    );
              param_2 = auVar28._8_8_;
              if ((*(long **)(lVar19 + 0x108) == auVar28._0_8_) ||
                 (lVar14 = *auVar28._0_8_, lVar14 == 0)) {
                auVar28 = FUN_015bb500(*(undefined8 *)(lVar19 + 0x138),
                                       *(undefined8 *)(lVar19 + 0x140));
                param_2 = auVar28._8_8_;
                if (*(long **)(lVar19 + 0x140) == auVar28._0_8_) {
                  lVar14 = 0;
                }
                else {
                  lVar24 = *auVar28._0_8_;
                  lVar14 = 0;
                  if (lVar24 != 0) {
                    lVar14 = lVar24 + -0x20;
                  }
                }
              }
              else {
                lVar14 = lVar14 + -0x20;
              }
              if (!bVar22) {
                *(undefined8 *)(lVar19 + 0xe8) = 0;
                nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xf0));
                param_2 = extraout_x1_09;
              }
              if ((lVar14 != 0) && (*(char *)(lVar14 + 0x11a) != '\0')) {
                lVar24 = *plVar16;
                lVar14 = nn::os::GetCurrentThread();
                if (lVar14 != lVar24) {
                  lVar14 = nn::os::GetCurrentThread();
LAB_015ba748:
                  if (*plVar16 == 0) goto code_r0x015ba750;
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                  do {
                    if (*plVar16 != 0) {
                      do {
                        ClearExclusiveLocal();
                        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                        while (*plVar16 == 0) {
                          cVar8 = '\x01';
                          bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                          if (bVar22) {
                            *plVar16 = lVar14;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                          if (cVar8 == '\0') goto LAB_015ba758;
                        }
                      } while( true );
                    }
                    cVar8 = '\x01';
                    bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                    if (bVar22) {
                      *plVar16 = lVar14;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
LAB_015ba758:
                  bVar22 = false;
                  goto LAB_015ba35c;
                }
                goto LAB_015bb124;
              }
            }
            else {
              if (bVar7 != 10) goto LAB_015bb188;
              plVar16 = (long *)(lVar19 + 0xe8);
              lVar24 = *plVar16;
              lVar14 = nn::os::GetCurrentThread();
              if (lVar14 != lVar24) {
                lVar14 = nn::os::GetCurrentThread();
LAB_015ba998:
                if (*plVar16 == 0) goto code_r0x015ba9a0;
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                do {
                  if (*plVar16 != 0) {
                    do {
                      ClearExclusiveLocal();
                      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                      while (*plVar16 == 0) {
                        cVar8 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                        if (bVar22) {
                          *plVar16 = lVar14;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                        if (cVar8 == '\0') goto LAB_015ba9a8;
                      }
                    } while( true );
                  }
                  cVar8 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                  if (bVar22) {
                    *plVar16 = lVar14;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
LAB_015ba9a8:
                bVar22 = false;
                goto LAB_015ba9ac;
              }
              bVar22 = true;
LAB_015ba9ac:
              auVar28 = FUN_015bb500(*(undefined8 *)(lVar19 + 0x100),*(undefined8 *)(lVar19 + 0x108)
                                    );
              param_2 = auVar28._8_8_;
              if ((*(long **)(lVar19 + 0x108) == auVar28._0_8_) ||
                 (lVar14 = *auVar28._0_8_, lVar14 == 0)) {
                auVar28 = FUN_015bb500(*(undefined8 *)(lVar19 + 0x138),
                                       *(undefined8 *)(lVar19 + 0x140));
                param_2 = auVar28._8_8_;
                if (*(long **)(lVar19 + 0x140) == auVar28._0_8_) {
                  lVar14 = 0;
                }
                else {
                  lVar24 = *auVar28._0_8_;
                  lVar14 = 0;
                  if (lVar24 != 0) {
                    lVar14 = lVar24 + -0x20;
                  }
                }
              }
              else {
                lVar14 = lVar14 + -0x20;
              }
              if (!bVar22) {
                *(undefined8 *)(lVar19 + 0xe8) = 0;
                nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xf0));
                param_2 = extraout_x1_10;
              }
              if ((lVar14 != 0) && (*(char *)(lVar14 + 0x11a) != '\0')) {
                lVar24 = *plVar16;
                lVar14 = nn::os::GetCurrentThread();
                if (lVar14 != lVar24) {
                  lVar14 = nn::os::GetCurrentThread();
LAB_015bb348:
                  if (*plVar16 == 0) goto code_r0x015bb354;
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                  do {
                    if (*plVar16 != 0) {
                      do {
                        ClearExclusiveLocal();
                        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                        while (*plVar16 == 0) {
                          bVar22 = false;
                          cVar8 = '\x01';
                          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                          if (bVar9) {
                            *plVar16 = lVar14;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                          if (cVar8 == '\0') goto LAB_015baa10;
                        }
                      } while( true );
                    }
                    bVar22 = false;
                    cVar8 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                    if (bVar9) {
                      *plVar16 = lVar14;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  goto LAB_015baa10;
                }
                bVar22 = true;
LAB_015baa10:
                auVar28 = FUN_01eaaec0(*(undefined8 *)(lVar19 + 0x100),
                                       *(undefined8 *)(lVar19 + 0x108));
                param_2 = auVar28._8_8_;
                if ((*(long **)(lVar19 + 0x108) == auVar28._0_8_) ||
                   (lVar14 = *auVar28._0_8_, lVar14 == 0)) {
                  auVar28 = FUN_01eaaec0(*(undefined8 *)(lVar19 + 0x138),
                                         *(undefined8 *)(lVar19 + 0x140));
                  param_2 = auVar28._8_8_;
                  if (*(long **)(lVar19 + 0x140) == auVar28._0_8_) {
                    lVar14 = 0;
                  }
                  else {
                    lVar24 = *auVar28._0_8_;
                    lVar14 = 0;
                    if (lVar24 != 0) {
                      lVar14 = lVar24 + -0x20;
                    }
                  }
                }
                else {
                  lVar14 = lVar14 + -0x20;
                }
                if (!bVar22) {
                  *(undefined8 *)(lVar19 + 0xe8) = 0;
                  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xf0));
                  param_2 = extraout_x1_11;
                }
                if ((lVar14 != 0) && (*(char *)(lVar14 + 0x11a) != '\0')) {
                  lVar24 = *plVar16;
                  lVar14 = nn::os::GetCurrentThread();
                  if (lVar14 != lVar24) {
                    lVar14 = nn::os::GetCurrentThread();
LAB_015baa7c:
                    if (*plVar16 == 0) goto code_r0x015baa84;
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                    do {
                      if (*plVar16 != 0) {
                        do {
                          ClearExclusiveLocal();
                          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                          while (*plVar16 == 0) {
                            cVar8 = '\x01';
                            bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                            if (bVar22) {
                              *plVar16 = lVar14;
                              cVar8 = ExclusiveMonitorsStatus();
                            }
                            if (cVar8 == '\0') goto LAB_015ba65c;
                          }
                        } while( true );
                      }
                      cVar8 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                      if (bVar22) {
                        *plVar16 = lVar14;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
LAB_015ba65c:
                    bVar22 = false;
                    goto LAB_015ba660;
                  }
LAB_015bb140:
                  bVar22 = true;
LAB_015ba660:
                  plVar16 = (long *)FUN_01eaafe0(*(undefined8 *)(lVar19 + 0x100),
                                                 *(undefined8 *)(lVar19 + 0x108));
                  if ((*(long **)(lVar19 + 0x108) == plVar16) || (*plVar16 == 0)) {
                    plVar16 = (long *)FUN_01eaafe0(*(undefined8 *)(lVar19 + 0x138),
                                                   *(undefined8 *)(lVar19 + 0x140));
                    if (*(long **)(lVar19 + 0x140) == plVar16) {
                      lVar14 = 0;
                    }
                    else {
                      lVar14 = 0;
                      if (*plVar16 != 0) {
                        lVar14 = *plVar16 + -0x20;
                      }
                    }
                  }
                  else {
                    lVar14 = *plVar16 + -0x20;
                  }
                  if (!bVar22) {
                    *(undefined8 *)(lVar19 + 0xe8) = 0;
                    goto LAB_015ba398;
                  }
                  goto LAB_015ba39c;
                }
              }
            }
          }
          goto LAB_015b9d6c;
        }
LAB_015ba1b4:
        auVar28 = FUN_015bb494(lVar1,puVar21);
      }
      else {
LAB_015b9d6c:
        auVar28._8_8_ = param_2;
        auVar28._0_8_ = puVar21 + 0x20;
      }
LAB_015b9d70:
      param_2 = auVar28._8_8_;
      puVar21 = auVar28._0_8_;
    } while (puVar21 != *(ushort **)(param_1 + 0x110));
  }
  return;
code_r0x015b9fd4:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar19;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015b9fdc;
  goto LAB_015b9fcc;
code_r0x015ba0c4:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar22) {
    *plVar15 = lVar19;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015ba0cc;
  goto LAB_015ba0bc;
code_r0x015ba234:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015ba23c;
  goto LAB_015ba22c;
code_r0x015ba2b4:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015ba2bc;
  goto LAB_015ba2ac;
code_r0x015ba350:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015ba358;
  goto LAB_015ba348;
code_r0x015ba4d4:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015ba4dc;
  goto LAB_015ba4cc;
code_r0x015ba554:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015ba55c;
  goto LAB_015ba54c;
code_r0x015bb328:
  bVar22 = false;
  cVar8 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar9) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015ba5c4;
  goto LAB_015bb31c;
code_r0x015ba654:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015ba65c;
  goto LAB_015ba64c;
code_r0x015b9e20:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015b9e28;
  goto LAB_015b9e18;
code_r0x015b9ea0:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015b9ea8;
  goto LAB_015b9e98;
code_r0x015bb2fc:
  bVar22 = false;
  cVar8 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar9) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015b9f10;
  goto LAB_015bb2f0;
code_r0x015b9fa0:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015ba65c;
  goto LAB_015b9f98;
code_r0x015ba6d4:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015ba6dc;
  goto LAB_015ba6cc;
code_r0x015ba750:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015ba758;
  goto LAB_015ba748;
code_r0x015ba9a0:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015ba9a8;
  goto LAB_015ba998;
code_r0x015bb354:
  bVar22 = false;
  cVar8 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar9) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015baa10;
  goto LAB_015bb348;
code_r0x015baa84:
  cVar8 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar22) {
    *plVar16 = lVar14;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_015ba65c;
  goto LAB_015baa7c;
}


