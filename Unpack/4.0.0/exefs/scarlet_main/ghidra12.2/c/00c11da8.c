/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c11da8; name: FUN_00c11da8
 */


undefined8 FUN_00c11da8(long *param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 local_60 [2];
  char *local_58;
  undefined4 local_50;
  char local_48 [24];
  
  if ((*param_2 & 1) == 0) {
    uVar7 = (uint)(*param_2 >> 1);
  }
  else {
    uVar7 = (uint)*(undefined8 *)(param_2 + 8);
  }
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((int)uVar1 < 0) {
    local_60[0] = 2;
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_50 = 0x127;
    local_58 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/message_lite.cc"
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
    FUN_00bb0e90(local_60);
    FUN_00bb0d74(local_60);
    uVar4 = 0;
  }
  else {
    std::string::resize((ulong)param_2,(char)uVar1 + (char)uVar7);
    if ((*param_2 & 1) == 0) {
      if (*param_2 < 2) {
        pbVar5 = (byte *)0x0;
      }
      else {
        pbVar5 = param_2 + 1;
      }
    }
    else {
      pbVar5 = (byte *)0x0;
      if (*(long *)(param_2 + 8) != 0) {
        pbVar5 = *(byte **)(param_2 + 0x10);
      }
    }
    lVar3 = (**(code **)(*param_1 + 0x70))(param_1,pbVar5 + (int)uVar7);
    uVar6 = lVar3 - (long)(pbVar5 + (int)uVar7);
    if (uVar6 != uVar1) {
      uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
      FUN_00c11a10(uVar1,uVar2,uVar6 & 0xffffffff,param_1);
    }
    uVar4 = 1;
  }
  return uVar4;
}


