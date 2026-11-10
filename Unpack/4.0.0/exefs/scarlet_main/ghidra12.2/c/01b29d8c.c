/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b29d8c; name: FUN_01b29d8c
 */


ushort FUN_01b29d8c(undefined8 *param_1,short param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  long *plVar8;
  
  if (((DAT_04840580 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04840580), iVar7 != 0)) {
    FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840580);
  }
  DAT_04840568 = DAT_04840570;
  plVar8 = (long *)*param_1;
  plVar1 = plVar8 + 5;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)lVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  uVar5 = FUN_00cf44f4(plVar8[0xe]);
  if (uVar5 < 0x285) {
    if (uVar5 < 0x281) {
      if (uVar5 == 0x182) {
        if (param_2 == 0x9fa) {
          sVar6 = FUN_00cf41a8(plVar8[0xe]);
          if (sVar6 != 0) {
            sVar6 = FUN_00cf41a8(plVar8[0xe]);
            if (sVar6 == 1) {
              uVar5 = 2;
              goto LAB_01b29f24;
            }
            sVar6 = FUN_00cf41a8(plVar8[0xe]);
            if (sVar6 == 2) {
              uVar5 = 3;
              goto LAB_01b29f24;
            }
            goto LAB_01b29eb8;
          }
LAB_01b29f00:
          uVar5 = 1;
          goto LAB_01b29f24;
        }
      }
      else if (((uVar5 == 0x1ec) && (param_2 == 0x1d2)) &&
              (sVar6 = FUN_00c80208(plVar8[0xe]), sVar6 != 3)) {
        sVar6 = FUN_00cf41a8(plVar8[0xe]);
        if (sVar6 == 0) {
          uVar5 = (ushort)(param_3 < 2);
          goto LAB_01b29f24;
        }
LAB_01b29eb8:
        FUN_00cf41a8(plVar8[0xe]);
        uVar5 = 0;
        goto LAB_01b29f24;
      }
    }
    else if ((uVar5 == 0x281) || (uVar5 == 0x282)) goto LAB_01b29e9c;
  }
  else if (uVar5 < 0x2e5) {
    if (uVar5 == 0x285) {
LAB_01b29e9c:
      if (param_2 == 0x27e) {
LAB_01b29ea8:
        sVar6 = FUN_00cf41a8(plVar8[0xe]);
        if (sVar6 == 0) goto LAB_01b29f00;
        goto LAB_01b29eb8;
      }
    }
    else if ((uVar5 == 0x2d0) && (param_2 == 0x2fd)) goto LAB_01b29ea8;
  }
  else if (uVar5 == 0x2e5) {
    uVar5 = param_2 - 0x355;
    if (uVar5 < 4) goto LAB_01b29f24;
  }
  else if (uVar5 == 0x389) goto LAB_01b29e9c;
  uVar5 = FUN_00cf41a8(plVar8[0xe]);
LAB_01b29f24:
  do {
    lVar4 = *plVar1;
    iVar7 = (int)lVar4 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return uVar5;
}


