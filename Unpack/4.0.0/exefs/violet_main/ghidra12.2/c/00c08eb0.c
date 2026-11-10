/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c08eb0; name: FUN_00c08eb0
 */


undefined8 FUN_00c08eb0(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  int local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  char *local_c8;
  undefined4 local_c0;
  char local_b8 [24];
  undefined4 local_a0 [2];
  char *local_98;
  undefined4 local_90;
  char local_88 [103];
  undefined1 local_21;
  
  if (((*(int *)((long)param_1 + 0x2c) < 1) && (*(int *)((long)param_1 + 0x1c) < 1)) &&
     ((int)param_1[3] != (int)param_1[5])) {
    if ((-1 < *(int *)((long)param_1 + 0x34)) && (*(int *)((long)param_1 + 0x34) <= (int)param_1[3])
       ) {
      local_b8[0x10] = '\0';
      local_b8[0x11] = '\0';
      local_b8[0x12] = '\0';
      local_b8[0x13] = '\0';
      local_b8[0x14] = '\0';
      local_b8[0x15] = '\0';
      local_b8[0x16] = '\0';
      local_b8[0x17] = '\0';
      local_d0 = 1;
      local_c0 = 0x25d;
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
      snprintf((char *)local_a0,0x80,"%d",(ulong)*(uint *)(param_1 + 6));
      local_21 = 0;
      std::string::append(local_b8);
      std::string::append(local_b8);
      FUN_00bb0e90(&local_d0);
      FUN_00bb0d74(&local_d0);
      *(undefined4 *)((long)param_1 + 0x34) = 0xfffffffe;
    }
    plVar7 = (long *)param_1[2];
    do {
      uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,&local_d0,&local_d4);
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        return 0;
      }
    } while (local_d4 == 0);
    *param_1 = CONCAT44(uStack_cc,local_d0);
    param_1[1] = CONCAT44(uStack_cc,local_d0) + (long)local_d4;
    if (local_d4 < 0) {
      local_a0[0] = 3;
      local_88[0x10] = '\0';
      local_88[0x11] = '\0';
      local_88[0x12] = '\0';
      local_88[0x13] = '\0';
      local_88[0x14] = '\0';
      local_88[0x15] = '\0';
      local_88[0x16] = '\0';
      local_88[0x17] = '\0';
      local_90 = 0x26e;
      local_98 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/io/coded_stream.cc"
      ;
      local_88[0] = '\0';
      local_88[1] = '\0';
      local_88[2] = '\0';
      local_88[3] = '\0';
      local_88[4] = '\0';
      local_88[5] = '\0';
      local_88[6] = '\0';
      local_88[7] = '\0';
      local_88[8] = '\0';
      local_88[9] = '\0';
      local_88[10] = '\0';
      local_88[0xb] = '\0';
      local_88[0xc] = '\0';
      local_88[0xd] = '\0';
      local_88[0xe] = '\0';
      local_88[0xf] = '\0';
      std::string::append(local_88);
      FUN_00bb0e90(local_a0);
      FUN_00bb0d74(local_a0);
    }
    iVar5 = (int)param_1[3];
    iVar1 = iVar5 - (0x7fffffff - local_d4);
    if (iVar1 == 0 || iVar5 < 0x7fffffff - local_d4) {
      iVar5 = iVar5 + local_d4;
      lVar6 = param_1[1];
    }
    else {
      lVar6 = param_1[1] - (long)iVar1;
      iVar5 = 0x7fffffff;
      *(int *)((long)param_1 + 0x1c) = iVar1;
      param_1[1] = lVar6;
    }
    lVar6 = lVar6 + *(int *)((long)param_1 + 0x2c);
    iVar1 = (int)param_1[6];
    if ((int)param_1[5] <= (int)param_1[6]) {
      iVar1 = (int)param_1[5];
    }
    *(int *)(param_1 + 3) = iVar5;
    iVar2 = iVar5 - iVar1;
    param_1[1] = lVar6;
    if (iVar2 == 0 || iVar5 < iVar1) {
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      uVar3 = 1;
    }
    else {
      *(int *)((long)param_1 + 0x2c) = iVar2;
      uVar3 = 1;
      param_1[1] = lVar6 - iVar2;
    }
  }
  else {
    if (((int)param_1[6] <= (int)param_1[3] - *(int *)((long)param_1 + 0x2c)) &&
       ((int)param_1[6] != (int)param_1[5])) {
      local_b8[0x10] = '\0';
      local_b8[0x11] = '\0';
      local_b8[0x12] = '\0';
      local_b8[0x13] = '\0';
      local_b8[0x14] = '\0';
      local_b8[0x15] = '\0';
      local_b8[0x16] = '\0';
      local_b8[0x17] = '\0';
      local_d0 = 2;
      local_c0 = 0xd0;
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
      snprintf((char *)local_a0,0x80,"%d",(ulong)*(uint *)(param_1 + 6));
      local_21 = 0;
      std::string::append(local_b8);
      std::string::append(local_b8);
      FUN_00bb0e90(&local_d0);
      FUN_00bb0d74(&local_d0);
    }
    uVar3 = 0;
  }
  return uVar3;
}


