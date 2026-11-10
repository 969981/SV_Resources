/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143b514; name: FUN_0143b514
 */


void FUN_0143b514(long param_1)

{
  short *psVar1;
  short sVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  plVar8 = *(long **)(param_1 + 0x48);
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar2 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar7;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  uVar3 = *(undefined1 *)(param_1 + 0x42a);
  uVar4 = *(undefined1 *)(param_1 + 0x428);
  (**(code **)(*plVar8 + 0x100))(plVar8,0,*(undefined2 *)(param_1 + 0x426));
  (**(code **)(*plVar8 + 0x128))(plVar8,0,uVar3);
  (**(code **)(*plVar8 + 0x118))(plVar8,0,uVar4);
  uVar3 = *(undefined1 *)(param_1 + 0x440);
  uVar4 = *(undefined1 *)(param_1 + 0x43e);
  (**(code **)(*plVar8 + 0x100))(plVar8,1,*(undefined2 *)(param_1 + 0x43c));
  (**(code **)(*plVar8 + 0x128))(plVar8,1,uVar3);
  (**(code **)(*plVar8 + 0x118))(plVar8,1,uVar4);
  uVar3 = *(undefined1 *)(param_1 + 0x456);
  uVar4 = *(undefined1 *)(param_1 + 0x454);
  (**(code **)(*plVar8 + 0x100))(plVar8,2,*(undefined2 *)(param_1 + 0x452));
  (**(code **)(*plVar8 + 0x128))(plVar8,2,uVar3);
  (**(code **)(*plVar8 + 0x118))(plVar8,2,uVar4);
  uVar3 = *(undefined1 *)(param_1 + 0x46c);
  uVar4 = *(undefined1 *)(param_1 + 0x46a);
  (**(code **)(*plVar8 + 0x100))(plVar8,3,*(undefined2 *)(param_1 + 0x468));
  (**(code **)(*plVar8 + 0x128))(plVar8,3,uVar3);
  (**(code **)(*plVar8 + 0x118))(plVar8,3,uVar4);
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0143b740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x50))(plVar8);
      return;
    }
    if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


