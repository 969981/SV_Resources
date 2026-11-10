/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f63734; name: FUN_00f63734
 */


void FUN_00f63734(long *param_1,long param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  uVar7 = *(ulong *)(param_2 + 0x80);
  lVar12 = *(long *)(param_2 + 0x48);
  lVar13 = *(long *)(param_2 + 0x50);
  plVar6 = (long *)(lVar12 + (uVar7 >> 6 & 0x3fffffffffffff8));
  if (lVar13 == lVar12) {
    plVar10 = (long *)0x0;
    plVar11 = (long *)0x0;
    uVar8 = *(long *)(param_2 + 0x88) + uVar7;
  }
  else {
    uVar8 = *(long *)(param_2 + 0x88) + uVar7;
    plVar10 = (long *)(*plVar6 + (uVar7 & 0x1ff) * 8);
    plVar11 = (long *)(*(long *)(lVar12 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8);
  }
  if (plVar11 != plVar10) {
    do {
      plVar9 = (long *)*plVar10;
      if (plVar9 != (long *)0x0) {
        lVar12 = plVar9[6];
        if (*(long *)(lVar12 + 0x10) == 0) goto LAB_00f63994;
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar5;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_00f638fc;
        lVar13 = *(long *)(plVar9[8] + 8);
        lVar12 = plVar9[6];
        psVar1 = (short *)(lVar12 + 0x1a);
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
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        if (lVar13 == param_3) break;
      }
      plVar10 = plVar10 + 1;
      if ((long)plVar10 - *plVar6 == 0x1000) {
        plVar6 = plVar6 + 1;
        plVar10 = (long *)*plVar6;
      }
    } while (plVar11 != plVar10);
    uVar8 = *(long *)(param_2 + 0x80) + *(long *)(param_2 + 0x88);
    lVar12 = *(long *)(param_2 + 0x48);
    lVar13 = *(long *)(param_2 + 0x50);
  }
  if (lVar13 == lVar12) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)(*(long *)(lVar12 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8);
  }
  if (plVar6 == plVar10) {
    *param_1 = 0;
  }
  else {
    lVar12 = *plVar10;
    *param_1 = lVar12;
    if (lVar12 != 0) {
      lVar12 = *(long *)(lVar12 + 0x30);
      if (*(long *)(lVar12 + 0x10) == 0) {
LAB_00f63994:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        *(undefined8 *)(lVar12 + 8) = uVar5;
        *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_00f638fc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
  }
  return;
}


