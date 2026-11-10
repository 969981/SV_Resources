/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ec3fd8; name: FUN_00ec3fd8
 */


void FUN_00ec3fd8(long *param_1,long param_2,long param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *local_48;
  
  if (param_4 == (long *)0x0) {
    param_4 = *(long **)(param_2 + 8);
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00ec433c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_4;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*param_4 + 0x10))(param_4,0x40,8);
  puVar5 = PTR_DAT_047d66f8;
  if (plVar8 == (long *)0x0) {
    lVar7 = *param_4;
LAB_00ec437c:
    (**(code **)(lVar7 + 0xe8))(param_4);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar8[2] = 0;
  *(undefined4 *)(plVar8 + 3) = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  nn::os::GetTlsValue(DAT_04865a30);
  plVar10 = plVar8 + 5;
  *(int *)plVar10 = 0;
  plVar8[4] = (long)&PTR_LAB_045d3290;
  plVar8[2] = (long)plVar8;
  *plVar8 = (long)&PTR_LAB_045d31a8;
  plVar8[1] = (long)param_4;
  plVar8[6] = (long)&PTR_LAB_045d32c0;
  plVar8[7] = param_3;
  *(undefined4 *)(plVar8 + 3) = 0x80040;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  do {
    lVar7 = *plVar10;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *(int *)plVar10 = (int)lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((int)lVar7 == -1) {
LAB_00ec4314:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  do {
    lVar7 = *plVar10;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *(int *)plVar10 = (int)lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_48 = plVar8;
  if ((int)lVar7 == -1) goto LAB_00ec4314;
  param_4 = *(long **)(param_2 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00ec433c;
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_4;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  lVar9 = (**(code **)(*param_4 + 0x10))(param_4,0xa0,8);
  if (lVar9 == 0) {
    lVar7 = *param_4;
    goto LAB_00ec437c;
  }
  FUN_00ec43a4();
  *(undefined4 *)(lVar9 + 0x18) = 0x800a0;
  *(long **)(lVar9 + 8) = param_4;
  *(long *)(lVar9 + 0x10) = lVar9;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  piVar1 = (int *)(lVar9 + 0x28);
  *param_1 = lVar9;
  do {
    iVar6 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == -1) goto LAB_00ec4314;
  FUN_00ec5800(*param_1,&local_48);
  if (local_48 != (long *)0x0) {
    plVar2 = local_48 + 5;
    do {
      lVar7 = *plVar2;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_00ec4340;
  }
  do {
    lVar7 = *plVar10;
    iVar6 = (int)lVar7 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *(int *)plVar10 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else if ((int)lVar7 == 0) {
LAB_00ec4340:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


