/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dcb36c; name: FUN_00dcb36c
 */


void FUN_00dcb36c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long **local_48 [2];
  long *local_38;
  
  if (*(char *)(param_1 + 0x51) != '\0') {
    plVar7 = *(long **)(param_1 + 0x40);
    local_48[0] = &local_38;
    local_38 = (long *)0x0;
    uVar5 = (**(code **)(*plVar7 + 0xd0))(plVar7);
    if (((uVar5 & 1) != 0) && (local_38 == (long *)0x0)) {
      local_38 = plVar7;
    }
    plVar8 = (long *)plVar7[0xf];
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[6];
      if (*(long *)(lVar9 + 0x10) == 0) {
LAB_00dcb534:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
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
        uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar6;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_00dcb554;
      lVar9 = plVar8[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      else if (sVar2 == 0) goto LAB_00dcb57c;
      plVar7 = (long *)plVar7[0xf];
      if (plVar7 == (long *)0x0) {
        FUN_00c79d84(0,local_48);
      }
      else {
        lVar9 = plVar7[6];
        if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00dcb534;
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
          uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          *(undefined8 *)(lVar9 + 8) = uVar6;
          *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
LAB_00dcb554:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        FUN_00c79d84(plVar7,local_48);
        lVar9 = plVar7[6];
        psVar1 = (short *)(lVar9 + 0x1a);
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
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))(plVar7);
        }
        else if (sVar2 == 0) {
LAB_00dcb57c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    if (local_38 != (long *)0x0) {
      FUN_0129e6b0(param_1);
    }
  }
  return;
}


