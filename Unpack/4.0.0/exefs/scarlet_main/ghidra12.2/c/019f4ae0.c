/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019f4ae0; name: FUN_019f4ae0
 */


void FUN_019f4ae0(long param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_28;
  
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (FUN_00f63734(&local_28,*(long *)(param_1 + 0x38),param_6), local_28 == (long *)0x0)) {
    FUN_0123c8a0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  uVar6 = FUN_01843160();
  *param_2 = uVar6;
  uVar5 = FUN_019f4bcc(local_28);
  *param_3 = uVar5;
  if (local_28 == (long *)0x0) {
    return;
  }
  lVar7 = local_28[6];
  psVar1 = (short *)(lVar7 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*local_28 + 0x50))();
    return;
  }
  if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


