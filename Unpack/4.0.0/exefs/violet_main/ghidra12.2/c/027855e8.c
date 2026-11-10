/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027855e8; name: FUN_027855e8
 */


char * FUN_027855e8(long param_1,long param_2,int param_3)

{
  char *__s;
  uint uVar1;
  
  *(int *)(param_1 + 0x3b0) = param_3;
  __s = (char *)(param_1 + 0x36c);
  if ((param_2 == 0) || (param_3 == 2)) {
    *__s = '\0';
    return __s;
  }
  uVar1 = snprintf(__s,0x40,"%s",param_2);
  return (char *)(ulong)uVar1;
}


