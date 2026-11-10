/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccf3d8; name: FUN_00ccf3d8
 */


void FUN_00ccf3d8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long local_48;
  long *local_28;
  
  puVar5 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  lVar8 = 0;
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x80) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045d1990;
  param_1[1] = lVar8;
  param_1[4] = (long)&PTR_LAB_045d19c8;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar8 = FUN_00ccfc58(lVar8,param_2,param_3);
  local_48 = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) goto LAB_00ccf630;
  }
  local_28 = (long *)param_1[6];
  param_1[6] = 0;
  FUN_00ccf69c(&local_28);
  local_48 = 0;
  param_1[6] = lVar8;
  FUN_00ccf69c(&local_48);
  lVar8 = FUN_00ccfd98(param_1[1],param_2,param_3);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x20) + 0x10))();
  }
  lVar7 = param_1[7];
  param_1[7] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x20) + 0x18))();
  }
  param_1[7] = lVar8;
  local_28 = (long *)FUN_00ccf800(param_1[1],param_2);
  if (local_28 != (long *)0x0) {
    plVar2 = local_28 + 5;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar8 == -1) goto LAB_00ccf630;
  }
  FUN_00ccf774(param_1 + 8,&local_28);
  if (local_28 != (long *)0x0) {
    plVar2 = local_28 + 5;
    do {
      lVar8 = *plVar2;
      iVar6 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar8 = FUN_00ccf930(param_1[1],param_2);
  local_48 = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) {
LAB_00ccf630:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_28 = (long *)param_1[9];
  param_1[9] = 0;
  FUN_00ccf708(&local_28);
  local_48 = 0;
  param_1[9] = lVar8;
  FUN_00ccf708(&local_48);
  return;
}


