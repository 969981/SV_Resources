/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b8b554; name: FUN_00b8b554
 */


ulong * FUN_00b8b554(ulong *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong *__s;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_48;
  undefined1 *puStack_40;
  undefined1 local_38;
  
  __s = (ulong *)FUN_00b7a704(param_1[1],0xa8);
  memset(__s,0,0xa8);
  uVar7 = FUN_00b7a414(param_1[1],param_2);
  puVar3 = PTR_DAT_047dab98;
  *__s = uVar7;
  puVar5 = PTR_LAB_047daba8;
  puVar4 = PTR_DAT_047dab98;
  if (*(long *)puVar3 != 2) {
    local_48 = PTR_DAT_047daba0 + 0x10;
    puStack_40 = PTR_LAB_047daba8;
    local_38 = 0;
    if (*(long *)PTR_DAT_047dab98 != 2) {
      do {
        lVar8 = *(long *)puVar4;
        if (lVar8 != 0) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar2) {
          *(undefined8 *)puVar4 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puVar3 = PTR_DAT_047dab98;
      DataMemoryBarrier(2,3);
      if (lVar8 == 0) {
        uVar7 = FUN_00bb162c(&local_48);
        *(undefined8 *)PTR_DAT_047dab98 = 2;
      }
      else {
        while (lVar8 == 1) {
          uVar6 = sched_yield();
          uVar7 = (ulong)uVar6;
          lVar8 = *(long *)puVar3;
        }
      }
    }
  }
  __s[1] = *(ulong *)PTR_DAT_047dabb0;
  __s[2] = *param_1;
  puVar3 = PTR_DAT_047dac18;
  uVar9 = *(ulong *)PTR_DAT_047dac18;
  if (uVar9 == 0) {
    uVar7 = FUN_00bb5d70(uVar7);
    uVar9 = *(ulong *)puVar3;
  }
  __s[0x12] = uVar9;
  if (DAT_0483a698 != 2) {
    local_38 = 0;
    local_48 = PTR_DAT_047daba0 + 0x10;
    puStack_40 = &LAB_00baa360;
    if (DAT_0483a698 != 2) {
      do {
        lVar8 = DAT_0483a698;
        if (DAT_0483a698 != 0) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x483a698,0x10);
        if (bVar2) {
          DAT_0483a698 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      DataMemoryBarrier(2,3);
      if (lVar8 == 0) {
        uVar7 = FUN_00bb162c(&local_48);
        DAT_0483a698 = 2;
      }
      else {
        while (lVar8 == 1) {
          uVar6 = sched_yield();
          uVar7 = (ulong)uVar6;
          lVar8 = DAT_0483a698;
        }
      }
    }
  }
  __s[0x13] = DAT_0483a690;
  puVar3 = PTR_DAT_047dac68;
  uVar9 = *(ulong *)PTR_DAT_047dac68;
  if (uVar9 == 0) {
    FUN_00bb5d70(uVar7);
    uVar9 = *(ulong *)puVar3;
  }
  __s[0x14] = uVar9;
  *(undefined1 *)(__s + 0x10) = 1;
  *(undefined4 *)((long)__s + 0x7c) = 2;
  return __s;
}


