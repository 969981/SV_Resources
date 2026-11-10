/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dfd428; name: FUN_01dfd428
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01dfd428(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  undefined1 auVar7 [16];
  long *local_20;
  long *local_18;
  
  FUN_00c9e664(&local_20,param_1 + 0xe8);
  if (local_18 == (long *)0x0) {
    uVar6 = _DAT_000000e0;
    uVar8 = uRam00000000000000e8;
  }
  else {
    plVar1 = local_18 + 5;
    uVar8 = *(undefined8 *)(local_18[9] + 0xe8);
    uVar6 = *(undefined8 *)(local_18[9] + 0xe0);
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
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_20 != (long *)0x0) {
    (**(code **)(*local_20 + 0x60))();
  }
  auVar7._8_8_ = uVar8;
  auVar7._0_8_ = uVar6;
  return auVar7;
}


