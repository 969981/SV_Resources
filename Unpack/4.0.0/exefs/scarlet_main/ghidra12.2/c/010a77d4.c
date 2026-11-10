/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a77d4; name: FUN_010a77d4
 */


void FUN_010a77d4(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  short *psVar1;
  undefined8 *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  puVar2 = (undefined8 *)(param_2 + 0x50);
  if ((param_4 & 1) == 0) {
    puVar2 = (undefined8 *)(param_2 + 0x48);
  }
  plVar7 = (long *)*puVar2;
  if (plVar7 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    lVar8 = plVar7[6];
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar6;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    (**(code **)(*plVar7 + 0x70))(param_1,plVar7,param_3);
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
                    /* WARNING: Could not recover jumptable at 0x010a78c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x50))(plVar7);
      return;
    }
    if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


