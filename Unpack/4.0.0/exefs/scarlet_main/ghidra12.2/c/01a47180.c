/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a47180; name: FUN_01a47180
 */


void FUN_01a47180(long *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [32];
  long *local_38;
  long *local_18;
  
  FUN_01a47280();
  lVar5 = FUN_0126a9c0();
  if (((lVar5 != 0) && (*param_1 != 0)) && (lVar6 = *(long *)(*param_1 + 0x10), lVar6 != 0)) {
    local_38 = param_1;
    FUN_01a45e50(&local_18,lVar5,&local_38,param_2);
    FUN_01f63460(param_1 + 2,&local_18);
    if (local_18 != (long *)0x0) {
      lVar5 = local_18[6];
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
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    FUN_01a844c8(auStack_58,param_1[2]);
    FUN_019bdd8c(lVar6 + -0x28,auStack_58);
    FUN_019b7290(auStack_58);
  }
  return;
}


