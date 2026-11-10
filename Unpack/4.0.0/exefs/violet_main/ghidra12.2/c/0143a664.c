/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143a664; name: FUN_0143a664
 */


void FUN_0143a664(long param_1,long *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long *local_48;
  
  plVar6 = (long *)(param_1 + 0xf0);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0143a6a4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0143a6a4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0143a6a4:
  *(long *)(param_1 + 0x138) = *param_2;
  *(long *)(param_1 + 0x140) = param_2[1];
  *(long *)(param_1 + 0x148) = param_2[2];
  plVar6 = (long *)param_2[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar4 = *(long **)(param_1 + 0x150);
  *(long **)(param_1 + 0x150) = plVar6;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  FUN_00f1ec1c(&local_60);
  lVar3 = local_60;
  lVar7 = *param_2;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (lVar7 == lVar3) {
    FUN_0104bd38(&local_60);
  }
  else {
    FUN_00f1ed2c();
    lVar3 = local_60;
    lVar7 = *param_2;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (lVar7 != lVar3) goto LAB_0143a710;
    FUN_014fa9b4(&local_60);
  }
  *(long *)(param_1 + 0x360) = local_60;
  *(char **)(param_1 + 0x368) = local_58;
  plVar6 = *(long **)(param_1 + 0x378);
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x370) = local_50;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(long **)(param_1 + 0x378) = local_48;
LAB_0143a710:
  plVar6 = *(long **)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x728) = param_3;
  *(undefined4 *)(param_1 + 300) = 1;
  if (((plVar6 != (long *)0x0) && (**(char **)(param_1 + 0x388) != '\0')) &&
     (**(char **)(param_1 + 1000) != '\0')) {
    (**(code **)(*plVar6 + 0x70))(plVar6,param_1 + 0x380,0);
    lVar3 = param_1 + (ulong)*(uint *)(param_1 + 0x728) * 0x20;
    local_60 = *(long *)(lVar3 + 0x420);
    pcVar5 = *(char **)(lVar3 + 0x428);
    local_50 = *(undefined8 *)(lVar3 + 0x430);
    plVar6 = *(long **)(lVar3 + 0x438);
    local_58 = pcVar5;
    local_48 = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    if (*pcVar5 != '\0') {
      (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),&local_60);
      plVar6 = local_48;
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf8));
  return;
}


