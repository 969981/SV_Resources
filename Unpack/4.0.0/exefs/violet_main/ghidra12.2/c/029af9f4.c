/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029af9f4; name: FUN_029af9f4
 */


void FUN_029af9f4(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x150) != param_2) {
    *(int *)(param_1 + 0x150) = param_2;
    *(undefined1 *)(param_1 + 0x19a) = 1;
  }
  return;
}


