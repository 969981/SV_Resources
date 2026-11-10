/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03467988; name: FUN_03467988
 */


int FUN_03467988(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  int local_60 [2];
  EventType aEStack_58 [19];
  char local_45;
  
  puVar5 = (ulong *)nn::os::InitializeEvent(aEStack_58,0,1);
  puVar1 = (ulong *)(param_1 + 0xf8);
  for (puVar6 = (ulong *)*puVar1; puVar6 != (ulong *)0x0;
      puVar6 = (ulong *)(*puVar6 & 0x3fffffffffffffff)) {
    while (uVar8 = *puVar6, (uVar8 >> 0x3e & 1) != 0) {
      uVar7 = uVar8 & 0x3fffffffffffffff | 0x8000000000000000;
      while (*puVar6 == uVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *puVar6 = uVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          puVar6[1] = (ulong)local_60;
          do {
            while (*puVar6 != uVar7) {
              ClearExclusiveLocal();
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar3) {
              *puVar6 = uVar8 & 0x3fffffffffffffff;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_03467a7c;
        }
      }
      ClearExclusiveLocal();
    }
  }
  puVar5 = (ulong *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0x10,0x10);
  if (puVar5 == (ulong *)0x0) {
LAB_03467a7c:
    iVar4 = FUN_034695c0(puVar5,param_2,PTR_LAB_047e7158,local_60);
    if (iVar4 == 1) {
      nn::os::WaitEvent(aEStack_58);
      if (local_45 == '\x01') {
        nn::os::FinalizeEvent(aEStack_58);
      }
      iVar4 = local_60[0];
    }
    else if (local_45 == '\x01') {
      nn::os::FinalizeEvent(aEStack_58);
    }
    return iVar4;
  }
  puVar5[1] = (ulong)local_60;
  do {
    uVar8 = *puVar1;
    *puVar5 = uVar8;
    while (*puVar1 == uVar8) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = (ulong)puVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_03467a7c;
    }
    ClearExclusiveLocal();
  } while( true );
}


