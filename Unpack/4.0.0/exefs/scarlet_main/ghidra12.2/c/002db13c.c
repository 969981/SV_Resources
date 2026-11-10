/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002db13c; name: FUN_002db13c
 */


void FUN_002db13c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  long lVar4;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    if (*(int *)(param_1 + 0x4c) == 1) {
      param_2 = FUN_002db27c(param_1,*(int *)(param_1 + 0xa0),param_2);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x68);
      if ((int)uVar1 < *(int *)(param_1 + 0x6c)) {
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
                                        -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 |
                                        (ulong)uVar2 << 3);
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
        *(uint *)(param_1 + 0x68) = uVar1 + 1;
        if ((int)uVar1 < 0) {
          param_2 = 0;
        }
        else {
          FUN_002d0308(*(long *)(param_1 + 0x58) + (ulong)uVar1 * 8,*(undefined4 *)(param_1 + 0xa0),
                       param_2);
          param_2 = uVar1;
        }
      }
      else {
        param_2 = 0;
        *(undefined1 *)(param_1 + 0x48) = 1;
      }
    }
  }
  *(uint *)(param_1 + 0xa0) = param_2;
  return;
}


