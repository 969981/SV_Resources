/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02552f98; name: FUN_02552f98
 */


void FUN_02552f98(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  code *pcVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *local_30 [2];
  
  pcVar2 = FUN_0255c254;
  if (DAT_04850ad8 == '\0') {
    pcVar2 = (code *)0x0;
  }
  FUN_0255c4fc(local_30,param_2,pcVar2,0);
  FUN_0255c570(param_1,local_30);
  if (local_30[0] != (long *)0x0) {
    lVar6 = local_30[0][6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_30[0] + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


