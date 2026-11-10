/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078a0f0; name: FUN_0078a0f0
 */


undefined8 FUN_0078a0f0(int param_1)

{
  if (param_1 - 2U < 0x13) {
    return *(undefined8 *)
            (PTR_DAT_047d08b0 + *(long *)(&DAT_03d0aac8 + (long)(int)(param_1 - 2U) * 8) * 8);
  }
  return *(undefined8 *)(PTR_DAT_047d08b0 + 0x98);
}


