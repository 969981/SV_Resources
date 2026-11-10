/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bcf2c4; name: FUN_00bcf2c4
 */


undefined8 * FUN_00bcf2c4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_38;
  undefined *puStack_30;
  undefined1 local_28;
  
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0455aeb0;
  param_1[1] = param_1 + 2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar3 = PTR_DAT_047dab98;
  param_1[4] = 0;
  param_1[5] = 0;
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
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  uVar8 = *(undefined8 *)PTR_DAT_047dabb0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[7] = uVar8;
  param_1[8] = uVar8;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[9] = 0x100000000;
  param_1[10] = uVar8;
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar8;
  return puVar6;
}


