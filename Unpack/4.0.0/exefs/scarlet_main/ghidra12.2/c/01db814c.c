/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01db814c; name: FUN_01db814c
 */


bool FUN_01db814c(char *param_1)

{
  undefined *__s2;
  int iVar1;
  size_t __n;
  
  __s2 = PTR_s_data___047d8b68;
  __n = strlen(PTR_s_data___047d8b68);
  iVar1 = strncmp(param_1,__s2,__n);
  return iVar1 == 0;
}


