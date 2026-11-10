/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012494e8; name: FUN_012494e8
 */


void FUN_012494e8(long param_1,byte param_2,ulong param_3)

{
  if (param_2 < 5) {
    *(ulong *)(*(long *)(*(long *)(param_1 + 0x10) + 0x210) + (ulong)param_2 * 8 + 8) =
         param_3 & 0xffffffff;
  }
  return;
}


