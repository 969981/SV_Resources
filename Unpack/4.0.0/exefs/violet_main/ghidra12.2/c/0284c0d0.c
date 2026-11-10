/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284c0d0; name: FUN_0284c0d0
 */


void FUN_0284c0d0(long param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x10) = param_3;
  *(undefined2 *)(param_1 + 0x12) = param_2;
  *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) | 2;
  return;
}


