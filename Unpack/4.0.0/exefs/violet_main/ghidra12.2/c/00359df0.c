/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00359df0; name: FUN_00359df0
 */


void FUN_00359df0(long *param_1,ulong param_2,long param_3)

{
  if (param_1[(param_2 & 1) + 0x18] != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[(param_2 & 1) + 0x18] = param_3;
  FUN_00350c0c(*(undefined8 *)(*param_1 + 0x10),param_1 + (param_2 & 1) * 4 + 0x1a,0);
  return;
}


