/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bee9a8; name: FUN_01bee9a8
 */


void FUN_01bee9a8(void)

{
  short *psVar1;
  undefined8 *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  short sVar9;
  long *plVar10;
  
  if (((DAT_0483af40 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0483af40), iVar6 != 0)) {
    FUN_00100190(&LAB_02a30078,&DAT_0483af30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483af40);
  }
  lVar7 = DAT_0483af30;
  DAT_0483af48 = DAT_0483af30;
  *(undefined1 *)(DAT_0483af30 + 0x101) = 1;
  puVar8 = *(undefined8 **)(lVar7 + 0x158);
  puVar2 = *(undefined8 **)(lVar7 + 0x160);
  do {
    if (puVar8 == puVar2) {
      return;
    }
    lVar7 = *(long *)*puVar8;
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01beea88;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01beea88:
          bVar5 = false;
        }
        if (bVar5) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 != 0) {
            plVar10 = (long *)(lVar7 + -0x28);
            if (*(char *)(lVar7 + 0x408) == '\0') {
              FUN_01142c28(plVar10);
            }
            lVar7 = *(long *)(lVar7 + 8);
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar9 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar9 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*plVar10 + 0x50))(plVar10);
            }
            else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    puVar8 = puVar8 + 4;
  } while( true );
}


