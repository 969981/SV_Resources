/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c4a54; name: FUN_012c4a54
 */


void FUN_012c4a54(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  if (*(long *)(param_1 + 0x1b0) != 0) {
    lVar1 = *(long *)(param_1 + 0x1b0);
  }
  if (lVar1 != param_1) {
    lVar2 = lVar1;
    if (*(long *)(lVar1 + 0x1b0) != 0) {
      lVar2 = *(long *)(lVar1 + 0x1b0);
    }
    param_1 = lVar1;
    if (lVar2 != lVar1) {
      do {
        param_1 = lVar2;
        lVar2 = param_1;
        if (*(long *)(param_1 + 0x1b0) != 0) {
          lVar2 = *(long *)(param_1 + 0x1b0);
        }
      } while (lVar2 != param_1);
    }
  }
  if ((*(byte *)(param_1 + 0x1b8) >> 4 & 1) == 0) {
    return;
  }
  FUN_012c4ab0(param_1 + 0x290);
  return;
}


