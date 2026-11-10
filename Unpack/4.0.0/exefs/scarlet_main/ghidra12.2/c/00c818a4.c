/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c818a4; name: FUN_00c818a4
 */


undefined8
FUN_00c818a4(ushort *param_1,undefined8 *param_2,long param_3,int param_4,undefined8 *param_5)

{
  long *plVar1;
  short *psVar2;
  LightEventType *pLVar3;
  ushort *puVar4;
  ushort uVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  short sVar15;
  long *plVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong local_c8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  lVar13 = param_2[1];
  if ((lVar13 == 0) || (*(short *)(lVar13 + 0x1a) == 0)) {
    plVar16 = (long *)0x0;
  }
  else {
    psVar2 = (short *)(lVar13 + 0x1a);
    sVar15 = *(short *)(lVar13 + 0x1a);
    do {
      sVar6 = *psVar2;
      if (sVar6 == sVar15) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar15 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_00c81f20;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00c81f20:
        bVar8 = false;
      }
      if (bVar8) {
        plVar16 = (long *)0x0;
        if (*(long *)(lVar13 + 0x10) != 0) {
          plVar16 = (long *)(*(long *)(lVar13 + 0x10) + -0x28);
        }
        break;
      }
      plVar16 = (long *)0x0;
      sVar15 = sVar6;
    } while (sVar6 != 0);
  }
  plVar11 = (long *)FUN_00c81fa0(*param_2);
  if ((plVar11 == (long *)0x0) || (iVar10 = (**(code **)(*plVar11 + 0x48))(), iVar10 == 2)) {
    if (param_4 - 2U < 8) {
      uVar17 = *(undefined4 *)(&DAT_03cbf220 + (long)(int)(param_4 - 2U) * 4);
    }
    else {
      uVar17 = 0;
    }
    if (((*PTR_DAT_047db110 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047db110), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047db110);
    }
    uVar19 = *(undefined8 *)PTR_DAT_047db118;
    *(undefined8 *)PTR_DAT_047db120 = uVar19;
    local_88 = *param_5;
    uStack_80 = param_5[1];
    local_78 = param_5[2];
    local_70 = (long *)param_5[3];
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
    FUN_00c82174(&local_68,uVar19,&local_88,uVar17);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    plVar11 = local_68;
    if (local_68 != (long *)0x0) {
      plVar9 = local_68 + 5;
      do {
        lVar13 = *plVar9;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar8) {
          *(int *)plVar9 = (int)lVar13 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((int)lVar13 == -1) {
LAB_00c81f78:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    uVar19 = 0;
    if ((0 < param_3) && (uVar12 = (uint)*param_1, *param_1 != 0)) {
      puVar4 = param_1 + param_3;
      uVar19 = 0;
      do {
        plVar9 = local_68;
        if (uVar12 == 0x10) {
          if ((char)(param_1[2] >> 8) == -1 && (param_1[2] & 0xff) == 1) {
            uVar5 = param_1[1];
            if (uVar5 != 0) {
              if (uVar5 - 1 < 2) {
                local_c8 = 0;
              }
              else {
                local_c8 = (ulong)param_1[4];
              }
              if (uVar5 < 2) {
                uVar14 = 0;
              }
              else {
                uVar14 = (ulong)param_1[3];
              }
              if ((int)local_c8 != 0) {
                uVar20 = 0;
                plVar1 = local_68 + 0xf;
                pLVar3 = (LightEventType *)(local_68 + 0x10);
                do {
                  uVar5 = param_1[uVar14 + uVar20 + 5];
                  if (uVar5 != 0) {
                    lVar13 = nn::os::GetCurrentThread();
LAB_00c81b80:
                    if (*plVar1 == 0) goto code_r0x00c81b88;
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent(pLVar3);
                    do {
                      if (*plVar1 != 0) {
                        do {
                          ClearExclusiveLocal();
                          nn::os::WaitLightEvent(pLVar3);
                          while (*plVar1 == 0) {
                            cVar7 = '\x01';
                            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                            if (bVar8) {
                              *plVar1 = lVar13;
                              cVar7 = ExclusiveMonitorsStatus();
                            }
                            if (cVar7 == '\0') goto LAB_00c81b90;
                          }
                        } while( true );
                      }
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar8) {
                        *plVar1 = lVar13;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
LAB_00c81b90:
                    *(undefined1 *)(plVar9[7] + 0x191e8) = 1;
                    FUN_00c81fa8(plVar9[10],uVar5,(int)plVar9[0xb],
                                 *(undefined2 *)((long)plVar9 + 0x72),0xffffffff,(char)plVar9[0xe]);
                    plVar9[0xf] = 0;
                    nn::os::SignalLightEvent(pLVar3);
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar20 != local_c8);
                uVar12 = (uint)*param_1;
                goto LAB_00c819e0;
              }
            }
          }
LAB_00c81d68:
          lVar13 = (ulong)param_1[1] + 2;
        }
        else {
LAB_00c819e0:
          plVar9 = local_68;
          if (uVar12 == 0x10) goto LAB_00c81d68;
          if (uVar12 == 0x1b) {
            if (plVar11 != (long *)0x0) {
              plVar9 = plVar11 + 5;
              do {
                lVar13 = *plVar9;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar8) {
                  *(int *)plVar9 = (int)lVar13 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if ((int)lVar13 == -1) goto LAB_00c81f78;
            }
            plVar9 = plVar11;
            if (local_68 != (long *)0x0) {
              plVar1 = local_68 + 5;
              do {
                lVar13 = *plVar1;
                iVar10 = (int)lVar13 + -1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar8) {
                  *(int *)plVar1 = iVar10;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar10 == 0) {
                lVar13 = *local_68;
                local_68 = plVar11;
                (**(code **)(lVar13 + 0x10))();
                plVar9 = local_68;
              }
              else {
                local_68 = plVar11;
                if ((int)lVar13 == 0) goto LAB_00c81eac;
              }
            }
LAB_00c81b50:
            local_68 = plVar9;
            lVar13 = 1;
          }
          else {
            if (uVar12 - 0x11 < 10) {
              if ((uVar12 - 0x13 & 0xffff) < 8) {
                uVar17 = *(undefined4 *)(&DAT_03cbf220 + (long)(short)(uVar12 - 0x13) * 4);
              }
              else {
                uVar17 = 0;
              }
              if (((*PTR_DAT_047db110 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047db110), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047dda40,PTR_DAT_047db118,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047db110);
              }
              uVar18 = *(undefined8 *)PTR_DAT_047db118;
              *(undefined8 *)PTR_DAT_047db120 = uVar18;
              local_b0 = *param_5;
              uStack_a8 = param_5[1];
              local_a0 = param_5[2];
              local_98 = (long *)param_5[3];
              if (local_98 != (long *)0x0) {
                (**(code **)(*local_98 + 0x18))();
              }
              FUN_00c82174(&local_90,uVar18,&local_b0,uVar17);
              plVar9 = local_68;
              local_68 = (long *)0x0;
              if (plVar9 != (long *)0x0) {
                plVar1 = plVar9 + 5;
                do {
                  lVar13 = *plVar1;
                  iVar10 = (int)lVar13 + -1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar8) {
                    *(int *)plVar1 = iVar10;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar10 == 0) {
                  (**(code **)(*plVar9 + 0x10))();
                }
                else if ((int)lVar13 == 0) goto LAB_00c81eac;
              }
              local_68 = local_90;
              local_90 = (long *)0x0;
              plVar9 = local_68;
              if (local_98 != (long *)0x0) {
                (**(code **)(*local_98 + 0x20))();
                plVar9 = local_68;
              }
              goto LAB_00c81b50;
            }
            if (uVar12 != 0) {
              plVar1 = local_68 + 0xf;
              lVar13 = nn::os::GetCurrentThread();
LAB_00c81a18:
              if (*plVar1 == 0) goto code_r0x00c81a20;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x10));
              do {
                if (*plVar1 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(plVar9 + 0x10));
                    while (*plVar1 == 0) {
                      cVar7 = '\x01';
                      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar8) {
                        *plVar1 = lVar13;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                      if (cVar7 == '\0') goto LAB_00c81a28;
                    }
                  } while( true );
                }
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar8) {
                  *plVar1 = lVar13;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
LAB_00c81a28:
              *(undefined1 *)(plVar9[7] + 0x191e8) = 1;
              FUN_00c81fa8(plVar9[10],uVar12,(int)plVar9[0xb],*(undefined2 *)((long)plVar9 + 0x72),
                           0xffffffff,(char)plVar9[0xe]);
              plVar9[0xf] = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar9 + 0x10));
            }
            lVar13 = 1;
            uVar19 = 1;
          }
        }
        param_1 = param_1 + lVar13;
      } while ((param_1 < puVar4) && (uVar12 = (uint)*param_1, uVar12 != 0));
    }
    if (plVar11 != (long *)0x0) {
      plVar9 = plVar11 + 5;
      do {
        lVar13 = *plVar9;
        iVar10 = (int)lVar13 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar8) {
          *(int *)plVar9 = iVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      else if ((int)lVar13 == 0) goto LAB_00c81eac;
    }
    if (local_68 != (long *)0x0) {
      plVar11 = local_68 + 5;
      do {
        lVar13 = *plVar11;
        iVar10 = (int)lVar13 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar8) {
          *(int *)plVar11 = iVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
      else if ((int)lVar13 == 0) {
LAB_00c81eac:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  else {
    uVar19 = 0;
  }
  if (plVar16 != (long *)0x0) {
    lVar13 = plVar16[6];
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar15 = *psVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))(plVar16);
    }
    else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return uVar19;
code_r0x00c81b88:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar8) {
    *plVar1 = lVar13;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00c81b90;
  goto LAB_00c81b80;
code_r0x00c81a20:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar8) {
    *plVar1 = lVar13;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00c81a28;
  goto LAB_00c81a18;
}


