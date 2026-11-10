/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00819784; name: FUN_00819784
 */


undefined8 FUN_00819784(long param_1,undefined1 *param_2)

{
  if ((param_2 == (undefined1 *)0x0) || (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x18))) {
    return 0;
  }
  *param_2 = *(undefined1 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18));
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return 1;
}


