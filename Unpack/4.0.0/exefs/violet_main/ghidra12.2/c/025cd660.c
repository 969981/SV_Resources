/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025cd660; name: FUN_025cd660
 */


undefined8
FUN_025cd660(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],undefined1 param_5 [16],long param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar6 = FUN_011ef6ec();
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  plVar1 = (long *)(param_6 + 0x40);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_6 + 0x48) == 0) {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_6 + 0x48) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_025cd6ac;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_6 + 0x50));
  do {
    if (*plVar1 != 0 || *(long *)(param_6 + 0x48) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_6 + 0x50));
        while (*plVar1 == 0 && *(long *)(param_6 + 0x48) == 0) {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_6 + 0x48) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_025cd6ac;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_6 + 0x48) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_025cd6ac:
  lVar7 = *(long *)(param_6 + 0x38);
  *(undefined4 *)(lVar7 + 0x18) = 1;
  fVar10 = param_5._4_4_;
  *(long *)(lVar7 + 0xf8) = param_5._8_8_;
  *(long *)(lVar7 + 0xf0) = param_5._0_8_;
  fVar9 = param_5._0_4_;
  *(ulong *)(lVar7 + 0x68) = CONCAT44(param_1._12_4_ * fVar9,param_1._8_4_ * fVar9);
  *(ulong *)(lVar7 + 0x60) = CONCAT44(param_1._4_4_ * fVar9,param_1._0_4_ * fVar9);
  *(ulong *)(lVar7 + 0x78) = CONCAT44(param_2._12_4_ * fVar10,param_2._8_4_ * fVar10);
  *(ulong *)(lVar7 + 0x70) = CONCAT44(param_2._4_4_ * fVar10,param_2._0_4_ * fVar10);
  fVar11 = param_5._8_4_;
  *(ulong *)(lVar7 + 0x88) = CONCAT44(param_3._12_4_ * fVar11,param_3._8_4_ * fVar11);
  *(ulong *)(lVar7 + 0x80) = CONCAT44(param_3._4_4_ * fVar11,param_3._0_4_ * fVar11);
  *(long *)(lVar7 + 0x98) = param_4._8_8_;
  *(long *)(lVar7 + 0x90) = param_4._0_8_;
  *(long *)(lVar7 + 200) = param_3._8_8_;
  *(long *)(lVar7 + 0xc0) = param_3._0_8_;
  *(long *)(lVar7 + 0xd8) = param_4._8_8_;
  *(long *)(lVar7 + 0xd0) = param_4._0_8_;
  *(long *)(lVar7 + 0xa8) = param_1._8_8_;
  *(long *)(lVar7 + 0xa0) = param_1._0_8_;
  *(long *)(lVar7 + 0xb8) = param_2._8_8_;
  *(long *)(lVar7 + 0xb0) = param_2._0_8_;
  *(ulong *)(lVar7 + 0x148) =
       CONCAT44(param_5._12_4_ * (float)((ulong)*(undefined8 *)(lVar7 + 0x128) >> 0x20),
                fVar11 * (float)*(undefined8 *)(lVar7 + 0x128));
  *(ulong *)(lVar7 + 0x140) =
       CONCAT44(fVar10 * (float)((ulong)*(undefined8 *)(lVar7 + 0x120) >> 0x20),
                fVar9 * (float)*(undefined8 *)(lVar7 + 0x120));
  do {
    lVar7 = *plVar1;
    lVar4 = *(long *)(param_6 + 0x48);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_6 + 0x48) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_6 + 0x48);
    if (lVar2 != lVar7 || lVar3 != lVar4) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_025cd784;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)(param_6 + 0x44) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_025cd784:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar4 = *(long *)(param_6 + 0x48);
      if (lVar7 != lVar2 || lVar4 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x025cd7d4;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)(param_6 + 0x44) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x025cd7d4:
    if (!bVar8) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_6 + 0x48);
        if (lVar2 != lVar7 || lVar3 != lVar4) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x025cd7d4;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)(param_6 + 0x44) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar7 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x025cd7d4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_6 + 0x50));
  return 1;
}


