/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5fb54; name: FUN_00c5fb54
 */


bool FUN_00c5fb54(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_047d38f8;
  if (*(int *)(param_1 + 0x58) < 0) {
    bVar3 = false;
  }
  else {
    lVar8 = *(long *)PTR_DAT_047d38f8;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar8) {
      uVar6 = nn::os::GetCurrentThread();
LAB_00c5fbd8:
      if (*(long *)puVar2 == 0) goto code_r0x00c5fbe0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
      do {
        if (*(long *)puVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
            while (*(long *)puVar2 == 0) {
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar3) {
                *(undefined8 *)puVar2 = uVar6;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00c5fbe8;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar3) {
          *(undefined8 *)puVar2 = uVar6;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00c5fbe8:
      bVar7 = false;
      goto LAB_00c5fb94;
    }
    bVar7 = true;
LAB_00c5fb94:
    iVar4 = FUN_00c5fc50(param_2,0xfff0b9d8,(long)*(int *)(param_1 + 0x5c));
    bVar3 = iVar4 == *(int *)(param_1 + 0x58);
    if (!bVar7) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
  }
  return bVar3;
code_r0x00c5fbe0:
  cVar1 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar3) {
    *(undefined8 *)puVar2 = uVar6;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00c5fbe8;
  goto LAB_00c5fbd8;
}


