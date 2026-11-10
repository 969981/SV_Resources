/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01906298; name: FUN_01906298
 */


void FUN_01906298(undefined1 param_1,undefined2 param_2)

{
  long lVar1;
  void *__dest;
  size_t __n;
  long lVar2;
  int iVar3;
  undefined1 local_48 [2];
  undefined2 local_46;
  
  if ((DAT_04839cb0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04839cb0);
    if (iVar3 != 0) {
      FUN_00100190(&LAB_00b2080c,&DAT_04839ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839cb0);
    }
  }
  lVar2 = DAT_04839ca0;
  DAT_04839c98 = DAT_04839ca0;
  if (DAT_04839ca0 == 0) {
    return;
  }
  __dest = *(void **)(DAT_04839ca0 + 0x1c0);
  lVar1 = DAT_04839ca0 + 0x1c0;
  if (3 < (ulong)(*(long *)(DAT_04839ca0 + 0x1c8) - (long)__dest >> 2)) {
    __n = *(long *)(DAT_04839ca0 + 0x1c8) - ((long)__dest + 4);
    if (__n != 0) {
      memmove(__dest,(void *)((long)__dest + 4),__n);
    }
    *(size_t *)(lVar2 + 0x1c8) = (long)__dest + __n;
  }
  local_48[0] = param_1;
  local_46 = param_2;
  FUN_019063c8(lVar1,local_48);
  return;
}


