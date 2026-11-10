/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fafdac; name: FUN_00fafdac
 */


void FUN_00fafdac(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  if (*param_2 == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0xe0);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0xe8) == 0) {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar5;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00fafdf0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf0));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0xe8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf0));
        while (*plVar1 == 0 && *(long *)(param_1 + 0xe8) == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar5;
            *(undefined8 *)(param_1 + 0xe8) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00fafdf0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar5;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00fafdf0:
  lVar5 = *(long *)(param_1 + 0x38);
  lVar12 = *(long *)(param_1 + 0x40);
  if (((lVar5 != lVar12) && (FUN_00feee04(*param_2,lVar5 + 0x50), lVar5 + 0x78 != lVar12)) &&
     (FUN_00feee04(*param_2,lVar5 + 200), lVar5 + 0xf0 != lVar12)) {
    do {
      FUN_00feee04(*param_2,lVar5 + 0x140);
      lVar5 = lVar5 + 0x78;
    } while (lVar12 + -0xf0 != lVar5);
  }
  FUN_00fb0154((long *)(param_1 + 0x38));
  if (*(long *)(param_1 + 200) != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0xa0);
    if (puVar8 != (undefined8 *)0x0) {
      plVar10 = *(long **)(param_1 + 0xa8);
      plVar9 = (long *)*puVar8;
      uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,puVar8,0x20,8);
      }
      else {
        FUN_00c48fe8(plVar10,puVar8,0x20,8);
      }
      if (plVar9 != (long *)0x0) {
        plVar11 = *(long **)(param_1 + 0xa8);
        plVar10 = (long *)*plVar9;
        uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
        if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar11 + 0x18))(plVar11,plVar9,0x20,8);
        }
        else {
          FUN_00c48fe8(plVar11,plVar9,0x20,8);
        }
        while (plVar10 != (long *)0x0) {
          plVar9 = *(long **)(param_1 + 0xa8);
          plVar11 = (long *)*plVar10;
          uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,plVar10,0x20,8);
            plVar10 = plVar11;
          }
          else {
            FUN_00c48fe8(plVar9,plVar10,0x20,8);
            plVar10 = plVar11;
          }
        }
      }
    }
    lVar5 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (((((lVar5 != 0) && (**(undefined8 **)(param_1 + 0x70) = 0, lVar5 != 1)) &&
         (*(undefined8 *)(*(long *)(param_1 + 0x70) + 8) = 0, lVar5 != 2)) &&
        ((*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) = 0, lVar5 != 3 &&
         (*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x18) = 0, lVar5 != 4)))) &&
       ((*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x20) = 0, lVar5 != 5 &&
        (*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x28) = 0, lVar5 != 6)))) {
      lVar12 = 6;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar12 * 8) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
    }
    *(undefined8 *)(param_1 + 200) = 0;
  }
  do {
    lVar5 = *plVar1;
    lVar12 = *(long *)(param_1 + 0xe8);
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0xe8) = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0xe8);
    if (lVar2 != lVar5 || lVar3 != lVar12) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00fafe9c;
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xe4) = lVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar7 = true;
LAB_00fafe9c:
  if (!bVar7) {
    do {
      lVar5 = *plVar1;
      lVar12 = *(long *)(param_1 + 0xe8);
      if (lVar5 != lVar2 || lVar12 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00fb0114;
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xe4) = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar7 = true;
joined_r0x00fb0114:
    if (!bVar7) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0xe8);
        if (lVar2 != lVar5 || lVar3 != lVar12) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar5 = lVar2;
          lVar12 = lVar3;
          goto joined_r0x00fb0114;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = 0;
          *(long *)(param_1 + 0xe4) = lVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar7 = true;
      lVar5 = lVar2;
      lVar12 = lVar3;
      goto joined_r0x00fb0114;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf0));
  return;
}


