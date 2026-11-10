/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c08dac; name: FUN_00c08dac
 */


void FUN_00c08dac(int *param_1)

{
  undefined4 local_d0 [2];
  char *local_c8;
  undefined4 local_c0;
  char local_b8 [151];
  undefined1 local_21;
  
  if ((*(long **)(param_1 + 4) != (long *)0x0) &&
     (0 < param_1[0xb] + (param_1[2] - *param_1) + param_1[7])) {
    (**(code **)(**(long **)(param_1 + 4) + 0x18))();
    param_1[6] = (((int)*(undefined8 *)param_1 - param_1[2]) - param_1[0xb]) + param_1[6];
    param_1[7] = 0;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
    param_1[0xb] = 0;
  }
  if (param_1[0xd] == -2) {
    local_b8[0x10] = '\0';
    local_b8[0x11] = '\0';
    local_b8[0x12] = '\0';
    local_b8[0x13] = '\0';
    local_b8[0x14] = '\0';
    local_b8[0x15] = '\0';
    local_b8[0x16] = '\0';
    local_b8[0x17] = '\0';
    local_d0[0] = 1;
    local_c0 = 0x52;
    local_c8 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/io/coded_stream.cc"
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
    snprintf(local_b8 + 0x18,0x80,"%d",(ulong)(uint)param_1[6]);
    local_21 = 0;
    std::string::append(local_b8);
    FUN_00bb0e90(local_d0);
    FUN_00bb0d74(local_d0);
  }
  return;
}


