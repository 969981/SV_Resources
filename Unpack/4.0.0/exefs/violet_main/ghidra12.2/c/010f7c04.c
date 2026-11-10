/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f7c04; name: FUN_010f7c04
 */


void FUN_010f7c04(long param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  
  plVar2 = (long *)(param_1 + 0x1b0);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar2 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar10) {
      *plVar2 = lVar8;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_010f7c44;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
  do {
    if (*plVar2 != 0 || *(long *)(param_1 + 0x1b8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
        while (*plVar2 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar10) {
            *plVar2 = lVar8;
            *(undefined8 *)(param_1 + 0x1b8) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_010f7c44;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar10) {
      *plVar2 = lVar8;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_010f7c44:
  plVar6 = *(long **)(param_1 + 0x170);
  for (plVar14 = *(long **)(param_1 + 0x168); plVar14 != plVar6; plVar14 = plVar14 + 1) {
    lVar8 = *(long *)(param_1 + 0xf0);
    if (*(long *)(param_1 + 0xf8) != lVar8) {
      uVar16 = 0;
      do {
        lVar15 = *plVar14;
        plVar3 = (long *)(lVar15 + 0x70);
        lVar9 = nn::os::GetCurrentThread();
        do {
          lVar12 = *plVar3;
          lVar13 = *(long *)(lVar15 + 0x78);
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar10) {
            *plVar3 = lVar12;
            *(long *)(lVar15 + 0x78) = lVar13;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_010f7c80:
        while ((lVar12 != 0 && (lVar9 != lVar12))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x80));
          do {
            lVar12 = *plVar3;
            lVar13 = *(long *)(lVar15 + 0x78);
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar10) {
              *plVar3 = lVar12;
              *(long *)(lVar15 + 0x78) = lVar13;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        do {
          lVar5 = *plVar3;
          if (lVar5 != lVar12 || *(long *)(lVar15 + 0x78) != lVar13) {
            bVar10 = false;
            ClearExclusiveLocal();
            goto LAB_010f7cb0;
          }
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar10) {
            *plVar3 = lVar12;
            *(long *)(lVar15 + 0x74) = lVar13 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar10 = true;
LAB_010f7cb0:
        if (!bVar10) {
          lVar12 = lVar5;
          lVar13 = *(long *)(lVar15 + 0x78);
          goto LAB_010f7c80;
        }
        if (uVar16 < (ulong)(*(long *)(lVar15 + 0x38) - *(long *)(lVar15 + 0x30) >> 3)) {
          plVar4 = (long *)(*(long *)(lVar15 + 0x30) + uVar16 * 8);
          if (*plVar4 != 0) {
            FUN_00eac2f8(param_1,plVar4,*(undefined4 *)(lVar8 + uVar16 * 0x38 + 8));
          }
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        do {
          lVar8 = *plVar3;
          lVar9 = *(long *)(lVar15 + 0x78);
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar11) {
            *plVar3 = lVar8;
            *(long *)(lVar15 + 0x78) = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          lVar12 = *plVar3;
          lVar13 = *(long *)(lVar15 + 0x78);
          if (lVar12 != lVar8 || lVar13 != lVar9) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto LAB_010f7d34;
          }
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar11) {
            *plVar3 = lVar8;
            *(long *)(lVar15 + 0x74) = lVar9 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar11 = true;
LAB_010f7d34:
        if (!bVar11) {
          do {
            lVar8 = *plVar3;
            lVar9 = *(long *)(lVar15 + 0x78);
            if (lVar8 != lVar12 || lVar9 != lVar13) {
              bVar11 = false;
              ClearExclusiveLocal();
              goto joined_r0x010f7e7c;
            }
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar11) {
              *plVar3 = lVar12;
              *(long *)(lVar15 + 0x74) = lVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar11 = true;
joined_r0x010f7e7c:
          if (!bVar11) {
            do {
              lVar12 = *plVar3;
              lVar13 = *(long *)(lVar15 + 0x78);
              if (lVar12 != lVar8 || lVar13 != lVar9) {
                bVar11 = false;
                ClearExclusiveLocal();
                lVar8 = lVar12;
                lVar9 = lVar13;
                goto joined_r0x010f7e7c;
              }
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar11) {
                *plVar3 = lVar8;
                *(long *)(lVar15 + 0x74) = lVar9 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar11 = true;
            lVar8 = lVar12;
            lVar9 = lVar13;
            goto joined_r0x010f7e7c;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x80));
        if (!bVar10) break;
        lVar8 = *(long *)(param_1 + 0xf0);
        uVar1 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar1;
      } while ((ulong)uVar1 < (ulong)((*(long *)(param_1 + 0xf8) - lVar8 >> 3) * 0x6db6db6db6db6db7)
              );
    }
  }
  do {
    lVar8 = *plVar2;
    lVar9 = *(long *)(param_1 + 0x1b8);
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar10) {
      *plVar2 = lVar8;
      *(long *)(param_1 + 0x1b8) = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar15 = *plVar2;
    lVar12 = *(long *)(param_1 + 0x1b8);
    if (lVar15 != lVar8 || lVar12 != lVar9) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_010f7e3c;
    }
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar10) {
      *plVar2 = 0;
      *(long *)(param_1 + 0x1b4) = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar10 = true;
LAB_010f7e3c:
  if (!bVar10) {
    do {
      lVar8 = *plVar2;
      lVar9 = *(long *)(param_1 + 0x1b8);
      if (lVar8 != lVar15 || lVar9 != lVar12) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x010f7f00;
      }
      cVar7 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar10) {
        *plVar2 = 0;
        *(long *)(param_1 + 0x1b4) = lVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar10 = true;
joined_r0x010f7f00:
    if (!bVar10) {
      do {
        lVar15 = *plVar2;
        lVar12 = *(long *)(param_1 + 0x1b8);
        if (lVar15 != lVar8 || lVar12 != lVar9) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar8 = lVar15;
          lVar9 = lVar12;
          goto joined_r0x010f7f00;
        }
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar10) {
          *plVar2 = 0;
          *(long *)(param_1 + 0x1b4) = lVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar10 = true;
      lVar8 = lVar15;
      lVar9 = lVar12;
      goto joined_r0x010f7f00;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  return;
}


