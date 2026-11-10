/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f675b4; name: FUN_01f675b4
 */


void FUN_01f675b4(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_01f6a670();
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_01f6a6b4();
  }
  FUN_01f6a938(param_1);
  FUN_01f6a9b4(param_1);
  return;
}


