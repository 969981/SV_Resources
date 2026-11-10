/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157016c; name: FUN_0157016c
 */


bool FUN_0157016c(void)

{
  undefined *__s2;
  int iVar1;
  size_t __n;
  
  __s2 = PTR_s_data___047d8b68;
  __n = strlen(PTR_s_data___047d8b68);
  iVar1 = strncmp("config/",__s2,__n);
  return iVar1 == 0;
}


