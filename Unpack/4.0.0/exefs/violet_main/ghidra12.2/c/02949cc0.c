/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02949cc0; name: FUN_02949cc0
 */


void FUN_02949cc0(long param_1,undefined4 param_2)

{
  if ((*(ushort *)(param_1 + 2) & 0x3c00) == 0) {
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 0x4000;
    return;
  }
  return;
}


