/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0219e6c8; name: FUN_0219e6c8
 */


void FUN_0219e6c8(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_30;
  long *local_28;
  long *local_8;
  
  local_28 = (long *)*param_2;
  *param_2 = 0;
  FUN_00dbc56c(param_1 + 0x24,&local_28);
  if (local_28 != (long *)0x0) {
    lVar5 = local_28[6];
    psVar1 = (short *)(lVar5 + 0x1a);
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
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*param_1 + 0x150))(&local_8,param_1);
  if (local_8 == (long *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    (**(code **)(*local_8 + 0x40))(&local_30);
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 0x18))();
    }
  }
  if (local_30 != (long *)0x0) {
    lVar5 = local_30[0x39];
    *(undefined1 *)(local_30 + 0x89) = 1;
    for (; (lVar5 != 0 && (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0));
        lVar5 = *(long *)(lVar5 + 0x1a0)) {
      *(undefined1 *)(lVar5 + 0x420) = 1;
    }
    (**(code **)(*local_30 + 0x60))();
  }
  return;
}


