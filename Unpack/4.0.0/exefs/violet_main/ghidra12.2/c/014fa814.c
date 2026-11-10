/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014fa814; name: FUN_014fa814
 */


void FUN_014fa814(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  
  plVar5 = (long *)(param_1 + 0xf0);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_014fa850;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_014fa850;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_014fa850:
  *(long *)(param_1 + 0x138) = *param_2;
  *(long *)(param_1 + 0x140) = param_2[1];
  *(long *)(param_1 + 0x148) = param_2[2];
  plVar5 = (long *)param_2[3];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar4 = *(long **)(param_1 + 0x150);
  *(long **)(param_1 + 0x150) = plVar5;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  FUN_00f1ec1c(&local_60);
  lVar3 = local_60;
  lVar6 = *param_2;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (lVar6 == lVar3) {
    FUN_0104bd38(&local_60);
  }
  else {
    FUN_00f1ed2c();
    lVar3 = local_60;
    lVar6 = *param_2;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (lVar6 != lVar3) goto LAB_014fa8f0;
    FUN_014fa9b4(&local_60);
  }
  *(long *)(param_1 + 0x360) = local_60;
  *(undefined8 *)(param_1 + 0x368) = local_58;
  plVar5 = *(long **)(param_1 + 0x378);
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x370) = local_50;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(long **)(param_1 + 0x378) = local_48;
LAB_014fa8f0:
  *(undefined8 *)(param_1 + 0xf0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf8));
  return;
}


