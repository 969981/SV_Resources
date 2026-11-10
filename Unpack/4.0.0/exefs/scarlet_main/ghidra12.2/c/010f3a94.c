/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010f3a94; name: FUN_010f3a94
 */


undefined8 FUN_010f3a94(long param_1)

{
  code *pcVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  short sVar22;
  long *plVar23;
  bool bVar24;
  long *plVar25;
  long *plVar26;
  undefined8 *local_120;
  undefined8 uStack_118;
  long *local_110;
  code *local_108;
  undefined1 *local_100;
  long *local_f8;
  long alStack_f0 [12];
  long local_90;
  char *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70 [2];
  
  FUN_010f42fc(&local_110);
  plVar26 = local_110;
  if (local_110 != (long *)0x0) {
    sVar22 = *(short *)((long)local_110 + 0x1a);
    if (local_110 != (long *)0x0) {
      plVar23 = local_110 + 3;
      do {
        sVar4 = (short)*plVar23;
        cVar6 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar24) {
          *(short *)plVar23 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_110 + 0x1c);
        do {
          iVar15 = *piVar3;
          cVar6 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar24) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar15 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar20 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar20;
          local_90 = *plVar26;
          FUN_00c44438(lVar20 + 0x8040,&local_90);
        }
      }
      else if (sVar4 == 0) goto LAB_010f3be8;
    }
    if (sVar22 != 0) {
      FUN_010f42fc(&local_110,param_1);
      plVar26 = local_110;
      if (local_110 != (long *)0x0) {
        if (*(short *)((long)local_110 + 0x1a) != 0) {
          psVar2 = (short *)((long)local_110 + 0x1a);
          sVar22 = *(short *)((long)local_110 + 0x1a);
          do {
            sVar4 = *psVar2;
            if (sVar4 == sVar22) {
              cVar6 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar24) {
                *psVar2 = sVar22 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 != '\0') goto LAB_010f3dcc;
              bVar24 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_010f3dcc:
              bVar24 = false;
            }
            if (bVar24) {
              plVar23 = (long *)0x0;
              if (local_110[2] != 0) {
                plVar23 = (long *)(local_110[2] + -0x28);
              }
              goto LAB_010f3df4;
            }
            sVar22 = sVar4;
          } while (sVar4 != 0);
        }
        plVar23 = (long *)0x0;
LAB_010f3df4:
        plVar25 = local_110 + 3;
        do {
          sVar22 = (short)*plVar25;
          cVar6 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar24) {
            *(short *)plVar25 = sVar22 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar22 == 1) {
          piVar3 = (int *)((long)local_110 + 0x1c);
          do {
            iVar15 = *piVar3;
            cVar6 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar24) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar15 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar20 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar20;
            local_90 = *plVar26;
            FUN_00c44438(lVar20 + 0x8040,&local_90);
          }
        }
        else if (sVar22 == 0) {
LAB_010f3be8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
        if (plVar23 != (long *)0x0) {
          uVar17 = FUN_0177fff8(plVar23);
          *(undefined8 *)(param_1 + 0x198) = uVar17;
          lVar20 = plVar23[0x13];
          psVar2 = (short *)(lVar20 + 0x1a);
          do {
            sVar22 = *psVar2;
            cVar6 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar24) {
              *psVar2 = sVar22 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar22 == 1) {
            *(undefined8 *)(lVar20 + 0x10) = 0;
            (**(code **)(*plVar23 + 0x50))(plVar23);
          }
          else if (sVar22 == 0) {
LAB_010f3e48:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      plVar26 = *(long **)(param_1 + 0x130);
      plVar23 = *(long **)(param_1 + 0x138);
      if (plVar23 == plVar26) {
        FUN_00c9e664(&local_110,param_1 + 0xe8);
        if (local_108 == (code *)0x0) {
          lVar20 = 0;
        }
        else {
          lVar20 = *(long *)(local_108 + 0x48);
        }
        plVar26 = (long *)(lVar20 + 0x110);
        lVar21 = *plVar26;
        local_90 = param_1;
        lVar16 = nn::os::GetCurrentThread();
        if (lVar16 != lVar21) {
          lVar16 = nn::os::GetCurrentThread();
          bVar24 = false;
LAB_010f3d38:
          if (*plVar26 == 0) goto code_r0x010f3d40;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x118));
          bVar24 = false;
          do {
            if (*plVar26 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x118));
                while (*plVar26 == 0) {
                  cVar6 = '\x01';
                  bVar24 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                  if (bVar24) {
                    *plVar26 = lVar16;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  bVar24 = false;
                  if (cVar6 == '\0') goto LAB_010f3c44;
                }
              } while( true );
            }
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar5) {
              *plVar26 = lVar16;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          goto LAB_010f3c44;
        }
        bVar24 = true;
LAB_010f3c44:
        FUN_010f4b30(*(undefined8 *)(lVar20 + 0x128),*(undefined8 *)(lVar20 + 0x130),&local_90);
        FUN_010f4b30(*(undefined8 *)(lVar20 + 0x160),*(undefined8 *)(lVar20 + 0x168),&local_90);
        if (!bVar24) {
          *(undefined8 *)(lVar20 + 0x110) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x118));
        }
        if (local_108 != (code *)0x0) {
          pcVar1 = local_108 + 0x28;
          do {
            iVar15 = *(int *)pcVar1;
            iVar7 = iVar15 + -1;
            cVar6 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar24) {
              *(int *)pcVar1 = iVar7;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*(long *)local_108 + 0x10))();
          }
          else if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        if (local_110 != (long *)0x0) {
          (**(code **)(*local_110 + 0x60))();
        }
        plVar26 = *(long **)(param_1 + 0x130);
        plVar23 = *(long **)(param_1 + 0x138);
        if (plVar23 == plVar26) {
          return 0;
        }
      }
      puVar13 = PTR_LAB_047d4118;
      puVar12 = PTR_DAT_047d3e30;
      puVar11 = PTR_DAT_047d3e28;
      if (plVar26 != plVar23) {
        do {
          lVar20 = *plVar26;
          if ((lVar20 != 0) && (*(short *)(lVar20 + 0x1a) != 0)) {
            psVar2 = (short *)(lVar20 + 0x1a);
            sVar22 = *(short *)(lVar20 + 0x1a);
LAB_010f3e88:
            sVar4 = *psVar2;
            if (sVar4 == sVar22) {
              cVar6 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar24) {
                *psVar2 = sVar22 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 != '\0') goto LAB_010f3eac;
              bVar24 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_010f3eac:
              bVar24 = false;
            }
            if (!bVar24) goto code_r0x010f3eb4;
            lVar20 = *(long *)(lVar20 + 0x10);
            if (lVar20 != 0) {
              plVar25 = (long *)(lVar20 + -0x28);
              if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar11), iVar15 != 0)) {
                FUN_00100190(puVar13,puVar12,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar11);
              }
              uVar18 = FUN_015255c0(plVar25,puVar12);
              lVar20 = *(long *)(lVar20 + 0x70);
              psVar2 = (short *)(lVar20 + 0x1a);
              do {
                sVar22 = *psVar2;
                cVar6 = '\x01';
                bVar24 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar24) {
                  *psVar2 = sVar22 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar22 == 1) {
                *(undefined8 *)(lVar20 + 0x10) = 0;
                (**(code **)(*plVar25 + 0x50))(plVar25);
              }
              else if (sVar22 == 0) goto LAB_010f3e48;
              if ((uVar18 & 1) == 0) {
                return 0;
              }
            }
          }
