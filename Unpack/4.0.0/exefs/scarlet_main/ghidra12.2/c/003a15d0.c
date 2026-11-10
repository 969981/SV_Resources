/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a15d0; name: FUN_003a15d0
 */


bool FUN_003a15d0(long param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  if ((*(long *)(*(long *)(param_1 + 0xb0) + 0x1f8) == 0) &&
     (*(long *)(*(long *)(param_1 + 0xb0) + 0x200) == 0)) {
    return false;
  }
  FUN_0049e3f0(&local_20);
  lVar1 = *(long *)(param_1 + 0xb0);
  if ((local_20 <= *(long *)(lVar1 + 0x1f8)) &&
     ((*(long *)(lVar1 + 0x1f8) != local_20 || (local_18 < *(long *)(lVar1 + 0x200))))) {
    local_20 = *(long *)(lVar1 + 0x1f8) - local_20;
    local_18 = *(long *)(lVar1 + 0x200) - local_18;
    if (local_18 < 0) {
      local_20 = local_20 + -1;
      local_18 = local_18 + 1000000;
    }
    if ((14999 < local_18) || (local_20 != 0)) {
      if (0 < local_20) {
        return false;
      }
      goto LAB_003a1684;
    }
  }
  local_18 = 0;
LAB_003a1684:
  return local_18 < 1;
}


