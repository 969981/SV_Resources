/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01732450; name: FUN_01732450
 */


void FUN_01732450(void)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 unaff_x30;
  undefined1 auStack_90 [128];
  
  FUN_0173255c();
  if (((DAT_0483b1b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0483b1b0), iVar6 != 0)) {
    FUN_00100190(&LAB_02a3f278,&DAT_0483b1a0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b1b0);
  }
  lVar5 = DAT_0483b1a0;
  DAT_0483b1b8 = DAT_0483b1a0;
  FUN_01699cf4(auStack_90 + 0x88,DAT_0483b1a0 + 0x28);
  plVar7 = *(long **)(lVar5 + 0x58);
  *(undefined8 *)(lVar5 + 0x58) = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(lVar5 + 0x58) = unaff_x30;
  return;
}


