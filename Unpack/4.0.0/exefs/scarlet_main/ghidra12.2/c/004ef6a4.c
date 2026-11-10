/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ef6a4; name: FUN_004ef6a4
 */


void FUN_004ef6a4(undefined8 *param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  void *__src;
  size_t __n;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  void *__dest;
  long lVar8;
  
  if (*(char *)(param_3 + 9) == '\0') {
    if ((*(byte *)(param_3 + 10) & 1) != 0) {
      return;
    }
  }
  else {
    iVar3 = FUN_00521618(param_3);
    if (iVar3 < 1) {
      return;
    }
  }
  lVar4 = *(long *)(param_3 + 0x10);
  plVar7 = *(long **)param_1[2];
  if (lVar4 == 0) {
    lVar4 = FUN_004a49dc(param_1[1],*param_1,param_2);
    plVar2 = (long *)plVar7[1];
    if (plVar2 < (long *)plVar7[2]) {
      *plVar2 = lVar4;
      plVar7[1] = (long)(plVar2 + 1);
      return;
    }
    lVar8 = (long)plVar2 - *plVar7 >> 3;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_004ef87c;
    lVar5 = plVar7[2] - *plVar7;
    uVar6 = lVar5 >> 2;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0xffffffffffffffe < (ulong)(lVar5 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
    }
    plVar2 = (long *)(lVar5 + lVar8 * 8);
    lVar5 = lVar5 + uVar1 * 8;
    *plVar2 = lVar4;
    __src = (void *)*plVar7;
    __n = plVar7[1] - (long)__src;
    __dest = (void *)((long)plVar2 - __n);
  }
  else {
    plVar2 = (long *)plVar7[1];
    if (plVar2 != (long *)plVar7[2]) {
      *plVar2 = lVar4;
      plVar7[1] = (long)(plVar2 + 1);
      return;
    }
    lVar8 = (long)plVar2 - *plVar7 >> 3;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x3d != 0) {
LAB_004ef87c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = plVar7[2] - *plVar7;
    uVar6 = lVar5 >> 2;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0xffffffffffffffe < (ulong)(lVar5 >> 3)) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
      lVar4 = *(long *)(param_3 + 0x10);
    }
    plVar2 = (long *)(lVar5 + lVar8 * 8);
    lVar5 = lVar5 + uVar1 * 8;
    *plVar2 = lVar4;
    __src = (void *)*plVar7;
    __n = plVar7[1] - (long)__src;
    __dest = (void *)((long)plVar2 - __n);
  }
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __src = (void *)*plVar7;
  }
  *plVar7 = (long)__dest;
  plVar7[1] = (long)(plVar2 + 1);
  plVar7[2] = lVar5;
  if (__src == (void *)0x0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48);
  return;
}


