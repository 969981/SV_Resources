/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027d3144; name: FUN_027d3144
 */


void FUN_027d3144(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [104];
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = *param_2;
  uStack_48 = param_2[1];
  local_40 = param_2[2];
  local_38 = (long *)param_2[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  local_54 = 1;
  local_68 = 0;
  uStack_60 = 0;
  FUN_027bfb28(&local_68,param_3);
  local_128 = *param_4;
  uStack_120 = param_4[1];
  local_118 = param_4[2];
  uStack_110 = param_4[3];
  *param_4 = 0;
  local_108 = param_4[4];
  uStack_100 = param_4[5];
  local_f8 = param_4[6];
  uStack_f0 = param_4[7];
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  FUN_027d324c(auStack_e8,param_4 + 8);
  local_80 = *(undefined1 *)(param_4 + 0x15);
  local_78 = param_4[0x16];
  uStack_70 = param_4[0x17];
  param_4[0x16] = 0;
  param_4[0x17] = 0;
  FUN_027d32e4(param_1,&local_50,&local_54,&local_68,&local_128);
  FUN_027c70c0(&local_128);
  FUN_027bfe38(&local_68);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


