/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9fab8; name: FUN_02b9fab8
 */


void FUN_02b9fab8(void *param_1,long *param_2,int param_3)

{
  char *__s;
  size_t sVar1;
  void *pvVar2;
  
  pvVar2 = (void *)(*param_2 + (long)param_3 * 0x40);
  memcpy(param_1,pvVar2,0x34);
  *(undefined8 *)((long)param_1 + 0x38) = 0;
  __s = (char *)(*(ulong *)((long)pvVar2 + 0x38) & 0xfffffffffffffffe);
  if (__s != (char *)0x0) {
    sVar1 = strlen(__s);
    sVar1 = (size_t)((int)sVar1 + 1);
    pvVar2 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar1);
    memcpy(pvVar2,__s,sVar1);
    *(ulong *)((long)param_1 + 0x38) = (ulong)pvVar2 | 1;
  }
  return;
}


