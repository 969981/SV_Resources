/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c3964; name: FUN_007c3964
 */


bool FUN_007c3964(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if ((*PTR_DAT_047d1038 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d1038);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_047d1040 = PTR_DAT_047d1050 + 0x10;
      __cxa_guard_release(PTR_DAT_047d1038);
      return param_2 == PTR_DAT_047d1040;
    }
  }
  return param_2 == PTR_DAT_047d1040;
}


