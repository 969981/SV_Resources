/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0111d018; name: FUN_0111d018
 */


void FUN_0111d018(long *param_1,long param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  short sVar13;
  char *pcVar14;
  long *local_88;
  long local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  long lStack_60;
  long local_58;
  long *local_50;
  long local_48;
  long *local_40 [2];
  
  lVar10 = *param_1;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar13 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar13) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0111d084;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0111d084:
        bVar12 = false;
      }
      if (bVar12) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return;
        }
        lVar6 = FUN_0104b474(lVar10 + 0xe0,&local_68);
        if (lVar6 != 0) {
          pcVar14 = *(char **)(param_2 + 8);
          if (*pcVar14 == '\0') {
            plVar8 = (long *)FUN_00d44228();
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x18))(plVar8);
            }
          }
          else {
            if (((*PTR_DAT_047d4240 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
              FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d4240);
            }
            uVar7 = *(undefined8 *)PTR_DAT_047d4248;
            *(undefined8 *)PTR_DAT_047d4250 = uVar7;
            FUN_00cf9884(&local_68,uVar7,pcVar14);
            plVar8 = local_68;
          }
          local_68 = (long *)PTR_DAT_047d8b70;
          if (plVar8 != (long *)0x0) {
            local_68 = plVar8 + 6;
          }
          local_68 = (long *)*local_68;
          plVar11 = (long *)PTR_PTR_047d4508;
          if (plVar8 != (long *)0x0) {
            plVar11 = plVar8 + 7;
          }
          lStack_60 = *plVar11;
          if (plVar8 == (long *)0x0) {
            local_58 = 0;
          }
          else {
            local_58 = plVar8[8];
          }
          local_50 = (long *)0x0;
          plVar11 = (long *)0x0;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x18))(plVar8);
            plVar11 = plVar8;
          }
          local_50 = plVar11;
          FUN_0104d570(&local_48,lVar6,&local_68);
          if (local_50 != (long *)0x0) {
            (**(code **)(*local_50 + 0x20))();
          }
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))(plVar8);
          }
          if (local_40[0] != (long *)0x0) {
            if ((*(short *)((long)local_40[0] + 0x1a) == 0) || (local_48 == 0)) {
              if (local_40[0] != (long *)0x0) {
                plVar8 = local_40[0] + 3;
                do {
                  sVar13 = (short)*plVar8;
                  cVar4 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar12) {
                    *(short *)plVar8 = sVar13 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar13 != 1) goto LAB_0111d2cc;
                piVar2 = (int *)((long)local_40[0] + 0x1c);
                do {
                  iVar5 = *piVar2;
                  cVar4 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar12) {
                    *piVar2 = -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  plVar8 = local_40[0];
                } while (cVar4 != '\0');
LAB_0111d40c:
                if (iVar5 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar6 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar6;
                  local_68 = (long *)*plVar8;
                  FUN_00c44438(lVar6 + 0x8040,&local_68);
                }
              }
            }
            else {
              local_70 = 0;
              local_80 = local_48;
              local_78 = (long *)0x0;
              FUN_00c81640(&local_78,local_40);
              uVar7 = *(undefined8 *)(*param_3 + 0x30);
              local_88 = *(long **)(lVar6 + 0x170);
              if (local_88 != (long *)0x0) {
                lVar6 = local_88[6];
                if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("m_object != nullptr","AddReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                             ,0x3d);
                }
                psVar1 = (short *)(lVar6 + 0x1a);
                do {
                  sVar13 = *psVar1;
                  cVar4 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar12) {
                    *psVar1 = sVar13 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar13 == 0) {
                  uVar9 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
                  *(undefined8 *)(lVar6 + 8) = uVar9;
                  *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
                }
                else if (sVar13 == -1) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != 0","AddReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                             ,0x58,"Reference counter overflows.");
                }
              }
              FUN_0104ded0(&local_80,uVar7,&local_88,10);
              if (local_88 != (long *)0x0) {
                lVar6 = local_88[6];
                psVar1 = (short *)(lVar6 + 0x1a);
                do {
                  sVar13 = *psVar1;
                  cVar4 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar12) {
                    *psVar1 = sVar13 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar13 == 1) {
                  *(undefined8 *)(lVar6 + 0x10) = 0;
                  (**(code **)(*local_88 + 0x50))();
                }
                else if (sVar13 == 0) goto LAB_0111d23c;
              }
              plVar8 = local_78;
              if (local_78 != (long *)0x0) {
                plVar11 = local_78 + 3;
                do {
                  sVar13 = (short)*plVar11;
                  cVar4 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar12) {
                    *(short *)plVar11 = sVar13 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar13 == 1) {
                  piVar2 = (int *)((long)local_78 + 0x1c);
                  do {
                    iVar5 = *piVar2;
                    cVar4 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar12) {
                      *piVar2 = -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar5 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar6 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar6;
                    local_68 = (long *)*plVar8;
                    FUN_00c44438(lVar6 + 0x8040,&local_68);
                  }
                }
                else if (sVar13 == 0) goto LAB_0111d2d0;
              }
              if (local_40[0] != (long *)0x0) {
                plVar8 = local_40[0] + 3;
                do {
                  sVar13 = (short)*plVar8;
                  cVar4 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar12) {
                    *(short *)plVar8 = sVar13 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar13 == 1) {
                  piVar2 = (int *)((long)local_40[0] + 0x1c);
                  do {
                    iVar5 = *piVar2;
                    cVar4 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar12) {
                      *piVar2 = -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    plVar8 = local_40[0];
                  } while (cVar4 != '\0');
                  goto LAB_0111d40c;
                }
LAB_0111d2cc:
                if (sVar13 == 0) {
LAB_0111d2d0:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                             ,0x33,"Reference counter underflows.");
                }
              }
            }
          }
        }
        lVar6 = *(long *)(lVar10 + 8);
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar13 = *psVar1;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
          return;
        }
        if (sVar13 != 0) {
          return;
        }
LAB_0111d23c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      sVar13 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


