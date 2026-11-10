/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb6cdc; name: FUN_01eb6cdc
 */


void FUN_01eb6cdc(undefined4 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = param_3[2];
  bVar1 = *(byte *)(*param_3 + lVar2);
  param_3[2] = lVar2 + 1;
  if (((bVar1 != 0x84) && ((char)bVar1 < '\0')) && (bVar1 < 0xc0)) {
    *param_1 = 1;
    return;
  }
  if (bVar1 == 0x84) {
    bVar1 = *(byte *)(*param_3 + lVar2 + 1);
    param_3[2] = lVar2 + 2;
  }
  *param_2 = bVar1;
  FUN_01eb5298(param_2 + 1);
  return;
}


