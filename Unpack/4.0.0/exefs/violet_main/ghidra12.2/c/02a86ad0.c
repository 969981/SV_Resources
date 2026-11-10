/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a86ad0; name: FUN_02a86ad0
 */


float FUN_02a86ad0(ulong *param_1,float *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  fVar5 = *param_2;
  fVar4 = param_2[1];
  uVar3 = uVar2 ^ uVar1;
  *param_1 = uVar3 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar3 << 0x10;
  param_1[1] = uVar3 >> 0x1b | uVar3 << 0x25;
  return *param_2 + (fVar4 - fVar5) * (float)(uVar2 + uVar1) * 5.421011e-20;
}


