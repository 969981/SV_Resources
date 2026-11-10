/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c7184; name: FUN_007c7184
 */


uint FUN_007c7184(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 ^ *param_1 << 0xb;
  uVar2 = param_1[3];
  *param_1 = param_1[1];
  param_1[1] = param_1[2];
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return uVar1;
}


