/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bf693c; name: FUN_00bf693c
 */


void FUN_00bf693c(undefined *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined *local_60;
  char *local_58;
  uint local_50;
  char local_48 [24];
  
  if (DAT_0483a9d8 != 2) {
    local_50 = local_50 & 0xffffff00;
    local_60 = PTR_DAT_047daba0 + 0x10;
    local_58 = &LAB_00bf7390;
    if (DAT_0483a9d8 != 2) {
      do {
        lVar4 = DAT_0483a9d8;
        if (DAT_0483a9d8 != 0) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(0x483a9d8,0x10);
        if (bVar3) {
          DAT_0483a9d8 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      DataMemoryBarrier(2,3);
      if (lVar4 == 0) {
        FUN_00bb162c(&local_60);
        DAT_0483a9d8 = 2;
      }
      else {
        while (lVar4 == 1) {
          sched_yield();
          lVar4 = DAT_0483a9d8;
        }
      }
    }
  }
  local_60 = param_1;
  local_58 = (char *)param_2;
  uVar5 = FUN_00bf9090(DAT_0483a9e0 + 0x38,&local_60);
  if ((uVar5 & 1) == 0) {
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_60 = (undefined *)CONCAT44(local_60._4_4_,2);
    local_50 = 0x15b;
    local_58 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/message.cc"
    ;
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\0';
    local_48[4] = '\0';
    local_48[5] = '\0';
    local_48[6] = '\0';
    local_48[7] = '\0';
    local_48[8] = '\0';
    local_48[9] = '\0';
    local_48[10] = '\0';
    local_48[0xb] = '\0';
    local_48[0xc] = '\0';
    local_48[0xd] = '\0';
    local_48[0xe] = '\0';
    local_48[0xf] = '\0';
    std::string::append(local_48);
    pbVar6 = *(byte **)(param_1 + 8);
    pbVar1 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar1 = pbVar6 + 1;
    }
    std::string::append(local_48,(ulong)pbVar1);
    FUN_00bb0e90(&local_60);
    FUN_00bb0d74(&local_60);
  }
  return;
}


