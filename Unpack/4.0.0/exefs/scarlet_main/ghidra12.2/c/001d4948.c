/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d4948; name: FUN_001d4948
 */


size_t FUN_001d4948(void *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  size_t __n;
  long lVar2;
  
  lVar1 = *param_4;
  lVar2 = *(long *)(lVar1 + 0x1e8);
  if (*(long *)(lVar2 + 8) == 0) {
    __n = 0;
  }
  else {
    __n = param_3 * param_2;
    *(ushort *)(lVar1 + 0x660) =
         *(ushort *)(lVar1 + 0x660) & 0xfeff | (ushort)(*(int *)(lVar2 + 0x208) == 1) << 8;
    if ((long)__n < (long)*(size_t *)(lVar2 + 8)) {
      memcpy(param_1,*(void **)(lVar2 + 0x10),__n);
      *(size_t *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + __n;
      *(size_t *)(lVar2 + 8) = *(long *)(lVar2 + 8) - __n;
    }
    else {
      memcpy(param_1,*(void **)(lVar2 + 0x10),*(size_t *)(lVar2 + 8));
      __n = *(size_t *)(lVar2 + 8);
      if (*(long *)(lVar2 + 0x200) == 0) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      else {
        *(long *)(lVar2 + 8) = *(long *)(lVar2 + 0x200);
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 0x1f8);
        *(undefined8 *)(*param_4 + 0x1528) = *(undefined8 *)(lVar2 + 0x1e8);
        *(undefined8 *)(*param_4 + 0x1530) = *(undefined8 *)(lVar2 + 0x1f0);
        *(int *)(lVar2 + 0x208) = *(int *)(lVar2 + 0x208) + 1;
        *(undefined8 *)(lVar2 + 0x200) = 0;
      }
    }
  }
  return __n;
}


