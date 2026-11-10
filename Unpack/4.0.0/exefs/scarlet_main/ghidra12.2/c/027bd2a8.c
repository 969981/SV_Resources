/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bd2a8; name: FUN_027bd2a8
 */


void FUN_027bd2a8(undefined4 *param_1,char *param_2)

{
  ulong uVar1;
  
  uVar1 = nn::diag::detail::NotNullImpl((ulong)param_2);
  if ((((uVar1 & 1) == 0) || (uVar1 = nn::diag::detail::NotNullImpl(0x3c886bc), (uVar1 & 1) == 0))
     || (*param_2 == '\0')) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *param_1 = 2;
  FUN_027bd26c(param_1 + 2,param_2);
  param_1[10] = 0;
  return;
}


