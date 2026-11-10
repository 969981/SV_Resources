/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021930d0; name: FUN_021930d0
 */


long FUN_021930d0(float param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  
  plVar1 = (long *)(param_2 + 0xe0);
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar6 = *(long *)(param_2 + 0xe8);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0xe8) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02193110:
  while ((lVar8 != 0 && (lVar4 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xf0));
    do {
      lVar8 = *plVar1;
      lVar6 = *(long *)(param_2 + 0xe8);
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8;
        *(long *)(param_2 + 0xe8) = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar7 = *plVar1;
    if (lVar7 != lVar8 || *(long *)(param_2 + 0xe8) != lVar6) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_02193140;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0xe4) = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_02193140:
  if (!bVar5) {
    lVar8 = lVar7;
    lVar6 = *(long *)(param_2 + 0xe8);
    goto LAB_02193110;
  }
  lVar4 = FUN_02192fc4(param_2 + 8,param_3);
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar6 = *(long *)(lVar4 + 0x78);
    lVar8 = lVar4 + 0x58;
    if (lVar6 != *(long *)(lVar4 + 0x80)) {
      lVar7 = lVar8;
      do {
        fVar9 = *(float *)(lVar6 + 8) * *(float *)(lVar6 + 8);
        lVar8 = lVar6 + 0xc;
        if (fVar9 <= param_1) {
          lVar8 = lVar7;
        }
      } while ((*(long *)(lVar4 + 0x80) + -0x30 != lVar6) &&
              (lVar6 = lVar6 + 0x30, lVar7 = lVar8, fVar9 <= param_1));
    }
  }
  do {
    lVar4 = *plVar1;
    lVar6 = *(long *)(param_2 + 0xe8);
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_2 + 0xe8) = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar7 = *plVar1;
    lVar2 = *(long *)(param_2 + 0xe8);
    if (lVar7 != lVar4 || lVar2 != lVar6) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_021931e4;
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar4;
      *(long *)(param_2 + 0xe4) = lVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar5 = true;
LAB_021931e4:
  if (!bVar5) {
    do {
      lVar4 = *plVar1;
      lVar6 = *(long *)(param_2 + 0xe8);
      if (lVar4 != lVar7 || lVar6 != lVar2) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto joined_r0x02193254;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        *(long *)(param_2 + 0xe4) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
joined_r0x02193254:
    if (!bVar5) {
      do {
        lVar7 = *plVar1;
        lVar2 = *(long *)(param_2 + 0xe8);
        if (lVar7 != lVar4 || lVar2 != lVar6) {
          bVar5 = false;
          ClearExclusiveLocal();
          lVar4 = lVar7;
          lVar6 = lVar2;
          goto joined_r0x02193254;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          *(long *)(param_2 + 0xe4) = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar5 = true;
      lVar4 = lVar7;
      lVar6 = lVar2;
      goto joined_r0x02193254;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xf0));
  return lVar8;
}


