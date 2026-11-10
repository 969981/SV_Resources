/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0b34c; name: FUN_01e0b34c
 */


void FUN_01e0b34c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  
  bVar1 = FUN_01e0b390(param_2,param_3,*(undefined8 *)(param_1[1] + 0xc0),param_1[2],param_1[3]);
  *(byte *)*param_1 = bVar1 & 1;
  return;
}


