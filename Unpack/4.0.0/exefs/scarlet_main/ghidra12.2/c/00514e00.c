/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00514e00; name: FUN_00514e00
 */


void FUN_00514e00(long *param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *__src;
  size_t __n;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 == (undefined4 *)param_1[2]) {
    lVar5 = (long)puVar2 - *param_1 >> 4;
    uVar1 = lVar5 + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1;
    uVar4 = lVar3 >> 3;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x7fffffffffffffe < (ulong)(lVar3 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 4);
    }
    puVar2 = (undefined4 *)(lVar3 + lVar5 * 0x10);
    *puVar2 = param_2;
    puVar2[1] = 0;
    *(undefined8 *)(puVar2 + 2) = param_3;
    __src = (void *)*param_1;
    __n = param_1[1] - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar2 - __n),__src,__n);
      __src = (void *)*param_1;
    }
    *param_1 = (long)((long)puVar2 - __n);
    param_1[1] = (long)(puVar2 + 4);
    param_1[2] = lVar3 + uVar1 * 0x10;
    if (__src != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
      return;
    }
  }
  else {
    *puVar2 = param_2;
    puVar2[1] = 0;
    *(undefined8 *)(puVar2 + 2) = param_3;
    param_1[1] = (long)(puVar2 + 4);
  }
  return;
}


