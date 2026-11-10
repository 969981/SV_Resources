/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e8900; name: FUN_029e8900
 */


void FUN_029e8900(ulong param_1)

{
  if (param_1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_029e8850();
  }
  operator_new(param_1 << 2);
  return;
}


