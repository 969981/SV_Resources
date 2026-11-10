/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353d7d0; name: lock
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::mutex::lock(void)

{
  (*(code *)PTR_lock_047ca4e0)();
  return;
}


