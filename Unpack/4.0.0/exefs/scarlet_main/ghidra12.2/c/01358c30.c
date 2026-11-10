/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01358c30; name: FUN_01358c30
 */


void FUN_01358c30(long *param_1)

{
  long *plVar1;
  short *psVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  short sVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  lVar8 = *param_1;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar8 + 0x1a);
    sVar10 = *(short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar10) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01358d44;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01358d44:
        bVar6 = false;
      }
      if (bVar6) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          if ((*(long *)(lVar8 + 200) != 0) &&
             ((*(byte *)(*(long *)(lVar8 + 200) + 0x1e8) & 1) != 0)) {
            thunk_FUN_010d9d54(*(undefined8 *)(lVar8 + 200),lVar8 + 0x28);
          }
          lVar7 = *(long *)(lVar8 + 8);
          psVar2 = (short *)(lVar7 + 0x1a);
          do {
            sVar10 = *psVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar10 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
          }
          else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar10 = sVar4;
    } while (sVar4 != 0);
  }
  lVar8 = param_1[2];
  if ((*(byte *)(lVar8 + 0x61) & 1) != 0) {
    return;
  }
  plVar1 = (long *)(lVar8 + 0x68);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01358c78;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x70));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x70));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01358c78;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01358c78:
  puVar11 = *(undefined8 **)(lVar8 + 0x80);
  puVar3 = *(undefined8 **)(lVar8 + 0x88);
  if (puVar11 != puVar3) {
    if ((*(byte *)(lVar8 + 0x61) & 1) == 0) {
      (*(code *)*puVar11)(puVar11 + 4);
    }
    if ((*(byte *)(lVar8 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar11[0x10])();
      *(int *)(lVar8 + 100) = *(int *)(lVar8 + 100) + 1;
    }
    while (puVar11 = puVar11 + 0x12, puVar11 != puVar3) {
      if ((*(byte *)(lVar8 + 0x61) & 1) == 0) {
        (*(code *)*puVar11)(puVar11 + 4);
      }
      if ((*(byte *)(lVar8 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar11[0x10])();
        *(int *)(lVar8 + 100) = *(int *)(lVar8 + 100) + 1;
      }
    }
    puVar11 = *(undefined8 **)(lVar8 + 0x80);
    puVar3 = *(undefined8 **)(lVar8 + 0x88);
    if (puVar3 != puVar11) {
      pcVar9 = (code *)puVar3[-0x11];
      puVar12 = puVar3 + -0x12;
      if (pcVar9 != (code *)0x0) {
        puVar3[-0x10] = 0;
        puVar3[-0xf] = 0;
        *puVar12 = 0;
        puVar3[-0x11] = 0;
        (*pcVar9)(puVar3 + -0xe);
      }
      while (puVar3 = puVar12, puVar3 != puVar11) {
        pcVar9 = (code *)puVar3[-0x11];
        puVar12 = puVar3 + -0x12;
        if (pcVar9 != (code *)0x0) {
          puVar3[-0x10] = 0;
          puVar3[-0xf] = 0;
          puVar3[-0x12] = 0;
          puVar3[-0x11] = 0;
          (*pcVar9)(puVar3 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar8 + 0x88) = puVar11;
  *(undefined1 *)(lVar8 + 0x60) = 1;
  if ((*(byte *)(lVar8 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar8 + 0x40),lVar8);
    *(byte *)(lVar8 + 0x50) = 1;
  }
  *(undefined8 *)(lVar8 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x70));
  return;
}


