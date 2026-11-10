/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d1b54; name: FUN_018d1b54
 */


void FUN_018d1b54(long param_1)

{
  if (*(int *)(param_1 + 0x49c) == 0) {
    FUN_018d1ba8(param_1 + 0x470);
    *(undefined1 *)(param_1 + 0x3f0) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x49c) == 1) {
      FUN_018d1c44(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x3f1) = 1;
  }
  return;
}


