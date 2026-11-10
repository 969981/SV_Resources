/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a3a53c; name: FUN_00a3a53c
 */


void FUN_00a3a53c(long *param_1,uint param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *local_48;
  
  lVar12 = *param_1;
  if (lVar12 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar12 + 0x70);
  if ((*(byte *)(*(long *)(lVar10 + 0x10) + 4) >> 2 & 1) == 0) {
    sVar5 = FUN_00cf44f4();
    if (sVar5 == 0) {
      return;
    }
    lVar12 = *param_1;
    lVar10 = *(long *)(lVar12 + 0x70);
  }
  uVar11 = FUN_00cf4cfc(lVar10);
  if (((uVar11 & 1) == 0) &&
     ((*(ushort *)(*(long *)(*(long *)(lVar12 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
    if ((param_2 == 4) &&
       (uVar11 = FUN_021f567c(*(undefined8 *)(*param_1 + 0x70)), (uVar11 & 1) == 0))
    goto LAB_00a3a5fc;
  }
  else {
    uVar6 = 8;
    if (1 < param_2) {
      uVar6 = param_2;
    }
    param_2 = 9;
    if (1 < uVar6 - 3) {
      param_2 = uVar6;
    }
  }
  lVar12 = *param_1;
  if (*(long *)(*(long *)(lVar12 + 0x70) + 8) == 0) {
    uVar7 = FUN_00cf44f4();
    uVar8 = FUN_00cf41a8(*(undefined8 *)(lVar12 + 0x70));
    uVar9 = FUN_00f14b64(*(undefined8 *)(lVar12 + 0x70));
    uVar6 = FUN_00f13da0(uVar7,uVar8,uVar9);
    uVar6 = uVar6 & 0xff;
  }
  else {
    uVar6 = FUN_00e9987c();
  }
  FUN_019b7a68(*(undefined8 *)(lVar12 + 0x70),uVar6);
LAB_00a3a5fc:
  param_1 = (long *)*param_1;
  local_48 = param_1;
  if (param_1 == (long *)0x0) {
    FUN_00e66aec(&local_48,param_2,param_3);
  }
  else {
    plVar1 = param_1 + 5;
    do {
      lVar12 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_00e66aec(&local_48,param_2,param_3);
    if (param_1 != (long *)0x0) {
      plVar1 = param_1 + 5;
      do {
        lVar12 = *plVar1;
        iVar4 = (int)lVar12 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a3a6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x10))(param_1);
        return;
      }
      if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


