/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e6cb8; name: FUN_020e6cb8
 */


void FUN_020e6cb8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_5c [28];
  
  uVar6 = FUN_00cf4cfc(*(undefined8 *)(param_1 + 0x70));
  if ((uVar6 & 1) == 0) {
    return;
  }
  FUN_021f712c(*(undefined8 *)(param_1 + 0x70),0);
  FUN_021f6de0(*(undefined8 *)(param_1 + 0x70),100);
  FUN_00eeef6c(*(undefined8 *)(param_1 + 0x70),*(undefined1 *)(*(long *)PTR_DAT_047d90c8 + 0x3d0));
  uVar4 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  lVar8 = *(long *)(param_1 + 0x70);
  plVar1 = (long *)(lVar8 + 0x20);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_020e6d3c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x28));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x28));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_020e6d3c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_020e6d3c:
  uVar5 = FUN_0100bd94(lVar8);
  *(undefined8 *)(lVar8 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x28));
  FUN_0100bbbc(auStack_5c,uVar4,uVar5);
  FUN_0100c3a8(*(undefined8 *)(param_1 + 0x70),auStack_5c);
  FUN_0100c048(*(undefined8 *)(param_1 + 0x70),0);
  FUN_021f44e8(*(undefined8 *)(param_1 + 0x70),0);
  return;
}


