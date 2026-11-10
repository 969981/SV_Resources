/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bb21d4; name: FUN_00bb21d4
 */


uint FUN_00bb21d4(long param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_148;
  char *local_140;
  uint local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [152];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_118 = PTR_DAT_047dabe0 + 0x10;
  uStack_110 = 0;
  memset(auStack_f0,0,0x98);
  puVar4 = PTR_LAB_047daba8;
  puVar3 = PTR_DAT_047dab98;
  if (*(long *)PTR_DAT_047dab98 != 2) {
    local_148 = PTR_DAT_047daba0 + 0x10;
    local_140 = PTR_LAB_047daba8;
    local_138 = local_138 & 0xffffff00;
    if (*(long *)PTR_DAT_047dab98 != 2) {
      do {
        lVar7 = *(long *)puVar3;
        if (lVar7 != 0) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar2) {
          *(undefined8 *)puVar3 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puVar3 = PTR_DAT_047dab98;
      DataMemoryBarrier(2,3);
      if (lVar7 == 0) {
        FUN_00bb162c(&local_148);
        *(undefined8 *)PTR_DAT_047dab98 = 2;
      }
      else {
        while (lVar7 == 1) {
          sched_yield();
          lVar7 = *(long *)puVar3;
        }
      }
    }
  }
  local_100 = *(undefined8 *)PTR_DAT_047dabb0;
  local_58 = 0;
  uStack_50 = 0;
  local_108 = 0;
  uStack_f8 = local_100;
  local_48 = local_100;
  uVar6 = FUN_00c11428(&local_118,param_2,param_3);
  if ((uVar6 & 1) == 0) {
    local_148 = (undefined *)CONCAT44(local_148._4_4_,2);
    local_120 = 0;
    local_138 = 0x13b;
    local_140 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor_database.cc"
    ;
    local_130 = 0;
    uStack_128 = 0;
    std::string::append((char *)&local_130);
    FUN_00bb0e90(&local_148);
    FUN_00bb0d74(&local_148);
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00bb2380(param_1 + 8,&local_118,param_2,param_3);
  }
  FUN_00bb9a58(&local_118);
  return uVar5 & 1;
}


