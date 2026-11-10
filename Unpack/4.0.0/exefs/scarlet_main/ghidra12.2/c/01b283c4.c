/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b283c4; name: FUN_01b283c4
 */


undefined8 FUN_01b283c4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  short sVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined4 local_56;
  undefined2 local_52;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined1 local_34;
  undefined8 local_32;
  undefined1 auStack_28 [8];
  
  if (((DAT_04840580 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04840580), iVar6 != 0)) {
    FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840580);
  }
  lVar4 = DAT_04840570;
  DAT_04840568 = DAT_04840570;
  if (5 < *(byte *)(*(long *)(DAT_04840570 + 0x28) + 0x90)) {
    return 0;
  }
  local_50 = 0xffffffffffffffff;
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0x3ffffffff;
  local_56 = 0xffffffff;
  local_52 = 0x1ff;
  local_68 = 0xffffffffffffffff;
  local_48 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_5c = 0;
  local_34 = 0;
  local_32 = 0x10001000100;
  local_3c = 0xffff00000000;
  local_44 = 0;
  local_60 = param_1;
  local_5e = param_3;
  local_5a = param_2;
  local_58 = param_4;
  plVar7 = (long *)FUN_00eebe4c(auStack_28,*(undefined8 *)(DAT_04840570 + 8),&local_88);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar8 = plVar7[0xe];
  if ((*(byte *)(*(long *)(lVar8 + 0x10) + 4) >> 2 & 1) == 0) {
    sVar5 = FUN_00cf44f4();
    if (sVar5 != 0) {
      lVar8 = plVar7[0xe];
      goto LAB_01b284a0;
    }
  }
  else {
LAB_01b284a0:
    FUN_00cf4cfc(lVar8);
    if ((*(byte *)(*(long *)(plVar7[0xe] + 0x10) + 4) >> 2 & 1) == 0) {
      (**(code **)(**(long **)(lVar4 + 0x28) + 0x28))(*(long **)(lVar4 + 0x28),plVar7);
      uVar9 = 1;
      goto LAB_01b284dc;
    }
  }
  uVar9 = 0;
LAB_01b284dc:
  plVar1 = plVar7 + 5;
  do {
    lVar4 = *plVar1;
    iVar6 = (int)lVar4 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return uVar9;
}


