/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bcb2e4; name: FUN_00bcb2e4
 */


undefined8 * FUN_00bcb2e4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *local_38;
  undefined *puStack_30;
  undefined1 local_28;
  
  *param_1 = &PTR_FUN_0455ad10;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar3 = PTR_DAT_047dab98;
  param_1[6] = 0;
  puStack_30 = PTR_LAB_047daba8;
  puVar4 = PTR_DAT_047dab98;
  puVar6 = param_1;
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
        puVar6 = (undefined8 *)FUN_00bb162c(&local_38);
        *(undefined8 *)PTR_DAT_047dab98 = 2;
      }
      else {
        while (lVar7 == 1) {
          uVar5 = sched_yield();
          puVar6 = (undefined8 *)(ulong)uVar5;
          lVar7 = *(long *)puVar3;
        }
      }
    }
  }
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  param_1[3] = *(undefined8 *)PTR_DAT_047dabb0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return puVar6;
}


