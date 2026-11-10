/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0eea4; name: FUN_00c0eea4
 */


ulong FUN_00c0eea4(long param_1)

{
  ulong uVar1;
  byte *pbVar2;
  undefined4 local_50 [2];
  char *local_48;
  undefined4 local_40;
  char local_38 [24];
  
  pbVar2 = *(byte **)(param_1 + 8);
  if (pbVar2 == (byte *)0x0) {
    local_50[0] = 3;
    local_38[0x10] = '\0';
    local_38[0x11] = '\0';
    local_38[0x12] = '\0';
    local_38[0x13] = '\0';
    local_38[0x14] = '\0';
    local_38[0x15] = '\0';
    local_38[0x16] = '\0';
    local_38[0x17] = '\0';
    local_40 = 199;
    local_48 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/io/zero_copy_stream_impl_lite.cc"
    ;
    local_38[0] = '\0';
    local_38[1] = '\0';
    local_38[2] = '\0';
    local_38[3] = '\0';
    local_38[4] = '\0';
    local_38[5] = '\0';
    local_38[6] = '\0';
    local_38[7] = '\0';
    local_38[8] = '\0';
    local_38[9] = '\0';
    local_38[10] = '\0';
    local_38[0xb] = '\0';
    local_38[0xc] = '\0';
    local_38[0xd] = '\0';
    local_38[0xe] = '\0';
    local_38[0xf] = '\0';
    std::string::append(local_38);
    FUN_00bb0e90(local_50);
    FUN_00bb0d74(local_50);
    pbVar2 = *(byte **)(param_1 + 8);
  }
  if ((*pbVar2 & 1) == 0) {
    uVar1 = (ulong)(*pbVar2 >> 1);
  }
  else {
    uVar1 = *(ulong *)(pbVar2 + 8);
  }
  return uVar1;
}


