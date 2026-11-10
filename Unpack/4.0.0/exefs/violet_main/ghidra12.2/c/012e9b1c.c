/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012e9b1c; name: FUN_012e9b1c
 */


void FUN_012e9b1c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x1a8);
  while( true ) {
    lVar1 = param_1;
    if (lVar2 != 0) {
      lVar1 = lVar2;
    }
    if (lVar1 == param_1) break;
    lVar2 = *(long *)(lVar1 + 0x1a8);
    param_1 = lVar1;
  }
  if ((*(byte *)(param_1 + 0x1b8) >> 4 & 1) == 0) {
    return;
  }
  FUN_012ea680(param_1 + 0x1f0);
  return;
}


