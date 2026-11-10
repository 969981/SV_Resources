/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f337c4; name: FUN_00f337c4
 */


void FUN_00f337c4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  uVar2 = *(undefined4 *)(param_2 + 0x520);
  FUN_00f338dc(&local_68);
  lVar5 = local_68;
  plVar1 = (long *)(local_68 + 0xd0);
  lVar8 = *plVar1;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar8) {
    uVar7 = FUN_00f33a84(lVar5 + 0xe8,param_3);
LAB_00f3384c:
    *(undefined4 *)(param_2 + 0x520) = uVar2;
    param_1[2] = uStack_60;
    *param_1 = uVar7;
    param_1[1] = local_68;
    *(undefined1 *)(param_1 + 3) = local_58;
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00f3382c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0xd8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0xd8));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00f3382c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00f3382c:
  uVar7 = FUN_00f33a84(lVar5 + 0xe8,param_3);
  *(undefined8 *)(lVar5 + 0xd0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0xd8));
  goto LAB_00f3384c;
}


