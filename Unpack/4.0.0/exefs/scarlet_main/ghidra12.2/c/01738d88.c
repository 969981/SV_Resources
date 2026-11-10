/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01738d88; name: FUN_01738d88
 */


void FUN_01738d88(long *param_1,uint param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if (((DAT_0483ac50 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0483ac50), iVar5 != 0)) {
    FUN_00100190(&LAB_02a16748,&DAT_0483ac40,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483ac50);
  }
  DAT_0483ac58 = DAT_0483ac40;
  if (((int)param_2 < 0) || (*(ulong *)(DAT_0483ac40 + 0x40) <= (ulong)param_2)) {
    *param_1 = 0;
  }
  else {
    lVar7 = *(long *)(DAT_0483ac40 + 0x38);
    if (((0 < (int)param_2) && (lVar7 = *(long *)(lVar7 + 8), 1 < param_2)) &&
       (lVar7 = *(long *)(lVar7 + 8), 2 < param_2)) {
      lVar8 = (ulong)param_2 - 1;
      do {
        lVar7 = *(long *)(lVar7 + 8);
        lVar8 = lVar8 + -1;
      } while (1 < lVar8);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    *param_1 = lVar7;
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x30);
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
  }
  return;
}


