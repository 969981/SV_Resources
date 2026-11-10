/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b89f94; name: FUN_00b89f94
 */


void FUN_00b89f94(long param_1,byte *param_2,undefined8 param_3,undefined4 param_4,byte *param_5)

{
  byte *pbVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 local_70 [2];
  char *local_68;
  undefined4 local_60;
  char local_58 [24];
  
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 == (long *)0x0) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      local_70[0] = 2;
      local_58[0] = '\0';
      local_58[1] = '\0';
      local_58[2] = '\0';
      local_58[3] = '\0';
      local_58[4] = '\0';
      local_58[5] = '\0';
      local_58[6] = '\0';
      local_58[7] = '\0';
      local_58[8] = '\0';
      local_58[9] = '\0';
      local_58[10] = '\0';
      local_58[0xb] = '\0';
      local_58[0xc] = '\0';
      local_58[0xd] = '\0';
      local_58[0xe] = '\0';
      local_58[0xf] = '\0';
      local_68 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.cc"
      ;
      local_60 = 0xcb4;
      local_58[0x10] = '\0';
      local_58[0x11] = '\0';
      local_58[0x12] = '\0';
      local_58[0x13] = '\0';
      local_58[0x14] = '\0';
      local_58[0x15] = '\0';
      local_58[0x16] = '\0';
      local_58[0x17] = '\0';
      std::string::append(local_58);
      uVar2 = param_1 + 0x39;
      if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
        uVar2 = *(ulong *)(param_1 + 0x48);
      }
      std::string::append(local_58,uVar2);
      std::string::append(local_58);
      FUN_00bb0e90(local_70);
      FUN_00bb0d74(local_70);
    }
    local_70[0] = 2;
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_68 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.cc"
    ;
    local_60 = 0xcb7;
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = '\0';
    local_58[0x14] = '\0';
    local_58[0x15] = '\0';
    local_58[0x16] = '\0';
    local_58[0x17] = '\0';
    std::string::append(local_58);
    pbVar1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar1 = param_2 + 1;
    }
    std::string::append(local_58,(ulong)pbVar1);
    std::string::append(local_58);
    pbVar1 = *(byte **)(param_5 + 0x10);
    if ((*param_5 & 1) == 0) {
      pbVar1 = param_5 + 1;
    }
    std::string::append(local_58,(ulong)pbVar1);
    FUN_00bb0e90(local_70);
    FUN_00bb0d74(local_70);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1 + 0x38,param_2,param_3,param_4,param_5);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}


