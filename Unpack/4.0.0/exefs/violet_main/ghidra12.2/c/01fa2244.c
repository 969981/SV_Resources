/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fa2244; name: FUN_01fa2244
 */


void FUN_01fa2244(undefined1 param_1 [16],long param_2)

{
  short *psVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  short sVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  
  if ((*(uint *)(param_2 + 0x148) | 2) == 3) {
    plVar8 = *(long **)(*(long *)(param_2 + 0x1e8) + 0x15e0);
    if (plVar8 == (long *)0x0) goto LAB_01fa23ac;
    lVar9 = plVar8[6];
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_01fa2414;
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar7 == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))(*(undefined8 **)(lVar9 + 0x10));
      *(undefined8 *)(lVar9 + 8) = uVar5;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar7 == -1) goto LAB_01fa2434;
    uVar10 = (undefined4)plVar8[0x2c];
    lVar9 = plVar8[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      pcVar6 = *(code **)(*plVar8 + 0x50);
      goto LAB_01fa232c;
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_010fee00(param_2);
    plVar8 = (long *)*puVar4;
    if (plVar8 == (long *)0x0) {
LAB_01fa23ac:
      uVar10 = 0x42480000;
      goto LAB_01fa22d8;
    }
    lVar9 = plVar8[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_01fa2414:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar7 == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar5;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar7 == -1) {
LAB_01fa2434:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    uVar10 = (undefined4)plVar8[0x2c];
    lVar9 = plVar8[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      pcVar6 = *(code **)(*plVar8 + 0x50);
LAB_01fa232c:
      (*pcVar6)(plVar8);
      goto LAB_01fa22d8;
    }
  }
  if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_01fa22d8:
  *(ulong *)(param_2 + 0x248) = CONCAT44(uVar10,param_1._8_4_);
  *(long *)(param_2 + 0x240) = param_1._0_8_;
  return;
}


