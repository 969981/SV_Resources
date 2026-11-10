/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0105c530; name: FUN_0105c530
 */


void FUN_0105c530(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_38;
  long *local_18;
  
  lVar5 = *(long *)(param_1 + 0x88);
  if ((lVar5 != 0) && (*(char *)(param_1 + 0xe6) != '\0')) {
    local_18 = (long *)*param_2;
    if (local_18 != (long *)0x0) {
      lVar9 = local_18[6];
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_0105c750;
      psVar1 = (short *)(lVar9 + 0x1a);
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
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))(*(undefined8 **)(lVar9 + 0x10));
        *(undefined8 *)(lVar9 + 8) = uVar7;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_0105c770;
    }
    uVar6 = FUN_0105cfa4(lVar5,&local_18);
    if (local_18 != (long *)0x0) {
      lVar5 = local_18[6];
      psVar1 = (short *)(lVar5 + 0x1a);
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
        *(undefined8 *)(lVar5 + 0x10) = 0;
        (**(code **)(*local_18 + 0x50))(local_18);
        uVar6 = uVar6 & 0xffffffff;
      }
      else if (sVar2 == 0) goto LAB_0105c798;
    }
    if ((uVar6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xe6) = 0;
      FUN_0105bfd4(*(undefined8 *)(param_1 + 0x30));
    }
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    local_38 = (long *)*param_2;
    if (local_38 != (long *)0x0) {
      lVar5 = local_38[6];
      if (*(long *)(lVar5 + 0x10) == 0) {
LAB_0105c750:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar5 + 0x1a);
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
        uVar8 = (**(code **)**(undefined8 **)(lVar5 + 0x10))(*(undefined8 **)(lVar5 + 0x10));
        *(undefined8 *)(lVar5 + 8) = uVar8;
        *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_0105c770:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    uVar6 = FUN_0105ceb0(uVar7,&local_38);
    if (local_38 != (long *)0x0) {
      lVar5 = local_38[6];
      psVar1 = (short *)(lVar5 + 0x1a);
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
        *(undefined8 *)(lVar5 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))(local_38);
        uVar6 = uVar6 & 0xffffffff;
      }
      else if (sVar2 == 0) {
LAB_0105c798:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if ((uVar6 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xe6) = 0;
      FUN_0105bfd4(*(undefined8 *)(param_1 + 0x30));
    }
    if (*(long *)(*(long *)(*param_2 + 0x40) + 0x10) != *(long *)(param_1 + 0xe8) + 1) {
      *(undefined1 *)(param_1 + 0xe6) = 0;
      FUN_0105bfd4(*(undefined8 *)(param_1 + 0x30));
    }
  }
  return;
}


