/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc7564; name: FUN_01dc7564
 */


undefined8 FUN_01dc7564(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *local_38;
  long *local_18;
  
  local_18 = param_2;
  if (param_2 == (long *)0x0) {
    uVar5 = FUN_020e7384(&local_18,param_3);
  }
  else {
    plVar10 = param_2 + 5;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar8 == -1) goto LAB_01dc78b8;
    uVar5 = FUN_020e7384(&local_18,param_3);
    if (param_2 != (long *)0x0) {
      plVar10 = param_2 + 5;
      do {
        lVar8 = *plVar10;
        iVar7 = (int)lVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *(int *)plVar10 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
      else if ((int)lVar8 == 0) goto LAB_01dc784c;
    }
  }
  uVar6 = FUN_00cf41a8(param_2[0xe]);
  if ((uVar6 & 0xffff) == (uVar5 & 0xffff)) {
    return 0;
  }
  uVar6 = FUN_00cf44f4(param_2[0xe]);
  uVar6 = uVar6 & 0xffff;
  if (uVar6 < 0x289) {
    if (10 < uVar6 - 0x1e3) {
      return 0;
    }
    if ((1 << (ulong)(uVar6 - 0x1e3 & 0x1f) & 0x413U) == 0) {
      return 0;
    }
  }
  else if (((uVar6 != 0x289) && (uVar6 != 0x3f3)) && (uVar6 != 0x305)) {
    return 0;
  }
  FUN_0143b218(param_2,uVar5,0);
  lVar8 = param_2[0xe];
  if ((*(byte *)(*(long *)(lVar8 + 0x10) + 4) >> 2 & 1) == 0) {
    sVar4 = FUN_00cf44f4();
    if (sVar4 != 0) {
      lVar8 = param_2[0xe];
      goto LAB_01dc761c;
    }
  }
  else {
LAB_01dc761c:
    sVar4 = FUN_00cf44f4(lVar8);
    if (sVar4 == 0x3f3) {
      switch(uVar5 & 0xffff) {
      case 0:
        lVar8 = param_2[0xe];
        uVar9 = 0xb;
        break;
      case 1:
        lVar8 = param_2[0xe];
        uVar9 = 10;
        break;
      case 2:
        lVar8 = param_2[0xe];
        uVar9 = 9;
        break;
      case 3:
        lVar8 = param_2[0xe];
        uVar9 = 5;
        break;
      default:
        goto switchD_01dc7650_default;
      }
      FUN_00eeecb8(lVar8,uVar9);
    }
  }
switchD_01dc7650_default:
  if (((*PTR_DAT_047d4568 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4568), iVar7 != 0))
  {
    FUN_00100190(&LAB_02ace3a0,PTR_DAT_047d4570,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4568);
  }
  lVar8 = *(long *)PTR_DAT_047d4570;
  *(long *)PTR_DAT_047d4578 = lVar8;
  plVar10 = *(long **)(lVar8 + 0x50);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar8 == -1) goto LAB_01dc78b8;
  }
  plVar1 = param_2 + 5;
  do {
    lVar8 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)lVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_38 = param_2;
  if ((int)lVar8 == -1) {
LAB_01dc78b8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  FUN_01edce74(plVar10,&local_38,0,1);
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
    do {
      lVar8 = *plVar1;
      iVar7 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_01dc784c;
  }
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 1) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if (iVar7 == 0) {
LAB_01dc784c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return 1;
}


