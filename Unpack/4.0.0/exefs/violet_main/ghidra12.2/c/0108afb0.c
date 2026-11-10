/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0108afb0; name: FUN_0108afb0
 */


void FUN_0108afb0(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_18 [8];
  
  lVar5 = FUN_0108b158(auStack_18,*(undefined8 *)(param_1 + 8));
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x30);
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
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
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar7;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar6 = *(long **)(param_1 + 0x15d0);
  *(undefined8 *)(param_1 + 0x15d0) = 0;
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[6];
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x15d0) = lVar5;
  if (((*(long *)(param_1 + 0x790) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x790) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x750) == 0 || ((*(byte *)(*(long *)(param_1 + 0x750) + 0x1e8) & 1) != 0)
      ))) {
    local_48 = *(undefined8 *)(param_1 + 0x730);
    local_40 = *(undefined8 *)(param_1 + 0x738);
    uStack_38 = *(undefined8 *)(param_1 + 0x740);
  }
  else {
    local_40 = 0;
    uStack_38 = 0;
    local_48 = 0;
  }
  FUN_0108b800(lVar5,&local_48,0,0);
  return;
}


