/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fef8c; name: FUN_026fef8c
 */


void FUN_026fef8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_047d38f8;
  if (-1 < *(int *)(param_1 + 0x58)) {
    lVar7 = *(long *)PTR_DAT_047d38f8;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar7) {
      uVar6 = nn::os::GetCurrentThread();
LAB_026ff02c:
      if (*(long *)puVar3 == 0) goto code_r0x026ff034;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
      do {
        if (*(long *)puVar3 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
            while (*(long *)puVar3 == 0) {
              cVar2 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar8) {
                *(undefined8 *)puVar3 = uVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_026ff03c;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar8) {
          *(undefined8 *)puVar3 = uVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_026ff03c:
      bVar8 = false;
      goto LAB_026fefd4;
    }
    bVar8 = true;
LAB_026fefd4:
    iVar4 = FUN_00c5fc50(param_2,0xfff0b9d8,(long)*(int *)(param_1 + 0x5c));
    iVar1 = *(int *)(param_1 + 0x58);
    if (!bVar8) {
      *(undefined8 *)puVar3 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    }
    if (iVar4 == iVar1) {
      local_50 = param_2;
      uStack_48 = param_3;
      FUN_02707140(param_2,&local_50);
    }
  }
  return;
code_r0x026ff034:
  cVar2 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
  if (bVar8) {
    *(undefined8 *)puVar3 = uVar6;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_026ff03c;
  goto LAB_026ff02c;
}


