/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f32ac; name: FUN_001f32ac
 */


bool FUN_001f32ac(long param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x9ab) >> 1 & 1) == 0) {
    if ((((*(long *)(param_1 + 0x150) != 0) || (*(long *)(param_1 + 0x108) != 0)) ||
        (*(long *)(param_1 + 0x120) != 0)) ||
       ((iVar1 = FUN_001f9538(param_1 + 0x38), iVar1 == 0 && (0 < *(int *)(param_1 + 0x94c))))) {
      return true;
    }
    if (*(long *)(param_1 + 0x138) != 0) {
      return *(ulong *)(param_1 + 0x8e8) < (ulong)*(uint *)(param_1 + 0x96c);
    }
  }
  return false;
}


