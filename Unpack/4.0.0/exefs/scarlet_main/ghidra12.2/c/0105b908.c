/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0105b908; name: FUN_0105b908
 */


void FUN_0105b908(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *local_48;
  long *local_40;
  long *local_38;
  
  local_38 = (long *)*param_2;
  if ((local_38 != (long *)0x0) && (lVar7 = *(long *)(param_1 + 0x58), lVar7 != 0)) {
    lVar8 = local_38[6];
    if (*(long *)(lVar8 + 0x10) == 0) {
LAB_0105bb04:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar8 + 0x1a);
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
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar6;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_0105bb24;
    FUN_0123d4a0(lVar7,&local_38);
    if (local_38 != (long *)0x0) {
      lVar7 = local_38[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0105badc;
    }
    if (*(long *)(*(long *)(*param_2 + 0x40) + 8) != 0) {
      FUN_00f63734(&local_40,*(undefined8 *)(param_1 + 0x68));
      if (local_40 == (long *)0x0) {
        uVar6 = *(undefined8 *)(param_1 + 0x68);
        local_48 = (long *)*param_2;
        if (local_48 != (long *)0x0) {
          lVar7 = local_48[6];
          if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0105bb04;
          psVar1 = (short *)(lVar7 + 0x1a);
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
            uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
            *(undefined8 *)(lVar7 + 8) = uVar5;
            *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) {
LAB_0105bb24:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
        }
        FUN_0123d5e0(uVar6,&local_48);
        if (local_48 == (long *)0x0) {
          return;
        }
        lVar7 = local_48[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          local_40 = local_48;
        } while (cVar3 != '\0');
      }
      else {
        lVar7 = local_40[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (sVar2 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_40 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_0105badc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


