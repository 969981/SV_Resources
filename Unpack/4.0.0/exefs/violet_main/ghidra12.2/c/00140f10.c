/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00140f10; name: FUN_00140f10
 */


long FUN_00140f10(undefined8 param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  
  if (param_3 + 1 < 2) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00125b90(param_1,"attempt to divide by zero");
    }
    return -param_2;
  }
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = (long)param_2 / (long)param_3;
  }
  if ((long)(param_3 ^ param_2) < 0) {
    return lVar1 - (ulong)(param_2 != lVar1 * param_3);
  }
  return lVar1;
}


