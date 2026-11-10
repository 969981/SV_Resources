/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00aa16b4; name: FUN_00aa16b4
 */


void FUN_00aa16b4(long param_1,int param_2)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  long **pplVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  short sVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  bool bVar20;
  bool bVar21;
  undefined8 *puVar22;
  long *local_80;
  undefined8 uStack_78;
  long lStack_70;
  long **local_68;
  
  if (*(int *)(param_1 + 400) != param_2) {
    *(int *)(param_1 + 400) = param_2;
    plVar14 = (long *)(param_1 + 0x178);
    lVar19 = *plVar14;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 == lVar19) {
      plVar14 = (long *)0x0;
      bVar20 = true;
    }
    else {
      lVar11 = nn::os::GetCurrentThread();
      do {
        if (*plVar14 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
            while (*plVar14 == 0) {
              cVar6 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar20) {
                *plVar14 = lVar11;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_00aa1b38;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar20) {
          *plVar14 = lVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_00aa1b38:
      bVar20 = false;
    }
    puVar8 = PTR_DAT_047d92d8;
    puVar7 = PTR_DAT_047d3918;
    plVar2 = local_80;
    pplVar9 = local_68;
    for (plVar15 = *(long **)(param_1 + 0x58); plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      lVar11 = *(long *)(plVar15[6] + 0x28);
      if (lVar11 != 0) {
        if (*(short *)(lVar11 + 0x1a) != 0) {
          psVar1 = (short *)(lVar11 + 0x1a);
          sVar16 = *(short *)(lVar11 + 0x1a);
LAB_00aa1750:
          sVar5 = *psVar1;
          if (sVar5 == sVar16) {
            cVar6 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar21) {
              *psVar1 = sVar16 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_00aa178c;
            bVar21 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00aa178c:
            bVar21 = false;
          }
          if (!bVar21) goto code_r0x00aa1794;
          lVar11 = *(long *)(lVar11 + 0x10);
          local_80 = &lStack_70;
          local_68 = &local_80;
          if (lVar11 == 0) goto LAB_00aa1734;
          plVar2 = (long *)(lVar11 + 0xe8);
          lVar17 = *plVar2;
          lVar19 = nn::os::GetCurrentThread();
          if (lVar19 == lVar17) {
            bVar21 = true;
          }
          else {
            lVar19 = nn::os::GetCurrentThread();
            do {
              if (*plVar2 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
                  while (*plVar2 == 0) {
                    cVar6 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar21) {
                      *plVar2 = lVar19;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_00aa181c;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar6 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar21) {
                *plVar2 = lVar19;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_00aa181c:
            bVar21 = false;
          }
          lVar19 = FUN_01e20098(&local_68,lVar11 + 0x100);
          if (lVar19 == 0) {
            lVar19 = FUN_01e20098(&local_68,lVar11 + 0x138);
          }
          if (!bVar21) {
            *(undefined8 *)(lVar11 + 0xe8) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
          }
          if ((lVar19 != 0) && (uVar12 = FUN_01e3a5f0(lVar19), (uVar12 & 1) != 0)) {
            local_80 = (long *)0x0;
            uStack_78 = 0;
            if ((*(long *)(lVar19 + 0x120) != 0) &&
               (puVar22 = *(undefined8 **)(*(long *)(lVar19 + 0x120) + 8),
               puVar22 != (undefined8 *)0x0)) {
              if (((*PTR_DAT_047d92d0 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d92d0), iVar10 != 0)) {
                uVar13 = FUN_01e2b0d8();
                *(undefined8 *)puVar8 = uVar13;
                __cxa_guard_release(PTR_DAT_047d92d0);
              }
              do {
                if (puVar22 == (undefined8 *)puVar8) {
                  FUN_01193608(&local_80,lVar19 + 0x120);
                  break;
                }
                puVar22 = (undefined8 *)*puVar22;
              } while (puVar22 != (undefined8 *)0x0);
            }
            plVar2 = local_80;
            if (local_80 != (long *)0x0) {
              if (*(short *)((long)local_80 + 0x1a) != 0) {
                psVar1 = (short *)((long)local_80 + 0x1a);
                sVar16 = *(short *)((long)local_80 + 0x1a);
                do {
                  sVar5 = *psVar1;
                  if (sVar5 == sVar16) {
                    cVar6 = '\x01';
                    bVar21 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar21) {
                      *psVar1 = sVar16 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 != '\0') goto LAB_00aa19a4;
                    bVar21 = true;
                  }
                  else {
                    ClearExclusiveLocal();
LAB_00aa19a4:
                    bVar21 = false;
                  }
                  if (bVar21) {
                    plVar18 = (long *)0x0;
                    if (local_80[2] != 0) {
                      plVar18 = (long *)(local_80[2] + -0x28);
                    }
                    goto LAB_00aa19cc;
                  }
                  sVar16 = sVar5;
                  if (sVar5 == 0) break;
                } while( true );
              }
              plVar18 = (long *)0x0;
LAB_00aa19cc:
              plVar3 = local_80 + 3;
              do {
                sVar16 = (short)*plVar3;
                cVar6 = '\x01';
                bVar21 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar21) {
                  *(short *)plVar3 = sVar16 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar16 == 1) {
                piVar4 = (int *)((long)local_80 + 0x1c);
                do {
                  iVar10 = *piVar4;
                  cVar6 = '\x01';
                  bVar21 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                  if (bVar21) {
                    *piVar4 = -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar19 = *(long *)PTR_DAT_047d3910;
                  *(long *)puVar7 = lVar19;
                  local_68 = (long **)*plVar2;
                  FUN_00c44438(lVar19 + 0x8040,&local_68);
                }
              }
              else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
              if (plVar18 != (long *)0x0) {
                FUN_01e2b1ec(plVar18,param_2);
                lVar19 = plVar18[6];
                psVar1 = (short *)(lVar19 + 0x1a);
                do {
                  sVar16 = *psVar1;
                  cVar6 = '\x01';
                  bVar21 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar21) {
                    *psVar1 = sVar16 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (sVar16 == 1) {
                  *(undefined8 *)(lVar19 + 0x10) = 0;
                  (**(code **)(*plVar18 + 0x50))(plVar18);
                }
                else if (sVar16 == 0) goto LAB_00aa1b98;
              }
            }
          }
          lVar19 = *(long *)(lVar11 + 8);
          psVar1 = (short *)(lVar19 + 0x1a);
          do {
            sVar16 = *psVar1;
            cVar6 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar21) {
              *psVar1 = sVar16 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar16 == 1) {
            *(undefined8 *)(lVar19 + 0x10) = 0;
            (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))();
            plVar2 = local_80;
            pplVar9 = local_68;
          }
          else {
            plVar2 = local_80;
            pplVar9 = local_68;
            if (sVar16 == 0) {
LAB_00aa1b98:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
        }
      }
LAB_00aa1734:
      local_68 = pplVar9;
      local_80 = plVar2;
      plVar2 = local_80;
      pplVar9 = local_68;
    }
    if (!bVar20) {
      *plVar14 = 0;
      local_80 = plVar2;
      local_68 = pplVar9;
      nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
    }
  }
  return;
code_r0x00aa1794:
  sVar16 = sVar5;
  if (sVar5 == 0) goto LAB_00aa1734;
  goto LAB_00aa1750;
}


