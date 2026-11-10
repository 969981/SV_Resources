/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00453340; name: thunk_FUN_00452ce0
 */


void * thunk_FUN_00452ce0(size_t param_1,undefined8 param_2,undefined4 param_3)

{
  void *__s;
  
  if ((DAT_047f19bc != 1) || (__s = (void *)FUN_0049dc40(param_1), __s == (void *)0x0)) {
    if ((PTR_FUN_044aa1a0 == (undefined *)0x0) || (PTR_FUN_044aa1a0 == PTR_FUN_047cd430)) {
      if (param_1 == 0) {
        return (void *)0x0;
      }
      if ((DAT_047f19b8 & 1) == 0) {
        DAT_047f19b8 = 1;
      }
      __s = malloc(param_1);
    }
    else {
      __s = (void *)(*(code *)PTR_FUN_044aa1a0)(param_1,param_2,param_3);
    }
    if (__s == (void *)0x0) {
      return (void *)0x0;
    }
  }
  memset(__s,0,param_1);
  return __s;
}


