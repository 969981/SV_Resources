/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018dfd8c; name: FUN_018dfd8c
 */


void FUN_018dfd8c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  short sVar7;
  
  if ((((*(long *)(param_1 + 0x178) != 0) && (*(short *)(*(long *)(param_1 + 0x178) + 0x1a) != 0))
      && (*(long *)(param_1 + 0x170) != 0)) &&
     ((lVar5 = *(long *)(param_1 + 0x178), lVar5 != 0 && (*(short *)(lVar5 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar7 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_018dfe00;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_018dfe00:
        bVar6 = false;
      }
      if (bVar6) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return;
        }
        lVar4 = FUN_0113ca0c(*(undefined8 *)(param_1 + 0x170));
        *(undefined8 *)(*(long *)(lVar4 + 0x18) + (long)*(int *)(param_1 + 0x188) * 0x10 + 8) =
             *(undefined8 *)(param_1 + 0x168);
        lVar4 = *(long *)(lVar5 + 8);
        psVar1 = (short *)(lVar4 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar7 == 1) {
          *(undefined8 *)(lVar4 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x018dfeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar5 + -0x28) + 0x50))((long *)(lVar5 + -0x28));
          return;
        }
        if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


