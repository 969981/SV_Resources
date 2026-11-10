/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035b590; name: FUN_0035b590
 */


void FUN_0035b590(int param_1,void *param_2,char *param_3,undefined8 param_4)

{
  if ((int)((ulong)param_4 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  inet_ntop(param_1,param_2,param_3,(socklen_t)param_4);
  return;
}


