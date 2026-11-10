/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c38498; name: FUN_00c38498
 */


void FUN_00c38498(long *param_1,int param_2,int param_3,byte *param_4)

{
  byte *pbVar1;
  long *plVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined4 local_f0 [2];
  char *local_e8;
  undefined4 local_e0;
  char local_d8 [24];
  undefined4 local_c0 [2];
  char *local_b8;
  undefined4 local_b0;
  char local_a8 [103];
  undefined1 local_41;
  
  puVar3 = local_f0;
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c384f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3,param_4);
    return;
  }
  if (param_2 < 0) {
    local_c0[0] = 1;
    local_b0 = 0x141;
    local_b8 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/text_format.cc"
    ;
    local_a8[0x10] = '\0';
    local_a8[0x11] = '\0';
    local_a8[0x12] = '\0';
    local_a8[0x13] = '\0';
    local_a8[0x14] = '\0';
    local_a8[0x15] = '\0';
    local_a8[0x16] = '\0';
    local_a8[0x17] = '\0';
    local_a8[0] = '\0';
    local_a8[1] = '\0';
    local_a8[2] = '\0';
    local_a8[3] = '\0';
    local_a8[4] = '\0';
    local_a8[5] = '\0';
    local_a8[6] = '\0';
    local_a8[7] = '\0';
    local_a8[8] = '\0';
    local_a8[9] = '\0';
    local_a8[10] = '\0';
    local_a8[0xb] = '\0';
    local_a8[0xc] = '\0';
    local_a8[0xd] = '\0';
    local_a8[0xe] = '\0';
    local_a8[0xf] = '\0';
    std::string::append(local_a8);
    pbVar4 = *(byte **)(param_1[0x1b] + 8);
    pbVar1 = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      pbVar1 = pbVar4 + 1;
    }
    std::string::append(local_a8,(ulong)pbVar1);
    std::string::append(local_a8);
    pbVar1 = *(byte **)(param_4 + 0x10);
    if ((*param_4 & 1) == 0) {
      pbVar1 = param_4 + 1;
    }
    std::string::append(local_a8,(ulong)pbVar1);
    FUN_00bb0e90(local_c0);
    puVar3 = local_c0;
  }
  else {
    local_f0[0] = 1;
    local_e0 = 0x13c;
    local_e8 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/text_format.cc"
    ;
    local_d8[0x10] = '\0';
    local_d8[0x11] = '\0';
    local_d8[0x12] = '\0';
    local_d8[0x13] = '\0';
    local_d8[0x14] = '\0';
    local_d8[0x15] = '\0';
    local_d8[0x16] = '\0';
    local_d8[0x17] = '\0';
    local_d8[0] = '\0';
    local_d8[1] = '\0';
    local_d8[2] = '\0';
    local_d8[3] = '\0';
    local_d8[4] = '\0';
    local_d8[5] = '\0';
    local_d8[6] = '\0';
    local_d8[7] = '\0';
    local_d8[8] = '\0';
    local_d8[9] = '\0';
    local_d8[10] = '\0';
    local_d8[0xb] = '\0';
    local_d8[0xc] = '\0';
    local_d8[0xd] = '\0';
    local_d8[0xe] = '\0';
    local_d8[0xf] = '\0';
    std::string::append(local_d8);
    pbVar4 = *(byte **)(param_1[0x1b] + 8);
    pbVar1 = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      pbVar1 = pbVar4 + 1;
    }
    std::string::append(local_d8,(ulong)pbVar1);
    std::string::append(local_d8);
    snprintf((char *)local_c0,0x80,"%d",(ulong)(param_2 + 1));
    local_41 = 0;
    std::string::append(local_d8);
    std::string::append(local_d8);
    snprintf((char *)local_c0,0x80,"%d",(ulong)(param_3 + 1));
    local_41 = 0;
    std::string::append(local_d8);
    std::string::append(local_d8);
    pbVar1 = *(byte **)(param_4 + 0x10);
    if ((*param_4 & 1) == 0) {
      pbVar1 = param_4 + 1;
    }
    std::string::append(local_d8,(ulong)pbVar1);
    FUN_00bb0e90(local_f0);
  }
  FUN_00bb0d74(puVar3);
  return;
}


