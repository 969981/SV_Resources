/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00957e28; name: FUN_00957e28
 */


void FUN_00957e28(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = (byte)(1 << (ulong)(param_2 & 0x1f));
  bVar1 = *param_1 | bVar2;
  if ((param_3 & 1) == 0) {
    bVar1 = *param_1 & (bVar2 ^ 0xff);
  }
  *param_1 = bVar1;
  return;
}


