/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ba6304; name: FUN_00ba6304
 */


void FUN_00ba6304(undefined4 param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  undefined4 local_d0 [2];
  char *local_c8;
  undefined4 local_c0;
  char local_b8 [151];
  undefined1 local_21;
  
  if (param_3 == 0x12) {
    param_2 = param_2 << 1 ^ (long)param_2 >> 0x3f;
  }
  else {
    if (param_3 == 0x10) {
      FUN_00c00848(param_4,param_1);
      return;
    }
    if (param_3 != 3) {
      local_b8[0x10] = '\0';
      local_b8[0x11] = '\0';
      local_b8[0x12] = '\0';
      local_b8[0x13] = '\0';
      local_b8[0x14] = '\0';
      local_b8[0x15] = '\0';
      local_b8[0x16] = '\0';
      local_b8[0x17] = '\0';
      local_d0[0] = 3;
      local_c0 = 0x1850;
      local_c8 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.cc"
      ;
      local_b8[0] = '\0';
      local_b8[1] = '\0';
      local_b8[2] = '\0';
      local_b8[3] = '\0';
      local_b8[4] = '\0';
      local_b8[5] = '\0';
      local_b8[6] = '\0';
      local_b8[7] = '\0';
      local_b8[8] = '\0';
      local_b8[9] = '\0';
      local_b8[10] = '\0';
      local_b8[0xb] = '\0';
      local_b8[0xc] = '\0';
      local_b8[0xd] = '\0';
      local_b8[0xe] = '\0';
      local_b8[0xf] = '\0';
      std::string::append(local_b8);
      snprintf(local_b8 + 0x18,0x80,"%d",(ulong)param_3);
      local_21 = 0;
      std::string::append(local_b8);
      FUN_00bb0e90(local_d0);
      FUN_00bb0d74(local_d0);
      return;
    }
  }
  FUN_00c001d0(param_4,param_1,param_2);
  return;
}


