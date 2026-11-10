/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f049c; name: FUN_008f049c
 */


void FUN_008f049c(undefined1 *param_1)

{
  *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfffe;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}


