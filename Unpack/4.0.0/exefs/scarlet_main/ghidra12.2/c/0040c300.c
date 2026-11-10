/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040c300; name: FUN_0040c300
 */


undefined4 FUN_0040c300(long param_1)

{
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x28);
}


