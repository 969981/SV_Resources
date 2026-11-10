/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045b0d0; name: FUN_0045b0d0
 */


bool FUN_0045b0d0(int param_1,char *param_2,size_t param_3)

{
  char *pcVar1;
  
  pcVar1 = strerror_r(param_1,param_2,param_3);
  return (int)pcVar1 == 0;
}


