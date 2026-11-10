/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011686e0; name: FUN_011686e0
 */


void FUN_011686e0(long param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *local_48;
  long *local_28;
  
  lVar9 = *param_2;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) goto LAB_01168980;
  }
  plVar8 = (long *)(param_1 + 0x70);
  plVar6 = (long *)*plVar8;
  *plVar8 = lVar9;
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 5;
    do {
      lVar9 = *plVar2;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_011688c8;
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x70) + 0x30);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_1 + 0x30);
  (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x30) + 0x10))(&local_48);
  (**(code **)(*(long *)(DAT_0485a0c8 + 0x30) + 0x50))
            (&local_28,(long *)(DAT_0485a0c8 + 0x30),&local_48,param_3);
  if (local_48 != (long *)0x0) {
    plVar6 = local_48 + 5;
    do {
      lVar9 = *plVar6;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_011688c8;
  }
  plVar6 = *(long **)(param_1 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar6;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,0xa0,8);
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0xe8))(plVar6);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_011689dc(lVar7,&local_28,plVar8);
  *(undefined4 *)(lVar7 + 0x18) = 0x800a0;
  *(long **)(lVar7 + 8) = plVar6;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  piVar1 = (int *)(lVar7 + 0x28);
  do {
    iVar5 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == -1) {
LAB_01168980:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  plVar8 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 5;
    do {
      lVar9 = *plVar6;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_011688c8;
  }
  *(long *)(param_1 + 0x78) = lVar7;
  if (local_28 != (long *)0x0) {
    plVar8 = local_28 + 5;
    do {
      lVar9 = *plVar8;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
LAB_011688c8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


