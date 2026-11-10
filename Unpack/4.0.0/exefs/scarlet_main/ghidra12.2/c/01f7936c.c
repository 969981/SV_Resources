/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7936c; name: FUN_01f7936c
 */


void FUN_01f7936c(char *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*param_1 == '\0') {
    puVar1 = PTR_DAT_047cfbb0 + 0x10;
    *(undefined ***)(param_1 + 8) = &PTR_LAB_0455d768;
    *(undefined **)(param_1 + 0x10) = puVar1;
    FUN_01cfa5b0(param_1 + 0x18,param_2 + 0x10);
    FUN_01cfa5b0(param_1 + 0x38,param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x50);
    FUN_01f7a9d4(param_1 + 0x60,param_2 + 0x58);
    FUN_01f7a9d4(param_1 + 0x80,param_2 + 0x78);
    uVar3 = *(undefined8 *)(param_2 + 0x98);
    param_1[0xa8] = *(char *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    FUN_01d01e08(param_1 + 0xb0,param_2 + 0xa8);
    FUN_01d01e70(param_1 + 0xd0,param_2 + 200);
    FUN_01cfa5b0(param_1 + 0xf0,param_2 + 0xe8);
    FUN_01cfa5b0(param_1 + 0x110,param_2 + 0x108);
    uVar3 = *(undefined8 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = uVar3;
    FUN_01cfa5b0(param_1 + 0x140,param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x158);
    FUN_01d01e08(param_1 + 0x168,param_2 + 0x160);
    uVar3 = *(undefined8 *)(param_2 + 0x180);
    uVar2 = *(undefined8 *)(param_2 + 0x188);
    param_1[0x198] = *(char *)(param_2 + 400);
    *(undefined8 *)(param_1 + 0x188) = uVar3;
    *(undefined8 *)(param_1 + 400) = uVar2;
    FUN_01d01ed8(param_1 + 0x1a0,param_2 + 0x198);
    memcpy(param_1 + 0x1a8,(void *)(param_2 + 0x1a0),0x28);
    FUN_01cfa5b0(param_1 + 0x1d0,param_2 + 0x1c8);
    *(undefined **)(param_1 + 0x1f0) = PTR_DAT_047cfbf8 + 0x10;
    FUN_01cfa5b0(param_1 + 0x1f8,param_2 + 0x1f0);
    FUN_01cfa5b0(param_1 + 0x218,param_2 + 0x210);
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x230);
    FUN_01cfa5b0(param_1 + 0x240,param_2 + 0x238);
    FUN_01cfa5b0(param_1 + 0x260,param_2 + 600);
    FUN_01cfa5b0(param_1 + 0x280,param_2 + 0x278);
    memcpy(param_1 + 0x2a0,(void *)(param_2 + 0x298),100);
    *param_1 = '\x01';
    return;
  }
  FUN_01f7aabc(param_1 + 0x10,param_2 + 8);
  FUN_01d0e1a8(param_1 + 0x1f8,param_2 + 0x1f0);
  FUN_01d0e1a8(param_1 + 0x218,param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x230);
  FUN_01d0e1a8(param_1 + 0x240,param_2 + 0x238);
  FUN_01d0e1a8(param_1 + 0x260,param_2 + 600);
  FUN_01d0e1a8(param_1 + 0x280,param_2 + 0x278);
  memcpy(param_1 + 0x2a0,(void *)(param_2 + 0x298),100);
  return;
}


