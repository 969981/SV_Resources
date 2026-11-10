/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1b280; name: FUN_01e1b280
 */


undefined4 FUN_01e1b280(long param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  short sVar9;
  undefined4 uVar10;
  long lVar11;
  bool bVar12;
  
  plVar8 = (long *)(param_1 + 0xa0);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar12) {
      *plVar8 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01e1b2b8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar12) {
            *plVar8 = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01e1b2b8;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar12) {
      *plVar8 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01e1b2b8:
  plVar8 = *(long **)(param_1 + 0x40);
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar8 == plVar2) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      lVar5 = *plVar8;
      if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar5 + 0x1a);
        sVar9 = *(short *)(lVar5 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar9) {
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar12) {
              *psVar1 = sVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01e1b38c;
            bVar12 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01e1b38c:
            bVar12 = false;
          }
          if (bVar12) {
            lVar5 = *(long *)(lVar5 + 0x10);
            if (lVar5 != 0) {
              plVar7 = (long *)(lVar5 + 0xe8);
              lVar11 = *plVar7;
              lVar6 = nn::os::GetCurrentThread();
              if (lVar6 != lVar11) {
                lVar6 = nn::os::GetCurrentThread();
                goto LAB_01e1b3c4;
              }
              bVar12 = true;
              goto LAB_01e1b3d8;
            }
            break;
          }
          sVar9 = sVar3;
        } while (sVar3 != 0);
      }
LAB_01e1b2d0:
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar2);
  }
LAB_01e1b2dc:
  *(undefined8 *)(param_1 + 0xa0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa8));
  return uVar10;
LAB_01e1b3c4:
  if (*plVar7 == 0) goto code_r0x01e1b3cc;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0xf0));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0xf0));
        while (*plVar7 == 0) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar12) {
            *plVar7 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01e1b3d4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar12) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01e1b3d4:
  bVar12 = false;
LAB_01e1b3d8:
  plVar7 = (long *)FUN_01e1b4e0(*(undefined8 *)(lVar5 + 0x100),*(undefined8 *)(lVar5 + 0x108));
  if ((*(long **)(lVar5 + 0x108) == plVar7) || (*plVar7 == 0)) {
    plVar7 = (long *)FUN_01e1b4e0(*(undefined8 *)(lVar5 + 0x138),*(undefined8 *)(lVar5 + 0x140));
    if (*(long **)(lVar5 + 0x140) == plVar7) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (*plVar7 != 0) {
        lVar6 = *plVar7 + -0x20;
      }
    }
  }
  else {
    lVar6 = *plVar7 + -0x20;
  }
  plVar7 = (long *)(lVar5 + -0x28);
  if (!bVar12) {
    *(undefined8 *)(lVar5 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0xf0));
  }
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x143) != '\0') {
      (**(code **)(*plVar7 + 0x60))(plVar7);
      uVar10 = 2;
      goto LAB_01e1b2dc;
    }
    if (*(char *)(lVar6 + 0x252) != '\0') {
      uVar10 = 1;
    }
  }
  (**(code **)(*plVar7 + 0x60))(plVar7);
  goto LAB_01e1b2d0;
code_r0x01e1b3cc:
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar12) {
    *plVar7 = lVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01e1b3d4;
  goto LAB_01e1b3c4;
}


