/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029ff044; name: FUN_029ff044
 */


void FUN_029ff044(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  plVar9 = (long *)*param_1;
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)param_1[1];
  plVar5 = plVar9;
  if (plVar10 != plVar9) {
    do {
      plVar10 = plVar10 + -1;
      plVar5 = (long *)*plVar10;
      if (plVar5 != (long *)0x0) {
        lVar8 = plVar5[6];
        psVar1 = (short *)(lVar8 + 0x1a);
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
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar5 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    } while (plVar10 != plVar9);
    plVar5 = (long *)*param_1;
  }
  param_1[1] = plVar9;
  lVar8 = param_1[2];
  plVar9 = (long *)param_1[3];
  uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00c4e600();
    if (0 < *(int *)(lVar7 + 0x12c8)) {
      FUN_00c48fe8(plVar9,plVar5,lVar8 - (long)plVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x029ff0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,plVar5,lVar8 - (long)plVar5,8);
  return;
}


