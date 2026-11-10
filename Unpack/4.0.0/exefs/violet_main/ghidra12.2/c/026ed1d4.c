/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026ed1d4; name: FUN_026ed1d4
 */


void FUN_026ed1d4(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined1 auStack_60 [48];
  long *local_30;
  long *local_28;
  
  FUN_00c9e664(&local_30,param_2 + 0xe8);
  bVar2 = local_30 != (long *)0x0;
  if (bVar2) {
    lVar5 = local_28[9];
    FUN_015f8734(*(undefined8 *)(lVar5 + 0xc0),*(undefined8 *)(lVar5 + 0xd0),
                 *(undefined8 *)(lVar5 + 0xe0),auStack_60);
    memcpy((void *)(param_1 + 0x10),auStack_60,0x30);
  }
  *(bool *)param_1 = bVar2;
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
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


