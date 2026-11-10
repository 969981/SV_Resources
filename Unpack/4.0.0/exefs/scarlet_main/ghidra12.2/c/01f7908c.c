/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7908c; name: FUN_01f7908c
 */


void FUN_01f7908c(char *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*param_1 == '\0') {
    *(undefined **)(param_1 + 8) = PTR_DAT_047cfbb0 + 0x10;
    FUN_01cfa5b0(param_1 + 0x10,param_2 + 8);
    FUN_01cfa5b0(param_1 + 0x30,param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
    FUN_01f7a9d4(param_1 + 0x58,param_2 + 0x50);
    FUN_01f7a9d4(param_1 + 0x78,param_2 + 0x70);
    uVar2 = *(undefined8 *)(param_2 + 0x90);
    param_1[0xa0] = *(char *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    FUN_01d01e08(param_1 + 0xa8,param_2 + 0xa0);
    FUN_01d01e70(param_1 + 200,param_2 + 0xc0);
    FUN_01cfa5b0(param_1 + 0xe8,param_2 + 0xe0);
    FUN_01cfa5b0(param_1 + 0x108,param_2 + 0x100);
    uVar2 = *(undefined8 *)(param_2 + 0x120);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = uVar2;
    FUN_01cfa5b0(param_1 + 0x138,param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x150);
    FUN_01d01e08(param_1 + 0x160,param_2 + 0x158);
    uVar2 = *(undefined8 *)(param_2 + 0x178);
    uVar1 = *(undefined8 *)(param_2 + 0x180);
    param_1[400] = *(char *)(param_2 + 0x188);
    *(undefined8 *)(param_1 + 0x180) = uVar2;
    *(undefined8 *)(param_1 + 0x188) = uVar1;
    FUN_01d01ed8(param_1 + 0x198,param_2 + 400);
    memcpy(param_1 + 0x1a0,(void *)(param_2 + 0x198),0x28);
    FUN_01cfa5b0(param_1 + 0x1c8,param_2 + 0x1c0);
    *param_1 = '\x01';
  }
  else {
    FUN_01f7aabc(param_1 + 8,param_2);
  }
  return;
}


