/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00273168; name: FUN_00273168
 */


void FUN_00273168(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cbe78 + 0x10);
  if ((char)param_1[1] != '\0') {
    if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* try { // try from 0027319c to 002731ab has its CatchHandler @ 002731ac */
    (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x18))();
  }
  return;
}


