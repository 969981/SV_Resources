/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00499a30; name: FUN_00499a30
 */


undefined4 FUN_00499a30(long param_1)

{
  FUN_00498ee0();
  if ((*(uint *)(param_1 + 0xe0) >> 7 & 1) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xe0) >> 1 & 1) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0xe4);
}


