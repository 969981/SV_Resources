/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d395f0; name: FUN_00d395f0
 */


void FUN_00d395f0(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  char *pcVar8;
  bool bVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_58;
  
  uVar2 = *(uint *)(param_1 + 0x30) ^ (int)*(uint *)(param_1 + 0x30) >> 0x1f;
  if (uVar2 < 0x14) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x70) + 0x30);
    switch(uVar2) {
    case 0:
      FUN_00d396c8(*(undefined8 *)(lVar10 + 0x6140),param_1 + 0x38);
      return;
    case 1:
      lVar7 = *(long *)(param_1 + 0x38);
      lVar5 = *(long *)(param_1 + 0x40);
      if (((lVar7 != lVar5) &&
          (FUN_00d396c8(*(undefined8 *)(lVar10 + 0x6140),lVar7), lVar7 + 0x18 != lVar5)) &&
         (FUN_00d396c8(*(undefined8 *)(lVar10 + 0x6140)), lVar7 + 0x30 != lVar5)) {
        FUN_00d396c8(*(undefined8 *)(lVar10 + 0x6140));
        for (lVar7 = lVar7 + 0x48; lVar7 != lVar5; lVar7 = lVar7 + 0x18) {
          FUN_00d396c8(*(undefined8 *)(lVar10 + 0x6140),lVar7);
        }
      }
      return;
    default:
      FUN_0270c140();
    }
  }
  auVar11 = FUN_0270c150();
  pcVar8 = auVar11._8_8_;
  lVar10 = auVar11._0_8_;
  if (*pcVar8 == '\0') {
    return;
  }
  plVar1 = (long *)(lVar10 + 0x70);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(lVar10 + 0x78) == 0) {
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(undefined8 *)(lVar10 + 0x78) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00d3970c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x80));
  do {
    if (*plVar1 != 0 || *(long *)(lVar10 + 0x78) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x80));
        while (*plVar1 == 0 && *(long *)(lVar10 + 0x78) == 0) {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar7;
            *(undefined8 *)(lVar10 + 0x78) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00d3970c;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(undefined8 *)(lVar10 + 0x78) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00d3970c:
  lVar7 = 0;
  if (*pcVar8 != '\0') {
    lVar7 = *(long *)(pcVar8 + 8);
  }
  if (*(char *)(lVar7 + 0x90) != '\0') {
    FUN_00d39aac(lVar10 + 0xd0,*(undefined4 *)(lVar7 + 0x88));
  }
  if (*(char *)(lVar7 + 0x91) != '\0') {
    FUN_00d39aac(lVar10 + 0xd0,*(undefined4 *)(lVar7 + 0x8c));
  }
  uStack_58 = *(undefined8 *)(pcVar8 + 8);
  FUN_00d39874(lVar10 + 8,&uStack_58);
  do {
    lVar7 = *plVar1;
    lVar5 = *(long *)(lVar10 + 0x78);
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(long *)(lVar10 + 0x78) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(lVar10 + 0x78);
    if (lVar3 != lVar7 || lVar4 != lVar5) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_00d397c8;
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = 0;
      *(long *)(lVar10 + 0x74) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar9 = true;
LAB_00d397c8:
  if (!bVar9) {
    do {
      lVar7 = *plVar1;
      lVar5 = *(long *)(lVar10 + 0x78);
      if (lVar7 != lVar3 || lVar5 != lVar4) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d39834;
      }
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = 0;
        *(long *)(lVar10 + 0x74) = lVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar9 = true;
joined_r0x00d39834:
    if (!bVar9) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(lVar10 + 0x78);
        if (lVar3 != lVar7 || lVar4 != lVar5) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar7 = lVar3;
          lVar5 = lVar4;
          goto joined_r0x00d39834;
        }
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 0;
          *(long *)(lVar10 + 0x74) = lVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar9 = true;
      lVar7 = lVar3;
      lVar5 = lVar4;
      goto joined_r0x00d39834;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x80));
  return;
}


