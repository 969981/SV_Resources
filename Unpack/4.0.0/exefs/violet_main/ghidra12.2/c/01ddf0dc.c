/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ddf0dc; name: FUN_01ddf0dc
 */


undefined4 FUN_01ddf0dc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  long *local_8;
  
  if ((*(char *)(param_1 + 0x1714) == '\0') || (FUN_00eeb8d0(&local_8), local_8 == (long *)0x0)) {
    return 1;
  }
  iVar5 = FUN_01ddf5e4(param_1);
  uVar6 = 4;
  if (iVar5 == 1) {
    uVar6 = 1;
  }
  if (local_8 == (long *)0x0) {
    return uVar6;
  }
  plVar1 = local_8 + 5;
  do {
    lVar4 = *plVar1;
    iVar5 = (int)lVar4 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*local_8 + 0x10))();
    return uVar6;
  }
  if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return uVar6;
}


