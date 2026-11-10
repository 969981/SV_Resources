/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0110cdc0; name: FUN_0110cdc0
 */


void FUN_0110cdc0(undefined8 *param_1,char *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long local_30 [2];
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
LAB_0110cddc:
    if (*(long *)(param_2 + 8) == 0) goto switchD_0110ce04_default;
  }
  else {
    if (cVar3 != '\x02') {
      if (cVar3 == '\x01') goto LAB_0110cddc;
      if (cVar3 != '\x03') goto switchD_0110ce04_default;
    }
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_0110ce04_default;
  }
  switch(*param_2) {
  case '\0':
  case '\x01':
    FUN_0230d018(param_1,*(undefined8 *)(param_2 + 8));
    return;
  case '\x02':
    local_30[0] = 0;
    local_30[1] = 0;
    FUN_0230d0b0(local_30,param_2 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_0116ddb0(param_1,local_30);
    if (local_30[0] == 0) {
      return;
    }
    psVar1 = (short *)(local_30[0] + 0x18);
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
      return;
    }
    if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    return;
  case '\x03':
    *param_1 = 0;
    param_1[1] = 0;
    FUN_0230d0b0(param_1,param_2 + 8);
    return;
  }
switchD_0110ce04_default:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


