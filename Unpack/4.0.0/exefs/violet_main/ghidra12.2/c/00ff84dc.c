/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ff84dc; name: FUN_00ff84dc
 */


void FUN_00ff84dc(long *param_1)

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
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar9 = (long *)param_1[3];
      uVar7 = FUN_00c4e564(plVar9);
      if ((uVar7 & 1) == 0) {
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


