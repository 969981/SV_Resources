/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e53588; name: FUN_00e53588
 */


void FUN_00e53588(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  char *__dest;
  char *__s;
  char acStack_30 [8];
  char *local_28;
  
  __s = (char *)*param_2;
  sVar1 = strlen(__s);
  __dest = acStack_30 + -(sVar1 + 0x10 & 0xfffffffffffffff0);
  local_28 = __dest;
  *__dest = '\0';
  strcat(__dest,__s);
  FUN_00cf9768(param_1,&local_28);
  return;
}


