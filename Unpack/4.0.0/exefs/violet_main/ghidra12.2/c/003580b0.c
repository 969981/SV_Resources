/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003580b0; name: FUN_003580b0
 */


void FUN_003580b0(long *param_1,undefined8 param_2)

{
  if ((int)param_1[1] == 2) {
    if (*param_1 != 0) {
      FUN_00358280(param_2);
      return;
    }
  }
  else if (((int)param_1[1] == 1) && (*param_1 != 0)) {
    FUN_00358240(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


