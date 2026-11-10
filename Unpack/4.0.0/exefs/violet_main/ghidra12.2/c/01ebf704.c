/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebf704; name: FUN_01ebf704
 */


void FUN_01ebf704(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if ((((bVar1 == 0x86) || ((bVar1 & 0xfe) == 0x84)) || (-1 < (char)bVar1)) || (0xbf < bVar1)) {
    FUN_01e62368(bVar1,param_2);
    return;
  }
  *param_1 = 1;
  return;
}


