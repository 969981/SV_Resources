/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c27388; name: FUN_00c27388
 */


uint FUN_00c27388(undefined8 param_1,ulong param_2,undefined8 param_3,long *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte local_a0;
  char local_9f;
  undefined4 local_80 [2];
  char *local_78;
  undefined4 local_70;
  char local_68 [24];
  
  uVar5 = param_2 >> 3 & 0x1fffffff;
  uVar3 = (**(code **)(*param_4 + 0x10))(param_4,uVar5,&local_a0);
  if ((uVar3 & 1) == 0) {
LAB_00c27484:
    uVar2 = (**(code **)(*param_5 + 0x10))(param_5,param_3,param_2 & 0xffffffff);
  }
  else {
    uVar2 = (uint)param_2 & 7;
    uVar1 = *(uint *)(PTR_DAT_047dad68 + (ulong)local_a0 * 4);
    if ((uVar2 == 2) && (local_9f != '\0')) {
      if (5 < uVar1) {
        local_80[0] = 3;
        local_68[0x10] = '\0';
        local_68[0x11] = '\0';
        local_68[0x12] = '\0';
        local_68[0x13] = '\0';
        local_68[0x14] = '\0';
        local_68[0x15] = '\0';
        local_68[0x16] = '\0';
        local_68[0x17] = '\0';
        local_70 = 0x4b;
        local_78 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/extension_set.cc"
        ;
        local_68[0] = '\0';
        local_68[1] = '\0';
        local_68[2] = '\0';
        local_68[3] = '\0';
        local_68[4] = '\0';
        local_68[5] = '\0';
        local_68[6] = '\0';
        local_68[7] = '\0';
        local_68[8] = '\0';
        local_68[9] = '\0';
        local_68[10] = '\0';
        local_68[0xb] = '\0';
        local_68[0xc] = '\0';
        local_68[0xd] = '\0';
        local_68[0xe] = '\0';
        local_68[0xf] = '\0';
        std::string::append(local_68);
        FUN_00bb0e90(local_80);
        FUN_00bb0d74(local_80);
        goto LAB_00c2745c;
      }
      uVar4 = 1;
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x1cU) != 0) goto LAB_00c2745c;
    }
    else {
LAB_00c2745c:
      if (uVar1 != uVar2) goto LAB_00c27484;
      uVar4 = 0;
    }
    uVar2 = FUN_00c274bc(param_1,uVar5,uVar4,&local_a0,param_3,param_5);
  }
  return uVar2 & 1;
}


