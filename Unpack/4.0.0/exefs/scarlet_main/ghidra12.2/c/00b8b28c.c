/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b8b28c; name: FUN_00b8b28c
 */


void FUN_00b8b28c(long param_1,byte *param_2,undefined8 param_3,undefined4 param_4,byte *param_5)

{
  byte *pbVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 local_60 [2];
  char *local_58;
  undefined4 local_50;
  char local_48 [24];
  
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b8b2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1 + 0x38,param_2,param_3,param_4,param_5);
    return;
  }
  local_60[0] = 1;
  local_58 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.cc"
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
  local_50 = 0xcea;
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  uVar2 = param_1 + 0x39;
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x48);
  }
  std::string::append(local_48,uVar2);
  std::string::append(local_48);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  std::string::append(local_48,(ulong)pbVar1);
  std::string::append(local_48);
  pbVar1 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar1 = param_5 + 1;
  }
  std::string::append(local_48,(ulong)pbVar1);
  FUN_00bb0e90(local_60);
  FUN_00bb0d74(local_60);
  return;
}


