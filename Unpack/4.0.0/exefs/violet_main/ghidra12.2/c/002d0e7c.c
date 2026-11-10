/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d0e7c; name: FUN_002d0e7c
 */


int FUN_002d0e7c(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  int *__src;
  size_t __n;
  int *piVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  __src = *(int **)(param_1 + 0x428);
  piVar4 = *(int **)(param_1 + 0x430);
  piVar5 = __src;
  if (__src == piVar4) {
LAB_002d0ecc:
    if (piVar5 != piVar4) {
      return piVar5[1];
    }
  }
  else {
    do {
      if (*piVar5 == param_2 || piVar5[1] == param_2) goto LAB_002d0ecc;
      piVar5 = piVar5 + 2;
    } while (piVar5 != piVar4);
  }
  iVar2 = *(int *)(param_1 + 0x420);
  *(int *)(param_1 + 0x420) = iVar2 + 1;
  if (piVar4 < *(int **)(param_1 + 0x438)) {
    *piVar4 = param_2;
    piVar4[1] = iVar2;
    *(int **)(param_1 + 0x430) = piVar4 + 2;
  }
  else {
    __n = (long)piVar4 - (long)__src;
    lVar8 = (long)__n >> 3;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = (long)*(int **)(param_1 + 0x438) - (long)__src;
    uVar7 = lVar6 >> 2;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0xffffffffffffffe < (ulong)(lVar6 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
      lVar6 = lVar8;
    }
    else {
      lVar3 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
      __src = *(int **)(param_1 + 0x428);
      __n = *(long *)(param_1 + 0x430) - (long)__src;
      lVar6 = (long)__n >> 3;
    }
    piVar5 = (int *)(lVar3 + lVar8 * 8);
    *piVar5 = param_2;
    piVar5[1] = iVar2;
    if (0 < (long)__n) {
      memcpy(piVar5 + lVar6 * -2,__src,__n);
      __src = *(int **)(param_1 + 0x428);
    }
    *(int **)(param_1 + 0x428) = piVar5 + lVar6 * -2;
    *(int **)(param_1 + 0x430) = piVar5 + 2;
    *(ulong *)(param_1 + 0x438) = lVar3 + uVar1 * 8;
    if (__src != (int *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  return iVar2;
}


