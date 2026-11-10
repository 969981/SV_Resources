/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005150f8; name: FUN_005150f8
 */


undefined8 * FUN_005150f8(long *param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  void *__src;
  size_t __n;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 == (undefined4 *)param_1[2]) {
    lVar6 = (long)puVar2 - *param_1 >> 4;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1;
    uVar5 = lVar4 >> 3;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x7fffffffffffffe < (ulong)(lVar4 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 4);
    }
    puVar2 = (undefined4 *)(lVar4 + lVar6 * 0x10);
    *puVar2 = param_2;
    puVar2[1] = 3;
    *(undefined8 **)(puVar2 + 2) = puVar3;
    __src = (void *)*param_1;
    __n = param_1[1] - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar2 - __n),__src,__n);
      __src = (void *)*param_1;
    }
    *param_1 = (long)((long)puVar2 - __n);
    param_1[1] = (long)(puVar2 + 4);
    param_1[2] = lVar4 + uVar1 * 0x10;
    if (__src != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  else {
    *puVar2 = param_2;
    puVar2[1] = 3;
    *(undefined8 **)(puVar2 + 2) = puVar3;
    param_1[1] = (long)(puVar2 + 4);
  }
  return puVar3;
}


