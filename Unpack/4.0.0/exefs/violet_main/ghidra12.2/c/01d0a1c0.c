/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d0a1c0; name: FUN_01d0a1c0
 */


void FUN_01d0a1c0(undefined8 param_1,code *param_2,long param_3)

{
  undefined *local_220;
  undefined1 auStack_218 [32];
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [32];
  undefined8 local_190;
  undefined1 local_188;
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 auStack_f0 [32];
  undefined4 local_d0;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [32];
  
  local_220 = PTR_DAT_047cfbb0 + 0x10;
  FUN_01cfa5b0(auStack_218,param_3 + 8);
  FUN_01cfa5b0(auStack_1f8,param_3 + 0x28);
  local_1d8 = *(undefined8 *)(param_3 + 0x48);
  FUN_01d01dc4(auStack_1d0,param_3 + 0x50);
  FUN_01d01dc4(auStack_1b0,param_3 + 0x70);
  local_190 = *(undefined8 *)(param_3 + 0x90);
  local_188 = *(undefined1 *)(param_3 + 0x98);
  FUN_01d01e08(auStack_180,param_3 + 0xa0);
  FUN_01d01e70(auStack_160,param_3 + 0xc0);
  FUN_01cfa5b0(auStack_140,param_3 + 0xe0);
  FUN_01cfa5b0(auStack_120,param_3 + 0x100);
  local_100 = *(undefined8 *)(param_3 + 0x120);
  local_f8 = *(undefined4 *)(param_3 + 0x128);
  FUN_01cfa5b0(auStack_f0,param_3 + 0x130);
  local_d0 = *(undefined4 *)(param_3 + 0x150);
  FUN_01d01e08(auStack_c8,param_3 + 0x158);
  local_a8 = *(undefined8 *)(param_3 + 0x178);
  uStack_a0 = *(undefined8 *)(param_3 + 0x180);
  local_98 = *(undefined1 *)(param_3 + 0x188);
  FUN_01d01ed8(auStack_90,param_3 + 400);
  memcpy(auStack_88,(void *)(param_3 + 0x198),0x28);
  FUN_01cfa5b0(auStack_60,param_3 + 0x1c0);
  (*param_2)(param_1,&local_220);
  FUN_01cfa274(&local_220);
  return;
}


