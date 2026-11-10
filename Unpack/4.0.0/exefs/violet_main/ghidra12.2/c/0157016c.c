/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


