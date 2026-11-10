/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a05b74; name: FUN_02a05b74
 */


undefined4 FUN_02a05b74(long param_1)

{
  if (*(undefined4 **)(param_1 + 200) == *(undefined4 **)(param_1 + 0xc0)) {
    return 0;
  }
  return **(undefined4 **)(param_1 + 0xc0);
}


