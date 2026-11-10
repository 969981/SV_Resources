/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01934d34; name: FUN_01934d34
 */


float FUN_01934d34(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = FUN_014f3a04();
  iVar2 = FUN_014f3a34(param_1);
  fVar3 = (float)FUN_014f39f8();
  return (float)(uint)(iVar1 - iVar2) / fVar3;
}


