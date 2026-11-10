/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d34858; name: FUN_00d34858
 */


void FUN_00d34858(undefined8 *param_1,long param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  if ((param_3 & 0xffffffff) < (ulong)(*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 3)
     ) {
    plVar8 = *(long **)(*(long *)(param_2 + 0x120) + (param_3 & 0xffffffff) * 8);
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[6];
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00d349b0;
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
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar7;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_00d349d0;
    }
    uVar6 = FUN_00d34a20(plVar8 + 5);
    if ((uVar6 & 1) == 0) {
      bVar4 = true;
    }
    else {
      *param_1 = plVar8;
      lVar9 = plVar8[6];
      if (*(long *)(lVar9 + 0x10) == 0) {
LAB_00d349b0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
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
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        bVar4 = false;
        *(undefined8 *)(lVar9 + 8) = uVar7;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else {
        if (sVar2 == -1) {
LAB_00d349d0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        bVar4 = false;
      }
    }
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (!bVar4) {
      return;
    }
  }
  *param_1 = 0;
  return;
}


