/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c71ac; name: FUN_007c71ac
 */


undefined8 FUN_007c71ac(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1[1];
  uVar1 = *param_1 ^ *param_1 << 0xb;
  uVar3 = param_1[3];
  *param_1 = param_1[2];
  param_1[1] = uVar3;
  uVar2 = uVar2 ^ uVar2 << 0xb;
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar3;
  uVar3 = uVar1 ^ uVar3 >> 0x13;
  uVar1 = uVar2 ^ uVar2 >> 8 ^ uVar3 ^ uVar1 >> 0x13;
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  return CONCAT44(uVar3,uVar1);
}