LAB_010f3b30:
          puVar10 = PTR_LAB_047d3de8;
          puVar9 = PTR_DAT_047d3910;
          puVar8 = PTR_DAT_047d3908;
          plVar26 = plVar26 + 3;
        } while (plVar26 != plVar23);
        lVar20 = *(long *)(param_1 + 0x130);
        lVar16 = *(long *)(param_1 + 0x138);
        if (lVar20 != lVar16) {
          do {
            if (*(char *)(lVar20 + 0x10) == '\0') {
              local_120 = (undefined8 *)0x0;
              uStack_118 = 0;
              FUN_00d4ca00(&local_120,lVar20);
              if (local_120 != (undefined8 *)0x0) {
                if (*(short *)((long)local_120 + 0x1a) != 0) {
                  psVar2 = (short *)((long)local_120 + 0x1a);
                  sVar22 = *(short *)((long)local_120 + 0x1a);
LAB_010f3f28:
                  sVar4 = *psVar2;
                  if (sVar4 == sVar22) {
                    cVar6 = '\x01';
                    bVar24 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                    if (bVar24) {
                      *psVar2 = sVar22 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 != '\0') goto LAB_010f3f4c;
                    bVar24 = true;
                  }
                  else {
                    ClearExclusiveLocal();
LAB_010f3f4c:
                    bVar24 = false;
                  }
                  if (!bVar24) goto code_r0x010f3f54;
                  lVar21 = local_120[2];
                  if (lVar21 != 0) {
                    local_f8 = (long *)0x0;
                    plVar26 = (long *)(lVar21 + -0x28);
                    local_110 = (long *)&DAT_afc4d6c05abef19e;
                    local_108 = (code *)0x3c7b602;
                    local_100 = (undefined1 *)0x7;
                    lVar19 = FUN_01132f14(plVar26,&local_110);
                    if (lVar19 == 0) {
                      local_70[0] = (long *)0x0;
                    }
                    else {
                      FUN_011343b4(local_70,lVar19,&local_90);
                    }
                    if (local_f8 != (long *)0x0) {
                      (**(code **)(*local_f8 + 0x20))();
                    }
                    if (local_70[0] != (long *)0x0) {
                      local_78 = (long *)0x0;
                      local_90 = 0x7abf4174137c14c1;
                      local_88 = "Audio/PokeVoiceEvent";
                      uStack_80 = 0x14;
                      local_110 = (long *)&LAB_020e17ac;
                      local_108 = FUN_02acb378;
                      local_100 = &LAB_02acb37c;
                      local_f8 = (long *)&LAB_02acb388;
                      alStack_f0[0] = param_1;
                      FUN_01133d3c(local_70[0],&local_90,&local_110);
                      pcVar1 = local_108;
                      if (local_108 != (code *)0x0) {
                        local_100 = (undefined1 *)0x0;
                        local_f8 = (long *)0x0;
                        local_110 = (long *)0x0;
                        local_108 = (code *)0x0;
                        (*pcVar1)(alStack_f0);
                      }
                      if (local_78 != (long *)0x0) {
                        (**(code **)(*local_78 + 0x20))();
                      }
                      if (local_70[0] != (long *)0x0) {
                        lVar19 = local_70[0][6];
                        psVar2 = (short *)(lVar19 + 0x1a);
                        do {
                          sVar22 = *psVar2;
                          cVar6 = '\x01';
                          bVar24 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                          if (bVar24) {
                            *psVar2 = sVar22 + -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (sVar22 == 1) {
                          *(undefined8 *)(lVar19 + 0x10) = 0;
                          (**(code **)(*local_70[0] + 0x50))();
                        }
                        else if (sVar22 == 0) goto LAB_010f3e48;
                      }
                    }
                    lVar21 = *(long *)(lVar21 + 0x70);
                    psVar2 = (short *)(lVar21 + 0x1a);
                    do {
                      sVar22 = *psVar2;
                      cVar6 = '\x01';
                      bVar24 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                      if (bVar24) {
                        *psVar2 = sVar22 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (sVar22 == 1) {
                      *(undefined8 *)(lVar21 + 0x10) = 0;
                      (**(code **)(*plVar26 + 0x50))(plVar26);
                    }
                    else if (sVar22 == 0) goto LAB_010f3e48;
                  }
                }
LAB_010f4090:
                puVar14 = local_120;
                if (local_120 != (undefined8 *)0x0) {
                  psVar2 = (short *)(local_120 + 3);
                  do {
                    sVar22 = *psVar2;
                    cVar6 = '\x01';
                    bVar24 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                    if (bVar24) {
                      *psVar2 = sVar22 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (sVar22 == 1) {
                    piVar3 = (int *)((long)local_120 + 0x1c);
                    do {
                      iVar15 = *piVar3;
                      cVar6 = '\x01';
                      bVar24 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                      if (bVar24) {
                        *piVar3 = -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (iVar15 != -1) {
                      if (((*puVar8 & 1) == 0) &&
                         (iVar15 = __cxa_guard_acquire(puVar8), iVar15 != 0)) {
                        FUN_00100190(puVar10,puVar9,&PTR_LOOP_04483000);
                        __cxa_guard_release(puVar8);
                      }
                      lVar21 = *(long *)puVar9;
                      *(long *)PTR_DAT_047d3918 = lVar21;
                      local_110 = (long *)*puVar14;
                      FUN_00c44438(lVar21 + 0x8040,&local_110);
                    }
                  }
                  else if (sVar22 == 0) goto LAB_010f3be8;
                }
              }
              *(undefined1 *)(lVar20 + 0x10) = 1;
            }
            lVar20 = lVar20 + 0x18;
            if (lVar20 == lVar16) {
              return 1;
            }
          } while( true );
        }
      }
      return 1;
    }
  }
  return 0;
code_r0x010f3d40:
  cVar6 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
  if (bVar5) {
    *plVar26 = lVar16;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_010f3c44;
  goto LAB_010f3d38;
code_r0x010f3eb4:
  sVar22 = sVar4;
  if (sVar4 == 0) goto LAB_010f3b30;
  goto LAB_010f3e88;
code_r0x010f3f54:
  sVar22 = sVar4;
  if (sVar4 == 0) goto LAB_010f4090;
  goto LAB_010f3f28;
}


