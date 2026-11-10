/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019a8928; name: FUN_019a8928
 */


void FUN_019a8928(long *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (param_3 < *(uint *)(param_2 + 0x88)) {
    uVar1 = *(long *)(param_2 + 0x80) + (long)(int)param_3;
    lVar7 = *(long *)(*(long *)(*(long *)(param_2 + 0x48) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
                     (uVar1 & 0x1ff) * 8);
    *param_1 = lVar7;
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x30);
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
  }
  else {
    *param_1 = 0;
  }
  return;
}


