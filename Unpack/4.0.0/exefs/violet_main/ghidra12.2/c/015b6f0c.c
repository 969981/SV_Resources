/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015b6f0c; name: FUN_015b6f0c
 */


void FUN_015b6f0c(undefined8 param_1,long param_2)

{
  char *__src;
  char *__dest;
  char acStack_a0 [128];
  char *local_8;
  
  __src = *(char **)(param_2 + 8);
  __dest = acStack_a0 + (0x80 - (*(long *)(param_2 + 0x10) + 0x10U & 0xfffffffffffffff0));
  local_8 = __dest;
  *__dest = '\0';
  strcat(__dest,__src);
  FUN_00cf9768(param_1,&local_8);
  return;
}


