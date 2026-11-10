/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6346c; name: FUN_01c6346c
 */


void FUN_01c6346c(undefined1 *param_1,undefined1 *param_2)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar5 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = uVar5;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00d8e6c4(param_1 + 8,param_2 + 8);
  lVar9 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 0x18) = lVar9;
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar4 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar10;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  lVar9 = *(long *)(param_2 + 0x20);
  *(long *)(param_1 + 0x20) = lVar9;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar3 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar3 == -1) goto LAB_01c635a0;
  }
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  lVar9 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar9;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar3 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar3 == -1) {
LAB_01c635a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  uVar6 = *(undefined2 *)(param_2 + 0x40);
  param_1[0x42] = param_2[0x42];
  *(undefined2 *)(param_1 + 0x40) = uVar6;
  return;
}


