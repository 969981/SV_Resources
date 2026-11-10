/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002da268; name: FUN_002da268
 */


ulong FUN_002da268(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  if ((*(char *)(param_1 + 0x48) == '\0') &&
     (uVar5 = *(uint *)(param_1 + 0x68), (int)uVar5 < *(int *)(param_1 + 0x6c))) {
    uVar1 = *(uint *)(param_1 + 0x60);
    if ((int)uVar1 <= (int)uVar5) {
      uVar2 = 8;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      do {
        uVar1 = uVar2;
        uVar2 = uVar1 << 1;
      } while ((int)uVar1 <= (int)uVar5);
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,
                                    -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3
                                   );
      if (*(void **)(param_1 + 0x58) != (void *)0x0) {
        memmove(__dest,*(void **)(param_1 + 0x58),(long)*(int *)(param_1 + 0x68) << 3);
      }
      uVar5 = uVar1 - *(int *)(param_1 + 0x68);
      memset((void *)((long)__dest + (long)*(int *)(param_1 + 0x68) * 8),0,
             -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3);
      lVar3 = *(long *)(param_1 + 0x58);
      *(void **)(param_1 + 0x58) = __dest;
      if (lVar3 != 0) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
      uVar5 = *(uint *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x60) = uVar1;
    }
    *(uint *)(param_1 + 0x68) = uVar5 + 1;
    if (-1 < (int)uVar5) {
      uVar6 = param_2 >> 0x20;
      FUN_002d0308(*(long *)(param_1 + 0x58) + (ulong)uVar5 * 8,0,0);
      lVar3 = *(long *)(param_1 + 0x58);
      if ((int)(param_2 >> 0x20) != 0) {
        do {
          while ((uVar6 & 1) == 0) {
            lVar4 = (uVar6 >> 1) * 8;
            uVar1 = *(uint *)(lVar3 + lVar4);
            uVar6 = (ulong)(uVar1 >> 4);
            *(uint *)(lVar3 + lVar4) = uVar1 & 8 | uVar5 << 4 | uVar1 & 7;
            if (uVar1 >> 4 == 0) goto LAB_002da398;
          }
          lVar4 = lVar3 + (uVar6 >> 1) * 8;
          uVar1 = *(uint *)(lVar4 + 4);
          uVar6 = (ulong)uVar1;
          *(uint *)(lVar4 + 4) = uVar5;
        } while (uVar1 != 0);
LAB_002da398:
        lVar3 = *(long *)(param_1 + 0x58);
      }
      if ((param_3 & 1) == 0) {
        lVar4 = (ulong)uVar5 * 8;
        uVar1 = *(uint *)(lVar3 + lVar4);
        *(uint *)(lVar3 + lVar4) = uVar1 & 8 | (int)param_2 << 4 | uVar1 & 7;
        uVar6 = (ulong)(uVar5 << 1 | 1);
      }
      else {
        *(int *)(lVar3 + (ulong)uVar5 * 8 + 4) = (int)param_2;
        uVar6 = (ulong)(uVar5 << 1);
      }
      goto LAB_002da3c0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  uVar6 = 0;
  uVar5 = 0;
LAB_002da3c0:
  return (ulong)uVar5 | uVar6 << 0x20;
}


