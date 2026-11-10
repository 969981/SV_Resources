/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb8d30; name: FUN_00cb8d30
 */


void FUN_00cb8d30(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_38;
  
  *param_1 = &DAT_045a4b90;
  param_1[4] = &PTR_LAB_045a4ce0;
  param_1[5] = &DAT_045a4d30;
  param_1[0x1f] = &PTR_LAB_045a4d88;
  param_1[0xa8] = &PTR_LAB_045a4df8;
  plVar7 = (long *)param_1[0xfc];
  param_1[0xa9] = &PTR_LAB_045a4e48;
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 5;
    do {
      lVar10 = *plVar13;
      iVar6 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00cb9028;
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xfa));
  lVar10 = param_1[0xf0];
  if (lVar10 != 0) {
    lVar12 = param_1[0xf2];
    param_1[0xf1] = lVar10;
    plVar7 = (long *)param_1[0xf3];
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,lVar12 - lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar10,lVar12 - lVar10,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xee));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xe2));
  plVar7 = (long *)param_1[0xd8];
  if (plVar7 != (long *)0x0) {
    plVar13 = (long *)*plVar7;
    if ((code *)plVar7[4] != (code *)0x0) {
      (*(code *)plVar7[4])(plVar7 + 6);
    }
    plVar14 = (long *)param_1[0xd9];
    uVar8 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar7,0x40,0x10);
    }
    else {
      FUN_00c48fe8(plVar14,plVar7,0x40,0x10);
    }
    while (plVar13 != (long *)0x0) {
      plVar7 = (long *)*plVar13;
      if ((code *)plVar13[4] != (code *)0x0) {
        (*(code *)plVar13[4])(plVar13 + 6);
      }
      plVar14 = (long *)param_1[0xd9];
      uVar8 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,plVar13,0x40,0x10);
        plVar13 = plVar7;
      }
      else {
        FUN_00c48fe8(plVar14,plVar13,0x40,0x10);
        plVar13 = plVar7;
      }
    }
  }
  lVar10 = param_1[0xd5];
  param_1[0xd5] = 0;
  if (lVar10 != 0) {
    FUN_00cba5c4(param_1 + 0xd6);
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xd3));
  if (param_1[0xce] != 0) {
    FUN_00d3f1dc(param_1 + 0xce);
    lVar12 = param_1[0xce];
    lVar10 = param_1[0xd0];
    plVar7 = (long *)param_1[0xd1];
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar12,lVar10 - lVar12,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar12,lVar10 - lVar12,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xcc));
  if (param_1[199] != 0) {
    FUN_00d3f1dc(param_1 + 199);
    lVar12 = param_1[199];
    lVar10 = param_1[0xc9];
    plVar7 = (long *)param_1[0xca];
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar12,lVar10 - lVar12,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar12,lVar10 - lVar12,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xc5));
  param_1[0xc1] = PTR_DAT_047dd8b0 + 0x10;
  if (param_1[0xc2] != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("!m_data","~PropertySheetObjectTemplate",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\scene/property_sheet_object_template.h"
               ,0x5c,&DAT_03be3417);
  }
  plVar7 = (long *)param_1[0xc3];
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 1;
    do {
      lVar10 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar11 = (undefined8 *)param_1[0xbd];
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_00cb8ef8;
  }
  if ((long *)param_1[0xbc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xbc] + 0x20))();
  }
  puVar11 = (undefined8 *)param_1[0xb9];
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_00cb8ef8;
  }
  if ((long *)param_1[0xb8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb8] + 0x20))();
  }
  puVar11 = (undefined8 *)param_1[0xb4];
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_00cb8ef8;
  }
  puVar11 = (undefined8 *)param_1[0xb2];
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) {
LAB_00cb8ef8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xb0));
  param_1[0xa9] = PTR_DAT_047dd588 + 0x10;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xac));
  plVar7 = (long *)param_1[0xaa];
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 5;
    do {
      lVar10 = *plVar13;
      iVar6 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_00cb9028:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00cb9504(param_1);
  return;
}


