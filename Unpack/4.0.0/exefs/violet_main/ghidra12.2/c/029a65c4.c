/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a65c4; name: FUN_029a65c4
 */


void FUN_029a65c4(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *local_18;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x460));
  FUN_0231cfc0(&local_18,param_1,param_2);
  if (local_18 != (long *)0x0) {
    if (*(uint *)((long)local_18 + 0x4c) == 2) {
      FUN_00d9d890(local_18);
    }
    else if ((*(uint *)((long)local_18 + 0x4c) & 0xfffffffd) == 1) {
      FUN_0159d450(0,local_18);
    }
    plVar1 = local_18 + 5;
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
      (**(code **)(*local_18 + 0x10))(local_18);
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x460));
  return;
}


