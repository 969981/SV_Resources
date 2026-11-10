/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029d1bf8; name: FUN_029d1bf8
 */


void FUN_029d1bf8(long *param_1)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  if (param_1[2] != 0) {
    lVar8 = *param_1;
    plVar4 = (long *)param_1[1];
    *(undefined8 *)(*plVar4 + 8) = *(undefined8 *)(lVar8 + 8);
    **(long **)(lVar8 + 8) = *plVar4;
    param_1[2] = 0;
    while (plVar4 != param_1) {
      plVar3 = (long *)plVar4[1];
      plVar9 = (long *)plVar4[2];
      if (plVar9 != (long *)0x0) {
        lVar8 = plVar9[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar2 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar9 = (long *)param_1[3];
      uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar4,0x18,8);
        plVar4 = plVar3;
      }
      else {
        FUN_00c48fe8(plVar9,plVar4,0x18,8);
        plVar4 = plVar3;
      }
    }
  }
  return;
}


