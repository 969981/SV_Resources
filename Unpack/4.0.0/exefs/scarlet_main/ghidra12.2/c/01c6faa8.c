/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6faa8; name: FUN_01c6faa8
 */


void FUN_01c6faa8(undefined1 *param_1,short param_2,char param_3,long param_4)

{
  void *pvVar1;
  long lVar2;
  void *__src;
  
  lVar2 = FUN_016a48e4();
  if (lVar2 != 0) {
    __src = *(void **)(lVar2 + 0x40);
    pvVar1 = *(void **)(lVar2 + 0x48);
    if (__src == pvVar1) {
LAB_01c6fb14:
      *param_1 = 0;
      if (__src == pvVar1) {
        return;
      }
      memcpy(param_1 + 0x10,__src,0x30);
      *param_1 = 1;
      return;
    }
    do {
      if (((*(short *)((long)__src + 0x20) == param_2) && (*(char *)((long)__src + 0x26) == param_3)
          ) && (*(long *)((long)__src + 0x28) == param_4)) goto LAB_01c6fb14;
      __src = (void *)((long)__src + 0x40);
    } while (pvVar1 != __src);
  }
  *param_1 = 0;
  return;
}


