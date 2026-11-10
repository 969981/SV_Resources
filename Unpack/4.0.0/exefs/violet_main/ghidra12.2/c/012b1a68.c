/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012b1a68; name: FUN_012b1a68
 */


void FUN_012b1a68(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_012b1dc0();
  *param_1 = &PTR_FUN_045ce058;
  param_1[4] = &PTR_LAB_045ce088;
  FUN_012b1cd8(param_1 + 5);
  uVar1 = FUN_012e29a0();
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_012b1b90();
  }
  else {
    uVar2 = FUN_012d4a58(DAT_048592d0,param_2);
  }
  puVar3 = param_1 + 0x11;
  *puVar3 = uVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xe] = 0x1fffffffffffffff;
  param_1[0xf] = 0;
  param_1[0x12] = 0x1fffffffffffffff;
  param_1[0x13] = 0;
  param_1[10] = uVar2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = uVar2;
  param_1[0x14] = param_1[0x10];
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar2 = FUN_012b1b2c(puVar3,0x18);
  FUN_012b1c24(puVar3,uVar2,param_1[0x15] + param_1[0x16] * 8);
  return;
}


