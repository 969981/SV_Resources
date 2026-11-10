/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014ee0d0; name: FUN_014ee0d0
 */


uint FUN_014ee0d0(void)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  
  if (((DAT_04840e50 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04840e50), iVar5 != 0)) {
    FUN_00100190(&LAB_02b28708,&DAT_04840e40,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840e50);
  }
  DAT_04840e88 = DAT_04840e40;
  lVar7 = *(long *)(DAT_04840e40 + 0x78);
  if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
LAB_014ee108:
    uVar6 = 0;
  }
  else {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_014ee190;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014ee190:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          plVar9 = (long *)(lVar7 + -0x28);
          uVar6 = (**(code **)(*(long *)(lVar7 + -0x28) + 0xd8))(plVar9);
          lVar7 = *(long *)(lVar7 + 8);
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          break;
        }
        goto LAB_014ee108;
      }
      uVar6 = 0;
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return uVar6 & 1;
}


