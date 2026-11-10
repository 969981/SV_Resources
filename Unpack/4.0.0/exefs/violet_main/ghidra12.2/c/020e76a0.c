/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e76a0; name: FUN_020e76a0
 */


undefined4 FUN_020e76a0(undefined8 *param_1,uint param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined4 uVar10;
  
  if (((DAT_04840580 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04840580), iVar7 != 0)) {
    FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840580);
  }
  DAT_04840568 = DAT_04840570;
  plVar9 = (long *)*param_1;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  uVar6 = FUN_00cf44f4(plVar9[0xe]);
  if (uVar6 < 800) {
    if (uVar6 == 0x1df) {
      if (param_2 < 6) {
        uVar10 = *(undefined4 *)(&DAT_03d609d8 + (long)(int)param_2 * 4);
      }
      else {
        uVar10 = 0;
      }
    }
    else {
      uVar8 = 0x26d;
      if (param_2 != 1) {
        uVar8 = 0;
      }
      uVar10 = 0x251;
      if (param_2 != 0) {
        uVar10 = uVar8;
      }
      if (uVar6 != 0x2d0) {
        uVar10 = 0;
      }
    }
  }
  else {
    uVar8 = 0x2c9;
    if (param_2 != 1) {
      uVar8 = 0;
    }
    uVar10 = 0x2ca;
    if (param_2 != 2) {
      uVar10 = uVar8;
    }
    uVar8 = 0x338;
    if (param_2 != 1) {
      uVar8 = 0;
    }
    uVar2 = 0x339;
    if (param_2 != 2) {
      uVar2 = uVar8;
    }
    if (uVar6 != 0x382) {
      uVar2 = 0;
    }
    if (uVar6 != 800) {
      uVar10 = uVar2;
    }
  }
  plVar1 = plVar9 + 5;
  do {
    lVar5 = *plVar1;
    iVar7 = (int)lVar5 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return uVar10;
}


