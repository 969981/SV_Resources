/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0ebac; name: FUN_00c0ebac
 */


undefined8 FUN_00c0ebac(long param_1,long *param_2,int *param_3)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 local_60 [2];
  char *local_58;
  undefined4 local_50;
  char local_48 [24];
  
  puVar2 = *(ulong **)(param_1 + 8);
  if (puVar2 == (ulong *)0x0) {
    local_60[0] = 3;
    local_48[0x10] = '\0';
    local_48[0x11] = '\0';
    local_48[0x12] = '\0';
    local_48[0x13] = '\0';
    local_48[0x14] = '\0';
    local_48[0x15] = '\0';
    local_48[0x16] = '\0';
    local_48[0x17] = '\0';
    local_50 = 0xa1;
    local_58 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/io/zero_copy_stream_impl_lite.cc"
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
    puVar2 = *(ulong **)(param_1 + 8);
  }
  bVar1 = (byte)*puVar2;
  if ((bVar1 & 1) == 0) {
    uVar6 = (ulong)(bVar1 >> 1);
    uVar7 = uVar6;
    if (0x2b < bVar1) goto LAB_00c0ecc8;
    uVar3 = 0x16;
  }
  else {
    uVar6 = puVar2[1];
    uVar7 = (ulong)(int)uVar6;
    uVar3 = (*puVar2 & 0xfffffffffffffffe) - 1;
    if (uVar3 <= uVar7) {
      if (0x3fffffff < (int)uVar6) {
        local_48[0x10] = '\0';
        local_48[0x11] = '\0';
        local_48[0x12] = '\0';
        local_48[0x13] = '\0';
        local_48[0x14] = '\0';
        local_48[0x15] = '\0';
        local_48[0x16] = '\0';
        local_48[0x17] = '\0';
        local_60[0] = 2;
        local_50 = 0xae;
        local_58 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/io/zero_copy_stream_impl_lite.cc"
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
        FUN_00bb0e90(local_60);
        FUN_00bb0d74(local_60);
        return 0;
      }
LAB_00c0ecc8:
      uVar5 = (int)uVar6 * 2;
      if ((int)uVar5 < 0x11) {
        uVar5 = 0x10;
      }
      uVar3 = (ulong)uVar5;
    }
  }
  std::string::resize((ulong)puVar2,(char)uVar3);
  pbVar4 = *(byte **)(param_1 + 8);
  if ((*pbVar4 & 1) == 0) {
    if (1 < *pbVar4) {
      pbVar4 = pbVar4 + 1;
      goto LAB_00c0ed10;
    }
  }
  else if (*(long *)(pbVar4 + 8) != 0) {
    pbVar4 = *(byte **)(pbVar4 + 0x10);
    goto LAB_00c0ed10;
  }
  pbVar4 = (byte *)0x0;
LAB_00c0ed10:
  *param_2 = (long)(pbVar4 + uVar7);
  bVar1 = **(byte **)(param_1 + 8);
  if ((bVar1 & 1) == 0) {
    uVar5 = (uint)(bVar1 >> 1);
  }
  else {
    uVar5 = (uint)*(undefined8 *)(*(byte **)(param_1 + 8) + 8);
  }
  *param_3 = uVar5 - (int)uVar7;
  return 1;
}


