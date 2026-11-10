/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


