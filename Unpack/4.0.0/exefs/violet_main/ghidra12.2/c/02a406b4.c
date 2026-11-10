/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a406b4; name: FUN_02a406b4
 */


void FUN_02a406b4(long *param_1)

{
  short *psVar1;
  code *pcVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  short sVar14;
  ulong uVar15;
  bool bVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  long *aplStack_160 [12];
  code *local_100;
  code *local_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined1 *local_e0 [12];
  undefined8 *local_80;
  undefined8 uStack_78;
  code *local_70 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00dddfdc();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
     (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) {
    lVar12 = tpidr_el0;
    lVar9 = *(long *)(lVar12 + 0x30);
    if (lVar9 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar9 = DAT_04859430;
      *(long *)(lVar12 + 0x30) = DAT_04859430;
    }
  }
  lVar12 = *param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[5] = lVar9;
  param_1[6] = 0xfffffffffffffff;
  param_1[7] = 0;
  if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar12 + 0x1a);
    sVar14 = *(short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar14) {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02a40810;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a40810:
        bVar16 = false;
      }
      if (bVar16) {
        lVar9 = *(long *)(lVar12 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        local_180 = &LAB_02a412e8;
        local_178 = FUN_02a416e4;
        local_170 = &LAB_02a416e8;
        local_168 = &LAB_02a416f4;
        aplStack_160[0] = param_1;
        uVar10 = (**(code **)(*(long *)(lVar9 + 0x18) + 0x70))();
        if ((uVar10 & 1) != 0) goto LAB_02a40bdc;
        plVar22 = (long *)(lVar9 + 0x20);
        lVar17 = *plVar22;
        lVar12 = nn::os::GetCurrentThread();
        if (lVar12 == lVar17) {
          if (*(long *)(lVar9 + 0x38) != *(long *)(lVar9 + 0x40)) goto LAB_02a408b4;
        }
        else {
          lVar12 = nn::os::GetCurrentThread();
          do {
            if (*plVar22 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x28));
                while (*plVar22 == 0) {
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar16) {
                    *plVar22 = lVar12;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_02a40898;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar16) {
              *plVar22 = lVar12;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_02a40898:
          lVar12 = *(long *)(lVar9 + 0x38);
          lVar17 = *(long *)(lVar9 + 0x40);
          *(undefined8 *)(lVar9 + 0x20) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x28));
          if (lVar12 != lVar17) {
LAB_02a408b4:
            local_100 = (code *)0x0;
            local_f8 = (code *)0x0;
            uVar19 = *(undefined8 *)(lVar9 + 0x10);
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            uVar11 = *(undefined8 *)PTR_DAT_047d3910;
            *(undefined8 *)PTR_DAT_047d3918 = uVar11;
            FUN_00c44204(local_70,uVar11,uVar19);
            pcVar7 = local_100;
            local_100 = (code *)0x0;
            if (local_70[0] == (code *)0x0) {
              if (pcVar7 != (code *)0x0) {
                pcVar2 = pcVar7 + 0x18;
                do {
                  sVar14 = *(short *)pcVar2;
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                  if (bVar16) {
                    *(short *)pcVar2 = sVar14 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar14 == 1) {
                  pcVar2 = pcVar7 + 0x1c;
                  do {
                    iVar8 = *(int *)pcVar2;
                    cVar5 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                    if (bVar16) {
                      *(int *)pcVar2 = -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar8 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar12 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar12;
                    local_80 = *(undefined8 **)pcVar7;
                    FUN_00c44438(lVar12 + 0x8040,&local_80);
                  }
                }
                else if (sVar14 == 0) goto LAB_02a4110c;
              }
              uVar19 = 0;
            }
            else {
              if (pcVar7 != (code *)0x0) {
                pcVar2 = pcVar7 + 0x18;
                do {
                  sVar14 = *(short *)pcVar2;
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                  if (bVar16) {
                    *(short *)pcVar2 = sVar14 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar14 == 1) {
                  pcVar2 = pcVar7 + 0x1c;
                  do {
                    iVar8 = *(int *)pcVar2;
                    cVar5 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                    if (bVar16) {
                      *(int *)pcVar2 = -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar8 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar12 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar12;
                    local_80 = *(undefined8 **)pcVar7;
                    FUN_00c44438(lVar12 + 0x8040,&local_80);
                  }
                }
                else if (sVar14 == 0) goto LAB_02a4110c;
              }
              local_100 = local_70[0];
              local_70[0] = (code *)0x0;
            }
            pcVar7 = local_70[0];
            local_f8 = (code *)uVar19;
            if (local_70[0] != (code *)0x0) {
              pcVar2 = local_70[0] + 0x18;
              do {
                sVar14 = *(short *)pcVar2;
                cVar5 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar16) {
                  *(short *)pcVar2 = sVar14 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar14 == 1) {
                pcVar2 = local_70[0] + 0x1c;
                do {
                  iVar8 = *(int *)pcVar2;
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                  if (bVar16) {
                    *(int *)pcVar2 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar12 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar12;
                  local_80 = *(undefined8 **)pcVar7;
                  FUN_00c44438(lVar12 + 0x8040,&local_80);
                }
              }
              else if (sVar14 == 0) goto LAB_02a4110c;
            }
            local_80 = (undefined8 *)0x0;
            uStack_78 = 0;
            if (*(long *)(local_100 + 0x10) == lVar9) {
              FUN_00e29918(&local_80,&local_100);
            }
            pcVar7 = local_100;
            if (local_100 != (code *)0x0) {
              pcVar2 = local_100 + 0x18;
              do {
                sVar14 = *(short *)pcVar2;
                cVar5 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                if (bVar16) {
                  *(short *)pcVar2 = sVar14 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar14 == 1) {
                pcVar2 = local_100 + 0x1c;
                do {
                  iVar8 = *(int *)pcVar2;
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
                  if (bVar16) {
                    *(int *)pcVar2 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar12 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar12;
                  local_70[0] = *(code **)pcVar7;
                  FUN_00c44438(lVar12 + 0x8040,local_70);
                }
              }
              else if (sVar14 == 0) goto LAB_02a4110c;
            }
            uVar10 = param_1[3];
            if (uVar10 < (ulong)param_1[4]) {
              FUN_01266934(param_1 + 5,uVar10,&local_80);
              param_1[3] = uVar10 + 0x10;
            }
            else {
              uVar15 = param_1[6];
              lVar12 = (long)(uVar10 - param_1[2]) >> 4;
              uVar10 = lVar12 + 1;
              if (0x7ffffffffffffffe < uVar15) {
                uVar15 = 0x7fffffffffffffff;
              }
              if (uVar15 < uVar10) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar17 = param_1[4] - param_1[2];
              uVar13 = lVar17 >> 3;
              if (uVar10 <= uVar13) {
                uVar10 = uVar13;
              }
              plVar22 = param_1 + 5;
              if (uVar15 >> 1 <= (ulong)(lVar17 >> 4)) {
                uVar10 = uVar15;
              }
              if (uVar10 == 0) {
                lVar17 = 0;
              }
              else {
                lVar17 = (**(code **)(*(long *)*plVar22 + 0x10))((long *)*plVar22,uVar10 << 4,8);
                if (lVar17 == 0) {
                  (**(code **)(*(long *)*plVar22 + 0xe8))();
                }
              }
              lVar23 = lVar17 + lVar12 * 0x10;
              FUN_01266934(plVar22,lVar23,&local_80);
              puVar21 = (undefined8 *)param_1[2];
              puVar20 = (undefined8 *)param_1[3];
              lVar12 = lVar23 + 0x10;
              if (puVar20 == puVar21) {
                puVar20 = puVar21;
              }
              else {
                do {
                  lVar23 = lVar23 + -0x10;
                  puVar20 = puVar20 + -2;
                  FUN_01266934(plVar22,lVar23,puVar20);
                } while (puVar21 != puVar20);
                puVar21 = (undefined8 *)param_1[2];
                puVar20 = (undefined8 *)param_1[3];
              }
              lVar24 = param_1[4];
              param_1[4] = lVar17 + uVar10 * 0x10;
              param_1[2] = lVar23;
              param_1[3] = lVar12;
              puVar6 = PTR_LAB_047d3de8;
              while (puVar20 != puVar21) {
                puVar20 = puVar20 + -2;
                puVar18 = (undefined8 *)*puVar20;
                if (puVar18 != (undefined8 *)0x0) {
                  psVar1 = (short *)(puVar18 + 3);
                  do {
                    sVar14 = *psVar1;
                    cVar5 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar16) {
                      *psVar1 = sVar14 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (sVar14 == 1) {
                    piVar3 = (int *)((long)puVar18 + 0x1c);
                    do {
                      iVar8 = *piVar3;
                      cVar5 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                      if (bVar16) {
                        *piVar3 = -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (iVar8 != -1) {
                      if (((*PTR_DAT_047d3908 & 1) == 0) &&
                         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                        FUN_00100190(puVar6,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                        __cxa_guard_release(PTR_DAT_047d3908);
                      }
                      lVar12 = *(long *)PTR_DAT_047d3910;
                      *(long *)PTR_DAT_047d3918 = lVar12;
                      local_100 = (code *)*puVar18;
                      FUN_00c44438(lVar12 + 0x8040,&local_100);
                    }
                  }
                  else if (sVar14 == 0) goto LAB_02a4110c;
                }
              }
              if (puVar21 != (undefined8 *)0x0) {
                plVar22 = (long *)*plVar22;
                uVar10 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar22 + 0x18))(plVar22,puVar21,lVar24 - (long)puVar21,8);
                }
                else {
                  FUN_00c48fe8(plVar22,puVar21,lVar24 - (long)puVar21,8);
                }
              }
            }
            puVar21 = local_80;
            if (local_80 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_80 + 3);
              do {
                sVar14 = *psVar1;
                cVar5 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar16) {
                  *psVar1 = sVar14 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar14 == 1) {
                piVar3 = (int *)((long)local_80 + 0x1c);
                do {
                  iVar8 = *piVar3;
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar16) {
                    *piVar3 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar12 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar12;
                  local_100 = (code *)*puVar21;
                  FUN_00c44438(lVar12 + 0x8040,&local_100);
                }
              }
              else if (sVar14 == 0) {
LAB_02a4110c:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
          }
        }
LAB_02a40bdc:
        plVar22 = (long *)(lVar9 + 0x1b0);
        local_100 = (code *)PTR_FUN_047db0a8;
        local_f8 = (code *)PTR_FUN_047db0b0;
        local_f0 = PTR_LAB_047db0b8;
        puStack_e8 = PTR_LAB_047db0c0;
        lVar17 = *plVar22;
        local_e0[0] = (undefined1 *)&local_180;
        lVar12 = nn::os::GetCurrentThread();
        if (lVar12 == lVar17) {
          plVar22 = (long *)0x0;
          bVar16 = true;
        }
        else {
          lVar12 = nn::os::GetCurrentThread();
          do {
            if (*plVar22 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x1b8));
                while (*plVar22 == 0) {
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar16) {
                    *plVar22 = lVar12;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_02a40c40;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar16) {
              *plVar22 = lVar12;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_02a40c40:
          bVar16 = false;
        }
        puVar20 = *(undefined8 **)(lVar9 + 0x1d0);
        for (puVar21 = *(undefined8 **)(lVar9 + 0x1c8); puVar21 != puVar20; puVar21 = puVar21 + 1) {
          local_80 = (undefined8 *)*puVar21;
          (*local_100)(local_e0,&local_80);
        }
        if (!bVar16) {
          *plVar22 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar22 + 1));
        }
        pcVar7 = local_f8;
        if (local_f8 != (code *)0x0) {
          local_f0 = (undefined *)0x0;
          puStack_e8 = (undefined *)0x0;
          local_100 = (code *)0x0;
          local_f8 = (code *)0x0;
          (*pcVar7)(local_e0);
        }
        pcVar7 = local_178;
        if (local_178 != (code *)0x0) {
          local_170 = (undefined1 *)0x0;
          local_168 = (undefined1 *)0x0;
          local_180 = (undefined1 *)0x0;
          local_178 = (code *)0x0;
          (*pcVar7)(aplStack_160);
        }
        (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))((long *)(lVar9 + -0x28));
        return;
      }
      sVar14 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


