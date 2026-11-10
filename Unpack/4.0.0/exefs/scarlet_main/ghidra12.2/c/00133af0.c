/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00133af0; name: FUN_00133af0
 */


void FUN_00133af0(long *param_1,int *param_2)

{
  if (*param_2 == 0x13) {
    *(undefined1 *)(*(long *)(*param_1 + 0x40) + (long)param_2[2] * 4 + 3) = 2;
    *param_2 = 0x11;
  }
  else if (*param_2 == 0x12) {
    *param_2 = 8;
    param_2[2] = *(uint *)(*(long *)(*param_1 + 0x40) + (long)param_2[2] * 4) >> 7 & 0xff;
    return;
  }
  return;
}


