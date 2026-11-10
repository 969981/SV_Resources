/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0ed50; name: FUN_00c0ed50
 */


void FUN_00c0ed50(long param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  undefined4 local_50 [2];
  char *local_48;
  undefined4 local_40;
  char local_38 [24];
  
  if (param_2 < 0) {
    local_50[0] = 3;
    local_38[0x10] = '\0';
    local_38[0x11] = '\0';
    local_38[0x12] = '\0';
    local_38[0x13] = '\0';
    local_38[0x14] = '\0';
    local_38[0x15] = '\0';
    local_38[0x16] = '\0';
    local_38[0x17] = '\0';
    local_40 = 0xc0;
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
  }
  pbVar1 = *(byte **)(param_1 + 8);
  if (pbVar1 == (byte *)0x0) {
    local_50[0] = 3;
    local_38[0x10] = '\0';
    local_38[0x11] = '\0';
    local_38[0x12] = '\0';
    local_38[0x13] = '\0';
    local_38[0x14] = '\0';
    local_38[0x15] = '\0';
    local_38[0x16] = '\0';
    local_38[0x17] = '\0';
    local_40 = 0xc1;
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
    pbVar1 = *(byte **)(param_1 + 8);
  }
  bVar2 = *pbVar1;
  if ((bVar2 & 1) == 0) {
    uVar3 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar3 = *(ulong *)(pbVar1 + 8);
  }
  if (uVar3 < (ulong)(long)param_2) {
    local_50[0] = 3;
    local_38[0x10] = '\0';
    local_38[0x11] = '\0';
    local_38[0x12] = '\0';
    local_38[0x13] = '\0';
    local_38[0x14] = '\0';
    local_38[0x15] = '\0';
    local_38[0x16] = '\0';
    local_38[0x17] = '\0';
    local_40 = 0xc2;
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
    pbVar1 = *(byte **)(param_1 + 8);
    bVar2 = *pbVar1;
  }
  if ((bVar2 & 1) == 0) {
    bVar2 = bVar2 >> 1;
  }
  else {
    bVar2 = (byte)*(undefined8 *)(pbVar1 + 8);
  }
  std::string::resize((ulong)pbVar1,bVar2 - (char)param_2);
  return;
}


