/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bbf5d4; name: FUN_00bbf5d4
 */


void * FUN_00bbf5d4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  undefined *local_38;
  undefined *puStack_30;
  undefined1 local_28;
  
  *param_1 = &PTR_FUN_0455a900;
  param_1[1] = 0;
  pvVar6 = memset(param_1 + 4,0,0x90);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar3 = PTR_DAT_047dab98;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  puStack_30 = PTR_LAB_047daba8;
  puVar4 = PTR_DAT_047dab98;
  if (*(long *)puVar3 != 2) {
    local_38 = PTR_DAT_047daba0 + 0x10;
    local_28 = 0;
    if (*(long *)PTR_DAT_047dab98 != 2) {
      do {
        lVar7 = *(long *)puVar4;
        if (lVar7 != 0) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar2) {
          *(undefined8 *)puVar4 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puVar3 = PTR_DAT_047dab98;
      DataMemoryBarrier(2,3);
      if (lVar7 == 0) {
        pvVar6 = (void *)FUN_00bb162c(&local_38);
        *(undefined8 *)PTR_DAT_047dab98 = 2;
      }
      else {
        while (lVar7 == 1) {
          uVar5 = sched_yield();
          pvVar6 = (void *)(ulong)uVar5;
          lVar7 = *(long *)puVar3;
        }
      }
    }
  }
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  param_1[3] = *(undefined8 *)PTR_DAT_047dabb0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return pvVar6;
}


