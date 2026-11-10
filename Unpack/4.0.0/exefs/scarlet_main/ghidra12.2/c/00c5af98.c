/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5af98; name: FUN_00c5af98
 */


undefined8 FUN_00c5af98(long param_1)

{
  if (*(uint *)(param_1 + 0x10) == 3) {
    return 0;
  }
  return *(undefined8 *)
          (*(long *)(*(long *)(param_1 + 8) + 0x238) + (ulong)*(uint *)(param_1 + 0x10) * 8 + 0x340)
  ;
}


