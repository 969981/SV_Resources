/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e5054; name: FUN_010e5054
 */


void FUN_010e5054(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  byte *pbVar14;
  long *plVar15;
  bool bVar16;
  short sVar17;
  byte *__s;
  char *pcVar18;
  long lVar19;
  long *local_b8;
  long local_b0;
  long *local_a8;
  undefined8 local_a0;
  long *local_98;
  long lStack_90;
  long local_88;
  long *local_80;
  long local_78;
  long *local_70 [2];
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  long *local_28;
  
  lVar13 = *param_1;
  if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar13 + 0x1a);
    sVar17 = *(short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar17) {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_010e50c8;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_010e50c8:
        bVar16 = false;
      }
      if (bVar16) {
        lVar13 = *(long *)(lVar13 + 0x10);
        if (lVar13 == 0) {
          return;
        }
        __s = *(byte **)(param_3 + 8);
        if (__s == (byte *)0x0) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          local_60 = *(undefined1 **)PTR_DAT_047d3e30;
          pbStack_58 = *(byte **)(PTR_DAT_047d3e30 + 8);
          local_50 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
          local_48 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x18))();
          }
        }
        else {
          local_50 = strlen((char *)__s);
          bVar3 = *__s;
          pbVar14 = __s;
          local_60 = &DAT_cbf29ce484222645;
          while (bVar3 != 0) {
            pbVar14 = pbVar14 + 1;
            local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar14;
          }
          local_48 = (long *)0x0;
          pbStack_58 = __s;
        }
        if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8ac0);
        }
        uVar7 = *(undefined8 *)PTR_DAT_047d8ac8;
        *(undefined8 *)PTR_DAT_047d8ad0 = uVar7;
        FUN_00f1203c(&local_28,uVar7,&local_60,param_4,0);
        lVar8 = FUN_0104b474(lVar13 + 0xe0,&local_98);
        if (lVar8 != 0) {
          pcVar18 = *(char **)(param_2 + 8);
          if (*pcVar18 == '\0') {
            plVar9 = (long *)FUN_00d44228();
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x18))(plVar9);
            }
          }
          else {
            if (((*PTR_DAT_047d4240 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d4240);
            }
            uVar7 = *(undefined8 *)PTR_DAT_047d4248;
            *(undefined8 *)PTR_DAT_047d4250 = uVar7;
            FUN_00cf9884(&local_98,uVar7,pcVar18);
            plVar9 = local_98;
          }
          local_98 = (long *)PTR_DAT_047d8b70;
          if (plVar9 != (long *)0x0) {
            local_98 = plVar9 + 6;
          }
          local_98 = (long *)*local_98;
          plVar15 = (long *)PTR_PTR_047d4508;
          if (plVar9 != (long *)0x0) {
            plVar15 = plVar9 + 7;
          }
          lStack_90 = *plVar15;
          if (plVar9 == (long *)0x0) {
            local_88 = 0;
          }
          else {
            local_88 = plVar9[8];
          }
          local_80 = (long *)0x0;
          plVar15 = (long *)0x0;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x18))(plVar9);
            plVar15 = plVar9;
          }
          local_80 = plVar15;
          FUN_0104d570(&local_78,lVar8,&local_98);
          if (local_80 != (long *)0x0) {
            (**(code **)(*local_80 + 0x20))();
          }
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))(plVar9);
          }
          if (local_70[0] != (long *)0x0) {
            if ((*(short *)((long)local_70[0] + 0x1a) == 0) || (local_78 == 0)) {
              if (local_70[0] != (long *)0x0) {
                plVar9 = local_70[0] + 3;
                do {
                  sVar17 = (short)*plVar9;
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar16) {
                    *(short *)plVar9 = sVar17 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar17 == 1) {
                  piVar2 = (int *)((long)local_70[0] + 0x1c);
                  do {
                    iVar6 = *piVar2;
                    cVar5 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar16) {
                      *piVar2 = -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    plVar9 = local_70[0];
                  } while (cVar5 != '\0');
                  goto LAB_010e5540;
                }
LAB_010e53e0:
                if (sVar17 == 0) {
LAB_010e53e4:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                             ,0x33,"Reference counter underflows.");
                }
              }
            }
            else {
              local_a0 = 0;
              local_b0 = local_78;
              local_a8 = (long *)0x0;
              FUN_00c81640(&local_a8,local_70);
              lVar19 = local_28[6];
              local_b8 = *(long **)(lVar8 + 0x170);
              if (local_b8 != (long *)0x0) {
                lVar8 = local_b8[6];
                if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("m_object != nullptr","AddReference",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                             ,0x3d);
                }
                psVar1 = (short *)(lVar8 + 0x1a);
                do {
                  sVar17 = *psVar1;
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar16) {
                    *psVar1 = sVar17 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar17 == 0) {
                  uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
                  *(undefined8 *)(lVar8 + 8) = uVar7;
                  *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
                }
                else if (sVar17 == -1) {
                  pcVar18 = "count != 0";
                  pcVar10 = "AddReference";
                  pcVar11 = 
                  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                  ;
                  pcVar12 = "Reference counter overflows.";
                  goto LAB_010e5794;
                }
              }
              FUN_0104ded0(&local_b0,lVar19,&local_b8,10);
              if (local_b8 != (long *)0x0) {
                lVar8 = local_b8[6];
                psVar1 = (short *)(lVar8 + 0x1a);
                do {
                  sVar17 = *psVar1;
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar16) {
                    *psVar1 = sVar17 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar17 == 1) {
                  *(undefined8 *)(lVar8 + 0x10) = 0;
                  (**(code **)(*local_b8 + 0x50))();
                }
                else if (sVar17 == 0) goto LAB_010e5310;
              }
              plVar9 = local_a8;
              if (local_a8 != (long *)0x0) {
                plVar15 = local_a8 + 3;
                do {
                  sVar17 = (short)*plVar15;
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar16) {
                    *(short *)plVar15 = sVar17 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar17 == 1) {
                  piVar2 = (int *)((long)local_a8 + 0x1c);
                  do {
                    iVar6 = *piVar2;
                    cVar5 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar16) {
                      *piVar2 = -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar6 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar8 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar8;
                    local_98 = (long *)*plVar9;
                    FUN_00c44438(lVar8 + 0x8040,&local_98);
                  }
                }
                else if (sVar17 == 0) goto LAB_010e53e4;
              }
              if (local_70[0] != (long *)0x0) {
                plVar9 = local_70[0] + 3;
                do {
                  sVar17 = (short)*plVar9;
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar16) {
                    *(short *)plVar9 = sVar17 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar17 != 1) goto LAB_010e53e0;
                piVar2 = (int *)((long)local_70[0] + 0x1c);
                do {
                  iVar6 = *piVar2;
                  cVar5 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar16) {
                    *piVar2 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  plVar9 = local_70[0];
                } while (cVar5 != '\0');
LAB_010e5540:
                if (iVar6 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar8 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar8;
                  local_98 = (long *)*plVar9;
                  FUN_00c44438(lVar8 + 0x8040,&local_98);
                }
              }
            }
          }
        }
        if (local_28 != (long *)0x0) {
          plVar9 = local_28 + 5;
          do {
            lVar8 = *plVar9;
            iVar6 = (int)lVar8 + -1;
            cVar5 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar16) {
              *(int *)plVar9 = iVar6;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_28 + 0x10))();
          }
          else if ((int)lVar8 == 0) {
            pcVar18 = "count != std::numeric_limits<uint32_t>::max()";
            pcVar10 = "DecrementReferenceInternal";
            pcVar11 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
            ;
            pcVar12 = "Reference counter underflows.";
LAB_010e5794:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl(pcVar18,pcVar10,pcVar11,0x58,pcVar12);
          }
        }
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
        lVar8 = *(long *)(lVar13 + 8);
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar17 = *psVar1;
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar16) {
            *psVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
          return;
        }
        if (sVar17 != 0) {
          return;
        }
LAB_010e5310:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      sVar17 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


