/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e22628; name: FUN_01e22628
 */


void FUN_01e22628(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined4 param_6,undefined8 *param_7)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [96];
  
  plVar6 = (long *)(param_5 + 0x178);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01e22678;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_5 + 0x180));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_5 + 0x180));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01e22678;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01e22678:
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  if ((code *)param_7[2] != (code *)0x0) {
    (*(code *)param_7[2])(param_7 + 4,auStack_b0);
    local_b8 = param_7[3];
    local_c8 = (code *)param_7[1];
    local_d0 = *param_7;
    local_c0 = param_7[2];
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  FUN_01534dcc(param_1,param_2,param_3,param_4,param_5,param_6,&local_d0,PTR_DAT_047d3e30,0,0);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  if ((((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) && (*(long *)(param_5 + 400) != 0))
     && (lVar5 = *(long *)(*(long *)(param_5 + 400) + 0x10), lVar5 != 0)) {
    plVar6 = (long *)(lVar5 + -8);
    (**(code **)(*plVar6 + 0x48))(param_2,param_3,param_4,plVar6,param_1,param_6);
  }
  *(undefined8 *)(param_5 + 0x178) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_5 + 0x180));
  return;
}


