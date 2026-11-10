/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002da5c8; name: FUN_002da5c8
 */


ulong FUN_002da5c8(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((*(char *)(param_1 + 0x48) == '\0') &&
     (uVar1 = *(uint *)(param_1 + 0x68), (int)uVar1 < *(int *)(param_1 + 0x6c))) {
    uVar2 = *(uint *)(param_1 + 0x60);
    if ((int)uVar2 <= (int)uVar1) {
      uVar3 = 8;
      if (uVar2 != 0) {
        uVar3 = uVar2;
      }
      do {
        uVar2 = uVar3;
        uVar3 = uVar2 << 1;
      } while ((int)uVar2 <= (int)uVar1);
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,
                                    -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3
                                   );
      if (*(void **)(param_1 + 0x58) != (void *)0x0) {
        memmove(__dest,*(void **)(param_1 + 0x58),(long)*(int *)(param_1 + 0x68) << 3);
      }
      uVar1 = uVar2 - *(int *)(param_1 + 0x68);
      memset((void *)((long)__dest + (long)*(int *)(param_1 + 0x68) * 8),0,
             -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
      lVar4 = *(long *)(param_1 + 0x58);
      *(void **)(param_1 + 0x58) = __dest;
      if (lVar4 != 0) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
      uVar1 = *(uint *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x60) = uVar2;
    }
    uVar6 = (ulong)uVar1;
    *(uint *)(param_1 + 0x68) = uVar1 + 1;
    if (-1 < (int)uVar1) {
      FUN_002d0388(*(long *)(param_1 + 0x58) + uVar6 * 8,0);
      uVar5 = uVar6 << 0x21;
      goto LAB_002da6a8;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  uVar5 = 0;
  uVar6 = 0;
LAB_002da6a8:
  return uVar5 | uVar6;
}


