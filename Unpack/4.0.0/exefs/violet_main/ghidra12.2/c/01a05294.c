/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a05294; name: FUN_01a05294
 */


void FUN_01a05294(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    FUN_019b7290(lVar1);
    if (lVar2 != 1) {
      lVar2 = lVar2 + -2;
      FUN_019b7290(lVar1 + 0x20);
      if (lVar2 != 0) {
        lVar1 = lVar1 + 0x40;
        do {
          lVar2 = lVar2 + -1;
          FUN_019b7290(lVar1);
          lVar1 = lVar1 + 0x20;
        } while (lVar2 != 0);
      }
    }
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_01a05320(param_1,*(undefined8 *)(param_1 + 0x20));
  return;
}


