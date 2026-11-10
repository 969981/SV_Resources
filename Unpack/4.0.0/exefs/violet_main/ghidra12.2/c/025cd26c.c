/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025cd26c; name: FUN_025cd26c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_025cd26c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  
  uVar8 = FUN_011ef6ec();
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  plVar1 = (long *)(param_5 + 0x40);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_5 + 0x48) == 0) {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_5 + 0x48) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_025cd2b8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_5 + 0x50));
  do {
    if (*plVar1 != 0 || *(long *)(param_5 + 0x48) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_5 + 0x50));
        while (*plVar1 == 0 && *(long *)(param_5 + 0x48) == 0) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar9;
            *(undefined8 *)(param_5 + 0x48) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_025cd2b8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(undefined8 *)(param_5 + 0x48) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_025cd2b8:
  lVar9 = *(long *)(param_5 + 0x38);
  *(long *)(lVar9 + 0xa8) = param_1._8_8_;
  *(long *)(lVar9 + 0xa0) = param_1._0_8_;
  *(long *)(lVar9 + 0xb8) = param_2._8_8_;
  *(long *)(lVar9 + 0xb0) = param_2._0_8_;
  *(long *)(lVar9 + 0x68) = param_1._8_8_;
  *(long *)(lVar9 + 0x60) = param_1._0_8_;
  *(long *)(lVar9 + 0x78) = param_2._8_8_;
  *(long *)(lVar9 + 0x70) = param_2._0_8_;
  *(long *)(lVar9 + 200) = param_3._8_8_;
  *(long *)(lVar9 + 0xc0) = param_3._0_8_;
  *(long *)(lVar9 + 0xd8) = param_4._8_8_;
  *(long *)(lVar9 + 0xd0) = param_4._0_8_;
  *(long *)(lVar9 + 0x88) = param_3._8_8_;
  *(long *)(lVar9 + 0x80) = param_3._0_8_;
  *(long *)(lVar9 + 0x98) = param_4._8_8_;
  *(long *)(lVar9 + 0x90) = param_4._0_8_;
  uVar7 = _UNK_03caa988;
  uVar6 = _DAT_03caa980;
  *(undefined4 *)(lVar9 + 0x18) = 1;
  *(undefined8 *)(lVar9 + 0xf8) = uVar7;
  *(undefined8 *)(lVar9 + 0xf0) = uVar6;
  *(ulong *)(lVar9 + 0x148) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x128) >> 0x20) *
                (float)((ulong)uVar7 >> 0x20),(float)*(undefined8 *)(lVar9 + 0x128) * (float)uVar7);
  *(ulong *)(lVar9 + 0x140) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x120) >> 0x20) *
                (float)((ulong)uVar6 >> 0x20),(float)*(undefined8 *)(lVar9 + 0x120) * (float)uVar6);
  do {
    lVar9 = *plVar1;
    lVar4 = *(long *)(param_5 + 0x48);
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar9;
      *(long *)(param_5 + 0x48) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_5 + 0x48);
    if (lVar2 != lVar9 || lVar3 != lVar4) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_025cd388;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = 0;
      *(long *)(param_5 + 0x44) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar10 = true;
LAB_025cd388:
  if (!bVar10) {
    do {
      lVar9 = *plVar1;
      lVar4 = *(long *)(param_5 + 0x48);
      if (lVar9 != lVar2 || lVar4 != lVar3) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x025cd3d8;
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)(param_5 + 0x44) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar10 = true;
joined_r0x025cd3d8:
    if (!bVar10) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_5 + 0x48);
        if (lVar2 != lVar9 || lVar3 != lVar4) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar9 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x025cd3d8;
        }
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(param_5 + 0x44) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar10 = true;
      lVar9 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x025cd3d8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_5 + 0x50));
  return 1;
}


