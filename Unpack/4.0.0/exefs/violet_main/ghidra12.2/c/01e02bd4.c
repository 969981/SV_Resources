/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e02bd4; name: FUN_01e02bd4
 */


undefined4 FUN_01e02bd4(void)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  short sVar8;
  ulong uVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined4 uVar12;
  
  if (((DAT_04837608 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04837608), iVar5 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar4 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  if (*(char *)(DAT_048375f8 + 0x3c0) == '\0') {
    if (((*(long *)(DAT_048375f8 + 0x2f0) == 0) ||
        (*(short *)(*(long *)(DAT_048375f8 + 0x2f0) + 0x1a) == 0)) ||
       (lVar7 = *(long *)(DAT_048375f8 + 0x2f0), lVar7 == 0)) {
      uVar10 = 0;
      uVar9 = 0;
    }
    else {
      if (*(short *)(lVar7 + 0x1a) != 0) {
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar8 = *(short *)(lVar7 + 0x1a);
LAB_01e02cc4:
        sVar2 = *psVar1;
        if (sVar2 == sVar8) {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01e02ce8;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e02ce8:
          bVar6 = false;
        }
        if (!bVar6) goto code_r0x01e02cf0;
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          plVar11 = (long *)(lVar7 + -0x28);
          uVar9 = FUN_01e02da4(plVar11,"S6751E1AAE7BBAA17");
          lVar7 = *(long *)(lVar7 + 8);
          uVar10 = (undefined4)(uVar9 >> 0x20);
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar11 + 0x50))(plVar11);
          }
          else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          goto LAB_01e02c50;
        }
      }
      uVar10 = 0;
      uVar9 = 0;
    }
LAB_01e02c50:
    uVar12 = 0xbf800000;
    if ((uVar9 & 0xff) != 0) {
      uVar12 = uVar10;
    }
    *(undefined1 *)(lVar4 + 0x3c0) = 1;
    *(undefined4 *)(lVar4 + 0x3c4) = uVar12;
  }
  else {
    uVar12 = *(undefined4 *)(DAT_048375f8 + 0x3c4);
  }
  return uVar12;
code_r0x01e02cf0:
  uVar10 = 0;
  uVar9 = 0;
  sVar8 = sVar2;
  if (sVar2 == 0) goto LAB_01e02c50;
  goto LAB_01e02cc4;
}


