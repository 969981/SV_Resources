/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01807a20; name: FUN_01807a20
 */


void FUN_01807a20(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  char *pcVar6;
  long *local_68 [4];
  long *local_48;
  long *local_38;
  
  lVar5 = param_1[10];
  pcVar6 = (char *)(lVar5 + (ulong)param_3 * 0x48 + 0x40);
  if ((*pcVar6 == '\0') && (param_3 < *(uint *)(param_1 + 2))) {
    FUN_0105016c(local_68,param_2);
    FUN_01807b48(&local_38,lVar5 + (ulong)param_3 * 0x48,local_68,*param_1);
    if (local_38 != (long *)0x0) {
      lVar5 = local_38[6];
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
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_68[0] != (long *)0x0) {
      (**(code **)(*local_68[0] + 0x20))();
    }
    *pcVar6 = '\x01';
    FUN_01807c30(param_1,param_4);
  }
  return;
}


