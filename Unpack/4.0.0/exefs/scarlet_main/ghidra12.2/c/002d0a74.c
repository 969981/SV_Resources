/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d0a74; name: FUN_002d0a74
 */


void FUN_002d0a74(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  int *piVar2;
  void *__src;
  size_t __n;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if ((param_2 != 0) || (param_3 != 0xff)) {
    piVar3 = *(int **)(param_1 + 0x448);
    if (piVar3 < *(int **)(param_1 + 0x450)) {
      *piVar3 = param_2;
      piVar3[1] = param_3;
      *(int **)(param_1 + 0x448) = piVar3 + 2;
    }
    else {
      __src = *(void **)(param_1 + 0x440);
      lVar6 = (long)piVar3 - (long)__src >> 3;
      uVar1 = lVar6 + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar4 = (long)*(int **)(param_1 + 0x450) - (long)__src;
      uVar5 = lVar4 >> 2;
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
        __src = *(void **)(param_1 + 0x440);
        piVar3 = *(int **)(param_1 + 0x448);
      }
      piVar2 = (int *)(lVar4 + lVar6 * 8);
      __n = (long)piVar3 - (long)__src;
      *piVar2 = param_2;
      piVar2[1] = param_3;
      if (0 < (long)__n) {
        memcpy((void *)((long)piVar2 - __n),__src,__n);
        __src = *(void **)(param_1 + 0x440);
      }
      *(void **)(param_1 + 0x440) = (void *)((long)piVar2 - __n);
      *(int **)(param_1 + 0x448) = piVar2 + 2;
      *(ulong *)(param_1 + 0x450) = lVar4 + uVar1 * 8;
      if (__src != (void *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48);
        return;
      }
    }
  }
  return;
}


