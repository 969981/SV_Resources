/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b4c70; name: FUN_003b4c70
 */


undefined4 FUN_003b4c70(long param_1)

{
  undefined4 *__src;
  undefined4 local_4;
  
  __src = (undefined4 *)(param_1 + 0x158);
  if (*(size_t *)(param_1 + 0x150) < 4) {
    local_4 = 0;
    memcpy(&local_4,__src,*(size_t *)(param_1 + 0x150));
    __src = &local_4;
  }
  return *__src;
}


