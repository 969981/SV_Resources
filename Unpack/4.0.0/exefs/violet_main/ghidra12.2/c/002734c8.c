/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002734c8; name: FUN_002734c8
 */


void FUN_002734c8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  void *__src;
  size_t __n;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  plVar1 = param_1 + 3;
  FUN_00273ee8(plVar1);
  lVar3 = param_1[3];
  if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
    lVar3 = lVar3 + 0x11;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  FUN_00273ee8(plVar1,param_3);
  lVar4 = *plVar1;
  if ((*(byte *)(lVar4 + 0x10) & 1) == 0) {
    lVar4 = lVar4 + 0x11;
    puVar5 = (undefined4 *)param_1[1];
    puVar6 = (undefined4 *)param_1[2];
    if (puVar5 == puVar6) {
LAB_00273560:
      lVar9 = (long)puVar5 - *param_1 >> 5;
      uVar2 = lVar9 + 1;
      if (uVar2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar7 = (long)puVar6 - *param_1;
      uVar8 = lVar7 >> 4;
      if (uVar2 <= uVar8) {
        uVar2 = uVar8;
      }
      if (0x3fffffffffffffe < (ulong)(lVar7 >> 5)) {
        uVar2 = 0x7ffffffffffffff;
      }
      if (uVar2 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = FUN_0049e770(PTR_FUN_047cba38,uVar2 << 5);
      }
      puVar5 = (undefined4 *)(lVar7 + lVar9 * 0x20);
      *puVar5 = 0;
      *(long *)(puVar5 + 2) = lVar3;
      *(long *)(puVar5 + 4) = lVar4;
      __src = (void *)*param_1;
      __n = param_1[1] - (long)__src;
      if (0 < (long)__n) {
        memcpy((void *)((long)puVar5 - __n),__src,__n);
        __src = (void *)*param_1;
      }
      *param_1 = (long)((long)puVar5 - __n);
      param_1[1] = (long)(puVar5 + 8);
      param_1[2] = lVar7 + uVar2 * 0x20;
      if (__src == (void *)0x0) {
        return;
      }
      FUN_0049e790(PTR_LAB_047cba48);
      return;
    }
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x20);
    puVar5 = (undefined4 *)param_1[1];
    puVar6 = (undefined4 *)param_1[2];
    if (puVar5 == puVar6) goto LAB_00273560;
  }
  *puVar5 = 0;
  *(long *)(puVar5 + 2) = lVar3;
  *(long *)(puVar5 + 4) = lVar4;
  param_1[1] = (long)(puVar5 + 8);
  return;
}


