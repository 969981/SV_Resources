/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0110294c; name: FUN_0110294c
 */


undefined8
FUN_0110294c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5,undefined4 param_6,long param_7,long param_8,
            long *param_9)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 local_58;
  
  plVar1 = (long *)(param_5 + 0xbe0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_011029a0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_5 + 0xbe8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_5 + 0xbe8));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_011029a0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_011029a0:
  uVar2 = *(undefined4 *)(*(long *)(param_7 + 0x1f8) + 0x58);
  if (param_8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_011061a0(*(undefined8 *)(param_5 + 0x58),param_8,uVar2);
  }
  uStack_98 = param_1._8_8_ & 0xffffffff;
  uStack_88 = param_2._8_8_ & 0xffffffff;
  uStack_78 = param_3._8_8_ & 0xffffffff;
  uStack_68 = param_4._8_8_ & 0xffffffff;
  local_a0 = param_1._0_8_;
  uStack_90 = param_2._0_8_;
  local_80 = param_3._0_8_;
  uStack_70 = param_4._0_8_;
  uVar7 = FUN_01102afc(*(undefined8 *)(param_5 + 0x58),param_9,uVar5,uVar2,param_6,0,0);
  if ((((uVar7 & 1) == 0) || (*param_9 == 0)) || ((int)param_9[1] != *(int *)(*param_9 + 0x2c))) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_00c41664(param_9);
    FUN_01102c4c(uVar8,&local_a0);
    local_58 = FUN_00c41664(param_9);
    uVar8 = FUN_01102d8c(param_5 + 0xa50,&local_58);
    FUN_01102b10(uVar8,param_7);
    uVar8 = 1;
  }
  *(undefined8 *)(param_5 + 0xbe0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_5 + 0xbe8));
  return uVar8;
}


