/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0158268c; name: FUN_0158268c
 */


undefined1 FUN_0158268c(long param_1,byte param_2)

{
  if (param_2 < 5) {
    return *(undefined1 *)(*(long *)(param_1 + 0x38) + (ulong)param_2 * 0xc0 + 0x183);
  }
  return 100;
}


