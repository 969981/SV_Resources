/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002da7e8; name: FUN_002da7e8
 */


uint FUN_002da7e8(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  long lVar3;
  uint uVar4;
  
  if ((*(char *)(param_1 + 0x48) == '\0') &&
     (uVar4 = *(uint *)(param_1 + 0x68), (int)uVar4 < *(int *)(param_1 + 0x6c))) {
    uVar1 = *(uint *)(param_1 + 0x60);
    if ((int)uVar1 <= (int)uVar4) {
      uVar2 = 8;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      do {
        uVar1 = uVar2;
        uVar2 = uVar1 << 1;
      } while ((int)uVar1 <= (int)uVar4);
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,
                                    -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3
                                   );
      if (*(void **)(param_1 + 0x58) != (void *)0x0) {
        memmove(__dest,*(void **)(param_1 + 0x58),(long)*(int *)(param_1 + 0x68) << 3);
      }
      uVar4 = uVar1 - *(int *)(param_1 + 0x68);
      memset((void *)((long)__dest + (long)*(int *)(param_1 + 0x68) * 8),0,
             -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3);
      lVar3 = *(long *)(param_1 + 0x58);
      *(void **)(param_1 + 0x58) = __dest;
      if (lVar3 != 0) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
      uVar4 = *(uint *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x60) = uVar1;
    }
    *(uint *)(param_1 + 0x68) = uVar4 + 1;
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    else {
      FUN_002d0374(*(long *)(param_1 + 0x58) + (ulong)uVar4 * 8,param_2);
    }
  }
  else {
    uVar4 = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return uVar4;
}


