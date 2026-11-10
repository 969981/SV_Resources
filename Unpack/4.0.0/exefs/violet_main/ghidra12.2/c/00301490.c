/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00301490; name: FUN_00301490
 */


void FUN_00301490(char *param_1,undefined8 *param_2)

{
  long lVar1;
  size_t sVar2;
  void *__dest;
  undefined8 uVar3;
  char *__s;
  size_t sVar4;
  char *param0;
  size_t *local_28;
  
  if (param_2 != (undefined8 *)0x0) {
    lVar1 = FUN_00480980();
    if ((param_1 != (char *)0x0) && (lVar1 == 0)) {
      sVar2 = strlen(param_1);
      __dest = (void *)FUN_0038c780(sVar2 + 1);
      *param_2 = __dest;
      sVar2 = strlen(param_1);
      memcpy(__dest,param_1,sVar2 + 1);
      return;
    }
    FUN_003eaa20();
    uVar3 = FUN_003e8a30();
    FUN_00482180();
    local_28 = (size_t *)0x0;
    FUN_003e9560(uVar3,0x73,0,&local_28);
    if (local_28 == (size_t *)0x0) {
      __s = (char *)0x0;
      FUN_003e9900(uVar3);
    }
    else {
      __s = (char *)FUN_0038c780(*local_28 + 1);
      memcpy(__s,(void *)local_28[1],*local_28);
      __s[*local_28] = '\0';
      FUN_003e9900(uVar3);
    }
    if ((param_1 != (char *)0x0) && (__s != (char *)0x0)) {
      sVar2 = strlen(param_1);
      sVar4 = strlen(__s);
      sVar2 = sVar2 + sVar4 + 3;
      param0 = (char *)FUN_0038c780(sVar2);
      *param_2 = param0;
      snprintf(param0,sVar2,"%s, %s",param_1,__s);
      free(__s);
      return;
    }
  }
  return;
}


