/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e086a8; name: FUN_01e086a8
 */


float FUN_01e086a8(undefined8 param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  long lVar9;
  bool bVar10;
  float local_34;
  
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e08710;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e08710:
        bVar10 = false;
      }
      if (bVar10) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return 0.0;
        }
        plVar6 = (long *)(lVar7 + 0xe8);
        lVar9 = *plVar6;
        lVar5 = nn::os::GetCurrentThread();
        if (lVar5 == lVar9) {
          bVar10 = true;
          goto LAB_01e0875c;
        }
        lVar5 = nn::os::GetCurrentThread();
        goto LAB_01e08748;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return 0.0;
LAB_01e08748:
  if (*plVar6 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xf0));
    do {
      if (*plVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xf0));
          while (*plVar6 == 0) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar10) {
              *plVar6 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01e08758;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01e08758:
    bVar10 = false;
LAB_01e0875c:
    plVar6 = (long *)FUN_01174c30(*(undefined8 *)(lVar7 + 0x100),*(undefined8 *)(lVar7 + 0x108));
    if ((*(long **)(lVar7 + 0x108) == plVar6) || (*plVar6 == 0)) {
      plVar6 = (long *)FUN_01174c30(*(undefined8 *)(lVar7 + 0x138),*(undefined8 *)(lVar7 + 0x140));
      if (*(long **)(lVar7 + 0x140) == plVar6) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if (*plVar6 != 0) {
          lVar5 = *plVar6 + -0x20;
        }
      }
    }
    else {
      lVar5 = *plVar6 + -0x20;
    }
    if (!bVar10) {
      *(undefined8 *)(lVar7 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0xf0));
    }
    if (lVar5 == 0) {
      local_34 = 0.0;
    }
    else {
      uVar4 = FUN_00c94218(lVar5);
      switch(uVar4) {
      case 0:
        local_34 = 1.8;
        break;
      case 1:
        local_34 = 2.8;
        break;
      case 2:
        local_34 = 5.0;
        break;
      case 3:
        local_34 = (float)FUN_01e088a0(lVar5);
        local_34 = local_34 + 1.0;
        break;
      default:
        local_34 = 1.0;
      }
    }
    (**(code **)(*(long *)(lVar7 + -0x28) + 0x60))((long *)(lVar7 + -0x28));
    return local_34;
  }
  cVar3 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar10) {
    *plVar6 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01e08758;
  goto LAB_01e08748;
}


