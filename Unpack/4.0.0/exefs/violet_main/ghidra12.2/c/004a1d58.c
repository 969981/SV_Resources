/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a1d58; name: FUN_004a1d58
 */


void FUN_004a1d58(long param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *__src;
  size_t __n;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  
  iVar3 = (int)((ulong)(*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8)) >> 3) * -0x55555555;
  puVar2 = *(undefined4 **)(param_1 + 0x1a0);
  uVar7 = (undefined4)((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8)) >> 3);
  uVar9 = (undefined4)((ulong)(*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0)) >> 3);
  uVar6 = (undefined4)((ulong)(*(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x100)) >> 3);
  uVar8 = (undefined4)((ulong)(*(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118)) >> 3);
  uVar10 = (undefined4)((ulong)(*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0)) >> 3);
  uVar11 = (undefined4)((ulong)(*(long *)(param_1 + 0x1d0) - *(long *)(param_1 + 0x1c8)) >> 3);
  uVar12 = (undefined4)((ulong)(*(long *)(param_1 + 0x1e8) - *(long *)(param_1 + 0x1e0)) >> 4);
  if (puVar2 < *(undefined4 **)(param_1 + 0x1a8)) {
    *puVar2 = uVar9;
    puVar2[1] = uVar7;
    puVar2[2] = uVar6;
    puVar2[3] = uVar8;
    puVar2[4] = iVar3;
    puVar2[5] = uVar10;
    puVar2[6] = uVar11;
    puVar2[7] = uVar12;
    *(undefined4 **)(param_1 + 0x1a0) = puVar2 + 8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x198);
    lVar13 = (long)puVar2 - lVar4 >> 5;
    uVar1 = lVar13 + 1;
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (long)*(undefined4 **)(param_1 + 0x1a8) - lVar4;
    uVar5 = lVar4 >> 4;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x3fffffffffffffe < (ulong)(lVar4 >> 5)) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 5);
    }
    puVar2 = (undefined4 *)(lVar4 + lVar13 * 0x20);
    *puVar2 = uVar9;
    puVar2[1] = uVar7;
    puVar2[2] = uVar6;
    puVar2[3] = uVar8;
    puVar2[4] = iVar3;
    puVar2[5] = uVar10;
    puVar2[6] = uVar11;
    puVar2[7] = uVar12;
    __src = *(void **)(param_1 + 0x198);
    __n = *(long *)(param_1 + 0x1a0) - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar2 - __n),__src,__n);
      __src = *(void **)(param_1 + 0x198);
    }
    *(void **)(param_1 + 0x198) = (void *)((long)puVar2 - __n);
    *(undefined4 **)(param_1 + 0x1a0) = puVar2 + 8;
    *(ulong *)(param_1 + 0x1a8) = lVar4 + uVar1 * 0x20;
    if (__src != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
      return;
    }
  }
  return;
}


