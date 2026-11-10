/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b4fc84; name: FUN_02b4fc84
 */


void FUN_02b4fc84(long *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  lVar13 = *param_1;
  plVar12 = (long *)(lVar13 + 0x1d8);
  lVar9 = *plVar12;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar9) {
    plVar12 = (long *)0x0;
    bVar3 = true;
  }
  else {
    lVar5 = nn::os::GetCurrentThread();
    do {
      if (*plVar12 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x1e0));
          while (*plVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_02b4fccc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02b4fccc:
    bVar3 = false;
  }
  puVar1 = *(undefined8 **)(lVar13 + 0x1f8);
  for (puVar10 = *(undefined8 **)(lVar13 + 0x1f0); puVar10 != puVar1; puVar10 = puVar10 + 1) {
    bVar4 = FUN_0143ed90(*puVar10);
    *(byte *)param_1[1] = bVar4 & *(byte *)param_1[1];
  }
  if (*(char *)param_1[1] != '\0') {
    plVar7 = *(long **)(lVar13 + 0x1f0);
    plVar8 = *(long **)(lVar13 + 0x1f8);
    if ((plVar7 != plVar8) && (*(char *)(*plVar7 + 0x44c) == '\0')) {
      do {
        plVar7 = plVar7 + 1;
        if (plVar8 == plVar7) {
          plVar7 = plVar8;
          goto LAB_02b4fdd8;
        }
      } while (*(char *)(*plVar7 + 0x44c) == '\0');
    }
    if (plVar7 != plVar8) {
      plVar11 = plVar7 + 1;
      if (plVar11 != plVar8) {
        do {
          plVar6 = plVar7;
          if (*(char *)(*plVar11 + 0x44c) == '\0') {
            plVar6 = (long *)*plVar7;
            *plVar7 = 0;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x60))();
            }
            lVar5 = *plVar11;
            *plVar11 = 0;
            plVar6 = plVar7 + 1;
            *plVar7 = lVar5;
          }
          plVar11 = plVar11 + 1;
          plVar7 = plVar6;
        } while (plVar8 != plVar11);
        plVar8 = *(long **)(lVar13 + 0x1f8);
      }
    }
LAB_02b4fdd8:
    lVar5 = (long)plVar8 - (long)plVar7;
    if (lVar5 != 0) {
      if ((long *)((long)plVar7 + lVar5) != plVar8) {
        lVar5 = lVar5 >> 3;
        plVar11 = plVar7;
        do {
          plVar7 = (long *)*plVar11;
          *plVar11 = 0;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x60))();
          }
          lVar9 = plVar11[lVar5];
          plVar11[lVar5] = 0;
          plVar7 = plVar11 + 1;
          *plVar11 = lVar9;
          plVar11 = plVar7;
        } while (plVar8 + -lVar5 != plVar7);
        plVar8 = *(long **)(lVar13 + 0x1f8);
      }
      while (plVar8 != plVar7) {
        plVar8 = plVar8 + -1;
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x60))();
        }
      }
      *(long **)(lVar13 + 0x1f8) = plVar7;
    }
  }
  if (!bVar3) {
    *plVar12 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
    return;
  }
  return;
}


