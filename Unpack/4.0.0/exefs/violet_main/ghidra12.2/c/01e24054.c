/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e24054; name: FUN_01e24054
 */


ulong FUN_01e24054(long param_1)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  short sVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  bool bVar13;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  ulong local_28;
  
  lVar7 = *(long *)(param_1 + 0x240);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e240c4;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e240c4:
        bVar13 = false;
      }
      if (bVar13) {
        uVar12 = *(ulong *)(lVar7 + 0x10);
        if (uVar12 == 0) {
          return 3;
        }
        plVar10 = (long *)(uVar12 + 0xe8);
        lVar9 = *plVar10;
        lVar7 = nn::os::GetCurrentThread();
        if (lVar7 != lVar9) {
          lVar7 = nn::os::GetCurrentThread();
          bVar13 = false;
          goto LAB_01e24250;
        }
        bVar13 = true;
        goto LAB_01e240f8;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return 3;
LAB_01e24250:
  if (*plVar10 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(uVar12 + 0xf0));
    bVar13 = false;
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(uVar12 + 0xf0));
          while (*plVar10 == 0) {
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar13) {
              *plVar10 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            bVar13 = false;
            if (cVar4 == '\0') goto LAB_01e240f8;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01e240f8:
    lVar7 = FUN_01e25e78(uVar12 + 0x100);
    if (lVar7 == 0) {
      lVar7 = FUN_01e25e78(uVar12 + 0x138);
    }
    plVar10 = (long *)(uVar12 - 0x28);
    if (!bVar13) {
      *(undefined8 *)(uVar12 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(uVar12 + 0xf0));
    }
    if (lVar7 != 0) {
      plVar11 = *(long **)(lVar7 + 0x178);
      lVar9 = *plVar11;
      if ((plVar11 != *(long **)(lVar7 + 0x180)) &&
         (*(undefined1 **)(lVar9 + 0x1d0) != &DAT_afc4d6c05abef19e)) {
        do {
          plVar11 = plVar11 + 1;
          lVar9 = *plVar11;
        } while (*(undefined1 **)(lVar9 + 0x1d0) != &DAT_afc4d6c05abef19e);
      }
      plVar11 = *(long **)(lVar9 + 0x40);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        local_60 = 0xbc071098b7443d50;
        pcStack_58 = "poke_state_int";
        local_50 = 0xe;
        local_48 = (long *)0x0;
        uVar6 = (**(code **)(*plVar11 + 0x50))(plVar11,&local_60);
        local_28 = uVar6;
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))(local_48);
          uVar6 = local_28 & 0xff;
        }
        if ((uVar6 & 0xff) == 0) {
          bVar13 = true;
        }
        else {
          uVar5 = (**(code **)(*plVar11 + 0x68))(plVar11,&local_28);
          bVar13 = false;
          if (2 < uVar5) {
            uVar5 = 3;
          }
          uVar12 = (ulong)uVar5;
        }
        (**(code **)(*plVar11 + 0x18))(plVar11);
        if (!bVar13) {
          bVar13 = false;
          goto LAB_01e241f8;
        }
      }
    }
    bVar13 = true;
LAB_01e241f8:
    (**(code **)(*plVar10 + 0x60))(plVar10);
    if (bVar13) {
      return 3;
    }
    return uVar12 & 0xffffffff;
  }
  cVar4 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar3) {
    *plVar10 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01e240f8;
  goto LAB_01e24250;
}


