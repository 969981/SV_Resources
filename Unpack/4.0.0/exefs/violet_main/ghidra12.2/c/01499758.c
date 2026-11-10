/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01499758; name: FUN_01499758
 */


void FUN_01499758(undefined8 param_1,long param_2,byte *param_3)

{
  ulong uVar1;
  char *__s;
  size_t sVar2;
  byte *__src;
  char *__dest;
  char acStack_b0 [128];
  char *local_18;
  
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  __dest = acStack_b0 + (0x80 - (*(long *)(param_2 + 0x10) + uVar1 + 0x11 & 0xfffffffffffffff0));
  local_18 = __dest;
  *__dest = '\0';
  __s = strcat(__dest,*(char **)(param_2 + 8));
  sVar2 = strlen(__s);
  (__dest + sVar2)[0] = '_';
  (__dest + sVar2)[1] = '\0';
  __src = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __src = param_3 + 1;
  }
  strcat(__dest,(char *)__src);
  FUN_00cf9768(param_1,&local_18);
  return;
}


