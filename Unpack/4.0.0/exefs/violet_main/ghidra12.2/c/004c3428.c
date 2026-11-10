/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004c3428; name: FUN_004c3428
 */


void FUN_004c3428(long *param_1,ulong param_2)

{
  void *__src;
  size_t __n;
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  puVar4 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar4 >> 4)) {
    puVar5 = puVar4;
    if (param_2 != 0) {
      puVar5 = puVar4 + param_2 * 2;
      uVar6 = param_2 * 0x10 - 0x10;
      puVar3 = puVar4;
      if (0x2f < uVar6) {
        uVar6 = (uVar6 >> 4) + 1;
        uVar8 = uVar6 & 0x1ffffffffffffffc;
        puVar3 = puVar4 + uVar8 * 2;
        puVar4 = puVar4 + 4;
        uVar2 = uVar8;
        do {
          puVar4[-4] = 0;
          uVar2 = uVar2 - 4;
          puVar4[-2] = 0;
          *puVar4 = 0;
          puVar4[2] = 0;
          *(undefined4 *)(puVar4 + -3) = 0;
          *(undefined4 *)(puVar4 + -1) = 0;
          *(undefined4 *)(puVar4 + 1) = 0;
          *(undefined4 *)(puVar4 + 3) = 0;
          puVar4 = puVar4 + 8;
        } while (uVar2 != 0);
        if (uVar6 == uVar8) goto LAB_004c351c;
      }
      do {
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = 0;
        puVar3 = puVar3 + 2;
      } while (puVar3 != puVar5);
    }
LAB_004c351c:
    param_1[1] = (long)puVar5;
    return;
  }
  lVar9 = (long)puVar4 - *param_1 >> 4;
  uVar6 = lVar9 + param_2;
  if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar1 = param_1[2] - *param_1;
  uVar2 = lVar1 >> 3;
  if (uVar6 <= uVar2) {
    uVar6 = uVar2;
  }
  if (0x7fffffffffffffe < (ulong)(lVar1 >> 4)) {
    uVar6 = 0xfffffffffffffff;
  }
  if (uVar6 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,uVar6 << 4);
  }
  puVar5 = (undefined8 *)(lVar1 + lVar9 * 0x10);
  uVar2 = param_2 * 0x10 - 0x10;
  puVar4 = puVar5;
  if (0x2f < uVar2) {
    uVar2 = (uVar2 >> 4) + 1;
    uVar7 = uVar2 & 0x1ffffffffffffffc;
    puVar4 = puVar5 + uVar7 * 2;
    puVar3 = puVar5 + 4;
    uVar8 = uVar7;
    do {
      puVar3[-4] = 0;
      uVar8 = uVar8 - 4;
      puVar3[-2] = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + -3) = 0;
      *(undefined4 *)(puVar3 + -1) = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      puVar3 = puVar3 + 8;
    } while (uVar8 != 0);
    if (uVar2 == uVar7) goto LAB_004c35a4;
  }
  do {
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    puVar4 = puVar4 + 2;
  } while (puVar5 + param_2 * 2 != puVar4);
LAB_004c35a4:
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar5 - __n),__src,__n);
    __src = (void *)*param_1;
  }
  *param_1 = (long)((long)puVar5 - __n);
  param_1[1] = (long)(puVar5 + param_2 * 2);
  param_1[2] = lVar1 + uVar6 * 0x10;
  if (__src == (void *)0x0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48);
  return;
}


