/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298ff6c; name: FUN_0298ff6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0298ff6c(long *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if ((int)*(ulong *)(param_2 + 0x88) != 0) {
    uVar11 = *(ulong *)(param_2 + 0x88) & 0xffffffff;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar12 = uVar11;
    while( true ) {
      if ((uVar10 < uVar12) &&
         (uVar12 = *(long *)(param_2 + 0x80) + uVar10,
         plVar7 = *(long **)(*(long *)(*(long *)(param_2 + 0x48) + (uVar12 >> 6 & 0x3fffffffffffff8)
                                      ) + (uVar12 & 0x1ff) * 8), plVar7 != (long *)0x0)) {
        lVar6 = plVar7[6];
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0299019c;
        psVar1 = (short *)(lVar6 + 0x1a);
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
          uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
          *(undefined8 *)(lVar6 + 8) = uVar5;
          *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_02990110;
        uVar12 = *(ulong *)(plVar7[8] + 8);
        lVar6 = plVar7[6];
        psVar1 = (short *)(lVar6 + 0x1a);
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
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))(plVar7);
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      else {
        uVar12 = *(ulong *)(_DAT_00000040 + 8);
      }
      if (uVar8 <= uVar12) {
        uVar9 = (uint)uVar10;
        uVar8 = uVar12;
      }
      uVar10 = uVar10 + 1;
      if (uVar10 == uVar11) break;
      uVar12 = (ulong)*(uint *)(param_2 + 0x88);
    }
    if ((uVar8 != 0) && (uVar9 < *(uint *)(param_2 + 0x88))) {
      uVar8 = *(long *)(param_2 + 0x80) + (long)(int)uVar9;
      lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x48) + (uVar8 >> 6 & 0x3fffffffffffff8)) +
                       (uVar8 & 0x1ff) * 8);
      *param_1 = lVar6;
      if (lVar6 == 0) {
        return;
      }
      lVar6 = *(long *)(lVar6 + 0x30);
      if (*(long *)(lVar6 + 0x10) != 0) {
        psVar1 = (short *)(lVar6 + 0x1a);
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
          uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
          *(undefined8 *)(lVar6 + 8) = uVar5;
          *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
          return;
        }
        if (sVar2 != -1) {
          return;
        }
LAB_02990110:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
LAB_0299019c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
  }
  *param_1 = 0;
  return;
}


