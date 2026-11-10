/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021a5bcc; name: FUN_021a5bcc
 */


void FUN_021a5bcc(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  ulong local_38;
  
  plVar6 = (long *)(param_1 + 0xb108);
  FUN_021a57b0(param_1 + 0xb4b0);
  lVar5 = *plVar6;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar5) {
    lVar2 = nn::os::GetCurrentThread();
LAB_021a5c14:
    if (*plVar6 == 0) goto code_r0x021a5c1c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb110));
    do {
      if (*plVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb110));
          while (*plVar6 == 0) {
            cVar1 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar7) {
              *plVar6 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_021a5c24;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar7) {
        *plVar6 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_021a5c24:
    bVar7 = false;
    goto LAB_021a5c2c;
  }
  plVar6 = (long *)0x0;
  bVar7 = true;
LAB_021a5c2c:
  local_38 = 0;
  lVar2 = *(long *)(param_1 + 0xb128) - *(long *)(param_1 + 0xb120);
  if (lVar2 != 0) {
    pcVar4 = (char *)(*(long *)(param_1 + 0xb120) + 0x14);
    uVar3 = (lVar2 >> 5) * -0x5555555555555555;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    do {
      if ((pcVar4[-4] != '\0') || (*pcVar4 != '\0')) {
        FUN_021a59b0(param_1 + 0xb4b0,&local_38);
        break;
      }
      local_38 = local_38 + 1;
      pcVar4 = pcVar4 + 0x60;
    } while (uVar3 != local_38);
  }
  if (bVar7) {
    return;
  }
  *plVar6 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
  return;
code_r0x021a5c1c:
  cVar1 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar7) {
    *plVar6 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_021a5c24;
  goto LAB_021a5c14;
}


