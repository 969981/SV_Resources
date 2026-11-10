/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ff56b0; name: FUN_00ff56b0
 */


void FUN_00ff56b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  plVar1 = (long *)(param_1 + 0x138);
  iVar7 = 0;
  if (*(int *)(param_1 + 0x140) != -1) {
    iVar7 = *(int *)(param_1 + 0x140);
  }
  FUN_00ff58b0(*(undefined8 *)(param_1 + 0x120),plVar1,iVar7);
  plVar12 = *(long **)(*(long *)(param_1 + 0x120) + 200);
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 5;
    do {
      lVar13 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)lVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar13 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    iVar8 = (**(code **)(*(long *)(plVar12[0xe] + 0x30) + 0x18))();
    lVar9 = *plVar1;
    for (lVar13 = *(long *)(lVar9 + 0x70); lVar13 != lVar9 + 0x68; lVar13 = *(long *)(lVar13 + 8)) {
      FUN_011c5978(plVar12[0xf],lVar13 + 0x10,iVar7);
      lVar10 = *(long *)(lVar13 + 0x10);
      plVar3 = *(long **)(lVar10 + 0x50);
      plVar4 = *(long **)(lVar10 + 0x58);
      if (plVar3 != plVar4) {
        lVar11 = *plVar3;
        if (*(int *)(lVar11 + 0x15c) != iVar8) {
          *(int *)(lVar11 + 0x15c) = iVar8;
          *(undefined1 *)(lVar11 + 0x19a) = 1;
        }
        if (plVar3 + 1 != plVar4) {
          lVar11 = plVar3[1];
          if (*(int *)(lVar11 + 0x15c) != iVar8) {
            *(int *)(lVar11 + 0x15c) = iVar8;
            *(undefined1 *)(lVar11 + 0x19a) = 1;
          }
          for (plVar3 = plVar3 + 2; plVar3 != plVar4; plVar3 = plVar3 + 1) {
            lVar11 = *plVar3;
            if (*(int *)(lVar11 + 0x15c) != iVar8) {
              *(int *)(lVar11 + 0x15c) = iVar8;
              *(undefined1 *)(lVar11 + 0x19a) = 1;
            }
          }
        }
      }
      *(uint *)(lVar10 + 0x158) = *(uint *)(lVar10 + 0x158) | 0x40;
    }
    FUN_011c561c(plVar12,plVar1);
    FUN_01086348(plVar12[0xf]);
    do {
      lVar13 = *plVar2;
      iVar7 = (int)lVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00ff5860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x10))(plVar12);
      return;
    }
    if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


