/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


