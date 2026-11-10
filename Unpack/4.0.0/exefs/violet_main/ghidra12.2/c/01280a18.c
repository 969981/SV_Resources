/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01280a18; name: FUN_01280a18
 */


void FUN_01280a18(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_18 [8];
  
  lVar8 = *(long *)(param_1 + 0x15e8);
  if (lVar8 == 0) {
    lVar8 = FUN_01280bc0(auStack_18,*(undefined8 *)(param_1 + 8));
    if (lVar8 != 0) {
      lVar7 = *(long *)(lVar8 + 0x30);
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
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
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar5 = *(long **)(param_1 + 0x15e8);
    *(undefined8 *)(param_1 + 0x15e8) = 0;
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar5[6];
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
        (**(code **)(*plVar5 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *(long *)(param_1 + 0x15e8) = lVar8;
  }
  if (((*(long *)(param_1 + 0xa10) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0xa10) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x9d0) == 0 || ((*(byte *)(*(long *)(param_1 + 0x9d0) + 0x1e8) & 1) != 0)
      ))) {
    local_48 = *(undefined8 *)(param_1 + 0x9b0);
    local_40 = *(undefined8 *)(param_1 + 0x9b8);
    uStack_38 = *(undefined8 *)(param_1 + 0x9c0);
  }
  else {
    local_40 = 0;
    uStack_38 = 0;
    local_48 = 0;
  }
  FUN_01280f1c(lVar8,&local_48);
  return;
}


