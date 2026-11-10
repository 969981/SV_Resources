/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019fdb98; name: FUN_019fdb98
 */


void FUN_019fdb98(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_28;
  
  lVar6 = FUN_017fe55c();
  FUN_019fdc58(&local_28,*(undefined8 *)(param_1 + 8),param_3);
  plVar7 = *(long **)(lVar6 + 0x18);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
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
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(lVar6 + 0x18) = local_28;
  *(undefined1 *)(lVar6 + 2) = param_4;
  *(undefined4 *)(lVar6 + 0x20) = param_5;
  return;
}


