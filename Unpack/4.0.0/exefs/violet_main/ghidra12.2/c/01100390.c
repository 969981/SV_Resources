/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01100390; name: FUN_01100390
 */


void FUN_01100390(long param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  long lVar11;
  long *plVar12;
  
  *(byte *)(param_1 + 0x2d9) = param_2 & 1;
  if ((param_2 & 1) != 0) {
    return;
  }
  plVar12 = (long *)(param_1 + 0x248);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar10 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = lVar8;
      cVar10 = ExclusiveMonitorsStatus();
    }
    if (cVar10 == '\0') goto LAB_011003f4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x250));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x250));
        while (*plVar12 == 0) {
          cVar10 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar7) {
            *plVar12 = lVar8;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB_011003f4;
        }
      } while( true );
    }
    cVar10 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = lVar8;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB_011003f4:
  lVar8 = *(long *)(*(long *)(param_1 + 0x1c0) + 0xf8);
  if (((lVar8 == 0) || (*(int *)(*(long *)(param_1 + 0x1c0) + 0x100) != *(int *)(lVar8 + 0x2c))) ||
     (lVar8 = FUN_00c41664(), lVar8 == 0)) goto LAB_0110044c;
  *(undefined1 *)(param_1 + 0x298) = 1;
  *(undefined1 *)(lVar8 + 10) = *(undefined1 *)(param_1 + 0x299);
  plVar12 = *(long **)(param_1 + 0x208);
  *(undefined1 *)(param_1 + 0x269) = 1;
  if (plVar12 == (long *)0x0) {
LAB_0110043c:
    bVar7 = *(char *)(param_1 + 0x26a) != '\0';
  }
  else {
    cVar10 = '\x01';
    do {
      lVar6 = DAT_0485a0e8;
      iVar4 = *(int *)((long)plVar12 + 0x1c);
      if (cVar10 == '\0') {
        bVar7 = false;
      }
      else {
        bVar7 = *(char *)(param_1 + 0x26a) != '\0';
      }
      if ((char)plVar12[3] != '\0') {
        plVar1 = (long *)(DAT_0485a0e8 + 0xd70);
        lVar9 = nn::os::GetCurrentThread();
LAB_011004f0:
        if (*plVar1 == 0 && *(long *)(lVar6 + 0xd78) == 0) goto code_r0x011004fc;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xd80));
        do {
          if (*plVar1 != 0 || *(long *)(lVar6 + 0xd78) != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xd80));
              while (*plVar1 == 0 && *(long *)(lVar6 + 0xd78) == 0) {
                cVar10 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar9;
                  *(undefined8 *)(lVar6 + 0xd78) = 0;
                  cVar10 = ExclusiveMonitorsStatus();
                }
                if (cVar10 == '\0') goto LAB_01100504;
              }
            } while( true );
          }
          cVar10 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9;
            *(undefined8 *)(lVar6 + 0xd78) = 0;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
LAB_01100504:
        lVar9 = *(long *)(lVar6 + 0x38);
        lVar11 = lVar9 + (long)iVar4 * 0x1d0;
        if ((bool)*(char *)(lVar11 + 0x1b8) != bVar7) {
          *(bool *)(lVar11 + 0x1b8) = bVar7;
          *(undefined1 *)(lVar9 + (long)iVar4 * 0x1d0 + 0x1b9) = 1;
        }
        do {
          lVar9 = *plVar1;
          lVar11 = *(long *)(lVar6 + 0xd78);
          cVar10 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar9;
            *(long *)(lVar6 + 0xd78) = lVar11;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        do {
          lVar2 = *plVar1;
          lVar3 = *(long *)(lVar6 + 0xd78);
          if (lVar2 != lVar9 || lVar3 != lVar11) {
            bVar7 = false;
            ClearExclusiveLocal();
            goto LAB_011005b0;
          }
          cVar10 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = 0;
            *(long *)(lVar6 + 0xd74) = lVar11;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        bVar7 = true;
LAB_011005b0:
        if (!bVar7) {
          do {
            lVar9 = *plVar1;
            lVar11 = *(long *)(lVar6 + 0xd78);
            if (lVar9 != lVar2 || lVar11 != lVar3) {
              bVar7 = false;
              ClearExclusiveLocal();
              goto joined_r0x01100608;
            }
            cVar10 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = 0;
              *(long *)(lVar6 + 0xd74) = lVar3;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          bVar7 = true;
joined_r0x01100608:
          if (!bVar7) {
            do {
              lVar2 = *plVar1;
              lVar3 = *(long *)(lVar6 + 0xd78);
              if (lVar2 != lVar9 || lVar3 != lVar11) {
                bVar7 = false;
                ClearExclusiveLocal();
                lVar9 = lVar2;
                lVar11 = lVar3;
                goto joined_r0x01100608;
              }
              cVar10 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = 0;
                *(long *)(lVar6 + 0xd74) = lVar11;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            bVar7 = true;
            lVar9 = lVar2;
            lVar11 = lVar3;
            goto joined_r0x01100608;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xd80));
      }
      plVar12 = (long *)*plVar12;
      cVar10 = *(char *)(param_1 + 0x269);
    } while (plVar12 != (long *)0x0);
    if (cVar10 != '\0') goto LAB_0110043c;
    bVar7 = false;
  }
  *(bool *)(lVar8 + 0xb) = bVar7;
LAB_0110044c:
  *(undefined8 *)(param_1 + 0x248) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x250));
  return;
code_r0x011004fc:
  cVar10 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar5) {
    *plVar1 = lVar9;
    *(undefined8 *)(lVar6 + 0xd78) = 0;
    cVar10 = ExclusiveMonitorsStatus();
  }
  if (cVar10 == '\0') goto LAB_01100504;
  goto LAB_011004f0;
}


