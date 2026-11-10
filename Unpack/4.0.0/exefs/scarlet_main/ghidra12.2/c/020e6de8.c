/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e6de8; name: FUN_020e6de8
 */


uint FUN_020e6de8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  
  if (((DAT_04840580 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04840580), iVar4 != 0)) {
    FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840580);
  }
  DAT_04840568 = DAT_04840570;
  plVar7 = *(long **)(DAT_04840570 + 0x28);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if ((char)plVar7[0x12] == '\0') {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = 0;
    do {
      lVar5 = (**(code **)(*plVar7 + 0x60))(plVar7,uVar8);
      if ((lVar5 != 0) &&
         (((uVar6 = FUN_00cf4cfc(*(undefined8 *)(lVar5 + 0x70)), (uVar6 & 1) != 0 ||
           ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0x70) + 0x10) + 4) >> 2 & 1) != 0)) &&
          (iVar4 = FUN_016910b0(lVar5), iVar4 == 0)))) goto LAB_020e6ea4;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(plVar7 + 0x12));
    uVar8 = 0xffffffff;
  }
LAB_020e6ea4:
  plVar1 = plVar7 + 5;
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return uVar8;
}


