/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00344920; name: FUN_00344920
 */


void FUN_00344920(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x70) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}


