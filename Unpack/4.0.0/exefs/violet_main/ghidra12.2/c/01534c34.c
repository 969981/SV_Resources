/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01534c34; name: FUN_01534c34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01534c34(long *param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [96];
  
  plVar5 = (long *)(param_3 + 0x178);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01534c84;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x180));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x180));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01534c84;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01534c84:
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,auStack_b0);
    local_b8 = param_5[3];
    local_c8 = (code *)param_5[1];
    local_d0 = *param_5;
    local_c0 = param_5[2];
  }
  FUN_01534dcc(param_1,param_2,_DAT_03d31220,_DAT_03d31230,param_3,param_4,&local_d0,param_6,1,0);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  if ((((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) && (*(long *)(param_3 + 400) != 0))
     && (lVar4 = *(long *)(*(long *)(param_3 + 400) + 0x10), lVar4 != 0)) {
    plVar5 = (long *)(lVar4 + -8);
    (**(code **)(*plVar5 + 0x50))(param_2,plVar5,param_1,param_4,param_6);
  }
  *(undefined8 *)(param_3 + 0x178) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_3 + 0x180));
  return;
}


