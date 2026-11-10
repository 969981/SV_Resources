/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a65728; name: FUN_01a65728
 */


void FUN_01a65728(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  short sVar9;
  long *plVar10;
  undefined1 auStack_58 [40];
  
  if (((DAT_04837608 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04837608), iVar6 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar5 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  plVar10 = (long *)(DAT_048375f8 + 0x2d8);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01a657e8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x2e0));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x2e0));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01a657e8;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01a657e8:
  puVar8 = *(undefined8 **)(lVar5 + 0xf0);
  if (puVar8 != (undefined8 *)0x0) {
    do {
      lVar7 = 0;
      if ((long *)puVar8[5] != (long *)0x0) {
        lVar7 = *(long *)puVar8[5];
      }
      if (lVar7 == param_1) {
        lVar7 = puVar8[3];
        if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
          psVar1 = (short *)(lVar7 + 0x1a);
          sVar9 = *(short *)(lVar7 + 0x1a);
          do {
            sVar2 = *psVar1;
            if (sVar2 == sVar9) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_01a658d8;
              bVar4 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_01a658d8:
              bVar4 = false;
            }
            if (bVar4) {
              lVar7 = *(long *)(lVar7 + 0x10);
              if (lVar7 != 0) {
                plVar10 = (long *)(lVar7 + -0x28);
                FUN_00c7eb48(lVar5,plVar10);
                lVar7 = *(long *)(lVar7 + 8);
                psVar1 = (short *)(lVar7 + 0x1a);
                do {
                  sVar9 = *psVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar4) {
                    *psVar1 = sVar9 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
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
            sVar9 = sVar2;
          } while (sVar2 != 0);
        }
        puVar8 = (undefined8 *)*puVar8;
        FUN_00c7e9e4(auStack_58,lVar5 + 0xc0);
        FUN_00c7ecd0(auStack_58);
      }
      else {
        puVar8 = (undefined8 *)*puVar8;
      }
    } while (puVar8 != (undefined8 *)0x0);
  }
  *(undefined8 *)(lVar5 + 0x2d8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x2e0));
  return;
}


