/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b7bb2c; name: FUN_00b7bb2c
 */


undefined8 FUN_00b7bb2c(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  byte *local_108;
  byte *pbStack_100;
  undefined1 auStack_f8 [152];
  undefined8 local_60;
  undefined8 uStack_58;
  byte *local_50;
  byte *local_48;
  undefined *puStack_40;
  undefined1 local_38;
  
  if ((*(long *)(param_1 + 8) == 0) ||
     (lVar5 = FUN_00badb04(*(long *)(param_1 + 0x20) + 0x40), lVar5 != 0)) {
    return 0;
  }
  local_120 = PTR_DAT_047dabe0 + 0x10;
  uStack_118 = 0;
  memset(auStack_f8,0,0x98);
  puVar4 = PTR_LAB_047daba8;
  puVar3 = PTR_DAT_047dab98;
  if (*(long *)PTR_DAT_047dab98 != 2) {
    local_48 = PTR_DAT_047daba0 + 0x10;
    puStack_40 = PTR_LAB_047daba8;
    local_38 = 0;
    if (*(long *)PTR_DAT_047dab98 != 2) {
      do {
        lVar5 = *(long *)puVar3;
        if (lVar5 != 0) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar2) {
          *(undefined8 *)puVar3 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puVar3 = PTR_DAT_047dab98;
      DataMemoryBarrier(2,3);
      if (lVar5 == 0) {
        FUN_00bb162c(&local_48);
        *(undefined8 *)PTR_DAT_047dab98 = 2;
      }
      else {
        while (lVar5 == 1) {
          sched_yield();
          lVar5 = *(long *)puVar3;
        }
      }
    }
  }
  local_108 = *(byte **)PTR_DAT_047dabb0;
  local_110 = 0;
  local_60 = 0;
  uStack_58 = 0;
  pbStack_100 = local_108;
  local_50 = local_108;
  uVar6 = FUN_00b7eed4(param_1,param_2);
  if (((uVar6 & 1) == 0) &&
     (uVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x18))
                        (*(long **)(param_1 + 8),param_2,&local_120), (uVar6 & 1) != 0)) {
    local_48 = *(byte **)(local_108 + 0x10);
    if ((*local_108 & 1) == 0) {
      local_48 = local_108 + 1;
    }
    lVar5 = FUN_00ba6514(*(long *)(param_1 + 0x20) + 0x118,&local_48);
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) &&
       (lVar5 = FUN_00b7d75c(param_1,&local_120), lVar5 != 0)) {
      uVar7 = 1;
      goto LAB_00b7bcdc;
    }
  }
  FUN_00b7e9c0(*(long *)(param_1 + 0x20) + 0x40,param_2);
  uVar7 = 0;
LAB_00b7bcdc:
  FUN_00bb9a58(&local_120);
  return uVar7;
}


