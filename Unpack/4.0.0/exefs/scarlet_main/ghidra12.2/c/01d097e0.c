/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d097e0; name: FUN_01d097e0
 */


void FUN_01d097e0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
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
  undefined1 auStack_28 [8];
  
  uVar1 = DAT_0482cc28;
  lVar2 = FUN_01d015f4();
  local_220 = PTR_DAT_047cfbb0 + 0x10;
  FUN_01cfa5b0(auStack_218,lVar2 + 8);
  FUN_01cfa5b0(auStack_1f8,lVar2 + 0x28);
  local_1d8 = *(undefined8 *)(lVar2 + 0x48);
  FUN_01d01dc4(auStack_1d0,lVar2 + 0x50);
  FUN_01d01dc4(auStack_1b0,lVar2 + 0x70);
  local_190 = *(undefined8 *)(lVar2 + 0x90);
  local_188 = *(undefined1 *)(lVar2 + 0x98);
  FUN_01d01e08(auStack_180,lVar2 + 0xa0);
  FUN_01d01e70(auStack_160,lVar2 + 0xc0);
  FUN_01cfa5b0(auStack_140,lVar2 + 0xe0);
  FUN_01cfa5b0(auStack_120,lVar2 + 0x100);
  local_100 = *(undefined8 *)(lVar2 + 0x120);
  local_f8 = *(undefined4 *)(lVar2 + 0x128);
  FUN_01cfa5b0(auStack_f0,lVar2 + 0x130);
  local_d0 = *(undefined4 *)(lVar2 + 0x150);
  FUN_01d01e08(auStack_c8,lVar2 + 0x158);
  local_a8 = *(undefined8 *)(lVar2 + 0x178);
  uStack_a0 = *(undefined8 *)(lVar2 + 0x180);
  local_98 = *(undefined1 *)(lVar2 + 0x188);
  FUN_01d01ed8(auStack_90,lVar2 + 400);
  memcpy(auStack_88,(void *)(lVar2 + 0x198),0x28);
  FUN_01cfa5b0(auStack_60,lVar2 + 0x1c0);
  FUN_01d0a1c0(auStack_28,uVar1,&local_220);
  FUN_01c305e0(param_1,auStack_28);
  FUN_01c0b508(auStack_28);
  FUN_01cfa274(&local_220);
  return;
}


