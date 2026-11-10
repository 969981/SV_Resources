/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02169c28; name: FUN_02169c28
 */


long FUN_02169c28(long param_1)

{
  if (1 < *(uint *)(param_1 + 0xa0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0216dd60();
  }
  return *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0xa0) * 0x20 + 0x60) + 0x68;
}


