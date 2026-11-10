/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a09568; name: FUN_02a09568
 */


void FUN_02a09568(char *param_1,undefined8 param_2,undefined8 param_3,void *param_4,void *param_5,
                 long param_6,long param_7,undefined2 param_8)

{
  ulong uVar1;
  ulong local_a0 [3];
  undefined2 local_88;
  undefined6 uStack_86;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  
  memset(param_1,0,0x2f0);
  snprintf(param_1,0x20,"%s",param_2);
  FUN_01cfa5b0(local_a0,param_6 + 8);
  uVar1 = (ulong)local_a0 | 1;
  if ((local_a0[0] & 1) != 0) {
    uVar1 = local_a0[2];
  }
  snprintf(param_1 + 0x20,0x20,"%s",uVar1);
  if ((local_a0[0] & 1) != 0) {
    (**(code **)(*(long *)CONCAT62(uStack_86,local_88) + 0x18))
              ((long *)CONCAT62(uStack_86,local_88),local_a0[2],local_a0[0] & 0xfffffffffffffffe,1);
  }
  *(undefined2 *)(param_1 + 0x40) = param_8;
  *(short *)(param_1 + 0x42) = (short)(int)((double)*(int *)(param_7 + 0xe4) * 0.001);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_7 + 0xe8);
  param_1[0x48] = (char)*(undefined4 *)(param_6 + 0x4c);
  memcpy(param_1 + 0x260,param_4,0x24);
  memcpy(param_1 + 0x284,param_5,0x24);
  snprintf(param_1 + 0x2a8,0x20,"%s",param_2);
  snprintf(param_1 + 0x2c8,0x20,"%s",param_3);
  local_88 = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  FUN_01e74ef0(local_a0,0x1a,param_1 + 0x264,0xd);
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_01e74ef0(&local_80,0x1a,param_1 + 0x288,0xd);
  return;
}


