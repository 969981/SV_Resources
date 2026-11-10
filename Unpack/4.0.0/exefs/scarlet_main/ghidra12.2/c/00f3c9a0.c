/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f3c9a0; name: FUN_00f3c9a0
 */


void FUN_00f3c9a0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long local_40;
  undefined8 local_38;
  
  *param_1 = (long)&DAT_045a0188;
  param_1[4] = (long)&PTR_LAB_045a0208;
  param_1[5] = (long)&DAT_045a0258;
  param_1[8] = (long)&PTR_LAB_045a02b0;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar9 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar9;
  FUN_00f3ce40(uVar9,param_1);
  lVar11 = param_1[1];
  lVar10 = tpidr_el0;
  if (*(long *)(lVar10 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar10 + 0x30) = DAT_04859430;
  }
  local_40 = *(long *)(lVar10 + 0x30);
  local_38 = *(undefined8 *)(lVar10 + 0x38);
  *(long *)(lVar10 + 0x30) = lVar11;
  *(undefined2 *)(lVar10 + 0x38) = 1;
  plVar12 = (long *)param_1[0x1a];
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 1;
    do {
      lVar11 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(long *)(lVar10 + 0x30) = local_40;
  *(undefined2 *)(lVar10 + 0x38) = (undefined2)local_38;
  param_1[0x18] = (long)&PTR_LAB_045a0340;
  if (param_1[0x19] != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("!m_data","~PropertySheetObjectTemplate",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\scene/property_sheet_object_template.h"
               ,0x5c,&DAT_03be3417);
  }
  plVar12 = (long *)param_1[0x1a];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 1;
    do {
      lVar10 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((char)param_1[0x14] != '\0') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  plVar12 = (long *)param_1[0xe];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 3;
    do {
      sVar5 = (short)*plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(short *)plVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)plVar12 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_40 = *plVar12;
        FUN_00c44438(lVar10 + 0x8040,&local_40);
      }
    }
    else if (sVar5 == 0) goto LAB_00f3cb54;
  }
  if ((long *)param_1[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd] + 0x20))();
  }
  param_1[8] = (long)(PTR_DAT_047dd588 + 0x10);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xb));
  plVar12 = (long *)param_1[9];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 5;
    do {
      lVar10 = *plVar3;
      iVar8 = (int)lVar10 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  plVar12 = (long *)param_1[6];
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 3;
    do {
      sVar5 = (short)*plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(short *)plVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)plVar12 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_40 = *plVar12;
        FUN_00c44438(lVar10 + 0x8040,&local_40);
      }
    }
    else if (sVar5 == 0) {
LAB_00f3cb54:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


