/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034aa700; name: FUN_034aa700
 */


void FUN_034aa700(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 3) = param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR_FUN_047c4020;
  param_1[1] = &PTR_LAB_047c4270;
  *(undefined4 *)(param_1 + 9) = param_2;
  param_1[4] = &PTR_LAB_047c42b0;
  param_1[6] = 0;
  param_1[7] = &PTR_FUN_047c4348;
  param_1[8] = 0;
  puVar1 = PTR_DAT_047e7128 + 0x10;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = puVar1;
  *(undefined4 *)(param_1 + 0xd) = param_2;
  memset(param_1 + 0xe,0,0x50);
  param_1[0x19] = param_1;
  param_1[0x1a] = 0;
  *(uint *)((long)param_1 + 0xda) = *(uint *)((long)param_1 + 0xda) & 0xe0090000 | 0x4000;
  return;
}


