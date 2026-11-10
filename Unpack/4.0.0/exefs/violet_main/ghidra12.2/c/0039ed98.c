/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0039ed98; name: FUN_0039ed98
 */


void FUN_0039ed98(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *__src;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar3 >> 4) * -0x5555555555555555) < param_2) {
    lVar2 = (long)puVar3 - *param_1 >> 4;
    uVar1 = lVar2 * -0x5555555555555555 + param_2;
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - *param_1 >> 4;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar1 = 0x555555555555555;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar1 * 0x30);
    }
    puVar4 = (undefined8 *)(lVar5 + lVar2 * 0x10);
    puVar3 = puVar4;
    do {
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[1] = 0x7b2;
      *(undefined4 *)(puVar3 + 2) = 0x101;
      *(undefined1 *)((long)puVar3 + 0x14) = 0;
      puVar3[3] = 0x7b2;
      puVar3[5] = 0;
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 4) = 0x101;
      *(undefined1 *)((long)puVar3 + 0x24) = 0;
      puVar3 = puVar3 + 6;
    } while (puVar4 + param_2 * 6 != puVar3);
    __src = (void *)*param_1;
    __n = param_1[1] - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = (void *)*param_1;
    }
    *param_1 = (long)((long)puVar4 - __n);
    param_1[1] = (long)(puVar4 + param_2 * 6);
    param_1[2] = lVar5 + uVar1 * 0x30;
    if (__src != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
      return;
    }
  }
  else {
    puVar4 = puVar3;
    if (param_2 != 0) {
      puVar4 = puVar3 + param_2 * 6;
      do {
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[1] = 0x7b2;
        *(undefined4 *)(puVar3 + 2) = 0x101;
        *(undefined1 *)((long)puVar3 + 0x14) = 0;
        puVar3[3] = 0x7b2;
        puVar3[5] = 0;
        puVar3[4] = 0;
        *(undefined4 *)(puVar3 + 4) = 0x101;
        *(undefined1 *)((long)puVar3 + 0x24) = 0;
        puVar3 = puVar3 + 6;
      } while (puVar3 != puVar4);
    }
    param_1[1] = (long)puVar4;
  }
  return;
}


