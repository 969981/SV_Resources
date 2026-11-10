/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c1ff04; name: FUN_00c1ff04
 */


undefined4 FUN_00c1ff04(long *param_1)

{
  undefined4 uVar1;
  undefined4 local_40 [2];
  char *local_38;
  undefined4 local_30;
  char local_28 [24];
  
  switch(*(undefined4 *)(PTR_DAT_047dad98 + (ulong)*(byte *)(param_1 + 1) * 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    uVar1 = *(undefined4 *)*param_1;
    break;
  case 9:
  case 10:
    uVar1 = *(undefined4 *)(*param_1 + 8);
    break;
  default:
    local_40[0] = 3;
    local_28[0x10] = '\0';
    local_28[0x11] = '\0';
    local_28[0x12] = '\0';
    local_28[0x13] = '\0';
    local_28[0x14] = '\0';
    local_28[0x15] = '\0';
    local_28[0x16] = '\0';
    local_28[0x17] = '\0';
    local_30 = 0x6a7;
    local_38 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/extension_set.cc"
    ;
    local_28[0] = '\0';
    local_28[1] = '\0';
    local_28[2] = '\0';
    local_28[3] = '\0';
    local_28[4] = '\0';
    local_28[5] = '\0';
    local_28[6] = '\0';
    local_28[7] = '\0';
    local_28[8] = '\0';
    local_28[9] = '\0';
    local_28[10] = '\0';
    local_28[0xb] = '\0';
    local_28[0xc] = '\0';
    local_28[0xd] = '\0';
    local_28[0xe] = '\0';
    local_28[0xf] = '\0';
    std::string::append(local_28);
    FUN_00bb0e90(local_40);
    FUN_00bb0d74(local_40);
    uVar1 = 0;
  }
  return uVar1;
}


