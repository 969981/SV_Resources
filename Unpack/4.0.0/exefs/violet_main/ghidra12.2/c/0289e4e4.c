/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289e4e4; name: FUN_0289e4e4
 */


void FUN_0289e4e4(undefined4 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = param_3[2];
  bVar1 = *(byte *)(*param_3 + lVar2);
  param_3[2] = lVar2 + 1;
  if (0x80 < bVar1) {
    *param_1 = 1;
    return;
  }
  if (bVar1 == 0x80) {
    bVar1 = *(byte *)(*param_3 + lVar2 + 1);
    param_3[2] = lVar2 + 2;
  }
  *param_2 = bVar1;
  FUN_0192eda0(param_2 + 8);
  return;
}


