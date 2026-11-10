/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a704b8; name: FUN_01a704b8
 */


void FUN_01a704b8(long *param_1)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  short sVar12;
  long lVar13;
  long *local_38;
  
  if (((DAT_04837608 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04837608), iVar7 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar6 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  plVar10 = (long *)(DAT_048375f8 + 0x2d8);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar11) {
      *plVar10 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01a70578;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x2e0));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x2e0));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar11) {
            *plVar10 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01a70578;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar11) {
      *plVar10 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01a70578:
  lVar8 = *param_1;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar12 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01a70620;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a70620:
        bVar11 = false;
      }
      if (bVar11) {
        lVar8 = *(long *)(lVar8 + 0x10);
        plVar10 = (long *)(lVar8 + -0x28);
        local_38 = (long *)0x0;
        if (lVar8 != 0) {
          local_38 = plVar10;
          lVar9 = FUN_01e02240(*(undefined8 *)(lVar6 + 0x298),*(undefined8 *)(lVar6 + 0x2a0),
                               &local_38);
          lVar13 = *(long *)(lVar6 + 0x2a0);
          lVar5 = lVar13 - lVar9;
          if (lVar5 != 0) {
            lVar2 = lVar9 + lVar5;
            if (lVar2 != lVar13) {
              FUN_00c7f8b8(lVar9,lVar2);
              lVar9 = lVar9 + 8;
              if (lVar2 + 8 != lVar13) {
                do {
                  FUN_00c7f8b8(lVar9,lVar9 + (lVar5 >> 3) * 8);
                  lVar9 = lVar9 + 8;
                } while (lVar13 + (lVar5 >> 3) * -8 != lVar9);
              }
            }
            FUN_00c7f26c(lVar6 + 0x298,lVar9);
          }
          lVar8 = *(long *)(lVar8 + 8);
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar11) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
          }
          else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        goto LAB_01a70584;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
  local_38 = (long *)0x0;
LAB_01a70584:
  *(undefined8 *)(lVar6 + 0x2d8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x2e0));
  return;
}


