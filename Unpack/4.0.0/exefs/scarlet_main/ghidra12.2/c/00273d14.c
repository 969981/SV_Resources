/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00273d14; name: FUN_00273d14
 */


void FUN_00273d14(long *param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  void *__src;
  size_t __n;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_3c;
  undefined4 local_34;
  
  FUN_00273ee8(param_1 + 3);
  lVar2 = param_1[3];
  if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
    lVar2 = lVar2 + 0x11;
    puVar3 = (undefined4 *)param_1[1];
    puVar4 = (undefined4 *)param_1[2];
    if (puVar3 == puVar4) {
LAB_00273d90:
      lVar7 = (long)puVar3 - *param_1 >> 5;
      uVar1 = lVar7 + 1;
      if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar5 = (long)puVar4 - *param_1;
      uVar6 = lVar5 >> 4;
      if (uVar1 <= uVar6) {
        uVar1 = uVar6;
      }
      if (0x3fffffffffffffe < (ulong)(lVar5 >> 5)) {
        uVar1 = 0x7ffffffffffffff;
      }
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 5);
      }
      puVar3 = (undefined4 *)(lVar5 + lVar7 * 0x20);
      *puVar3 = 1;
      *(long *)(puVar3 + 2) = lVar2;
      puVar3[4] = param_3;
      puVar3[7] = local_34;
      *(undefined8 *)(puVar3 + 5) = local_3c;
      __src = (void *)*param_1;
      __n = param_1[1] - (long)__src;
      if (0 < (long)__n) {
        memcpy((void *)((long)puVar3 - __n),__src,__n);
        __src = (void *)*param_1;
      }
      *param_1 = (long)((long)puVar3 - __n);
      param_1[1] = (long)(puVar3 + 8);
      param_1[2] = lVar5 + uVar1 * 0x20;
      if (__src == (void *)0x0) {
        return;
      }
      FUN_0049e790(PTR_LAB_047cba48);
      return;
    }
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x20);
    puVar3 = (undefined4 *)param_1[1];
    puVar4 = (undefined4 *)param_1[2];
    if (puVar3 == puVar4) goto LAB_00273d90;
  }
  *(long *)(puVar3 + 2) = lVar2;
  puVar3[4] = param_3;
  *puVar3 = 1;
  puVar3[7] = local_34;
  *(undefined8 *)(puVar3 + 5) = local_3c;
  param_1[1] = (long)(puVar3 + 8);
  return;
}


