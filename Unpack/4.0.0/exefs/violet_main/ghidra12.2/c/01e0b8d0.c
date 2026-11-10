/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0b8d0; name: FUN_01e0b8d0
 */


ulong FUN_01e0b8d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  
  puVar2 = PTR_DAT_047d38f8;
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar10 = *(long *)PTR_DAT_047d38f8;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 != lVar10) {
      uVar7 = nn::os::GetCurrentThread();
LAB_01e0b9d8:
      if (*(long *)puVar2 == 0) goto code_r0x01e0b9e0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
      do {
        if (*(long *)puVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
            while (*(long *)puVar2 == 0) {
              cVar1 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar11) {
                *(undefined8 *)puVar2 = uVar7;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_01e0b9e8;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar11) {
          *(undefined8 *)puVar2 = uVar7;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_01e0b9e8:
      bVar11 = false;
      goto LAB_01e0b91c;
    }
    bVar11 = true;
LAB_01e0b91c:
    iVar3 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar4 = *(int *)(param_2 + 0x58);
    if (bVar11) {
      if (iVar3 != iVar4) goto LAB_01e0b9ac;
    }
    else {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
      uVar8 = 0;
      uVar9 = 0;
      if (iVar3 != iVar4) goto LAB_01e0b9b4;
    }
    iVar4 = FUN_00c5d9a0(param_1,0xffffffff,param_3);
    if (iVar4 == 5) {
      uVar5 = FUN_00c5d9a0(param_1,0xffffffff,param_4);
      uVar8 = 0;
      if (uVar5 < 5) {
        uVar9 = 0;
        if ((1 << (ulong)(uVar5 & 0x1f) & 0x1aU) != 0) {
          lVar6 = FUN_00c92df0(param_1,0xffffffff,0);
          uVar9 = lVar6 << 0x20;
          uVar8 = 1;
        }
      }
      else {
        uVar9 = 0;
      }
      goto LAB_01e0b9b4;
    }
  }
LAB_01e0b9ac:
  uVar8 = 0;
  uVar9 = 0;
LAB_01e0b9b4:
  return uVar9 | uVar8;
code_r0x01e0b9e0:
  cVar1 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar11) {
    *(undefined8 *)puVar2 = uVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01e0b9e8;
  goto LAB_01e0b9d8;
}


