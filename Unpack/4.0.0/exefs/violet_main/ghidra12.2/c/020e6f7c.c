/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e6f7c; name: FUN_020e6f7c
 */


void FUN_020e6f7c(undefined8 *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if (((DAT_04840580 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04840580), iVar5 != 0)) {
    FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840580);
  }
  DAT_04840568 = DAT_04840570;
  plVar8 = (long *)*param_1;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  uVar4 = FUN_00cf44f4(plVar8[0xe]);
  if ((ushort)(uVar4 - 0x249) < 2) {
    switch(param_2) {
    case 0:
      goto switchD_020e700c_caseD_0;
    case 1:
      goto switchD_020e700c_caseD_1;
    case 2:
      goto switchD_020e700c_caseD_2;
    case 3:
      goto switchD_020e700c_caseD_3;
    default:
      goto switchD_020e700c_default;
    }
  }
  if (uVar4 < 0x281) {
    switch(uVar4) {
    case 0x1df:
      switch(param_2) {
      case 0:
        goto switchD_020e700c_caseD_0;
      case 1:
        goto switchD_020e700c_caseD_1;
      case 2:
switchD_020e700c_caseD_2:
        uVar7 = 2;
        break;
      case 3:
switchD_020e700c_caseD_3:
        uVar7 = 3;
        break;
      case 4:
switchD_020e7194_caseD_4:
        uVar7 = 4;
        break;
      case 5:
switchD_020e7194_caseD_5:
        uVar7 = 5;
        break;
      default:
        goto switchD_020e700c_default;
      }
      break;
    case 0x1e0:
    case 0x1e1:
    case 0x1e2:
    case 0x1e5:
    case 0x1e6:
    case 0x1e8:
    case 0x1e9:
    case 0x1ea:
    case 0x1eb:
      goto switchD_020e700c_default;
    case 0x1e3:
    case 0x1e4:
    case 0x1e7:
    case 0x1ec:
      goto switchD_020e70c8_caseD_281;
    case 0x1ed:
      switch(param_2) {
      case 0:
        goto switchD_020e700c_caseD_0;
      case 1:
        goto switchD_020e700c_caseD_1;
      case 2:
        goto switchD_020e700c_caseD_2;
      case 3:
        goto switchD_020e700c_caseD_3;
      case 4:
        goto switchD_020e7194_caseD_4;
      case 5:
        goto switchD_020e7194_caseD_5;
      case 6:
        uVar7 = 6;
        break;
      case 7:
        uVar7 = 7;
        break;
      case 8:
        uVar7 = 8;
        break;
      case 9:
        uVar7 = 9;
        break;
      case 10:
        uVar7 = 10;
        break;
      case 0xb:
        uVar7 = 0xb;
        break;
      case 0xc:
        uVar7 = 0xc;
        break;
      case 0xd:
        uVar7 = 0xd;
        break;
      case 0xe:
        uVar7 = 0xe;
        break;
      case 0xf:
        uVar7 = 0xf;
        break;
      case 0x10:
        uVar7 = 0x10;
        break;
      case 0x11:
        uVar7 = 0x11;
        break;
      default:
        goto switchD_020e700c_default;
      }
      break;
    default:
      if (uVar4 != 0x182) goto switchD_020e700c_default;
      switch(param_2) {
      case 0:
        goto switchD_020e700c_caseD_0;
      case 1:
        goto switchD_020e700c_caseD_1;
      case 2:
        goto switchD_020e700c_caseD_2;
      case 3:
        goto switchD_020e700c_caseD_3;
      default:
        goto switchD_020e700c_default;
      }
    }
  }
  else {
    if (uVar4 < 0x2d0) {
      switch(uVar4) {
      case 0x281:
      case 0x282:
      case 0x285:
      case 0x287:
        goto switchD_020e70c8_caseD_281;
      default:
        goto switchD_020e700c_default;
      case 0x286:
        goto switchD_020e70c8_caseD_286;
      }
    }
    if (uVar4 < 0x382) {
      if (uVar4 != 0x2d0) {
        if (uVar4 == 0x2e5) {
          switch(param_2) {
          case 0:
            goto switchD_020e700c_caseD_0;
          case 1:
            goto switchD_020e700c_caseD_1;
          case 2:
            goto switchD_020e700c_caseD_2;
          case 3:
            goto switchD_020e700c_caseD_3;
          default:
            goto switchD_020e700c_default;
          }
        }
        if (uVar4 != 800) goto switchD_020e700c_default;
switchD_020e70c8_caseD_286:
        if (param_2 == 2) goto switchD_020e700c_caseD_2;
      }
    }
    else {
      if (uVar4 == 0x382) goto switchD_020e70c8_caseD_286;
      if (uVar4 != 0x389) {
        if (uVar4 == 0x3f3) {
          switch(param_2) {
          case 0:
            FUN_0143b218(plVar8,0,0);
            lVar6 = plVar8[0xe];
            uVar7 = 0xb;
            break;
          case 1:
            FUN_0143b218(plVar8,1,0);
            lVar6 = plVar8[0xe];
            uVar7 = 10;
            break;
          case 2:
            FUN_0143b218(plVar8,2,0);
            lVar6 = plVar8[0xe];
            uVar7 = 9;
            break;
          case 3:
            FUN_0143b218(plVar8,3,0);
            lVar6 = plVar8[0xe];
            uVar7 = 5;
            break;
          default:
            goto switchD_020e700c_default;
          }
          FUN_00eeecb8(lVar6,uVar7);
        }
        goto switchD_020e700c_default;
      }
    }
switchD_020e70c8_caseD_281:
    if (param_2 == 1) {
switchD_020e700c_caseD_1:
      uVar7 = 1;
    }
    else {
      if (param_2 != 0) goto switchD_020e700c_default;
switchD_020e700c_caseD_0:
      uVar7 = 0;
    }
  }
  FUN_0143b218(plVar8,uVar7,0);
switchD_020e700c_default:
  plVar1 = plVar8 + 5;
  do {
    lVar6 = *plVar1;
    iVar5 = (int)lVar6 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x020e7220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x10))(plVar8);
    return;
  }
  if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


