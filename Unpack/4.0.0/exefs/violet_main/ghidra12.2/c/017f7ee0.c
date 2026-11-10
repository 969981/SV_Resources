/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f7ee0; name: FUN_017f7ee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_017f7ee0(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  long *local_48;
  
  cVar4 = FUN_017f814c(*(undefined8 *)(param_1 + 0x30));
  if ((cVar4 == '\0') || (FUN_00f10acc(&local_48,param_1,0xff), local_48 == (long *)0x0)) {
    uVar8 = 1;
  }
  else {
    lVar7 = local_48[0x11];
    if ((int)lVar7 == 0) {
      uVar10 = 0;
      plVar9 = local_48;
    }
    else {
      uVar5 = 0;
      uVar10 = 0;
      do {
        if ((uVar5 < (uint)lVar7) &&
           (plVar9 = *(long **)(*(long *)(local_48[9] +
                                         ((ulong)(local_48[0x10] + (long)(int)uVar5) >> 6 &
                                         0x3fffffffffffff8)) +
                               (local_48[0x10] + (long)(int)uVar5 & 0x1ffU) * 8),
           plVar9 != (long *)0x0)) {
          lVar7 = plVar9[6];
          if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar3) {
              *psVar1 = sVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 0) {
            uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
            *(undefined8 *)(lVar7 + 8) = uVar8;
            *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          lVar7 = plVar9[6];
          uVar11 = (uint)(*(long *)(plVar9[8] + 8) == param_2);
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar3) {
              *psVar1 = sVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          else if (sVar2 == 0) goto LAB_017f80a4;
        }
        else {
          uVar11 = (uint)(*(long *)(_DAT_00000040 + 8) == param_2);
        }
        uVar5 = uVar5 + 1;
        uVar10 = uVar10 + uVar11;
        lVar7 = local_48[0x11];
        plVar9 = local_48;
      } while (uVar5 < (uint)lVar7);
    }
    uVar5 = FUN_017f814c(*(undefined8 *)(param_1 + 0x30));
    if ((uVar10 < (uVar5 & 0xff)) &&
       ((cVar4 = FUN_00f63a60(*(undefined8 *)(param_1 + 0x30)), cVar4 == '\0' ||
        (uVar6 = FUN_01071020(*(undefined8 *)(param_1 + 0x498)), (uVar6 & 1) == 0)))) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    if (plVar9 != (long *)0x0) {
      lVar7 = plVar9[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      else if (sVar2 == 0) {
LAB_017f80a4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return uVar8;
}


