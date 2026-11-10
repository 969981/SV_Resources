/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02984774; name: FUN_02984774
 */


void FUN_02984774(long param_1,undefined4 param_2,short param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *local_28;
  
  if (param_3 != 0) {
    iVar5 = FUN_0123ee04();
    if ((iVar5 == 0) && (cVar4 = FUN_01689a40(param_1,param_2), cVar4 == '\x01')) {
      FUN_01242424(&local_28,*(undefined8 *)(param_1 + 8));
      (**(code **)(*local_28 + 0x48))(local_28,0xb,1);
      if (local_28 != (long *)0x0) {
        plVar1 = local_28 + 5;
        do {
          lVar3 = *plVar1;
          iVar5 = (int)lVar3 + -1;
          cVar4 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar2) {
            *(int *)plVar1 = iVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
        else if ((int)lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
  }
  return;
}


