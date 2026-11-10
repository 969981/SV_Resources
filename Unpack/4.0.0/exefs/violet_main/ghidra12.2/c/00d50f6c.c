/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d50f6c; name: FUN_00d50f6c
 */


void FUN_00d50f6c(undefined8 *param_1,long *param_2,code *param_3,ulong param_4)

{
  char *__s;
  void *pvVar1;
  size_t sVar2;
  
  if (*param_2 == 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(*param_2 + ((long)param_4 >> 1)));
    }
    pvVar1 = (void *)(*param_3)();
    memcpy(param_1,pvVar1,0x34);
    param_1[7] = 0;
    __s = (char *)(*(ulong *)((long)pvVar1 + 0x38) & 0xfffffffffffffffe);
    if (__s != (char *)0x0) {
      sVar2 = strlen(__s);
      sVar2 = (size_t)((int)sVar2 + 1);
      pvVar1 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar2);
      memcpy(pvVar1,__s,sVar2);
      param_1[7] = (ulong)pvVar1 | 1;
    }
  }
  return;
}


