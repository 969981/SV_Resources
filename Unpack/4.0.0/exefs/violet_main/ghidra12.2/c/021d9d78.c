/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d9d78; name: FUN_021d9d78
 */


void FUN_021d9d78(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *local_60;
  undefined1 local_58;
  undefined4 *local_40;
  undefined4 local_34;
  
  plVar1 = (long *)(param_1 + 0x20);
  lVar7 = *plVar1;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar7) {
    lVar4 = nn::os::GetCurrentThread();
LAB_021d9dac:
    if (*plVar1 == 0) goto code_r0x021d9db4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x28));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_021d9dbc;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_021d9dbc:
    local_58 = 1;
    goto LAB_021d9dc0;
  }
  local_58 = 0;
LAB_021d9dc0:
  pcVar6 = (code *)PTR_FUN_047dd970;
  local_60 = plVar1;
  if (*(char *)(param_1 + 0x19) == '\0') {
    lVar4 = param_1 + 0x38;
    uVar5 = FUN_021dacf8(lVar4);
    if ((uVar5 & 1) == 0) {
      local_40 = &local_34;
      local_34 = 0;
      FUN_021da7d0(lVar4,&local_40);
      FUN_021dad44(lVar4);
      if (pcVar6 == (code *)0x0) {
        return;
      }
      goto LAB_021d9e00;
    }
  }
  FUN_021dad44(param_1 + 0x38);
  pcVar6 = (code *)PTR_FUN_047dd970;
LAB_021d9e00:
  (*pcVar6)(&local_60);
  return;
code_r0x021d9db4:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_021d9dbc;
  goto LAB_021d9dac;
}


