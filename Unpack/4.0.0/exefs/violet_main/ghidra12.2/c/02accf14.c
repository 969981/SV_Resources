/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02accf14; name: FUN_02accf14
 */


bool FUN_02accf14(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  long *plVar8;
  bool bVar9;
  
  if (((DAT_04840580 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04840580), iVar7 != 0)) {
    FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840580);
  }
  DAT_04840568 = DAT_04840570;
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
    return false;
  }
  plVar1 = plVar8 + 5;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
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
  sVar6 = FUN_00cf44f4(plVar8[0xe]);
  if (sVar6 == 0x15d) {
    FUN_00e974e0(plVar8[0xe]);
    sVar6 = FUN_00cf5044();
    if (sVar6 != 0xf) {
      bVar5 = FUN_02b70be8(plVar8[0xe]);
      bVar9 = 0xa9 < bVar5;
      goto LAB_02accfb4;
    }
  }
  bVar9 = false;
LAB_02accfb4:
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
  return bVar9;
}


