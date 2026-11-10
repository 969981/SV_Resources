/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019ddd6c; name: FUN_019ddd6c
 */


void FUN_019ddd6c(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long local_40 [2];
  long local_30;
  undefined8 local_28;
  
  local_30 = param_2;
  uVar5 = FUN_019ded8c(*(undefined8 *)(param_2 + 0x68),&local_30);
  FUN_019ddec4(&local_28,uVar5);
  local_40[0] = *(long *)(param_2 + 0x100);
  *(undefined8 *)(param_2 + 0x100) = 0;
  FUN_019dde4c(local_40);
  uVar5 = local_28;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x100) = uVar5;
  FUN_019dde4c(&local_28);
  FUN_019ddf80(local_40,*(undefined8 *)(param_2 + 0x100));
  *param_1 = 0;
  param_1[1] = 0;
  FUN_019dea64(param_1,local_40);
  if (local_40[0] != 0) {
    psVar1 = (short *)(local_40[0] + 0x18);
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
      FUN_0116e168();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


