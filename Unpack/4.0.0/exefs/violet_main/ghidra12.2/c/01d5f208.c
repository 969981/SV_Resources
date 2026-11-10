/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d5f208; name: FUN_01d5f208
 */


void FUN_01d5f208(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined4 local_78 [2];
  long *local_70;
  undefined1 local_68;
  byte local_67;
  undefined1 *local_60;
  long *local_58;
  
  local_60 = &LAB_00a9e020;
  FUN_010cc838(&local_58);
  uVar10 = local_58[0x4f8];
  if (local_58 != (long *)0x0) {
    lVar9 = local_58[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_58 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar8 = PTR_DAT_047d4cd8;
  local_68 = uVar10 >> 0x20 != 0;
  local_78[0] = *(undefined4 *)(*(long *)PTR_DAT_047d4cd8 + 0x40);
  FUN_01e22dc8(&local_58,DAT_04838250);
  plVar3 = local_58;
  if (local_58 == (long *)0x0) {
    FUN_019202d0(0,*(long *)puVar8 + 0x50);
  }
  else {
    plVar2 = local_58 + 5;
    do {
      lVar9 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)lVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_019202d0(local_58,*(long *)puVar8 + 0x50);
    do {
      lVar9 = *plVar2;
      iVar7 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    else if ((int)lVar9 == 0) goto LAB_01d5f3b0;
  }
  local_67 = param_4 & 1;
  local_70 = local_58;
  FUN_021ef4ac(param_1,DAT_04838250,DAT_04838250,param_2,param_3,local_78);
  if (local_58 != (long *)0x0) {
    plVar3 = local_58 + 5;
    do {
      lVar9 = *plVar3;
      iVar7 = (int)lVar9 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_58 + 0x10))(local_58);
    }
    else if ((int)lVar9 == 0) {
LAB_01d5f3b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


