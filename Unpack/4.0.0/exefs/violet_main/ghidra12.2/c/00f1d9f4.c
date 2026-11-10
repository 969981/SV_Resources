/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f1d9f4; name: FUN_00f1d9f4
 */


void FUN_00f1d9f4(long param_1,long *param_2,int param_3)

{
  if (*(byte *)(param_1 + 1) - 1 < 2) {
    *param_2 = (long)param_3;
    return;
  }
  if (*(byte *)(param_1 + 1) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::detail::UnexpectedDefaultImpl("","",0);
  }
  *param_2 = *(long *)(param_1 + 0x10) + (long)param_3 * 0x10;
  return;
}


