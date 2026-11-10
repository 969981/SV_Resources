/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a30efc; name: FUN_01a30efc
 */


void FUN_01a30efc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *local_30;
  long *local_28;
  undefined1 auStack_8 [8];
  
  FUN_00c9e664(&local_30,param_1 + 0xe8);
  lVar5 = 0;
  if (local_28 != (long *)0x0) {
    lVar5 = local_28[9];
  }
  lVar5 = FUN_01104bd8(lVar5 + 0x108,auStack_8);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x130) == 2)) {
    FUN_00e052fc(*(undefined8 *)(param_1 + 0x138),lVar5 + 0x138);
    *(undefined4 *)(param_1 + 0x130) = 4;
  }
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 5;
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
  return;
}


