/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020acffc; name: FUN_020acffc
 */


undefined1  [16] FUN_020acffc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  long lVar6;
  long *plVar7;
  short sVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar7 = (long *)(param_1 + 0xa0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_020ad030;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_020ad030;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_020ad030:
  plVar7 = *(long **)(param_1 + 0x40);
  plVar10 = *(long **)(param_1 + 0x48);
  uVar12 = 0;
  uVar13 = 0;
  if (plVar7 == plVar10) {
    plVar10 = plVar7;
  }
  else {
    do {
      lVar6 = *plVar7;
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar6 + 0x1a);
        sVar8 = *(short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar8) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_020ad120;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_020ad120:
            bVar4 = false;
          }
          if (bVar4) {
            if (*(long *)(lVar6 + 0x10) != 0) {
              plVar9 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
              lVar6 = (**(code **)(*plVar9 + 0x68))(plVar9);
              uVar12 = CONCAT44((float)((ulong)uVar12 >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20),
                                (float)uVar12 + (float)*(undefined8 *)(lVar6 + 0x30));
              uVar13 = CONCAT44((float)((ulong)uVar13 >> 0x20) + 0.0,
                                (float)uVar13 + (float)*(undefined8 *)(lVar6 + 0x38));
              (**(code **)(*plVar9 + 0x60))(plVar9);
            }
            break;
          }
          sVar8 = sVar2;
        } while (sVar2 != 0);
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar10);
    plVar7 = *(long **)(param_1 + 0x48);
    plVar10 = *(long **)(param_1 + 0x40);
  }
  fVar11 = (float)(int)((ulong)((long)plVar7 - (long)plVar10) >> 4);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  auVar5._4_4_ = (float)((ulong)uVar12 >> 0x20) / fVar11;
  auVar5._0_4_ = (float)uVar12 / fVar11;
  auVar5._12_4_ = (float)((ulong)uVar13 >> 0x20) / fVar11;
  auVar5._8_4_ = (float)uVar13 / fVar11;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa8));
  return auVar5;
}


