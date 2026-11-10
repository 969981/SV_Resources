/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0110ffbc; name: FUN_0110ffbc
 */


bool FUN_0110ffbc(undefined8 *param_1)

{
  undefined *__s2;
  int iVar1;
  size_t __n;
  char *__s1;
  
  __s2 = PTR_DAT_047d8c38;
  __s1 = (char *)*param_1;
  __n = strlen(PTR_DAT_047d8c38);
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1 == 0;
}


