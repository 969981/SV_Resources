/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026d5298; name: FUN_026d5298
 */


bool FUN_026d5298(long param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_40 [16];
  long *local_30;
  long *local_28;
  
  if ((*(long *)(param_1 + 0x120) == 0) || (*(short *)(*(long *)(param_1 + 0x120) + 0x1a) == 0)) {
    FUN_00c9e664(&local_30,param_1 + 0xe8);
    if (local_30 != (long *)0x0) {
      lVar5 = 0;
      if (local_28 != (long *)0x0) {
        lVar5 = local_28[9];
      }
      lVar5 = FUN_0265dff4(lVar5 + 0x108,auStack_40);
      if (lVar5 != 0) {
        FUN_0265e0e0(auStack_40);
        FUN_0265d62c((long *)(param_1 + 0x120),auStack_40);
        FUN_0265cca0(auStack_40);
      }
    }
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 5;
      do {
        lVar5 = *plVar1;
        iVar3 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x60))();
    }
  }
  lVar5 = *(long *)(param_1 + 0x120);
  if (lVar5 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(short *)(lVar5 + 0x1a) != 0;
  }
  return bVar4;
}


