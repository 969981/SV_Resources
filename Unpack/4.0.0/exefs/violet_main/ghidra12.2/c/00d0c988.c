/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d0c988; name: FUN_00d0c988
 */


bool FUN_00d0c988(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  size_t __n;
  char *__s1;
  char acStack_30 [16];
  
  __s1 = *(char **)(param_2 + 8);
  uVar2 = FUN_00d0c374();
  snprintf(acStack_30,0xf,PTR_s_save_d___047dd9d0,uVar2 & 0xffffffff);
  __n = strlen(acStack_30);
  iVar1 = strncmp(__s1,acStack_30,__n);
  return iVar1 == 0;
}


