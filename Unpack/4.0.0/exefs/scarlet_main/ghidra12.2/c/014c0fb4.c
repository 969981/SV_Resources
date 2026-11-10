/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c0fb4; name: FUN_014c0fb4
 */


void FUN_014c0fb4(long param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  if (param_3 == 0) {
    return;
  }
  lVar8 = *(long *)(param_3 + 0x70);
  if ((*(byte *)(*(long *)(lVar8 + 0x10) + 4) >> 2 & 1) == 0) {
    sVar5 = FUN_00cf44f4();
    if (sVar5 == 0) {
      return;
    }
    lVar8 = *(long *)(param_3 + 0x70);
  }
  uVar9 = FUN_00cf4cfc(lVar8);
  lVar8 = *(long *)(param_3 + 0x70);
  uVar12 = *(undefined8 *)(param_1 + 0x120);
  if (((uVar9 & 1) == 0) && ((*(ushort *)(*(long *)(lVar8 + 0x10) + 4) >> 2 & 1) == 0)) {
    FUN_01054544(lVar8,uVar12);
  }
  else {
    plVar1 = (long *)(lVar8 + 0x20);
    lVar11 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x28));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar11;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_014c105c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_014c105c:
    uVar6 = FUN_0100bd94(lVar8);
    *(undefined8 *)(lVar8 + 0x20) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x28));
    if (((*PTR_DAT_047dae10 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047dae10), iVar7 != 0)) {
      FUN_00100190(&LAB_02b6f660,PTR_DAT_047dae18,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dae10);
    }
    lVar8 = *(long *)PTR_DAT_047dae18;
    *(long *)PTR_DAT_047dae20 = lVar8;
    if (uVar6 - 1 < 10) {
      FUN_00e388b8(*(undefined8 *)(lVar8 + (ulong)uVar6 * 8 + 0x2e8),0,uVar12);
    }
  }
  uVar12 = *(undefined8 *)(param_1 + 0x120);
  uVar4 = FUN_00cec030(*(undefined8 *)(param_3 + 0x70));
  lVar11 = *(long *)(param_3 + 0x70);
  plVar1 = (long *)(lVar11 + 0x20);
  lVar8 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x28));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_014c10f0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_014c10f0:
  iVar7 = FUN_0100bd94(lVar11);
  *(undefined8 *)(lVar11 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x28));
  if (iVar7 - 1U < 10) {
    uVar10 = *(undefined4 *)(&DAT_03d5ef58 + (long)(int)(iVar7 - 1U) * 4);
  }
  else {
    uVar10 = 0;
  }
  FUN_0131c5f8(param_1,param_2,uVar12,uVar4,uVar10);
  return;
}


