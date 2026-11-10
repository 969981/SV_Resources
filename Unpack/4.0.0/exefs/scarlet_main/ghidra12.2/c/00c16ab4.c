/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c16ab4; name: FUN_00c16ab4
 */


undefined8 FUN_00c16ab4(undefined8 *param_1)

{
  int iVar1;
  undefined4 local_90 [2];
  char *local_88;
  undefined4 local_80;
  char local_78 [24];
  undefined4 local_60 [2];
  char *local_58;
  undefined4 local_50;
  char local_48 [24];
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_60[0] = 3;
    local_50 = 0x72;
    local_58 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/map.h"
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
    std::string::append(local_48);
    std::string::append(local_48);
    FUN_00bb0e90(local_60);
    FUN_00bb0d74(local_60);
    iVar1 = *(int *)(param_1 + 1);
  }
  if (iVar1 != 4) {
    local_80 = 0x9a;
    local_78[0] = '\0';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = '\0';
    local_78[8] = '\0';
    local_78[9] = '\0';
    local_78[10] = '\0';
    local_78[0xb] = '\0';
    local_78[0xc] = '\0';
    local_78[0xd] = '\0';
    local_78[0xe] = '\0';
    local_78[0xf] = '\0';
    local_90[0] = 3;
    local_88 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/map.h"
    ;
    local_78[0x10] = '\0';
    local_78[0x11] = '\0';
    local_78[0x12] = '\0';
    local_78[0x13] = '\0';
    local_78[0x14] = '\0';
    local_78[0x15] = '\0';
    local_78[0x16] = '\0';
    local_78[0x17] = '\0';
    std::string::append(local_78);
    std::string::append(local_78);
    std::string::append(local_78);
    std::string::append(local_78);
    std::string::append(local_78);
    std::string::append(local_78);
    std::string::append(local_78);
    if (*(int *)(param_1 + 1) == 0) {
      local_50 = 0x72;
      local_60[0] = 3;
      local_58 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf\\google/protobuf/map.h"
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
      local_48[0x10] = '\0';
      local_48[0x11] = '\0';
      local_48[0x12] = '\0';
      local_48[0x13] = '\0';
      local_48[0x14] = '\0';
      local_48[0x15] = '\0';
      local_48[0x16] = '\0';
      local_48[0x17] = '\0';
      std::string::append(local_48);
      std::string::append(local_48);
      std::string::append(local_48);
      FUN_00bb0e90(local_60);
      FUN_00bb0d74(local_60);
    }
    std::string::append(local_78);
    FUN_00bb0e90(local_90);
    FUN_00bb0d74(local_90);
  }
  return *param_1;
}


