/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004997a0; name: FUN_004997a0
 */


undefined8 FUN_004997a0(long param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0xe1) >> 2 & 1) == 0) {
    if (((*(uint *)(param_1 + 0xe0) >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0xe4) >> 2 & 1) == 0))
    {
      return 0x20;
    }
  }
  else if (((*(uint *)(param_1 + 0xe0) >> 1 & 1) != 0) && (-1 < *(char *)(param_1 + 0xe4))) {
    return 0x27;
  }
  return 0;
}


