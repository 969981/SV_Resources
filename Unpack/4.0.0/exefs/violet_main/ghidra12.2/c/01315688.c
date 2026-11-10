/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01315688; name: FUN_01315688
 */


void FUN_01315688(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  plVar7 = *(long **)(param_1 + 8);
  do {
    plVar6 = plVar7;
    if (plVar6 == param_2) {
      *(long **)(param_1 + 8) = param_2;
      return;
    }
    plVar7 = (long *)plVar6[-2];
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 5;
      do {
        lVar10 = *plVar2;
        iVar5 = (int)lVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    plVar7 = plVar6 + -9;
    lVar10 = *plVar7;
    if (lVar10 != 0) {
      lVar1 = plVar6[-7];
      plVar2 = (long *)plVar6[-6];
      plVar6[-8] = lVar10;
      uVar8 = (**(code **)(*plVar2 + 0xf8))(plVar2);
      if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar10,lVar1 - lVar10,4);
      }
      else {
        FUN_00c48fe8(plVar2,lVar10,lVar1 - lVar10,4);
      }
    }
  } while( true );
}


