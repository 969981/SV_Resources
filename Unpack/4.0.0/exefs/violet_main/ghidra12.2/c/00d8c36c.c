/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d8c36c; name: FUN_00d8c36c
 */


void FUN_00d8c36c(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x460) != 0) {
    if (*(int *)PTR_DAT_047cb850 != 0) {
      DAT_04859d08 = 0.0;
      *(undefined4 *)PTR_DAT_047cb850 = 0;
    }
    bVar7 = true;
    lVar3 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    DAT_04859d08 = DAT_04859d08 + (double)*(long *)(lVar3 + 8) / 1000000000.0;
    FUN_00d8c934(*(undefined8 *)(param_1 + 0x460));
    puVar2 = PTR_DAT_047d38f8;
    lVar8 = *(long *)(param_1 + 0x460);
    lVar6 = *(long *)PTR_DAT_047d38f8;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar6) {
      uVar4 = nn::os::GetCurrentThread();
LAB_00d8c470:
      if (*(long *)puVar2 == 0) goto code_r0x00d8c478;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
      do {
        if (*(long *)puVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
            while (*(long *)puVar2 == 0) {
              cVar1 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *(undefined8 *)puVar2 = uVar4;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00d8c480;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *(undefined8 *)puVar2 = uVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00d8c480:
      bVar7 = false;
    }
    if (300.0 <= DAT_04859d08) {
      DAT_04859d08 = 0.0;
      FUN_00d8c520(*(undefined8 *)(lVar8 + 0x70),2);
    }
    else {
      lVar3 = *(long *)(*(long *)(lVar8 + 0x70) + 0x18);
      if (*(char *)(lVar3 + 0x66) == '\x01') {
        uVar5 = 0;
      }
      else {
        uVar5 = 3000;
        if (*(long *)(lVar3 + 0x28) != 0) {
          uVar5 = 0;
        }
      }
      FUN_00d8c520(*(long *)(lVar8 + 0x70),5,uVar5);
    }
    FUN_00d8c520(*(undefined8 *)(lVar8 + 0x70),0,0);
    if (!bVar7) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
      return;
    }
  }
  return;
code_r0x00d8c478:
  cVar1 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar7) {
    *(undefined8 *)puVar2 = uVar4;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00d8c480;
  goto LAB_00d8c470;
}


