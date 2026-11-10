/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c36b10; name: FUN_00c36b10
 */


void FUN_00c36b10(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined4 local_40 [2];
  char *local_38;
  undefined4 local_30;
  char local_28 [24];
  
  bVar1 = *(byte *)(param_1 + 0x18);
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) goto LAB_00c36b4c;
    uVar2 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x20);
    if (uVar2 == 0) goto LAB_00c36b4c;
  }
  if ((ulong)((long)*(int *)(param_1 + 0x30) << 1) <= uVar2) {
    std::string::resize((ulong)(param_1 + 0x18),(char)uVar2 + -2);
    return;
  }
LAB_00c36b4c:
  local_40[0] = 2;
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  local_28[0x14] = '\0';
  local_28[0x15] = '\0';
  local_28[0x16] = '\0';
  local_28[0x17] = '\0';
  local_30 = 0x498;
  local_38 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/text_format.cc"
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
  return;
}


