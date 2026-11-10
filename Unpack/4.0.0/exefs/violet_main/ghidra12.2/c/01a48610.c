/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a48610; name: FUN_01a48610
 */


void FUN_01a48610(ulong param_1)

{
  if (param_1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02901520();
  }
  operator_new(param_1 << 2);
  return;
}


