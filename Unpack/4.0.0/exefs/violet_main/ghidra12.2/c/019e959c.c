/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e959c; name: FUN_019e959c
 */


ulong FUN_019e959c(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ShowKeyboardArg aSStack_560 [1280];
  long local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined *local_48;
  
  local_48 = &DAT_03d317d8;
  if (*(undefined **)(param_3 + 0x58) != (undefined *)0x0) {
    local_48 = *(undefined **)(param_3 + 0x58);
  }
  FUN_019e9790(&local_50,param_2,&local_48);
  uVar7 = nn::swkbd::GetRequiredStringBufferSize();
  lVar8 = (**(code **)(*param_2 + 0x10))(param_2,uVar7,0x1000);
  local_60 = lVar8;
  uStack_58 = uVar7;
  FUN_019e9990(aSStack_560,param_3,param_2);
  uVar6 = nn::swkbd::ShowKeyboard((String *)&local_60,aSStack_560);
  FUN_019e9800(aSStack_560,param_2);
  if (uVar6 == 0) {
    FUN_019202d0(param_1,local_60);
    uVar9 = FUN_019e9774(param_1,local_50);
    uVar11 = 0;
    uVar10 = 0;
    if ((uVar9 & 1) == 0) {
      uVar10 = 0x100000000;
    }
  }
  else {
    uVar10 = 0;
    uVar11 = 0x80000001;
    if ((uVar6 & 0x3fffff) != 0x29f) {
      uVar11 = 0x80000002;
    }
  }
  if (lVar8 != 0) {
    uVar9 = FUN_00c4e564(param_2);
    if ((uVar9 & 1) == 0) {
      (**(code **)(*param_2 + 0x18))(param_2,lVar8,uVar7,0x1000);
    }
    else {
      FUN_00c48fe8(param_2,lVar8,uVar7,0x1000);
    }
  }
  plVar2 = local_50;
  local_50 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 5;
    do {
      lVar8 = *plVar1;
      iVar5 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_019e96fc;
    if (local_50 != (long *)0x0) {
      plVar2 = local_50 + 5;
      do {
        lVar8 = *plVar2;
        iVar5 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
LAB_019e96fc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return uVar11 | uVar10;
}


