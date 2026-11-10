/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f5d7b8; name: FUN_00f5d7b8
 */


void FUN_00f5d7b8(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  short sVar15;
  long *plVar16;
  undefined8 *local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  long *local_68;
  
  (**(code **)(*param_1 + 0x18))(&local_98);
  local_70 = (undefined8 *)0x0;
  local_68 = (long *)0x0;
  plVar16 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar16 = param_1 + 5;
  }
  if ((long *)local_98[2] == plVar16) {
    FUN_00cbc6dc(&local_70,&local_98);
  }
  puVar10 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar15 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_98 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_80 = (long *)*puVar10;
        FUN_00c44438(lVar14 + 0x8040,&local_80);
      }
    }
    else if (sVar15 == 0) goto LAB_00f5d86c;
  }
  puVar10 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    if (*(short *)((long)local_70 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_70 + 0x1a);
      sVar15 = *(short *)((long)local_70 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar15) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar15 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00f5d92c;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f5d92c:
          bVar6 = false;
        }
        if (bVar6) {
          plVar16 = (long *)0x0;
          if (local_70[2] != 0) {
            plVar16 = (long *)(local_70[2] + -0x28);
          }
          goto LAB_00f5d954;
        }
        sVar15 = sVar4;
      } while (sVar4 != 0);
    }
    plVar16 = (long *)0x0;
LAB_00f5d954:
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar15 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_70 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_98 = (undefined8 *)*puVar10;
        FUN_00c44438(lVar14 + 0x8040,&local_98);
      }
    }
    else if (sVar15 == 0) {
LAB_00f5d86c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar16 != (long *)0x0) {
      lVar12 = (**(code **)(*param_1 + 0x138))(param_1);
      lVar14 = tpidr_el0;
      if (*(long *)(lVar14 + 0x30) == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar14 + 0x30) = DAT_04859430;
      }
      plVar3 = (long *)(lVar14 + 0x30);
      local_98 = (undefined8 *)*plVar3;
      local_90 = *(long *)(lVar14 + 0x38);
      *plVar3 = lVar12;
      *(undefined2 *)(lVar14 + 0x38) = 1;
      FUN_00e5fd88(param_1 + 0xc2);
      *plVar3 = (long)local_98;
      *(undefined2 *)(lVar14 + 0x38) = (undefined2)local_90;
      plVar13 = (long *)(**(code **)(*param_1 + 0x138))(param_1);
      puVar9 = PTR_DAT_047dd8b0;
      local_88 = (long *)0x0;
      local_98 = (undefined8 *)(PTR_DAT_047dd8b0 + 0x10);
      local_90 = 0;
      if (*plVar3 == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        *(long **)(lVar14 + 0x30) = DAT_04859430;
      }
      local_70 = *(undefined8 **)(lVar14 + 0x30);
      local_68 = *(long **)(lVar14 + 0x38);
      *(long **)(lVar14 + 0x30) = plVar13;
      *(undefined2 *)(lVar14 + 0x38) = 1;
      if (plVar13 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04859438), iVar11 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar13 = DAT_04859430;
        *(long **)(lVar14 + 0x30) = DAT_04859430;
      }
      local_78 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x50,8);
      puVar8 = PTR_DAT_047dd778;
      puVar7 = PTR_DAT_047dd770;
      local_78[1] = 0;
      local_78[2] = 0;
      *local_78 = (long)(puVar7 + 0x10);
      local_80 = local_78 + 3;
      *local_80 = (long)(puVar8 + 0x10);
      local_78[4] = 0;
      local_78[5] = (long)(puVar8 + 0x10);
      local_78[6] = 0;
      local_78[7] = 0;
      local_78[8] = 0;
      local_78[9] = 0;
      if (param_2 != 0) {
        FUN_00f5de3c(param_2,local_80,0);
      }
      FUN_021d3704(&local_90,&local_80);
      if (local_78 != (long *)0x0) {
        plVar3 = local_78 + 1;
        do {
          lVar12 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
          std::__shared_weak_count::__release_weak();
        }
      }
      *(undefined8 **)(lVar14 + 0x30) = local_70;
      *(undefined2 *)(lVar14 + 0x38) = local_68._0_2_;
      FUN_021d3764(param_1 + 0xc2,&local_90);
      local_70 = (undefined8 *)0x0;
      local_68 = (long *)0x0;
      FUN_021d3704(&local_90,&local_70);
      if (local_68 != (long *)0x0) {
        plVar3 = local_68 + 1;
        do {
          lVar14 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_98 = (undefined8 *)(puVar9 + 0x10);
      if (local_90 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("!m_data","~PropertySheetObjectTemplate",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\scene/property_sheet_object_template.h"
                   ,0x5c,&DAT_03be3417);
      }
      if (local_88 != (long *)0x0) {
        plVar3 = local_88 + 1;
        do {
          lVar14 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar14 = plVar16[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
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
  }
  return;
}


