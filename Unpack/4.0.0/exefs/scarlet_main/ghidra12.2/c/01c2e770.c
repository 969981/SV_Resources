/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c2e770; name: FUN_01c2e770
 */


void FUN_01c2e770(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *local_138;
  undefined1 auStack_130 [128];
  undefined1 auStack_b0 [128];
  
  puVar2 = PTR_FUN_047d5dd8;
  if (DAT_048125b8 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  FUN_01c0b320(&local_138,param_3);
  FUN_01c30c70(auStack_130,param_2,puVar2,0,&local_138);
  *param_1 = 1;
  memcpy(auStack_b0,auStack_130,0x7e);
  FUN_01c30cb4(param_1 + 8,auStack_b0);
  if (local_138 != (long *)0x0) {
    plVar1 = local_138 + 5;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_138 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


