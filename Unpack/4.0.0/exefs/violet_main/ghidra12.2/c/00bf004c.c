/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf004c; name: FUN_00bf004c
 */


void FUN_00bf004c(long param_1,long param_2,long param_3,uint param_4)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  undefined4 local_f0 [2];
  char *local_e8;
  undefined4 local_e0;
  char local_d8 [24];
  uint local_c0 [31];
  undefined1 local_41;
  
  if (*(long *)(param_3 + 0x50) != *(long *)(param_1 + 8)) {
    FUN_00be9330(*(long *)(param_1 + 8),param_3,"SetEnumValue","Field does not match message type.")
    ;
  }
  if (*(int *)(param_3 + 0x40) == 3) {
    FUN_00be9330(*(undefined8 *)(param_1 + 8),param_3,"SetEnumValue",
                 "Field is repeated; the method requires a singular field.");
  }
  if (*(int *)(param_3 + 0x3c) != 0xe) {
    FUN_00beafb0(*(undefined8 *)(param_1 + 8),param_3,"SetEnumValue",8);
  }
  if ((*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x7c) != 3) &&
     (lVar2 = FUN_00b7ccec(*(undefined8 *)(param_3 + 0x70),param_4), lVar2 == 0)) {
    local_d8[0x10] = '\0';
    local_d8[0x11] = '\0';
    local_d8[0x12] = '\0';
    local_d8[0x13] = '\0';
    local_d8[0x14] = '\0';
    local_d8[0x15] = '\0';
    local_d8[0x16] = '\0';
    local_d8[0x17] = '\0';
    local_f0[0] = 2;
    local_e0 = 0x532;
    local_e8 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/generated_message_reflection.cc"
    ;
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
    snprintf((char *)local_c0,0x80,"%d",(ulong)param_4);
    local_41 = 0;
    std::string::append(local_d8);
    std::string::append(local_d8);
    pbVar3 = *(byte **)(param_3 + 8);
    pbVar1 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar1 = pbVar3 + 1;
    }
    std::string::append(local_d8,(ulong)pbVar1);
    FUN_00bb0e90(local_f0);
    FUN_00bb0d74(local_f0);
    param_4 = *(uint *)(*(long *)(param_3 + 0x88) + 0x10);
  }
  local_c0[0] = param_4;
  if (*(char *)(param_3 + 0x44) == '\0') {
    FUN_00be7a4c(param_1,param_2,param_3,local_c0);
  }
  else {
    FUN_00c23194(param_2 + *(int *)(param_1 + 0x34),*(undefined4 *)(param_3 + 0x38),
                 *(undefined4 *)(param_3 + 0x3c),param_4,param_3);
  }
  return;
}


