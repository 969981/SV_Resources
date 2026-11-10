/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0196fc78; name: FUN_0196fc78
 */


void FUN_0196fc78(long param_1,uint param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_5c [28];
  
  uVar4 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  if ((uVar4 & 0xffff) != (param_2 & 0xffff)) {
    FUN_00ef2f34(*(undefined8 *)(param_1 + 0x70),param_2);
    FUN_00ef289c(*(undefined8 *)(param_1 + 0x70),param_3);
    uVar4 = FUN_00e99784(param_1);
    uVar5 = FUN_0143b78c(param_2,param_3,uVar4);
    FUN_00ef67a8(*(undefined8 *)(param_1 + 0x70),(uVar4 & 0xff) == 0);
    FUN_00ef6b04(*(undefined8 *)(param_1 + 0x70),(uVar4 & 0xff) == 1);
    FUN_00ef6e68(*(undefined8 *)(param_1 + 0x70),(uVar4 & 0xff) == 2);
    FUN_00ef2550(*(undefined8 *)(param_1 + 0x70),uVar5);
    uVar5 = FUN_00cec030(*(undefined8 *)(param_1 + 0x70));
    uVar5 = FUN_0143b4b4(param_2,param_3,uVar5);
    FUN_00ef644c(*(undefined8 *)(param_1 + 0x70),uVar5);
    uVar7 = FUN_014fa420(*(undefined8 *)(param_1 + 0x70));
    if ((uVar7 & 1) == 0) {
      uVar5 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
      lVar9 = *(long *)(param_1 + 0x70);
      plVar1 = (long *)(lVar9 + 0x20);
      lVar8 = nn::os::GetCurrentThread();
LAB_0196fd70:
      if (*plVar1 == 0) goto code_r0x0196fd78;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x28));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x28));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar8;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_0196fd80;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0196fd80:
      uVar6 = FUN_0100bd94(lVar9);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x28));
      FUN_0100bbbc(auStack_5c,uVar5,uVar6);
      FUN_0100c3a8(*(undefined8 *)(param_1 + 0x70),auStack_5c);
      FUN_0100c048(*(undefined8 *)(param_1 + 0x70),0);
    }
    FUN_00f13b9c(param_1,1);
  }
  return;
code_r0x0196fd78:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar8;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_0196fd80;
  goto LAB_0196fd70;
}


