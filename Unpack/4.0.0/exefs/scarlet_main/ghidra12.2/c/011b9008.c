/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b9008; name: FUN_011b9008
 */


void FUN_011b9008(long param_1,undefined4 param_2,uint param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  if (param_4 != 0) {
    if (((*(byte *)(*(long *)(*(long *)(param_4 + 0x70) + 0x10) + 4) >> 2 & 1) != 0) ||
       (sVar5 = FUN_00cf44f4(), sVar5 != 0)) {
      if (0x6e < param_3) {
        FUN_014c0fb4(param_1,param_2,param_4);
        return;
      }
      FUN_01f7fd04(param_1,*(undefined8 *)(param_1 + 0xf8),0);
      FUN_014c0fb4(param_1,0,param_4);
      if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8ac0);
      }
      uVar7 = *(undefined8 *)PTR_DAT_047d8ac8;
      local_48 = 0xc;
      local_40 = (long *)0x0;
      *(undefined8 *)PTR_DAT_047d8ad0 = uVar7;
      local_58 = &DAT_a3120086b51f55ca;
      pcStack_50 = "another_name";
      FUN_01286898(&local_38,uVar7,&local_58,0);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
      if (local_38 != (long *)0x0) {
        FUN_00e388b8(local_38,param_3,*(undefined8 *)(param_1 + 0xe8));
      }
      uVar7 = *(undefined8 *)(param_1 + 0xe8);
      lVar2 = *(long *)(param_1 + 0xf0);
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0xdc) = 0;
      *(undefined4 *)(param_1 + 0xcc) = 0;
      *(undefined2 *)(param_1 + 0xd0) = 0;
      FUN_0109c76c(param_1,uVar7);
      if (*(char *)(lVar2 + 0x54) != '\0') {
        **(undefined2 **)(lVar2 + 0x30) = 0;
        *(undefined2 *)(lVar2 + 0x52) = 0;
      }
      FUN_0109c334(param_1,lVar2,uVar7,0,0);
      if (local_38 != (long *)0x0) {
        plVar1 = local_38 + 5;
        do {
          lVar2 = *plVar1;
          iVar6 = (int)lVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
        else if ((int)lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      FUN_01f7fd1c(param_1,0,*(undefined8 *)(param_1 + 0xf8));
      FUN_019c9d88(param_1,param_2,*(undefined8 *)(param_1 + 0xf0),0,0);
    }
  }
  return;
}


