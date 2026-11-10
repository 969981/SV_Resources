/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0270fea8; name: FUN_0270fea8
 */


bool FUN_0270fea8(long param_1)

{
  if ((((*(long *)(param_1 + 0x108) == *(long *)(param_1 + 0x110)) &&
       (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x30))) &&
      (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68))) &&
     (*(long *)(param_1 + 0x98) == *(long *)(param_1 + 0xa0))) {
    return *(long *)(param_1 + 0xd0) == *(long *)(param_1 + 0xd8);
  }
  return false;
}


