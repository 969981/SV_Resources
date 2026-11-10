/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fdd784; name: FUN_00fdd784
 */


void FUN_00fdd784(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  code *pcVar3;
  short sVar4;
  char cVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  short sVar12;
  long lVar13;
  bool bVar14;
  code *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  long *local_d8;
  long alStack_d0 [12];
  undefined8 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_38;
  
  lVar11 = *(long *)(param_2 + 8);
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar12 = *(short *)(lVar11 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar12) {
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00fdd804;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00fdd804:
        bVar14 = false;
      }
      if (bVar14) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 != 0) {
          if ((*(long *)(param_2 + 0x3b8) != 0) &&
             (*(short *)(*(long *)(param_2 + 0x3b8) + 0x1a) != 0)) goto LAB_00fddb40;
          plVar9 = (long *)(lVar11 + 0xe8);
          lVar13 = *plVar9;
          lVar8 = nn::os::GetCurrentThread();
          if (lVar8 == lVar13) {
            bVar14 = true;
            goto LAB_00fdd86c;
          }
          lVar8 = nn::os::GetCurrentThread();
          goto LAB_00fdd858;
        }
        break;
      }
      sVar12 = sVar4;
    } while (sVar4 != 0);
  }
  *param_1 = 0;
  return;
LAB_00fdd858:
  if (*plVar9 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
          while (*plVar9 == 0) {
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar14) {
              *plVar9 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00fdd868;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar14) {
        *plVar9 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00fdd868:
    bVar14 = false;
LAB_00fdd86c:
    plVar9 = (long *)FUN_01f84470(*(undefined8 *)(lVar11 + 0x100),*(undefined8 *)(lVar11 + 0x108));
    if ((*(long **)(lVar11 + 0x108) == plVar9) || (*plVar9 == 0)) {
      plVar9 = (long *)FUN_01f84470(*(undefined8 *)(lVar11 + 0x138),*(undefined8 *)(lVar11 + 0x140))
      ;
      if (*(long **)(lVar11 + 0x140) == plVar9) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if (*plVar9 != 0) {
          lVar8 = *plVar9 + -0x20;
        }
      }
    }
    else {
      lVar8 = *plVar9 + -0x20;
    }
    if (!bVar14) {
      *(undefined8 *)(lVar11 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
    }
    if (lVar8 != 0) {
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      FUN_00c43ef0(&local_f0,lVar8 + 0x98);
      local_70 = (undefined8 *)0x0;
      pcStack_68 = (char *)0x0;
      if (*(long *)(local_f0 + 0x10) == lVar8 + 0x28) {
        FUN_00d94688(&local_70,&local_f0);
      }
      pcVar6 = local_f0;
      if (local_f0 != (code *)0x0) {
        pcVar3 = local_f0 + 0x18;
        do {
          sVar12 = *(short *)pcVar3;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar14) {
            *(short *)pcVar3 = sVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar12 == 1) {
          pcVar3 = local_f0 + 0x1c;
          do {
            iVar7 = *(int *)pcVar3;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
            if (bVar14) {
              *(int *)pcVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_38 = *(long **)pcVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_38);
          }
        }
        else if (sVar12 == 0) goto LAB_00fddc68;
      }
      FUN_00d48230((long *)(param_2 + 0x3b8),&local_70);
      puVar10 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_70 + 3);
        do {
          sVar12 = *psVar1;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar12 == 1) {
          piVar2 = (int *)((long)local_70 + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_f0 = (code *)*puVar10;
            FUN_00c44438(lVar13 + 0x8040,&local_f0);
          }
        }
        else if (sVar12 == 0) goto LAB_00fddc68;
      }
      puVar10 = (undefined8 *)FUN_01a6a8cc(lVar8);
      local_70 = (undefined8 *)&DAT_b49a716fb65dbb9c;
      pcStack_68 = "face";
      local_60 = 4;
      local_58 = (long *)0x0;
      FUN_00f0c464(&local_f0,*puVar10,&local_70);
      FUN_00c43ef0(param_2 + 1000,&local_f0);
      pcVar6 = local_f0;
      *(undefined4 *)(param_2 + 0x400) = local_d8._0_4_;
      *(undefined1 **)(param_2 + 0x3f8) = local_e0;
      if (local_f0 != (code *)0x0) {
        pcVar3 = local_f0 + 0x18;
        do {
          sVar12 = *(short *)pcVar3;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar14) {
            *(short *)pcVar3 = sVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar12 == 1) {
          pcVar3 = local_f0 + 0x1c;
          do {
            iVar7 = *(int *)pcVar3;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
            if (bVar14) {
              *(int *)pcVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_38 = *(long **)pcVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_38);
          }
        }
        else if (sVar12 == 0) goto LAB_00fddc68;
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      puVar10 = (undefined8 *)FUN_01a6a8cc(lVar8);
      local_70 = (undefined8 *)0x3cf22a9518ac7bc;
      pcStack_68 = "mouth";
      local_60 = 5;
      local_58 = (long *)0x0;
      FUN_00f0c464(&local_f0,*puVar10,&local_70);
      FUN_00c43ef0(param_2 + 0x408,&local_f0);
      pcVar6 = local_f0;
      *(undefined4 *)(param_2 + 0x420) = local_d8._0_4_;
      *(undefined1 **)(param_2 + 0x418) = local_e0;
      if (local_f0 != (code *)0x0) {
        pcVar3 = local_f0 + 0x18;
        do {
          sVar12 = *(short *)pcVar3;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar14) {
            *(short *)pcVar3 = sVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar12 == 1) {
          pcVar3 = local_f0 + 0x1c;
          do {
            iVar7 = *(int *)pcVar3;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
            if (bVar14) {
              *(int *)pcVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_38 = *(long **)pcVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_38);
          }
        }
        else if (sVar12 == 0) goto LAB_00fddc68;
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      puVar10 = (undefined8 *)FUN_01a6a8cc(lVar8);
      local_70 = (undefined8 *)0x6f5d089c1c3de9c9;
      pcStack_68 = "speak";
      local_60 = 5;
      local_58 = (long *)0x0;
      FUN_00f0c464(&local_f0,*puVar10,&local_70);
      FUN_00c43ef0(param_2 + 0x428,&local_f0);
      pcVar6 = local_f0;
      *(undefined4 *)(param_2 + 0x440) = local_d8._0_4_;
      *(undefined1 **)(param_2 + 0x438) = local_e0;
      if (local_f0 != (code *)0x0) {
        pcVar3 = local_f0 + 0x18;
        do {
          sVar12 = *(short *)pcVar3;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar14) {
            *(short *)pcVar3 = sVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar12 == 1) {
          pcVar3 = local_f0 + 0x1c;
          do {
            iVar7 = *(int *)pcVar3;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
            if (bVar14) {
              *(int *)pcVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_38 = *(long **)pcVar6;
            FUN_00c44438(lVar13 + 0x8040,&local_38);
          }
        }
        else if (sVar12 == 0) {
LAB_00fddc68:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_f0 = (code *)&DAT_afc4d6c05abef19e;
      local_e8 = (code *)0x3c7b602;
      local_e0 = (undefined1 *)0x7;
      local_d8 = (long *)0x0;
      lVar8 = FUN_01132f14(lVar8,&local_f0);
      if (lVar8 == 0) {
        local_38 = (long *)0x0;
      }
      else {
        FUN_01133f40(&local_38,lVar8,&local_70);
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (local_38 != (long *)0x0) {
        local_70 = (undefined8 *)0x591f64f62d744e1;
        pcStack_68 = "Titan/Facial/SetIntParameter";
        local_60 = 0x1c;
        local_58 = (long *)0x0;
        local_e0 = &LAB_02a1c880;
        local_f0 = FUN_014f52cc;
        local_e8 = FUN_02a1c87c;
        local_d8 = (long *)&LAB_02a1c88c;
        alStack_d0[0] = param_2;
        FUN_01132f58(local_38,&local_70,&local_f0);
        pcVar6 = local_e8;
        if (local_e8 != (code *)0x0) {
          local_e0 = (undefined1 *)0x0;
          local_d8 = (long *)0x0;
          local_f0 = (code *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar6)(alStack_d0);
        }
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        if (local_38 != (long *)0x0) {
          lVar8 = local_38[6];
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar14) {
              *psVar1 = sVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*local_38 + 0x50))();
          }
          else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
    }
LAB_00fddb40:
    lVar8 = *(long *)(param_2 + 0x3b8);
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar12 = *(short *)(lVar8 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar12) {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar14) {
            *psVar1 = sVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00fddf3c;
          bVar14 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00fddf3c:
          bVar14 = false;
        }
        if (bVar14) {
          lVar13 = 0;
          if (*(long *)(lVar8 + 0x10) != 0) {
            lVar13 = *(long *)(lVar8 + 0x10) + -0x28;
          }
          *param_1 = lVar13;
          goto LAB_00fddb50;
        }
        sVar12 = sVar4;
      } while (sVar4 != 0);
    }
    *param_1 = 0;
LAB_00fddb50:
    (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))();
    return;
  }
  cVar5 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar14) {
    *plVar9 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00fdd868;
  goto LAB_00fdd858;
}


