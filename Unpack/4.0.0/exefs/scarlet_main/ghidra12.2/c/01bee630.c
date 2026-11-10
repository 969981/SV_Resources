/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bee630; name: FUN_01bee630
 */


undefined8 FUN_01bee630(void)

{
  int iVar1;
  
  if (((DAT_0480f878 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0480f878), iVar1 != 0)) {
    __cxa_guard_release(&DAT_0480f878);
  }
  FUN_01bee678();
  return 0;
}


