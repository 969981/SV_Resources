/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f041c; name: FUN_026f041c
 */


void FUN_026f041c(long param_1)

{
  undefined8 *__src;
  size_t __n;
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(param_1 + 0x80a0);
  puVar2 = *(undefined8 **)(param_1 + 0x80a8);
  if (__dest != puVar2) {
    do {
      __src = __dest + 4;
      if (*(char *)(__dest + 3) == '\0') {
        do {
          uVar1 = FUN_0111b1ec(*(undefined8 *)(param_1 + 0x58),*__dest);
          if (((uVar1 & 1) == 0) ||
             (uVar1 = (**(code **)(**(long **)(param_1 + 0x58) + 0x68))
                                (*(long **)(param_1 + 0x58),__dest,0x18,__dest), (uVar1 & 1) == 0))
          {
LAB_026f04dc:
            puVar2 = *(undefined8 **)(param_1 + 0x80a8);
            goto LAB_026f045c;
          }
          if (*(int *)(__dest + 2) == 0) {
            *(undefined1 *)(__dest + 3) = 1;
            goto LAB_026f04dc;
          }
          __n = *(long *)(param_1 + 0x80a8) - (long)__src;
          if (__n == 0) {
            *(undefined8 **)(param_1 + 0x80a8) = __dest;
            return;
          }
          memmove(__dest,__src,__n);
          *(size_t *)(param_1 + 0x80a8) = (long)__dest + __n;
        } while (*(char *)(__dest + 3) == '\0');
        puVar2 = __dest + ((long)__n >> 5) * 4;
      }
LAB_026f045c:
      __dest = __src;
    } while (__src != puVar2);
  }
  return;
}


