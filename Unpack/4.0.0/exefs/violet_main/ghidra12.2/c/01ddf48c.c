/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ddf48c; name: FUN_01ddf48c
 */


void FUN_01ddf48c(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long *local_38;
  
  FUN_01ddfc10(param_1,0,0);
  FUN_01ddfc10(param_1,1,0);
  FUN_01ddfc10(param_1,2,0);
  FUN_01ddfc10(param_1,3,0);
  FUN_01ddfc10(param_1,4,0);
  FUN_01ddfc10(param_1,5,0);
  FUN_0174fbdc(&local_38);
  iVar4 = FUN_014c0588(local_38);
  if (iVar4 != 0) {
    iVar6 = 0;
    do {
      lVar5 = (**(code **)(*local_38 + 0x60))(local_38,iVar6);
      if (lVar5 != 0) {
        FUN_01ddfdcc(param_1,iVar6,lVar5);
        FUN_01de09a8(param_1,iVar6,lVar5);
        FUN_01ddfc10(param_1,iVar6,1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar4 != iVar6);
  }
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
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
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


