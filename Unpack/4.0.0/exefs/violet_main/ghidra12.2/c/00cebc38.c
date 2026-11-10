/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cebc38; name: FUN_00cebc38
 */


void FUN_00cebc38(long *param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  
  plVar1 = (long *)(param_2 + 0x570);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_2 + 0x578);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x578) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00cebc70:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x580));
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_2 + 0x578);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_2 + 0x578) = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar8 || *(long *)(param_2 + 0x578) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00cebca0;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x574) = lVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_00cebca0:
  if (!bVar7) {
    lVar8 = lVar3;
    lVar9 = *(long *)(param_2 + 0x578);
    goto LAB_00cebc70;
  }
  lVar6 = *(long *)(param_2 + 0x590);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar6 + 0x1a);
    sVar10 = *(short *)(lVar6 + 0x1a);
    do {
      sVar4 = *psVar2;
      if (sVar4 == sVar10) {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00cebdd8;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00cebdd8:
        bVar7 = false;
      }
      if (bVar7) {
        lVar8 = 0;
        if (*(long *)(lVar6 + 0x10) != 0) {
          lVar8 = *(long *)(lVar6 + 0x10) + -0x28;
        }
        *param_1 = lVar8;
        goto LAB_00cebcc0;
      }
      sVar10 = sVar4;
    } while (sVar4 != 0);
  }
  *param_1 = 0;
LAB_00cebcc0:
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_2 + 0x578);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0x578) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar9 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x578);
    if (lVar9 != lVar6 || lVar3 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00cebcfc;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0x574) = lVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_00cebcfc:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_2 + 0x578);
      if (lVar6 != lVar9 || lVar8 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00cebd60;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0x574) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x00cebd60:
    if (!bVar7) {
      do {
        lVar9 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x578);
        if (lVar9 != lVar6 || lVar3 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar9;
          lVar8 = lVar3;
          goto joined_r0x00cebd60;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar6;
          *(long *)(param_2 + 0x574) = lVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar6 = lVar9;
      lVar8 = lVar3;
      goto joined_r0x00cebd60;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x580));
  return;
}


