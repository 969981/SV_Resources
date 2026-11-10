/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01464e08; name: FUN_01464e08
 */


void FUN_01464e08(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1e4) != param_2) {
    *(int *)(param_1 + 0x1e4) = param_2;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 0x50) + 200) = 1;
  }
  return;
}


