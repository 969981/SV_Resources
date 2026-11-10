/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02100ba8; name: FUN_02100ba8
 */


undefined8 FUN_02100ba8(long param_1,undefined1 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  long *local_50;
  undefined1 local_48 [8];
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 local_27;
  
  lVar6 = *(long *)(param_1 + 0x30);
  if (*(long *)(lVar6 + 0x58) == 0) {
    uVar8 = 0;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    local_40[0] = 0x4f;
    local_28 = *(undefined1 *)(lVar6 + 0xe2);
    local_58 = local_48;
    local_60 = 1;
    local_48[0] = param_2;
    local_27 = local_28;
    FUN_029903c8(&local_50,*(undefined8 *)(lVar6 + 8),local_40,&local_58,&local_60);
    uVar8 = *(undefined8 *)(lVar6 + 0x58);
    local_68 = local_50;
    if (local_50 == (long *)0x0) {
      FUN_0123d4a0(uVar8,&local_68);
    }
    else {
      lVar6 = local_50[6];
      if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
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
        uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
        *(undefined8 *)(lVar6 + 8) = uVar7;
        *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      plVar5 = local_68;
      FUN_0123d4a0(uVar8,&local_68);
      if (plVar5 != (long *)0x0) {
        lVar6 = plVar5[6];
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
          (**(code **)(*plVar5 + 0x50))(plVar5);
        }
        else if (sVar2 == 0) goto LAB_02100cd0;
      }
      if (local_50 != (long *)0x0) {
        lVar6 = local_50[6];
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
          (**(code **)(*local_50 + 0x50))();
        }
        else if (sVar2 == 0) {
LAB_02100cd0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}


