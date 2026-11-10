/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00303780; name: FUN_00303780
 */


undefined1  [16] FUN_00303780(long param_1)

{
  void *__src;
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  void *__dest;
  size_t __n;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if (param_1 == 0) {
    uVar3 = 0;
    __dest = (void *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x140);
    if (*(long *)(param_1 + 0x20) == 1) {
      plVar1 = *(long **)(param_1 + 0x18);
      if (*plVar1 == 0) {
        __dest = (void *)((long)plVar1 + 9);
      }
      else {
        __dest = (void *)plVar1[2];
      }
    }
    else {
      __dest = *(void **)(param_1 + 0x138);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar4 = 0;
        uVar5 = 0;
        do {
          lVar2 = *(long *)(param_1 + 0x18);
          if (*(long *)(lVar2 + lVar4) == 0) {
            __n = (size_t)*(byte *)(lVar2 + lVar4 + 8);
            __src = (void *)(lVar2 + lVar4 + 9);
          }
          else {
            __n = *(size_t *)(lVar2 + lVar4 + 8);
            __src = *(void **)(lVar2 + lVar4 + 0x10);
          }
          memcpy(__dest,__src,__n);
          uVar5 = uVar5 + 1;
          __dest = (void *)((long)__dest + __n);
          lVar4 = lVar4 + 0x20;
        } while (uVar5 < *(ulong *)(param_1 + 0x20));
        __dest = *(void **)(param_1 + 0x138);
      }
    }
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = __dest;
  return auVar6;
}


