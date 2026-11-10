/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007976e0; name: FUN_007976e0
 */


void FUN_007976e0(long *param_1,long *param_2,void *param_3,uint param_4)

{
  ulong uVar1;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  if ((param_2 == (long *)0x0) || (param_4 == 0)) {
    *param_1 = 0;
    return;
  }
  *param_1 = (long)param_2;
  if (param_4 < 0x41) {
    uVar1 = (ulong)param_4;
    memcpy(&local_60,param_3,uVar1);
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_3,param_4);
    (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,&local_60);
    uVar1 = (**(code **)(*(long *)*param_1 + 0x20))();
    uVar1 = uVar1 & 0xffffffff;
  }
  if (uVar1 < 0x40) {
    memset((void *)((long)&local_60 + uVar1),0,0x40 - uVar1);
  }
  *(uint *)(param_1 + 1) = local_60 ^ 0x36363636;
  *(uint *)(param_1 + 9) = local_60 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0xc) = local_5c ^ 0x36363636;
  *(uint *)((long)param_1 + 0x4c) = local_5c ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 2) = local_58 ^ 0x36363636;
  *(uint *)(param_1 + 10) = local_58 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0x14) = local_54 ^ 0x36363636;
  *(uint *)((long)param_1 + 0x54) = local_54 ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 3) = local_50 ^ 0x36363636;
  *(uint *)(param_1 + 0xb) = local_50 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0x1c) = local_4c ^ 0x36363636;
  *(uint *)((long)param_1 + 0x5c) = local_4c ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 4) = local_48 ^ 0x36363636;
  *(uint *)(param_1 + 0xc) = local_48 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0x24) = local_44 ^ 0x36363636;
  *(uint *)((long)param_1 + 100) = local_44 ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 5) = local_40 ^ 0x36363636;
  *(uint *)(param_1 + 0xd) = local_40 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0x2c) = local_3c ^ 0x36363636;
  *(uint *)((long)param_1 + 0x6c) = local_3c ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 6) = local_38 ^ 0x36363636;
  *(uint *)(param_1 + 0xe) = local_38 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0x34) = local_34 ^ 0x36363636;
  *(uint *)((long)param_1 + 0x74) = local_34 ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 7) = local_30 ^ 0x36363636;
  *(uint *)(param_1 + 0xf) = local_30 ^ 0x5c5c5c5c;
  *(uint *)((long)param_1 + 0x3c) = local_2c ^ 0x36363636;
  *(uint *)((long)param_1 + 0x7c) = local_2c ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 0x10) = local_28 ^ 0x5c5c5c5c;
  *(uint *)(param_1 + 8) = local_28 ^ 0x36363636;
  *(uint *)((long)param_1 + 0x44) = local_24 ^ 0x36363636;
  *(uint *)((long)param_1 + 0x84) = local_24 ^ 0x5c5c5c5c;
  return;
}


