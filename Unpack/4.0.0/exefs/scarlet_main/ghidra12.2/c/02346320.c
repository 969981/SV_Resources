/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02346320; name: FUN_02346320
 */


void FUN_02346320(void)

{
  int iVar1;
  
  if (((DAT_04848038 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04848038), iVar1 != 0)) {
    DAT_04848030 = FUN_0233db40();
    __cxa_guard_release(&DAT_04848038);
    return;
  }
  return;
}


