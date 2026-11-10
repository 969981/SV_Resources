/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7b698; name: FUN_01f7b698
 */


void FUN_01f7b698(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte local_240;
  undefined7 uStack_23f;
  ulong local_238;
  ulong local_230;
  long *plStack_228;
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
  
  FUN_01c344f4();
  local_220 = PTR_DAT_047cfbb0 + 0x10;
  FUN_01cfa5b0(auStack_218,param_2 + 8);
  FUN_01cfa5b0(auStack_1f8,param_2 + 0x28);
  local_1d8 = *(undefined8 *)(param_2 + 0x48);
  FUN_01f7b834(auStack_1d0,param_2 + 0x50);
  FUN_01f7b834(auStack_1b0,param_2 + 0x70);
  local_190 = *(undefined8 *)(param_2 + 0x90);
  local_188 = *(undefined1 *)(param_2 + 0x98);
  FUN_01d01e08(auStack_180,param_2 + 0xa0);
  FUN_01d01e70(auStack_160,param_2 + 0xc0);
  FUN_01cfa5b0(auStack_140,param_2 + 0xe0);
  FUN_01cfa5b0(auStack_120,param_2 + 0x100);
  local_100 = *(undefined8 *)(param_2 + 0x120);
  local_f8 = *(undefined4 *)(param_2 + 0x128);
  FUN_01cfa5b0(auStack_f0,param_2 + 0x130);
  local_d0 = *(undefined4 *)(param_2 + 0x150);
  FUN_01d01e08(auStack_c8,param_2 + 0x158);
  local_a8 = *(undefined8 *)(param_2 + 0x178);
  uStack_a0 = *(undefined8 *)(param_2 + 0x180);
  local_98 = *(undefined1 *)(param_2 + 0x188);
  FUN_01d01ed8(auStack_90,param_2 + 400);
  memcpy(auStack_88,(void *)(param_2 + 0x198),0x28);
  FUN_01cfa5b0(auStack_60,param_2 + 0x1c0);
  FUN_01e73af4(&local_240,auStack_90,"Regulation");
  uVar1 = (ulong)(local_240 >> 1);
  uVar2 = (ulong)&local_240 | 1;
  if ((local_240 & 1) != 0) {
    uVar1 = local_238;
    uVar2 = local_230;
  }
  FUN_01e71748(*param_1,uVar2,uVar1);
  if ((local_240 & 1) != 0) {
    (**(code **)(*plStack_228 + 0x18))
              (plStack_228,local_230,CONCAT71(uStack_23f,local_240) & 0xfffffffffffffffe,1);
  }
  FUN_01cfa274(&local_220);
  return;
}


