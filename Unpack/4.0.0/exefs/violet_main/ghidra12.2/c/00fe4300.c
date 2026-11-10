/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe4300; name: FUN_00fe4300
 */


void FUN_00fe4300(undefined8 *param_1,long param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  short sVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  if (*(char *)param_3[1] != '\0') {
    plVar12 = (long *)(param_2 + 0x3c0);
    lVar9 = *plVar12;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 != lVar9) {
      lVar6 = nn::os::GetCurrentThread();
LAB_00fe4350:
      if (*plVar12 == 0) goto code_r0x00fe4358;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x3c8));
      do {
        if (*plVar12 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x3c8));
            while (*plVar12 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = lVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00fe4360;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00fe4360:
      bVar4 = false;
      goto LAB_00fe4364;
    }
    plVar12 = (long *)0x0;
    bVar4 = true;
LAB_00fe4364:
    plVar10 = *(long **)(param_2 + 0x3d8);
    plVar7 = *(long **)(param_2 + 0x3e0);
    plVar11 = plVar10;
    if (plVar10 == plVar7) {
    }
    else {
      do {
        plVar10 = plVar11;
        lVar6 = *plVar10;
        if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
          psVar1 = (short *)(lVar6 + 0x1a);
          sVar8 = *(short *)(lVar6 + 0x1a);
          do {
            sVar2 = *psVar1;
            if (sVar2 == sVar8) {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar8 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_00fe448c;
              bVar5 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_00fe448c:
              bVar5 = false;
            }
            if (bVar5) {
              lVar6 = *(long *)(lVar6 + 0x10);
              if ((lVar6 != 0) &&
                 (lVar9 = *param_3, lVar13 = *(long *)(lVar6 + 0x340),
                 (**(code **)(*(long *)(lVar6 + -0x28) + 0x60))(lVar6 + -0x28), lVar9 == lVar13))
              goto LAB_00fe438c;
              break;
            }
            sVar8 = sVar2;
          } while (sVar2 != 0);
        }
        plVar11 = plVar10 + 2;
        plVar10 = plVar7;
      } while (plVar11 != plVar7);
LAB_00fe438c:
      plVar11 = *(long **)(param_2 + 0x3e0);
    }
    if (plVar11 != plVar10) {
      *param_1 = 0;
      param_1[1] = 0;
      FUN_00d0a71c(param_1);
      if (bVar4) {
        return;
      }
      *plVar12 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
      return;
    }
    if (!bVar4) {
      *plVar12 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
code_r0x00fe4358:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar4) {
    *plVar12 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00fe4360;
  goto LAB_00fe4350;
}


