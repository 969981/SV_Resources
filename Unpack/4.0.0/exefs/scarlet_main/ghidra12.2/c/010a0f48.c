/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a0f48; name: FUN_010a0f48
 */


void FUN_010a0f48(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long local_38;
  
  cVar3 = *(char *)(param_2 + 0x60);
  *(char *)(param_1 + 0x60) = cVar3;
  if (cVar3 != '\0') {
    uVar7 = 0;
    do {
      (**(code **)(**(long **)(param_2 + uVar7 * 8 + 0x30) + 0x198))(&local_38);
      plVar8 = (long *)(param_1 + uVar7 * 8 + 0x30);
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != (long *)0x0) {
        lVar6 = plVar5[6];
        psVar1 = (short *)(lVar6 + 0x1a);
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
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar5 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *plVar8 = local_38;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(byte *)(param_1 + 0x60));
  }
  return;
}


