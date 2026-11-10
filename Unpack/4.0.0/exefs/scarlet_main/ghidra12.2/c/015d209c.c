/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d209c; name: FUN_015d209c
 */


void FUN_015d209c(undefined8 *param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  short sVar14;
  long lVar15;
  long *plVar16;
  undefined8 *local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  long *local_100;
  long *local_f8;
  undefined8 *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [104];
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  long local_38;
  
  if ((*(int *)(param_1 + 9) == 0) && (param_1[10] != 0)) {
    local_f0 = param_1;
    if (*(int *)((long)param_1 + 0x4c) == 0) {
      plVar11 = (long *)FUN_015d2dfc(&local_60,param_1[1],&local_f0);
      if (plVar11 == (long *)0x0) {
        local_68 = (long *)0x0;
      }
      else {
        lVar15 = plVar11[6];
        if (*(long *)(lVar15 + 0x10) == 0) goto LAB_015d28c4;
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          *(undefined8 *)(lVar15 + 8) = uVar12;
          *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
        }
        else if (sVar14 == -1) goto LAB_015d28e4;
        lVar15 = plVar11[6];
        local_68 = plVar11;
        if (*(long *)(lVar15 + 0x10) == 0) goto LAB_015d28c4;
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          *(undefined8 *)(lVar15 + 8) = uVar12;
          *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
        }
        else if (sVar14 == -1) goto LAB_015d28e4;
      }
      FUN_014740ac(param_1 + 10,&local_68);
      if (local_68 != (long *)0x0) {
        lVar15 = local_68[6];
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*local_68 + 0x50))();
        }
        else if (sVar14 == 0) goto LAB_015d290c;
      }
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar15 = plVar11[6];
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    else {
      if (*(int *)((long)param_1 + 0x4c) != 1) {
        return;
      }
      plVar11 = (long *)FUN_015d2dfc(&local_60,param_1[1],&local_f0);
      if (plVar11 != (long *)0x0) {
        lVar15 = plVar11[6];
        if (*(long *)(lVar15 + 0x10) == 0) goto LAB_015d28c4;
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          *(undefined8 *)(lVar15 + 8) = uVar12;
          *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
        }
        else if (sVar14 == -1) goto LAB_015d28e4;
      }
      if (((*PTR_DAT_047da868 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047da868), iVar10 != 0)) {
        FUN_00100190(&LAB_00ae377c,PTR_DAT_047da870,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047da868);
      }
      local_f0 = (undefined8 *)0x0;
      local_e8 = (code *)0x0;
      uVar12 = *(undefined8 *)PTR_DAT_047da870;
      *(undefined8 *)PTR_DAT_047da878 = uVar12;
      FUN_00c43ef0(&local_f0,param_1 + 6);
      local_60 = (long *)0x0;
      uStack_58 = 0;
      if ((undefined8 *)local_f0[2] == param_1 + 5) {
        FUN_015d2a6c(&local_60,&local_f0);
      }
      puVar7 = local_f0;
      if (local_f0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_f0 + 3);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 1) {
          piVar3 = (int *)((long)local_f0 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_100 = (long *)*puVar7;
            FUN_00c44438(lVar15 + 0x8040,&local_100);
          }
        }
        else if (sVar14 == 0) goto LAB_015d24d0;
      }
      plVar9 = local_60;
      if (local_60 == (long *)0x0) {
        plVar16 = (long *)0x0;
      }
      else {
        if (*(short *)((long)local_60 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_60 + 0x1a);
          sVar14 = *(short *)((long)local_60 + 0x1a);
          do {
            sVar4 = *psVar1;
            if (sVar4 == sVar14) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar14 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_015d25e8;
              bVar6 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_015d25e8:
              bVar6 = false;
            }
            if (bVar6) {
              plVar16 = (long *)0x0;
              if (local_60[2] != 0) {
                plVar16 = (long *)(local_60[2] + -0x28);
              }
              goto LAB_015d2628;
            }
            sVar14 = sVar4;
          } while (sVar4 != 0);
        }
        plVar16 = (long *)0x0;
