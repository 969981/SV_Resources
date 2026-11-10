/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01064488; name: FUN_01064488
 */


void FUN_01064488(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_40;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
  if ((*(char *)(param_1 + 800) == '\0') && (*(char *)(param_1 + 0x322) == '\0')) {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar6 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar6;
    uVar5 = *(undefined8 *)(param_1 + 0x318);
    FUN_00c9e664(&local_40,param_1 + 0xe8);
    plVar4 = *(long **)(*(long *)(lVar6 + 0x200) + 0x60);
    iVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,uVar5,*(undefined8 *)(local_38[9] + 0x370));
    *(bool *)(param_1 + 800) = iVar3 == 1;
    if (local_38 != (long *)0x0) {
      plVar4 = local_38 + 5;
      do {
        lVar6 = *plVar4;
        iVar3 = (int)lVar6 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x60))();
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  return;
}


