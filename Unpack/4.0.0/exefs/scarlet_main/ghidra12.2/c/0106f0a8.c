/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0106f0a8; name: FUN_0106f0a8
 */


void FUN_0106f0a8(long *param_1,long param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  uVar9 = *(ulong *)(param_2 + 0x80);
  lVar14 = *(long *)(param_2 + 0x48);
  lVar8 = *(long *)(param_2 + 0x50);
  plVar7 = (long *)(lVar14 + (uVar9 >> 6 & 0x3fffffffffffff8));
  if (lVar8 == lVar14) {
    plVar12 = (long *)0x0;
    plVar13 = (long *)0x0;
    uVar10 = *(long *)(param_2 + 0x88) + uVar9;
  }
  else {
    uVar10 = *(long *)(param_2 + 0x88) + uVar9;
    plVar12 = (long *)(*plVar7 + (uVar9 & 0x1ff) * 8);
    plVar13 = (long *)(*(long *)(lVar14 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8)
    ;
  }
  if (plVar13 != plVar12) {
    do {
      plVar11 = (long *)*plVar12;
      if (plVar11 != (long *)0x0) {
        lVar14 = plVar11[6];
        if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0106f2dc;
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          *(undefined8 *)(lVar14 + 8) = uVar6;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_0106f234;
        iVar3 = *(int *)plVar11[8];
        lVar14 = plVar11[6];
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        if (iVar3 == param_3) break;
      }
      plVar12 = plVar12 + 1;
      if ((long)plVar12 - *plVar7 == 0x1000) {
        plVar7 = plVar7 + 1;
        plVar12 = (long *)*plVar7;
      }
    } while (plVar13 != plVar12);
    uVar10 = *(long *)(param_2 + 0x80) + *(long *)(param_2 + 0x88);
    lVar14 = *(long *)(param_2 + 0x48);
    lVar8 = *(long *)(param_2 + 0x50);
  }
  if (lVar8 == lVar14) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)(*(long *)(lVar14 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8);
  }
  if (plVar7 == plVar12) {
    *param_1 = 0;
  }
  else {
    lVar14 = *plVar12;
    *param_1 = lVar14;
    if (lVar14 != 0) {
      lVar14 = *(long *)(lVar14 + 0x30);
      if (*(long *)(lVar14 + 0x10) == 0) {
LAB_0106f2dc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar6;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_0106f234:
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


