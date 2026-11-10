/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299b178; name: FUN_0299b178
 */


void FUN_0299b178(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  long *local_30;
  long *local_28;
  
  FUN_00c9e664(&local_30,param_2 + 0xe8);
  if (local_30 == (long *)0x0) {
    if (local_28 != (long *)0x0) {
      plVar6 = local_28 + 5;
      do {
        lVar5 = *plVar6;
        iVar4 = (int)lVar5 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *(int *)plVar6 = iVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_0299b2e8;
    }
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x60))();
    }
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar3 = PTR_DAT_047d3e30;
    uVar8 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
    param_1[1] = uVar8;
    plVar6 = *(long **)(puVar3 + 0x18);
    param_1[2] = *(undefined8 *)(puVar3 + 0x10);
    param_1[3] = plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
    pcVar7 = *(code **)(*plVar6 + 0x18);
  }
  else {
    lVar5 = local_28[9];
    uVar8 = *(undefined8 *)(lVar5 + 0x370);
    *param_1 = *(undefined8 *)(lVar5 + 0x368);
    param_1[1] = uVar8;
    plVar6 = *(long **)(lVar5 + 0x380);
    param_1[2] = *(undefined8 *)(lVar5 + 0x378);
    param_1[3] = plVar6;
    if ((plVar6 == (long *)0x0) || ((**(code **)(*plVar6 + 0x18))(plVar6), local_28 != (long *)0x0))
    {
      plVar6 = local_28 + 5;
      do {
        lVar5 = *plVar6;
        iVar4 = (int)lVar5 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *(int *)plVar6 = iVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
LAB_0299b2e8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_30 == (long *)0x0) {
      return;
    }
    pcVar7 = *(code **)(*local_30 + 0x60);
  }
  (*pcVar7)();
  return;
}


