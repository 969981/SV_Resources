/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0105cbd8; name: FUN_0105cbd8
 */


void FUN_0105cbd8(long *param_1,long param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_38;
  undefined4 local_14;
  
  local_38 = (long *)*param_3;
  iVar3 = *(int *)local_38[8];
  if (iVar3 == 0x3d) {
    if (local_38 == (long *)0x0) {
      FUN_0105d24c(param_2,&local_38);
    }
    else {
      lVar8 = local_38[6];
      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0105cdbc;
      psVar1 = (short *)(lVar8 + 0x1a);
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
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar7;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_0105ccec;
      plVar6 = local_38;
      FUN_0105d24c(param_2,&local_38);
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        psVar1 = (short *)(lVar8 + 0x1a);
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
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))(plVar6);
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    local_14 = 0;
    lVar8 = FUN_0105b7c4(*(undefined8 *)(param_2 + 8),param_2 + 0xf0,&local_14);
    *param_1 = lVar8;
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar8 + 0x30);
      if (*(long *)(lVar8 + 0x10) == 0) {
LAB_0105cdbc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar8 + 0x1a);
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
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar7;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_0105ccec:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
  }
  else {
    if (iVar3 == 0x3b) {
      FUN_0105ce24(param_1,param_2);
      return;
    }
    if (iVar3 == 0x39) {
      FUN_0105d0a8(param_1,param_2);
      return;
    }
    *param_1 = 0;
  }
  return;
}


