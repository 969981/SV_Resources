/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fbcf8; name: FUN_026fbcf8
 */


void FUN_026fbcf8(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  bVar1 = FUN_026fbd34(param_2,param_3,param_1);
  *(byte *)((long)param_1 + 0x14) = bVar1 & 1;
  return;
}


