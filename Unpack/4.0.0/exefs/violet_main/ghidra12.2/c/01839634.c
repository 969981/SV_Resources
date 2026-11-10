/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01839634; name: FUN_01839634
 */


void FUN_01839634(long param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  long local_e0 [12];
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_38;
  
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar11 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar11 != 0)) {
    puVar9 = (undefined8 *)FUN_01a6a8cc(lVar11 + -0x28);
    plVar12 = (long *)*puVar9;
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[6];
      if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar10;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    FUN_00c43ef0(&local_100,plVar12 + 6);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    plVar3 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      plVar3 = plVar12 + 5;
    }
    if ((long *)local_100[2] == plVar3) {
      FUN_00f0d1a0(&local_60,&local_100);
    }
    puVar9 = local_100;
    if (local_100 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_100 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_100 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_80 = *puVar9;
          FUN_00c44438(lVar11 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) goto LAB_01839af8;
    }
    local_70 = 0x11;
    local_68 = (long *)0x0;
    local_108 = 0;
    local_80 = 0x865a9dc04bbf40de;
    pcStack_78 = "SyncAnimComponent";
    local_110 = (undefined8 *)0x0;
    FUN_015b6468(&local_110,&local_60);
    local_f0 = (undefined1 *)0x0;
    puStack_e8 = (undefined1 *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    local_e0[2] = 0;
    local_e0[1] = 0;
    local_e0[0] = param_1;
    FUN_015b6468(local_e0 + 1,&local_110);
    local_100 = (undefined8 *)&LAB_017d92f8;
    local_f8 = FUN_01ea6670;
    local_f0 = &LAB_015b6448;
    puStack_e8 = &LAB_01ea6780;
    FUN_01839f8c(plVar12,&local_80,&local_100);
    pcVar7 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (undefined1 *)0x0;
      puStack_e8 = (undefined1 *)0x0;
      local_100 = (undefined8 *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar7)(local_e0);
    }
    puVar9 = local_110;
    if (local_110 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_110 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_110 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *puVar9;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) goto LAB_01839af8;
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_70 = 0x11;
    local_68 = (long *)0x0;
    local_80 = 0x865a9dc04bbf40de;
    pcStack_78 = "SyncAnimComponent";
    local_108 = 0;
    local_110 = (undefined8 *)0x0;
    FUN_015b6468(&local_110,&local_60);
    local_f0 = (undefined1 *)0x0;
    puStack_e8 = (undefined1 *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    local_e0[2] = 0;
    local_e0[1] = 0;
    local_e0[0] = param_1;
    FUN_015b6468(local_e0 + 1,&local_110);
    local_100 = (undefined8 *)&LAB_016a32dc;
    local_f8 = FUN_01ea67a0;
    local_f0 = &LAB_01ea68b0;
    puStack_e8 = &LAB_01ea68d0;
    FUN_0183a8f0(plVar12,&local_80,&local_100);
    pcVar7 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (undefined1 *)0x0;
      puStack_e8 = (undefined1 *)0x0;
      local_100 = (undefined8 *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar7)(local_e0);
    }
    puVar9 = local_110;
    if (local_110 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_110 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_110 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *puVar9;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) goto LAB_01839af8;
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_70 = 0x11;
    local_68 = (long *)0x0;
    local_80 = 0x865a9dc04bbf40de;
    pcStack_78 = "SyncAnimComponent";
    local_108 = 0;
    local_110 = (undefined8 *)0x0;
    FUN_015b6468(&local_110,&local_60);
    local_f0 = (undefined1 *)0x0;
    puStack_e8 = (undefined1 *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    local_e0[2] = 0;
    local_e0[1] = 0;
    local_e0[0] = param_1;
    FUN_015b6468(local_e0 + 1,&local_110);
    local_100 = (undefined8 *)&LAB_0186a3dc;
    local_f8 = FUN_01ea68f0;
    local_f0 = &LAB_01ea6a00;
    puStack_e8 = &LAB_01ea6a20;
    FUN_0183b254(plVar12,&local_80,&local_100);
    pcVar7 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (undefined1 *)0x0;
      puStack_e8 = (undefined1 *)0x0;
      local_100 = (undefined8 *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar7)(local_e0);
    }
    puVar9 = local_110;
    if (local_110 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_110 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_110 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *puVar9;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) goto LAB_01839af8;
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_70 = 0x11;
    local_68 = (long *)0x0;
    local_80 = 0x865a9dc04bbf40de;
    pcStack_78 = "SyncAnimComponent";
    local_108 = 0;
    local_110 = (undefined8 *)0x0;
    FUN_015b6468(&local_110,&local_60);
    local_f0 = (undefined1 *)0x0;
    puStack_e8 = (undefined1 *)0x0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    local_e0[2] = 0;
    local_e0[1] = 0;
    local_e0[0] = param_1;
    FUN_015b6468(local_e0 + 1,&local_110);
    local_100 = (undefined8 *)&LAB_015c067c;
    local_f8 = FUN_01ea6a40;
    local_f0 = &LAB_01ea6b50;
    puStack_e8 = &LAB_01ea6b70;
    FUN_0183bb30(plVar12,&local_80,&local_100);
    pcVar7 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (undefined1 *)0x0;
      puStack_e8 = (undefined1 *)0x0;
      local_100 = (undefined8 *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar7)(local_e0);
    }
    puVar9 = local_110;
    if (local_110 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_110 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_110 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *puVar9;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) goto LAB_01839af8;
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    puVar9 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_100 = (undefined8 *)*puVar9;
          FUN_00c44438(lVar11 + 0x8040,&local_100);
        }
      }
      else if (sVar4 == 0) {
LAB_01839af8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