LAB_015d2628:
        plVar2 = local_60 + 3;
        do {
          sVar14 = (short)*plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(short *)plVar2 = sVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 1) {
          piVar3 = (int *)((long)local_60 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_f0 = (undefined8 *)*plVar9;
            FUN_00c44438(lVar15 + 0x8040,&local_f0);
          }
        }
        else if (sVar14 == 0) goto LAB_015d24d0;
      }
      local_100 = plVar16;
      if (plVar16 != (long *)0x0) {
        lVar15 = plVar16[6];
        if (*(long *)(lVar15 + 0x10) == 0) goto LAB_015d28c4;
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          *(undefined8 *)(lVar15 + 8) = uVar13;
          *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
        }
        else if (sVar14 == -1) goto LAB_015d28e4;
      }
      local_f8 = plVar11;
      if (plVar11 != (long *)0x0) {
        lVar15 = plVar11[6];
        if (*(long *)(lVar15 + 0x10) == 0) {
LAB_015d28c4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          *(undefined8 *)(lVar15 + 8) = uVar13;
          *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
        }
        else if (sVar14 == -1) {
LAB_015d28e4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = (undefined8 *)0x0;
      local_e8 = (code *)0x0;
      FUN_015d2d90(&local_f0,&local_100);
      local_60 = (long *)0x0;
      uStack_58 = 0;
      FUN_00c43ef0(&local_60,param_1 + 6);
      local_120 = (undefined8 *)0x0;
      uStack_118 = 0;
      if ((undefined8 *)local_60[2] == param_1 + 5) {
        FUN_015d2a6c(&local_120,&local_60);
      }
      plVar9 = local_60;
      if (local_60 != (long *)0x0) {
        plVar2 = local_60 + 3;
        do {
          sVar14 = (short)*plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(short *)plVar2 = sVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 1) {
          piVar3 = (int *)((long)local_60 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_38 = *plVar9;
            FUN_00c44438(lVar15 + 0x8040,&local_38);
          }
        }
        else if (sVar14 == 0) goto LAB_015d24d0;
      }
      local_110 = (undefined8 *)0x0;
      uStack_108 = 0;
      FUN_0177de7c(&local_110,&local_120);
      FUN_0174ab80(uVar12,&local_f0,&local_110);
      puVar7 = local_110;
      if (local_110 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_110 + 3);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 1) {
          piVar3 = (int *)((long)local_110 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_60 = (long *)*puVar7;
            FUN_00c44438(lVar15 + 0x8040,&local_60);
          }
        }
        else if (sVar14 == 0) goto LAB_015d24d0;
      }
      puVar7 = local_120;
      if (local_120 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_120 + 3);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 1) {
          piVar3 = (int *)((long)local_120 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_60 = (long *)*puVar7;
            FUN_00c44438(lVar15 + 0x8040,&local_60);
          }
        }
        else if (sVar14 == 0) {
LAB_015d24d0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      pcVar8 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = (undefined8 *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar8)(auStack_d0);
      }
      if (local_f8 != (long *)0x0) {
        lVar15 = local_f8[6];
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*local_f8 + 0x50))();
        }
        else if (sVar14 == 0) goto LAB_015d290c;
      }
      if (local_100 != (long *)0x0) {
        lVar15 = local_100[6];
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*local_100 + 0x50))();
        }
        else if (sVar14 == 0) goto LAB_015d290c;
      }
      if (plVar16 != (long *)0x0) {
        lVar15 = plVar16[6];
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar14 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar14 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*plVar16 + 0x50))(plVar16);
        }
        else if (sVar14 == 0) goto LAB_015d290c;
      }
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar15 = plVar11[6];
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (sVar14 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar14 == 0) {
LAB_015d290c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


