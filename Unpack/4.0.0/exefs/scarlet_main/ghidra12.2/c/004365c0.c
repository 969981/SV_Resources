/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004365c0; name: FUN_004365c0
 */


void FUN_004365c0(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (*param_1 ^ param_1[1] >> 4) & 0xf0f0f0f;
  uVar2 = param_1[1] ^ uVar1 << 4;
  uVar1 = uVar1 ^ *param_1;
  uVar3 = uVar2 & 0xffff ^ uVar1 >> 0x10;
  uVar1 = uVar1 ^ uVar3 << 0x10;
  uVar3 = uVar3 ^ uVar2;
  uVar2 = (uVar1 ^ uVar3 >> 2) & 0x33333333;
  uVar3 = uVar3 ^ uVar2 << 2;
  uVar2 = uVar2 ^ uVar1;
  uVar1 = (uVar3 ^ uVar2 >> 8) & 0xff00ff;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = uVar1 ^ uVar3;
  uVar3 = (uVar2 ^ uVar1 >> 1) & 0x55555555;
  *param_1 = uVar3 ^ uVar2;
  param_1[1] = uVar1 ^ uVar3 << 1;
  FUN_004357a0(param_1,param_2,1);
  FUN_004357a0(param_1,param_3,0);
  FUN_004357a0(param_1,param_4,1);
  uVar1 = (*param_1 ^ param_1[1] >> 1) & 0x55555555;
  uVar3 = param_1[1] ^ uVar1 << 1;
  uVar1 = uVar1 ^ *param_1;
  uVar2 = (uVar3 ^ uVar1 >> 8) & 0xff00ff;
  uVar1 = uVar1 ^ uVar2 << 8;
  uVar2 = uVar2 ^ uVar3;
  uVar3 = (uVar1 ^ uVar2 >> 2) & 0x33333333;
  uVar2 = uVar2 ^ uVar3 << 2;
  uVar3 = uVar3 ^ uVar1;
  uVar4 = uVar2 & 0xffff ^ uVar3 >> 0x10;
  uVar3 = uVar3 ^ uVar4 << 0x10;
  uVar4 = uVar4 ^ uVar2;
  uVar1 = (uVar3 ^ uVar4 >> 4) & 0xf0f0f0f;
  *param_1 = uVar1 ^ uVar3;
  param_1[1] = uVar4 ^ uVar1 << 4;
  return;
}


