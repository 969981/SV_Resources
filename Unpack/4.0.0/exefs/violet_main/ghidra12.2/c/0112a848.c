/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0112a848; name: FUN_0112a848
 */


void FUN_0112a848(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (((DAT_0483add8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0483add8), iVar7 != 0)) {
    FUN_00100190(&LAB_02a27cb8,&DAT_0483adc8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483add8);
  }
  lVar6 = DAT_0483adc8;
  DAT_0483ade0 = DAT_0483adc8;
  plVar1 = (long *)(DAT_0483adc8 + 0x338);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0112a89c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x340));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x340));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0112a89c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0112a89c:
  uVar2 = *(undefined8 *)(lVar6 + 0x178);
  uVar3 = *(undefined8 *)(lVar6 + 0x180);
  uVar9 = *(undefined8 *)(lVar6 + 0x188);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar6 + 400);
  param_1[1] = uVar3;
  param_1[2] = uVar9;
  *param_1 = uVar2;
  *(undefined8 *)(lVar6 + 0x338) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x340));
  return;
}


