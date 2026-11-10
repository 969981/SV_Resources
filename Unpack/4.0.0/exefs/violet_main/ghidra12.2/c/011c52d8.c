/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c52d8; name: FUN_011c52d8
 */


void FUN_011c52d8(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  lVar7 = *(long *)(param_1 + 0x120);
  lVar10 = *(long *)(param_1 + 0x138);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) goto LAB_011c55f0;
  }
  plVar6 = *(long **)(lVar7 + 200);
  *(long *)(lVar7 + 200) = lVar10;
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 5;
    do {
      lVar7 = *plVar2;
      iVar5 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_011c5520;
  }
  lVar7 = *(long *)(param_1 + 0x120);
  uVar11 = (*(long *)(lVar7 + 0x58) - *(long *)(lVar7 + 0x50) >> 3) * 0xb6db6db7;
  if (0 < (int)uVar11) {
    uVar13 = 0;
    while( true ) {
      lVar10 = *(long *)(lVar7 + 0x50) + uVar13 * 0x38;
      for (lVar7 = *(long *)(lVar10 + 8); lVar7 != lVar10; lVar7 = *(long *)(lVar7 + 8)) {
        lVar14 = *(long *)(param_1 + 0x138);
        iVar5 = (**(code **)(*(long *)(*(long *)(lVar14 + 0x70) + 0x30) + 0x18))();
        lVar8 = *(long *)(lVar7 + 0x10);
        for (lVar15 = *(long *)(lVar8 + 0x70); lVar15 != lVar8 + 0x68;
            lVar15 = *(long *)(lVar15 + 8)) {
          FUN_011c5978(*(undefined8 *)(lVar14 + 0x78),lVar15 + 0x10,uVar13 & 0xffffffff);
          lVar9 = *(long *)(lVar15 + 0x10);
          plVar6 = *(long **)(lVar9 + 0x50);
          plVar2 = *(long **)(lVar9 + 0x58);
          if (plVar6 != plVar2) {
            lVar12 = *plVar6;
            if (*(int *)(lVar12 + 0x15c) != iVar5) {
              *(int *)(lVar12 + 0x15c) = iVar5;
              *(undefined1 *)(lVar12 + 0x19a) = 1;
            }
            if (plVar6 + 1 != plVar2) {
              lVar12 = plVar6[1];
              if (*(int *)(lVar12 + 0x15c) != iVar5) {
                *(int *)(lVar12 + 0x15c) = iVar5;
                *(undefined1 *)(lVar12 + 0x19a) = 1;
              }
              for (plVar6 = plVar6 + 2; plVar6 != plVar2; plVar6 = plVar6 + 1) {
                lVar12 = *plVar6;
                if (*(int *)(lVar12 + 0x15c) != iVar5) {
                  *(int *)(lVar12 + 0x15c) = iVar5;
                  *(undefined1 *)(lVar12 + 0x19a) = 1;
                }
              }
            }
          }
          *(uint *)(lVar9 + 0x158) = *(uint *)(lVar9 + 0x158) | 0x40;
        }
        FUN_011c561c(lVar14,(long *)(lVar7 + 0x10));
      }
      uVar13 = uVar13 + 1;
      if (uVar13 == (uVar11 & 0xffffffff)) break;
      lVar7 = *(long *)(param_1 + 0x120);
    }
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x138) + 0x78);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 5;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar7 == -1) {
LAB_011c55f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  *(undefined4 *)(plVar6 + 0x11) = 0x442f0000;
  *(undefined2 *)((long)plVar6 + 0x8c) = 0x100;
  plVar6[0x12] = 0x4396000042c80000;
  *(undefined1 *)(plVar6 + 0x13) = 1;
  FUN_01086348(plVar6);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 5;
    do {
      lVar7 = *plVar2;
      iVar5 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011c55ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))(plVar6);
      return;
    }
    if ((int)lVar7 == 0) {
LAB_011c5520:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


