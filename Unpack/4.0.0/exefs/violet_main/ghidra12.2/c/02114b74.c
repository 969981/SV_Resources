/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02114b74; name: FUN_02114b74
 */


void FUN_02114b74(long param_1,void *param_2,undefined8 param_3,void *param_4,undefined8 param_5)

{
  size_t __n;
  void *pvVar1;
  void *__src;
  
  __src = *(void **)(param_1 + 0x20);
  if (__src == (void *)0x0) {
    FUN_018e5ebc(param_1,param_2,param_5);
    pvVar1 = (void *)((long)param_2 + 0xc);
  }
  else {
    pvVar1 = param_2;
    if (__src != param_4) {
      memmove(param_2,__src,(long)param_4 - (long)__src);
      pvVar1 = (void *)((long)param_2 + ((long)param_4 - (long)__src));
    }
    FUN_018e5ebc(param_1,pvVar1,param_5);
    pvVar1 = (void *)((long)pvVar1 + 0xc);
    __n = (long)__src + (*(long *)(param_1 + 0x28) * 0xc - (long)param_4);
    if (__n != 0) {
      memmove(pvVar1,param_4,__n);
      pvVar1 = (void *)((long)pvVar1 + __n);
    }
    FUN_017921a0(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(void **)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = ((long)pvVar1 - (long)param_2 >> 2) * -0x5555555555555555;
  return;
}


