/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f9918c; name: FUN_01f9918c
 */


undefined4 FUN_01f9918c(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  ulong *local_60;
  undefined8 *local_58 [3];
  
  if (((DAT_0483add8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0483add8), iVar5 != 0)) {
    FUN_00100190(&LAB_02a27cb8,&DAT_0483adc8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483add8);
  }
  lVar4 = DAT_0483adc8;
  DAT_0483ade0 = DAT_0483adc8;
  plVar1 = (long *)(DAT_0483adc8 + 0x338);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01f99250;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x340));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x340));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01f99250;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01f99250:
  puVar10 = *(undefined8 **)(lVar4 + 0x2d0);
  uVar11 = 0xbf800000;
  if (puVar10 == (undefined8 *)0x0) goto LAB_01f9933c;
  uVar7 = *param_1;
  puVar9 = (undefined8 *)(lVar4 + 0x2d0);
  if ((ulong)puVar10[4] >= uVar7) {
    puVar9 = puVar10;
  }
  for (puVar8 = (undefined8 *)puVar10[(ulong)puVar10[4] < uVar7]; puVar8 != (undefined8 *)0x0;
      puVar8 = (undefined8 *)puVar8[(ulong)puVar8[4] < uVar7]) {
    if ((ulong)puVar8[4] >= uVar7) {
      puVar9 = puVar8;
    }
  }
  if ((puVar9 == (undefined8 *)(lVar4 + 0x2d0)) || (uVar7 < (ulong)puVar9[4])) goto LAB_01f9933c;
  plVar1 = (long *)(lVar4 + 0x2c8);
  puVar9 = (undefined8 *)(lVar4 + 0x2d0);
  while( true ) {
    if ((ulong)puVar10[4] <= uVar7) {
      if ((ulong)puVar10[4] < uVar7) {
        puVar9 = puVar10 + 1;
        puVar8 = (undefined8 *)*puVar9;
        if (puVar8 != (undefined8 *)0x0) goto LAB_01f992d0;
      }
      break;
    }
    puVar8 = (undefined8 *)*puVar10;
    puVar9 = puVar10;
    if (puVar8 == (undefined8 *)0x0) break;
LAB_01f992d0:
    puVar10 = puVar8;
  }
  puVar8 = (undefined8 *)*puVar9;
  local_60 = param_1;
  if ((undefined8 *)*puVar9 == (undefined8 *)0x0) {
    FUN_0172b370(local_58,plVar1,&local_60);
    *local_58[0] = 0;
    local_58[0][1] = 0;
    local_58[0][2] = puVar10;
    *puVar9 = local_58[0];
    puVar10 = local_58[0];
    if (*(long *)*plVar1 != 0) {
      *plVar1 = *(long *)*plVar1;
      puVar10 = (undefined8 *)*puVar9;
    }
    FUN_010108e0(*(undefined8 *)(lVar4 + 0x2d0),puVar10);
    *(long *)(lVar4 + 0x2f8) = *(long *)(lVar4 + 0x2f8) + 1;
    puVar8 = local_58[0];
  }
  uVar11 = *(undefined4 *)(puVar8 + 8);
LAB_01f9933c:
  *(undefined8 *)(lVar4 + 0x338) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0x340));
  return uVar11;
}


