/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f6a574; name: FUN_00f6a574
 */


void FUN_00f6a574(long param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  ushort uVar10;
  
  puVar3 = PTR_DAT_047d38f8;
  lVar7 = *(long *)PTR_DAT_047d38f8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar7) {
    bVar9 = true;
LAB_00f6a5ac:
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    uVar6 = FUN_00f6a6b0(uVar8,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_2[2] + 0xc0),
                         param_2[3],param_2[4]);
    bVar1 = (uVar6 & 1) == 0;
    if (bVar1) {
      uVar10 = 0;
    }
    else {
      iVar4 = FUN_00cc4dc0(uVar8,0xffffffff);
      uVar10 = (ushort)(iVar4 != 0) << 8;
    }
    FUN_00c5db00(uVar8,0);
    *(ushort *)param_2[1] = uVar10 | !bVar1;
    *(undefined1 *)*param_2 = *(undefined1 *)param_2[1];
    if (bVar9) {
      return;
    }
    *(undefined8 *)puVar3 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    return;
  }
  uVar8 = nn::os::GetCurrentThread();
  while (*(long *)puVar3 == 0) {
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar9) {
      *(undefined8 *)puVar3 = uVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00f6a644;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
  do {
    if (*(long *)puVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
        while (*(long *)puVar3 == 0) {
          cVar2 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar9) {
            *(undefined8 *)puVar3 = uVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00f6a644;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar9) {
      *(undefined8 *)puVar3 = uVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00f6a644:
  bVar9 = false;
  goto LAB_00f6a5ac;
}


