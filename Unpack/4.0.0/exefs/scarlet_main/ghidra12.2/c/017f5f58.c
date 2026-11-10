/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f5f58; name: FUN_017f5f58
 */


undefined8 FUN_017f5f58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined2 uVar6;
  long *local_8;
  
  uVar6 = FUN_0136b00c(*(undefined8 *)(param_1 + 0x48));
  *(undefined2 *)(param_1 + 0x200) = uVar6;
  uVar6 = FUN_0136b004(*(undefined8 *)(param_1 + 0x48));
  *(undefined2 *)(param_1 + 0x202) = uVar6;
  uVar6 = FUN_010a91f8(*(undefined8 *)(param_1 + 0x48));
  *(undefined2 *)(param_1 + 0x204) = uVar6;
  FUN_017f6014(&local_8,*(undefined8 *)(param_1 + 0x48));
  FUN_017f6074(local_8,*(long *)(param_1 + 0x50),*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x30));
  if (local_8 != (long *)0x0) {
    plVar1 = local_8 + 5;
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
      (**(code **)(*local_8 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return 1;
}


