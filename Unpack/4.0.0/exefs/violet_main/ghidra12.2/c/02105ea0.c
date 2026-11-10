/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02105ea0; name: FUN_02105ea0
 */


void FUN_02105ea0(long param_1,undefined4 param_2,int param_3,byte param_4,byte param_5,
                 undefined4 *param_6,byte param_7,byte param_8)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  int local_64;
  undefined8 local_60;
  long *local_58;
  byte local_50 [4];
  byte local_4c [4];
  byte local_48 [4];
  byte local_44 [4];
  
  local_44[0] = param_4 & 1;
  local_48[0] = param_5 & 1;
  local_4c[0] = param_7 & 1;
  local_50[0] = param_8 & 1;
  uVar7 = *(undefined8 *)(param_1 + 0x138);
  plVar10 = *(long **)(param_1 + 0x140);
  local_58 = plVar10;
  if (plVar10 == (long *)0x0) {
    uVar8 = FUN_011b4fa8(uVar7,&local_58,param_3,param_6);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar3 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar3 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    uVar8 = FUN_011b4fa8(uVar7,&local_58,param_3,param_6);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 5;
      do {
        lVar3 = *plVar1;
        iVar6 = (int)lVar3 + -1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      else if ((int)lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if ((uVar8 & 1) == 0) {
    return;
  }
  uVar5 = FUN_019b922c(param_1,param_2);
  uVar9 = (uint)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x498);
  if ((uVar9 >> 10 & 1) == 0) {
    if ((param_3 == 0x69) || (param_3 == 99)) {
      local_60 = 0xcef916b974a63f26;
      FUN_0133edbc(param_1,&local_60);
      bVar4 = false;
      goto LAB_02106008;
    }
  }
  else if ((1 < uVar5) || ((param_3 == 0x1bf || (param_3 == 0xd5 || param_3 == 0x4c)) && uVar5 == 1)
          ) {
    local_48[0] = param_3 != 0x1bf && (param_3 != 0xd5 && param_3 != 0x4c) || uVar5 != 1;
  }
  bVar4 = param_3 == 0;
  if ((param_3 == 0) && ((uVar9 >> 5 & 1) != 0)) {
    iVar6 = FUN_019b922c(param_1,*param_6);
    if (iVar6 == 1) {
      return;
    }
    bVar4 = true;
  }
LAB_02106008:
  uVar8 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x498);
  if ((bVar4) && (((uint)uVar8 >> 0x1e & 1) != 0)) {
    iVar6 = FUN_019b922c(param_1,*param_6);
    if (iVar6 == 1) {
      return;
    }
    uVar8 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x498);
  }
  if (((bool)(bVar4 ^ 1U | (uVar8 & 0x200000000) == 0)) ||
     (iVar6 = FUN_019b922c(param_1,*param_6), iVar6 != 1)) {
    local_60 = 0xed3a6346f6f2ec9e;
    local_64 = param_3;
    FUN_02106294(param_1,&local_60,param_1 + 0x140,&local_64,local_44,local_48,local_4c,local_50);
  }
  return;
}


