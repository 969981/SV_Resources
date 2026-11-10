/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015b6e4c; name: FUN_015b6e4c
 */


bool FUN_015b6e4c(long param_1)

{
  undefined *__s2;
  int iVar1;
  size_t __n;
  char *__s1;
  
  __s2 = PTR_s_data___047d8b68;
  __s1 = *(char **)(param_1 + 8);
  __n = strlen(PTR_s_data___047d8b68);
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1 == 0;
}


