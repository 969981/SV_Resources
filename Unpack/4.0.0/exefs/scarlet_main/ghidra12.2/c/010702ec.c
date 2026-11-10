/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010702ec; name: FUN_010702ec
 */


void FUN_010702ec(long param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *local_18;
  
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  if (param_4 == 0x10) {
    FUN_01072038(*(undefined8 *)(param_1 + 0x30),param_2,0x10,uVar3);
  }
  else {
    FUN_0107065c(*(undefined8 *)(param_1 + 0x30),param_2,param_4,uVar3);
  }
  FUN_0106f324(&local_18,*(undefined8 *)(param_1 + 0x30),uVar3);
  if (local_18 != (long *)0x0) {
    FUN_0106fd7c(local_18,param_3);
    lVar6 = local_18[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_18 + 0x50))(local_18);
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


