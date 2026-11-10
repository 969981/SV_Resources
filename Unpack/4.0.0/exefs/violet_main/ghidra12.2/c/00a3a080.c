/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a3a080; name: FUN_00a3a080
 */


undefined8 FUN_00a3a080(undefined8 param_1,long param_2,void *param_3,int param_4,int param_5)

{
  long lVar1;
  void *__dest;
  long *plVar2;
  
  if (param_3 == (void *)0x0) {
    return 0;
  }
  lVar1 = FUN_019d8b6c();
  __dest = *(void **)(lVar1 + 0xf0);
  if (__dest == (void *)0x0) {
    return 0;
  }
  plVar2 = (long *)(lVar1 + 0xe8);
  if (*plVar2 != 0) {
    if (*plVar2 == param_2) goto LAB_00a3a13c;
    lVar1 = FUN_019d8b6c();
    __dest = *(void **)(lVar1 + 0x110);
    if (__dest == (void *)0x0) {
      return 0;
    }
    plVar2 = (long *)(lVar1 + 0x108);
    if (*plVar2 != 0) {
      if (*plVar2 == param_2) goto LAB_00a3a13c;
      lVar1 = FUN_019d8b6c();
      __dest = *(void **)(lVar1 + 0x130);
      if (__dest == (void *)0x0) {
        return 0;
      }
      plVar2 = (long *)(lVar1 + 0x128);
      if (*plVar2 != 0) {
        if (*plVar2 == param_2) goto LAB_00a3a13c;
        lVar1 = FUN_019d8b6c();
        __dest = *(void **)(lVar1 + 0x150);
        if (__dest == (void *)0x0) {
          return 0;
        }
        plVar2 = (long *)(lVar1 + 0x148);
        if (*plVar2 != 0) {
          if (*plVar2 != param_2) {
            return 0;
          }
          goto LAB_00a3a13c;
        }
      }
    }
  }
  *plVar2 = param_2;
LAB_00a3a13c:
  *(int *)(plVar2 + 3) = param_4;
  *(int *)((long)plVar2 + 0x1c) = param_5;
  memcpy(__dest,param_3,(ulong)(uint)(param_4 * param_5 * 3) / 6);
  return 1;
}


