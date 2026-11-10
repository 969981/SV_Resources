/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c787c8; name: FUN_00c787c8
 */


void FUN_00c787c8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_1[1];
  lVar8 = param_1[2];
  do {
    if (lVar8 == lVar9) {
      lVar9 = *param_1;
      if (lVar9 == 0) {
        return;
      }
      lVar8 = param_1[3];
      plVar5 = *(long **)param_1[4];
      uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if ((uVar6 & 1) != 0) {
        lVar7 = FUN_00c4e600();
        if (0 < *(int *)(lVar7 + 0x12c8)) {
          FUN_00c48fe8(plVar5,lVar9,lVar8 - lVar9,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00c78878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar8 - lVar9,8);
      return;
    }
    param_1[2] = lVar8 + -0x10;
    plVar5 = *(long **)(lVar8 + -8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 5;
      do {
        lVar8 = *plVar1;
        iVar4 = (int)lVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    lVar8 = param_1[2];
  } while( true );
}


