/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027556cc; name: FUN_027556cc
 */


void FUN_027556cc(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *local_60;
  long *local_58;
  long *local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x160));
  plVar6 = *(long **)(param_1 + 0x128);
  if (plVar6 != *(long **)(param_1 + 0x130)) {
    do {
      lVar5 = *plVar6;
      FUN_00c9e664(&local_60,param_1 + 0xe8);
      local_38 = local_60;
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x58))();
      }
      (**(code **)(*(long *)(lVar5 + 0x30) + 0x20))
                ((long *)(lVar5 + 0x30),param_2,param_1 + 0x120,&local_38);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x60))();
      }
      if (local_58 != (long *)0x0) {
        plVar1 = local_58 + 5;
        do {
          lVar5 = *plVar1;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
        else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x60))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != *(long **)(param_1 + 0x130));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x160));
  return;
}


