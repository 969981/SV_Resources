/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a35968; name: FUN_00a35968
 */


byte FUN_00a35968(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  byte unaff_w20;
  
  if ((param_1 != 0) && (plVar10 = *(long **)(param_1 + 0x138), plVar10 != (long *)0x0)) {
    plVar1 = plVar10 + 5;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar9 = plVar10[0xe];
    if ((*(byte *)(*(long *)(lVar9 + 0x10) + 4) >> 2 & 1) == 0) {
      sVar6 = FUN_00cf44f4();
      if (sVar6 != 0) {
        lVar9 = plVar10[0xe];
        goto LAB_00a359c0;
      }
      bVar3 = true;
    }
    else {
LAB_00a359c0:
      uVar7 = FUN_00dbf838(lVar9);
      uVar8 = FUN_00dbfb7c(plVar10[0xe]);
      unaff_w20 = (uVar7 & 0xfff0 ^ uVar7 >> 0x10 ^ uVar8 >> 0x10 ^ uVar8 & 0xfff0) < 0x10;
      bVar3 = false;
    }
    do {
      lVar9 = *plVar1;
      iVar5 = (int)lVar9 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    if (!bVar3) goto LAB_00a35a18;
  }
  unaff_w20 = 0;
LAB_00a35a18:
  return unaff_w20 & 1;
}


