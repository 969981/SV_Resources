/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029ad27c; name: FUN_029ad27c
 */


/* WARNING: Removing unreachable block (ram,0x029ad698) */
/* WARNING: Removing unreachable block (ram,0x029ad69c) */
/* WARNING: Removing unreachable block (ram,0x029ad6a4) */
/* WARNING: Removing unreachable block (ram,0x029ad6ac) */
/* WARNING: Removing unreachable block (ram,0x029ad7e0) */
/* WARNING: Removing unreachable block (ram,0x029ad6b0) */
/* WARNING: Removing unreachable block (ram,0x029ad458) */
/* WARNING: Removing unreachable block (ram,0x029ad45c) */
/* WARNING: Removing unreachable block (ram,0x029ad464) */
/* WARNING: Removing unreachable block (ram,0x029ad46c) */
/* WARNING: Removing unreachable block (ram,0x029ad754) */
/* WARNING: Removing unreachable block (ram,0x029ad470) */
/* WARNING: Removing unreachable block (ram,0x029ad4a0) */
/* WARNING: Removing unreachable block (ram,0x029ad4a4) */
/* WARNING: Removing unreachable block (ram,0x029ad4ac) */
/* WARNING: Removing unreachable block (ram,0x029ad4b4) */
/* WARNING: Removing unreachable block (ram,0x029ad764) */
/* WARNING: Removing unreachable block (ram,0x029ad4b8) */

void FUN_029ad27c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  undefined1 auStack_48 [8];
  
  puVar5 = (undefined8 *)FUN_00e31554();
  plVar12 = (long *)*puVar5;
  if (plVar12 != (long *)0x0) {
    plVar7 = plVar12 + 5;
    do {
      lVar10 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar10 == -1) goto LAB_029ad834;
  }
  uVar6 = FUN_00f959f4(*(undefined8 *)(param_1 + 0x1a0),0);
  uVar6 = FUN_00ec0c08(*(undefined8 *)(param_1 + 0x1a0),uVar6);
  local_c0 = plVar12;
  plVar7 = (long *)FUN_00cf3764(auStack_48,plVar12[1],&local_c0);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 5;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar10 == -1) goto LAB_029ad834;
  }
  FUN_00ec0d30(plVar7,uVar6,1);
  uVar6 = FUN_00f959f4(*(undefined8 *)(param_1 + 0x1e0),0);
  uVar6 = FUN_00ec0c08(*(undefined8 *)(param_1 + 0x1e0),uVar6);
  local_c0 = plVar12;
  plVar8 = (long *)FUN_00cf3764(auStack_48,plVar12[1],&local_c0);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 5;
    do {
      lVar10 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar10 == -1) goto LAB_029ad834;
  }
  FUN_00ec0d30(plVar8,uVar6,1);
  uVar6 = FUN_00f959f4(*(undefined8 *)(param_1 + 0x220),0);
  uVar6 = FUN_00ec0c08(*(undefined8 *)(param_1 + 0x220),uVar6);
  local_c0 = plVar12;
  plVar9 = (long *)FUN_00cf3764(auStack_48,plVar12[1],&local_c0);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar10 == -1) goto LAB_029ad834;
  }
  FUN_00ec0d30(plVar9,uVar6,1);
  local_70 = (long *)0x0;
  local_c0 = (long *)&DAT_cbf29ce484222645;
  puStack_b8 = &DAT_03c886bc;
  local_b0 = 0;
  local_a8 = (long *)0x0;
  local_a0 = &DAT_cbf29ce484222645;
  puStack_98 = &DAT_03c886bc;
  local_90 = 0;
  local_88 = (long *)0x0;
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar10 == -1) goto LAB_029ad834;
  }
  local_78 = plVar7;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar10 == -1) goto LAB_029ad834;
  }
  local_70 = (long *)0x0;
  local_88 = (long *)0x0;
  local_90 = 0;
  puStack_98 = &DAT_03c886bc;
  local_a0 = &DAT_cbf29ce484222645;
  local_a8 = (long *)0x0;
  local_b0 = 0;
  puStack_b8 = &DAT_03c886bc;
  local_c0 = (long *)&DAT_cbf29ce484222645;
  local_80 = plVar8;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar10 == -1) {
LAB_029ad834:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_88 = (long *)0x0;
  local_90 = 0;
  puStack_98 = &DAT_03c886bc;
  local_a0 = &DAT_cbf29ce484222645;
  local_a8 = (long *)0x0;
  local_b0 = 0;
  puStack_b8 = &DAT_03c886bc;
  local_c0 = (long *)&DAT_cbf29ce484222645;
  local_68 = *(undefined8 *)(param_1 + 8);
  local_70 = plVar9;
  FUN_029ad85c(param_1 + 0x128,&local_c0);
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 5;
    do {
      lVar10 = *plVar1;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_029ad6b4;
  }
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 5;
    do {
      lVar10 = *plVar1;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_029ad6b4;
  }
  if (local_80 != (long *)0x0) {
    plVar1 = local_80 + 5;
    do {
      lVar10 = *plVar1;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_029ad6b4;
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  lVar10 = FUN_00f3be00(uVar6);
  if (lVar10 != 0) {
    plVar1 = (long *)(lVar10 + 0x1d0);
    lVar11 = nn::os::GetCurrentThread();
LAB_029ad570:
    if (*plVar1 == 0) goto code_r0x029ad578;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x1d8));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x1d8));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_029ad580;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_029ad580:
    if (((*PTR_DAT_047d8d80 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8d80), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047dcf10,PTR_DAT_047d8d88,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8d80);
    }
    lVar11 = *(long *)PTR_DAT_047d8d88;
    *(long *)PTR_DAT_047d8d90 = lVar11;
    FUN_00e220f4(lVar10,0,*(undefined8 *)(lVar11 + 0x28));
    *(undefined8 *)(lVar10 + 0x1d0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x1d8));
  }
  *(undefined1 *)(param_1 + 600) = 1;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar10 = *plVar1;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar10 == 0) goto LAB_029ad6b4;
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 5;
    do {
      lVar10 = *plVar9;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar10 == 0) goto LAB_029ad6b4;
  }
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 5;
    do {
      lVar10 = *plVar8;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar10 == 0) goto LAB_029ad6b4;
  }
  if (plVar12 != (long *)0x0) {
    plVar7 = plVar12 + 5;
    do {
      lVar10 = *plVar7;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar10 == 0) {
LAB_029ad6b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
code_r0x029ad578:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar11;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_029ad580;
  goto LAB_029ad570;
}


