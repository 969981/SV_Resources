/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0039f104; name: FUN_0039f104
 */


void FUN_0039f104(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *__src;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  
  puVar3 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar3 >> 4) * -0x5555555555555555) < param_2) {
    lVar2 = (long)puVar3 - *param_1 >> 4;
    uVar1 = lVar2 * -0x5555555555555555 + param_2;
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = param_1[2] - *param_1 >> 4;
    uVar7 = lVar6 * 0x5555555555555556;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar1 = 0x555555555555555;
    }
    if (uVar1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_0049e770(PTR_FUN_047cba38,uVar1 * 0x30);
    }
    puVar5 = (undefined8 *)(lVar6 + lVar2 * 0x10);
    puVar3 = puVar5;
    do {
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[2] = 0x7b2;
      *(undefined4 *)(puVar3 + 3) = 0x101;
      *(undefined1 *)((long)puVar3 + 0x1c) = 0;
      puVar3[4] = 0x7b2;
      *(undefined4 *)(puVar3 + 5) = 0x101;
      *(undefined1 *)((long)puVar3 + 0x2c) = 0;
      puVar4 = puVar3 + 6;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3 = puVar4;
    } while (puVar5 + param_2 * 6 != puVar4);
    __src = (void *)*param_1;
    __n = param_1[1] - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar5 - __n),__src,__n);
      __src = (void *)*param_1;
    }
    *param_1 = (long)((long)puVar5 - __n);
    param_1[1] = (long)(puVar5 + param_2 * 6);
    param_1[2] = lVar6 + uVar1 * 0x30;
    if (__src != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
      return;
    }
  }
  else {
    puVar5 = puVar3;
    if (param_2 != 0) {
      puVar5 = puVar3 + param_2 * 6;
      do {
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[2] = 0x7b2;
        *(undefined4 *)(puVar3 + 3) = 0x101;
        *(undefined1 *)((long)puVar3 + 0x1c) = 0;
        puVar3[4] = 0x7b2;
        *(undefined4 *)(puVar3 + 5) = 0x101;
        *(undefined1 *)((long)puVar3 + 0x2c) = 0;
        puVar4 = puVar3 + 6;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3 = puVar4;
      } while (puVar4 != puVar5);
    }
    param_1[1] = (long)puVar5;
  }
  return;
}


