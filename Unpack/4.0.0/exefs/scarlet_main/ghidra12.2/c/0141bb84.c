/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0141bb84; name: FUN_0141bb84
 */


void FUN_0141bb84(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if ((*(long *)(*(long *)(param_1 + 0x40) + 0x50) == 0) &&
     (lVar7 = *(long *)(param_1 + 0x48), *(int *)(lVar7 + 0x88) != 0)) {
    plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x48) +
                                 (*(ulong *)(lVar7 + 0x80) >> 6 & 0x3fffffffffffff8)) +
                       (*(ulong *)(lVar7 + 0x80) & 0x1ff) * 8);
    if (plVar9 != (long *)0x0) {
      lVar7 = plVar9[6];
      if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0141bdec;
      psVar1 = (short *)(lVar7 + 0x1a);
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
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) goto LAB_0141be14;
    }
    lVar7 = *(long *)(param_1 + 0x48);
    plVar2 = (long *)(*(long *)(lVar7 + 0x48) + (*(ulong *)(lVar7 + 0x80) >> 6 & 0x3fffffffffffff8))
    ;
    if (*(long *)(lVar7 + 0x50) == *(long *)(lVar7 + 0x48)) {
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2 + (*(ulong *)(lVar7 + 0x80) & 0x1ff) * 8;
    }
    FUN_0141be1c(lVar7 + 0x40,plVar2,lVar8);
    lVar7 = *(long *)(param_1 + 0x40);
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[6];
      if (*(long *)(lVar8 + 0x10) == 0) {
LAB_0141bdec:
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
LAB_0141be14:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    if (*(long *)(lVar7 + 0x50) == 0) {
      FUN_0105b304(lVar7 + 0x50,plVar9);
    }
    if (plVar9 == (long *)0x0) goto LAB_0141bbb0;
    lVar7 = plVar9[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar3 == 0) goto LAB_0141bce8;
    lVar7 = plVar9[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar3 == 0) {
LAB_0141bce8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_0141bbb0:
                    /* WARNING: Could not recover jumptable at 0x0141bbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x40) + 0x68))();
  return;
}


