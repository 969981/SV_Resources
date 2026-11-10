/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da1f78; name: FUN_00da1f78
 */


void FUN_00da1f78(long param_1,ulong param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  uVar6 = nn::os::TryAcquireSemaphore((SemaphoreType *)(param_1 + 0x438));
  if ((uVar6 & 1) == 0) {
    *(ulong *)(param_1 + 0x468) = param_2;
    return;
  }
  plVar9 = *(long **)(param_1 + 0x408);
  uVar6 = (long)plVar9 - *(long *)(param_1 + 0x400) >> 3;
  if (param_2 < uVar6) {
    plVar2 = (long *)(*(long *)(param_1 + 0x400) + param_2 * 8);
    if (plVar2 != plVar9) {
      do {
        plVar9 = plVar9 + -1;
        plVar7 = (long *)*plVar9;
        if (plVar7 != (long *)0x0) {
          lVar8 = plVar7[6];
          psVar1 = (short *)(lVar8 + 0x1a);
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
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar7 + 0x50))();
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      } while (plVar9 != plVar2);
      *(long **)(param_1 + 0x408) = plVar2;
    }
  }
  else {
    while (uVar6 < param_2) {
      FUN_00da2088(param_1);
      uVar6 = *(long *)(param_1 + 0x408) - *(long *)(param_1 + 0x400) >> 3;
    }
  }
  nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x438));
  return;
}


