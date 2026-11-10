/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00befee0; name: FUN_00befee0
 */


void FUN_00befee0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 local_70 [2];
  char *local_68;
  undefined4 local_60;
  char local_58 [24];
  
  local_70[0] = 3;
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
  local_60 = 0x82;
  local_68 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/generated_message_reflection.cc"
  ;
  local_58[0x10] = '\0';
  local_58[0x11] = '\0';
  local_58[0x12] = '\0';
  local_58[0x13] = '\0';
  local_58[0x14] = '\0';
  local_58[0x15] = '\0';
  local_58[0x16] = '\0';
  local_58[0x17] = '\0';
  std::string::append(local_58);
  std::string::append(local_58);
  std::string::append(local_58);
  pbVar2 = *(byte **)(param_1 + 8);
  pbVar1 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbVar1 = pbVar2 + 1;
  }
  std::string::append(local_58,(ulong)pbVar1);
  std::string::append(local_58);
  pbVar2 = *(byte **)(param_2 + 8);
  pbVar1 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbVar1 = pbVar2 + 1;
  }
  std::string::append(local_58,(ulong)pbVar1);
  std::string::append(local_58);
  pbVar2 = *(byte **)(*(long *)(param_2 + 0x70) + 8);
  pbVar1 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbVar1 = pbVar2 + 1;
  }
  std::string::append(local_58,(ulong)pbVar1);
  std::string::append(local_58);
  pbVar2 = *(byte **)(param_4 + 8);
  pbVar1 = *(byte **)(pbVar2 + 0x10);
  if ((*pbVar2 & 1) == 0) {
    pbVar1 = pbVar2 + 1;
  }
  std::string::append(local_58,(ulong)pbVar1);
  FUN_00bb0e90(local_70);
  FUN_00bb0d74(local_70);
  return;
}


