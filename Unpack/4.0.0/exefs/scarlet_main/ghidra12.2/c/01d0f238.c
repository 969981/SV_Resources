/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d0f238; name: FUN_01d0f238
 */


void FUN_01d0f238(undefined1 *param_1,long param_2)

{
  undefined *local_210;
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [32];
  undefined8 local_180;
  undefined1 local_178;
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 auStack_e0 [32];
  undefined4 local_c0;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [40];
  undefined1 auStack_50 [32];
  
  local_210 = PTR_DAT_047cfbb0;
  *param_1 = 1;
  local_210 = local_210 + 0x10;
  FUN_01cfa5b0(auStack_208,param_2 + 8);
  FUN_01cfa5b0(auStack_1e8,param_2 + 0x28);
  local_1c8 = *(undefined8 *)(param_2 + 0x48);
  FUN_01d01dc4(auStack_1c0,param_2 + 0x50);
  FUN_01d01dc4(auStack_1a0,param_2 + 0x70);
  local_180 = *(undefined8 *)(param_2 + 0x90);
  local_178 = *(undefined1 *)(param_2 + 0x98);
  FUN_01d01e08(auStack_170,param_2 + 0xa0);
  FUN_01d01e70(auStack_150,param_2 + 0xc0);
  FUN_01cfa5b0(auStack_130,param_2 + 0xe0);
  FUN_01cfa5b0(auStack_110,param_2 + 0x100);
  local_f0 = *(undefined8 *)(param_2 + 0x120);
  local_e8 = *(undefined4 *)(param_2 + 0x128);
  FUN_01cfa5b0(auStack_e0,param_2 + 0x130);
  local_c0 = *(undefined4 *)(param_2 + 0x150);
  FUN_01d01e08(auStack_b8,param_2 + 0x158);
  local_98 = *(undefined8 *)(param_2 + 0x178);
  uStack_90 = *(undefined8 *)(param_2 + 0x180);
  local_88 = *(undefined1 *)(param_2 + 0x188);
  FUN_01d01ed8(auStack_80,param_2 + 400);
  memcpy(auStack_78,(void *)(param_2 + 0x198),0x28);
  FUN_01cfa5b0(auStack_50,param_2 + 0x1c0);
  FUN_01d0f580(param_1 + 8,&local_210);
  FUN_01cfa274(&local_210);
  return;
}


