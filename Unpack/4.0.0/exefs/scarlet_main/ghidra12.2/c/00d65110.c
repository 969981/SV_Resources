/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d65110; name: FUN_00d65110
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d65110(long param_1)

{
  code *******pppppppcVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  code ****ppppcVar10;
  bool bVar11;
  code *******pppppppcVar12;
  short sVar13;
  code *******pppppppcVar14;
  code *******pppppppcVar15;
  code *****pppppcVar16;
  code *****pppppcVar17;
  code ******ppppppcVar18;
  long *plVar19;
  code *******pppppppcVar20;
  code *******pppppppcVar21;
  code ******local_130;
  code ******local_118;
  code *******local_110;
  code *******local_108;
  code *****local_100;
  code *****local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_88;
  undefined8 uStack_80;
  code ******local_78;
  code ******local_70 [2];
  
  plVar19 = (long *)(param_1 + 0x178);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar19 == 0) {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar11) {
      *plVar19 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00d65150;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
  do {
    if (*plVar19 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
        while (*plVar19 == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar11) {
            *plVar19 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00d65150;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar11) {
      *plVar19 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d65150:
  pppppppcVar20 = *(code ********)(param_1 + 0x148);
  pppppppcVar1 = (code *******)(param_1 + 0x140);
  if (pppppppcVar20 != pppppppcVar1) {
    plVar19 = (long *)PTR_DAT_047d3918;
    do {
      if (pppppppcVar20[2] == (code ******)0x0) goto LAB_00d65238;
      local_110 = (code *******)0x0;
      local_108 = (code *******)0x0;
      FUN_00ca1a48(&local_110,pppppppcVar20[2] + 9);
      pppppppcVar12 = local_110;
      if (local_110 == (code *******)0x0) {
LAB_00d65230:
        *(undefined1 *)(pppppppcVar20[2] + 0x1e) = 1;
      }
      else {
        sVar13 = *(short *)((long)local_110 + 0x1a);
        if (local_110 != (code *******)0x0) {
          pppppppcVar21 = local_110 + 3;
          do {
            sVar4 = *(short *)pppppppcVar21;
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
            if (bVar11) {
              *(short *)pppppppcVar21 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)local_110 + 0x1c);
            do {
              iVar7 = *piVar3;
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar11) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar8 = *(long *)PTR_DAT_047d3910;
              *plVar19 = lVar8;
              local_70[0] = *pppppppcVar12;
              FUN_00c44438(lVar8 + 0x8040,local_70);
            }
          }
          else if (sVar4 == 0) goto LAB_00d65484;
        }
        if (sVar13 == 0) goto LAB_00d65230;
        local_110 = (code *******)0x0;
        local_108 = (code *******)0x0;
        FUN_00f351dc(&local_110,pppppppcVar20[2] + 0xb);
        pppppppcVar12 = local_110;
        if (local_110 == (code *******)0x0) {
LAB_00d65620:
          local_110 = (code *******)0x0;
          local_108 = (code *******)0x0;
          FUN_00ca1a48(&local_110,pppppppcVar20[2] + 9);
          pppppppcVar12 = local_110;
          if (local_110 != (code *******)0x0) {
            if (*(short *)((long)local_110 + 0x1a) != 0) {
              psVar2 = (short *)((long)local_110 + 0x1a);
              sVar13 = *(short *)((long)local_110 + 0x1a);
              do {
                sVar4 = *psVar2;
                if (sVar4 == sVar13) {
                  cVar5 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar11) {
                    *psVar2 = sVar13 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 != '\0') goto LAB_00d65674;
                  bVar11 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_00d65674:
                  bVar11 = false;
                }
                if (bVar11) {
                  local_130 = (code ******)0x0;
                  if (local_110[2] != (code ******)0x0) {
                    local_130 = local_110[2] + -5;
                  }
                  goto LAB_00d65854;
                }
                sVar13 = sVar4;
              } while (sVar4 != 0);
            }
            local_130 = (code ******)0x0;
LAB_00d65854:
            pppppppcVar21 = local_110 + 3;
            do {
              sVar13 = *(short *)pppppppcVar21;
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
              if (bVar11) {
                *(short *)pppppppcVar21 = sVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar13 == 1) {
              piVar3 = (int *)((long)local_110 + 0x1c);
              do {
                iVar7 = *piVar3;
                cVar5 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar11) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar8 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar8;
                local_70[0] = *pppppppcVar12;
                FUN_00c44438(lVar8 + 0x8040,local_70);
              }
            }
            else if (sVar13 == 0) goto LAB_00d65484;
            plVar19 = (long *)PTR_DAT_047d3918;
            if (local_130 != (code ******)0x0) {
              uVar9 = (*(code *)(*local_130)[0x1b])();
              if ((uVar9 & 1) == 0) {
LAB_00d658a8:
                pppppcVar16 = local_130[6];
                psVar2 = (short *)((long)pppppcVar16 + 0x1a);
                do {
                  sVar13 = *psVar2;
                  cVar5 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar11) {
                    *psVar2 = sVar13 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              else {
                ppppppcVar18 = local_130 + 0x22;
                pppppcVar17 = *ppppppcVar18;
                pppppcVar16 = (code *****)nn::os::GetCurrentThread();
                if (pppppcVar16 != pppppcVar17) {
                  pppppcVar16 = (code *****)nn::os::GetCurrentThread();
LAB_00d65dd8:
                  if (*ppppppcVar18 == (code *****)0x0) goto code_r0x00d65de0;
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(local_130 + 0x23));
                  do {
                    if (*ppppppcVar18 != (code *****)0x0) {
                      do {
                        ClearExclusiveLocal();
                        nn::os::WaitLightEvent((LightEventType *)(local_130 + 0x23));
                        while (*ppppppcVar18 == (code *****)0x0) {
                          cVar5 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(ppppppcVar18,0x10);
                          if (bVar11) {
                            *ppppppcVar18 = pppppcVar16;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                          bVar11 = false;
                          if (cVar5 == '\0') goto LAB_00d65940;
                        }
                      } while( true );
                    }
                    cVar5 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(ppppppcVar18,0x10);
                    if (bVar11) {
                      *ppppppcVar18 = pppppcVar16;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    bVar11 = false;
                  } while (cVar5 != '\0');
                  goto LAB_00d65940;
                }
                bVar11 = true;
LAB_00d65940:
                pppppcVar16 = (code *****)FUN_01e3cf80(local_130[0x25],local_130[0x26]);
                if ((local_130[0x26] == pppppcVar16) || (*pppppcVar16 == (code ****)0x0)) {
                  pppppcVar16 = (code *****)FUN_01e3cf80(local_130[0x2c],local_130[0x2d]);
                  if (local_130[0x2d] == pppppcVar16) {
                    ppppcVar10 = (code ****)0x0;
                  }
                  else {
                    ppppcVar10 = (code ****)0x0;
                    if (*pppppcVar16 != (code ****)0x0) {
                      ppppcVar10 = *pppppcVar16 + -4;
                    }
                  }
                }
                else {
                  ppppcVar10 = *pppppcVar16 + -4;
                }
                if (!bVar11) {
                  local_130[0x22] = (code *****)0x0;
                  nn::os::SignalLightEvent((LightEventType *)(local_130 + 0x23));
                }
                if (ppppcVar10 != (code ****)0x0) {
                  ppppppcVar18 = pppppppcVar20[2];
                  (*(code *)(*ppppcVar10)[3])(&local_110,ppppcVar10);
                  local_88 = (undefined8 *)0x0;
                  uStack_80 = 0;
                  if (local_110[2] == (code ******)(ppppcVar10 + 5)) {
                    FUN_010b7b78(&local_88,&local_110);
                  }
                  pppppppcVar12 = local_110;
                  if (local_110 != (code *******)0x0) {
                    pppppppcVar21 = local_110 + 3;
                    do {
                      sVar13 = *(short *)pppppppcVar21;
                      cVar5 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
                      if (bVar11) {
                        *(short *)pppppppcVar21 = sVar13 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (sVar13 == 1) {
                      piVar3 = (int *)((long)local_110 + 0x1c);
                      do {
                        iVar7 = *piVar3;
                        cVar5 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                        if (bVar11) {
                          *piVar3 = -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (iVar7 != -1) {
                        if (((*PTR_DAT_047d3908 & 1) == 0) &&
                           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                          __cxa_guard_release(PTR_DAT_047d3908);
                        }
                        lVar8 = *(long *)PTR_DAT_047d3910;
                        *(long *)PTR_DAT_047d3918 = lVar8;
                        local_70[0] = *pppppppcVar12;
                        FUN_00c44438(lVar8 + 0x8040,local_70);
                      }
                    }
                    else if (sVar13 == 0) goto LAB_00d65484;
                  }
                  FUN_00f351dc(ppppppcVar18 + 0xb,&local_88);
                  puVar6 = local_88;
                  if (local_88 != (undefined8 *)0x0) {
                    psVar2 = (short *)(local_88 + 3);
                    do {
                      sVar13 = *psVar2;
                      cVar5 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                      if (bVar11) {
                        *psVar2 = sVar13 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (sVar13 == 1) {
                      piVar3 = (int *)((long)local_88 + 0x1c);
                      do {
                        iVar7 = *piVar3;
                        cVar5 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                        if (bVar11) {
                          *piVar3 = -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (iVar7 != -1) {
                        if (((*PTR_DAT_047d3908 & 1) == 0) &&
                           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                          __cxa_guard_release(PTR_DAT_047d3908);
                        }
                        lVar8 = *(long *)PTR_DAT_047d3910;
                        *(long *)PTR_DAT_047d3918 = lVar8;
                        local_110 = (code *******)*puVar6;
                        FUN_00c44438(lVar8 + 0x8040,&local_110);
                      }
                    }
                    else if (sVar13 == 0) goto LAB_00d65484;
                  }
                  FUN_00c705b8(ppppcVar10,*(undefined1 *)(param_1 + 0x1a0));
                }
                local_110 = (code *******)0x0;
                local_108 = (code *******)0x0;
                FUN_00f351dc(&local_110,pppppppcVar20[2] + 0xb);
                pppppppcVar12 = local_110;
                if (local_110 != (code *******)0x0) {
                  sVar13 = *(short *)((long)local_110 + 0x1a);
                  if (local_110 != (code *******)0x0) {
                    pppppppcVar21 = local_110 + 3;
                    do {
                      sVar4 = *(short *)pppppppcVar21;
                      cVar5 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
                      if (bVar11) {
                        *(short *)pppppppcVar21 = sVar4 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (sVar4 == 1) {
                      piVar3 = (int *)((long)local_110 + 0x1c);
                      do {
                        iVar7 = *piVar3;
                        cVar5 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                        if (bVar11) {
                          *piVar3 = -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (iVar7 != -1) {
                        if (((*PTR_DAT_047d3908 & 1) == 0) &&
                           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                          __cxa_guard_release(PTR_DAT_047d3908);
                        }
                        lVar8 = *(long *)PTR_DAT_047d3910;
                        *(long *)PTR_DAT_047d3918 = lVar8;
                        local_70[0] = *pppppppcVar12;
                        FUN_00c44438(lVar8 + 0x8040,local_70);
                      }
                    }
                    else if (sVar4 == 0) {
LAB_00d65484:
                    /* WARNING: Subroutine does not return */
                      nn::diag::detail::AbortImpl
                                ("count != std::numeric_limits<uint16_t>::max()",
                                 "ReleaseWeakReference",
                                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                                 ,0x33,"Reference counter underflows.");
                    }
                  }
                  if (sVar13 != 0) {
                    ppppppcVar18 = pppppppcVar20[2];
                    local_100 = (code *****)0x0;
                    local_f8 = (code *****)0x0;
                    local_110 = (code *******)0x0;
                    local_108 = (code *******)0x0;
                    if (ppppppcVar18[0x10] != (code *****)0x0) {
                      (*(code *)ppppppcVar18[0x10])(ppppppcVar18 + 0x12,&local_f0);
                      local_f8 = ppppppcVar18[0x11];
                      local_108 = (code *******)ppppppcVar18[0xf];
                      local_110 = (code *******)ppppppcVar18[0xe];
                      local_100 = ppppppcVar18[0x10];
                    }
                    local_118 = pppppppcVar20[2];
                    if (local_118 != (code ******)0x0) {
                      pppppcVar16 = local_118[6];
                      if (pppppcVar16[2] == (code ****)0x0) goto LAB_00d6604c;
                      psVar2 = (short *)((long)pppppcVar16 + 0x1a);
                      do {
                        sVar13 = *psVar2;
                        cVar5 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                        if (bVar11) {
                          *psVar2 = sVar13 + 1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (sVar13 == 0) {
                        ppppcVar10 = (code ****)(*(code *)**pppppcVar16[2])();
                        pppppcVar16[1] = ppppcVar10;
                        *(undefined4 *)((long)pppppcVar16 + 0x1c) = 0xfffffffe;
                      }
                      else if (sVar13 == -1) goto LAB_00d65f48;
                    }
                    FUN_01e3d0cc(&local_110,&local_118);
                    if (local_118 != (code ******)0x0) {
                      pppppcVar16 = local_118[6];
                      psVar2 = (short *)((long)pppppcVar16 + 0x1a);
                      do {
                        sVar13 = *psVar2;
                        cVar5 = '\x01';
                        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                        if (bVar11) {
                          *psVar2 = sVar13 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (sVar13 == 1) {
                        pppppcVar16[2] = (code ****)0x0;
                        (*(code *)(*local_118)[10])();
                      }
                      else if (sVar13 == 0) goto LAB_00d65f20;
                    }
                    pppppppcVar12 = local_108;
                    if (local_108 != (code *******)0x0) {
                      local_100 = (code *****)0x0;
                      local_f8 = (code *****)0x0;
                      local_110 = (code *******)0x0;
                      local_108 = (code *******)0x0;
                      (*(code *)pppppppcVar12)(&local_f0);
                    }
                    goto LAB_00d658a8;
                  }
                }
                *(undefined1 *)(pppppppcVar20[2] + 0x1e) = 1;
                pppppcVar16 = local_130[6];
                psVar2 = (short *)((long)pppppcVar16 + 0x1a);
                do {
                  sVar13 = *psVar2;
                  cVar5 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar11) {
                    *psVar2 = sVar13 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              if (sVar13 == 1) {
                pppppcVar16[2] = (code ****)0x0;
                ppppcVar10 = (*local_130)[10];
                goto LAB_00d65760;
              }
              plVar19 = (long *)PTR_DAT_047d3918;
              if (sVar13 == 0) goto LAB_00d65f20;
            }
          }
        }
        else {
          sVar13 = *(short *)((long)local_110 + 0x1a);
          if (local_110 != (code *******)0x0) {
            pppppppcVar21 = local_110 + 3;
            do {
              sVar4 = *(short *)pppppppcVar21;
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
              if (bVar11) {
                *(short *)pppppppcVar21 = sVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar4 == 1) {
              piVar3 = (int *)((long)local_110 + 0x1c);
              do {
                iVar7 = *piVar3;
                cVar5 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar11) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar8 = *(long *)PTR_DAT_047d3910;
                *plVar19 = lVar8;
                local_70[0] = *pppppppcVar12;
                FUN_00c44438(lVar8 + 0x8040,local_70);
              }
            }
            else if (sVar4 == 0) goto LAB_00d65484;
          }
          if (sVar13 == 0) goto LAB_00d65620;
          if (*(char *)((long)pppppppcVar20[2] + 0x44) == '\0') goto LAB_00d65238;
          local_110 = (code *******)0x0;
          local_108 = (code *******)0x0;
          FUN_00f351dc(&local_110,pppppppcVar20[2] + 0xb);
          pppppppcVar12 = local_110;
          if (local_110 == (code *******)0x0) goto LAB_00d65238;
          if (*(short *)((long)local_110 + 0x1a) != 0) {
            psVar2 = (short *)((long)local_110 + 0x1a);
            sVar13 = *(short *)((long)local_110 + 0x1a);
            do {
              sVar4 = *psVar2;
              if (sVar4 == sVar13) {
                cVar5 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar11) {
                  *psVar2 = sVar13 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 != '\0') goto LAB_00d65324;
                bVar11 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_00d65324:
                bVar11 = false;
              }
              if (bVar11) {
                local_130 = (code ******)0x0;
                if (local_110[2] != (code ******)0x0) {
                  local_130 = local_110[2] + -5;
                }
                goto LAB_00d65708;
              }
              sVar13 = sVar4;
            } while (sVar4 != 0);
          }
          local_130 = (code ******)0x0;
LAB_00d65708:
          pppppppcVar21 = local_110 + 3;
          do {
            sVar13 = *(short *)pppppppcVar21;
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pppppppcVar21,0x10);
            if (bVar11) {
              *(short *)pppppppcVar21 = sVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar13 == 1) {
            piVar3 = (int *)((long)local_110 + 0x1c);
            do {
              iVar7 = *piVar3;
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar11) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar8 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar8;
              local_70[0] = *pppppppcVar12;
              FUN_00c44438(lVar8 + 0x8040,local_70);
            }
          }
          else if (sVar13 == 0) goto LAB_00d65484;
          plVar19 = (long *)PTR_DAT_047d3918;
          if (local_130 == (code ******)0x0) goto LAB_00d65238;
          uVar9 = FUN_0143a04c(local_130);
          if ((uVar9 & 1) != 0) {
            *(undefined1 *)(pppppppcVar20[2] + 0x1e) = 1;
          }
          ppppcVar10 = (*local_130)[0xc];
LAB_00d65760:
          (*(code *)ppppcVar10)(local_130);
          plVar19 = (long *)PTR_DAT_047d3918;
        }
      }
LAB_00d65238:
      pppppppcVar20 = (code *******)pppppppcVar20[1];
    } while (pppppppcVar20 != pppppppcVar1);
    pppppppcVar20 = *(code ********)(param_1 + 0x148);
  }
  local_f8 = *(code ******)(param_1 + 0x158);
  local_f0 = *(undefined8 *)(param_1 + 0x160);
  uStack_e8 = 0;
  local_e0 = 0;
  local_100 = (code *****)0x0;
  local_110 = (code *******)&local_110;
  local_108 = (code *******)&local_110;
  if (pppppppcVar1 == pppppppcVar20) goto LAB_00d65180;
  do {
    local_70[0] = pppppppcVar20[2];
    if (local_70[0] == (code ******)0x0) {
      uVar9 = FUN_00d6b2dc(local_70);
joined_r0x00d656dc:
      if ((uVar9 & 1) != 0) goto LAB_00d65548;
LAB_00d653c0:
      pppppppcVar12 = pppppppcVar20;
LAB_00d653c4:
      pppppppcVar20 = (code *******)pppppppcVar12[1];
    }
    else {
      pppppcVar16 = local_70[0][6];
      if (pppppcVar16[2] == (code ****)0x0) {
LAB_00d6604c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)((long)pppppcVar16 + 0x1a);
      do {
        sVar13 = *psVar2;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 0) {
        ppppcVar10 = (code ****)(*(code *)**pppppcVar16[2])();
        pppppcVar16[1] = ppppcVar10;
        *(undefined4 *)((long)pppppcVar16 + 0x1c) = 0xfffffffe;
      }
      else if (sVar13 == -1) {
LAB_00d65f48:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      ppppppcVar18 = local_70[0];
      uVar9 = FUN_00d6b2dc(local_70);
      if (ppppppcVar18 != (code ******)0x0) {
        pppppcVar16 = ppppppcVar18[6];
        psVar2 = (short *)((long)pppppcVar16 + 0x1a);
        do {
          sVar13 = *psVar2;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar11) {
            *psVar2 = sVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar13 == 1) {
          pppppcVar16[2] = (code ****)0x0;
          (*(code *)(*ppppppcVar18)[10])(ppppppcVar18);
          goto joined_r0x00d656dc;
        }
        if (sVar13 == 0) goto LAB_00d65f20;
      }
      if ((uVar9 & 1) == 0) goto LAB_00d653c0;
LAB_00d65548:
      pppppppcVar21 = (code *******)pppppppcVar20[1];
      if (pppppppcVar1 == pppppppcVar21) {
        bVar11 = true;
        pppppppcVar12 = pppppppcVar1;
      }
      else {
        do {
          pppppppcVar12 = pppppppcVar21;
          local_78 = pppppppcVar12[2];
          if (local_78 == (code ******)0x0) {
            uVar9 = FUN_00d6b2dc(&local_78);
          }
          else {
            pppppcVar16 = local_78[6];
            if (pppppcVar16[2] == (code ****)0x0) goto LAB_00d6604c;
            psVar2 = (short *)((long)pppppcVar16 + 0x1a);
            do {
              sVar13 = *psVar2;
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar11) {
                *psVar2 = sVar13 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar13 == 0) {
              ppppcVar10 = (code ****)(*(code *)**pppppcVar16[2])();
              pppppcVar16[1] = ppppcVar10;
              *(undefined4 *)((long)pppppcVar16 + 0x1c) = 0xfffffffe;
            }
            else if (sVar13 == -1) goto LAB_00d65f48;
            ppppppcVar18 = local_78;
            uVar9 = FUN_00d6b2dc(&local_78);
            if (ppppppcVar18 != (code ******)0x0) {
              pppppcVar16 = ppppppcVar18[6];
              psVar2 = (short *)((long)pppppcVar16 + 0x1a);
              do {
                sVar13 = *psVar2;
                cVar5 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar11) {
                  *psVar2 = sVar13 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar13 == 1) {
                pppppcVar16[2] = (code ****)0x0;
                (*(code *)(*ppppppcVar18)[10])(ppppppcVar18);
              }
              else if (sVar13 == 0) goto LAB_00d65f20;
            }
          }
          if ((uVar9 & 1) == 0) {
            bVar11 = false;
            pppppppcVar21 = pppppppcVar12;
            break;
          }
          pppppppcVar21 = (code *******)pppppppcVar12[1];
          bVar11 = true;
          pppppppcVar12 = pppppppcVar1;
        } while (pppppppcVar1 != pppppppcVar21);
      }
      if (pppppppcVar20 != pppppppcVar12) {
        pppppppcVar14 = (code *******)*pppppppcVar21;
        if (&local_110 != (code ********)pppppppcVar1) {
          if (pppppppcVar14 == pppppppcVar20) {
            lVar8 = 1;
          }
          else {
            pppppppcVar15 = (code *******)pppppppcVar20[1];
            if (pppppppcVar15 == pppppppcVar14) {
              lVar8 = 0;
            }
            else {
              lVar8 = 0;
              do {
                pppppppcVar15 = (code *******)pppppppcVar15[1];
                lVar8 = lVar8 + 1;
              } while (pppppppcVar15 != pppppppcVar14);
            }
            lVar8 = lVar8 + 2;
          }
          *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) - lVar8;
          local_100 = (code *****)((long)local_100 + lVar8);
        }
        (*pppppppcVar20)[1] = (code *****)pppppppcVar14[1];
        *pppppppcVar14[1] = (code *****)*pppppppcVar20;
        local_110[1] = (code ******)pppppppcVar20;
        *pppppppcVar20 = (code ******)local_110;
        pppppppcVar14[1] = (code ******)&local_110;
        local_110 = pppppppcVar14;
      }
      pppppppcVar20 = pppppppcVar21;
      if (!bVar11) goto LAB_00d653c4;
    }
    if (pppppppcVar1 == pppppppcVar20) {
      if (local_100 != (code *****)0x0) {
        (*local_108)[1] = (code *****)local_110[1];
        *local_110[1] = (code *****)*local_108;
        local_100 = (code *****)0x0;
        pppppppcVar1 = local_108;
        while ((code ********)pppppppcVar1 != &local_110) {
          pppppppcVar20 = (code *******)pppppppcVar1[1];
          ppppppcVar18 = pppppppcVar1[2];
          if (ppppppcVar18 != (code ******)0x0) {
            pppppcVar16 = ppppppcVar18[6];
            psVar2 = (short *)((long)pppppcVar16 + 0x1a);
            do {
              sVar13 = *psVar2;
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar11) {
                *psVar2 = sVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar13 == 1) {
              pppppcVar16[2] = (code ****)0x0;
              (*(code *)(*ppppppcVar18)[10])();
            }
            else if (sVar13 == 0) {
LAB_00d65f20:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          pppppcVar16 = local_f8;
          uVar9 = (*(code *)(*local_f8)[0x1f])(local_f8);
          if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (*(code *)(*pppppcVar16)[3])(pppppcVar16,pppppppcVar1,0x18,8);
            pppppppcVar1 = pppppppcVar20;
          }
          else {
            FUN_00c48fe8(pppppcVar16,pppppppcVar1,0x18,8);
            pppppppcVar1 = pppppppcVar20;
          }
        }
      }
LAB_00d65180:
      *(undefined8 *)(param_1 + 0x178) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x180));
      return;
    }
  } while( true );
code_r0x00d65de0:
  cVar5 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(ppppppcVar18,0x10);
  if (bVar11) {
    *ppppppcVar18 = pppppcVar16;
    cVar5 = ExclusiveMonitorsStatus();
  }
  bVar11 = false;
  if (cVar5 == '\0') goto LAB_00d65940;
  goto LAB_00d65dd8;
}


