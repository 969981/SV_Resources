/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0181a34c; name: FUN_0181a34c
 */


void FUN_0181a34c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  size_t __n;
  void *__src;
  ulong uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  __src = (void *)param_1[1];
  if (__src == (void *)*param_1) {
    uVar4 = param_1[2];
    uVar3 = param_1[3];
    if (uVar4 < uVar3) {
      lVar6 = (long)(uVar3 - uVar4) >> 3;
      lVar5 = lVar6 + 2;
      if (-1 < lVar6 + 1) {
        lVar5 = lVar6 + 1;
      }
      __n = uVar4 - (long)__src;
      pvVar7 = (void *)(uVar4 + (lVar5 >> 1) * 8);
      if (__n == 0) {
        __src = pvVar7;
      }
      else {
        pvVar7 = (void *)((long)pvVar7 - __n);
        memmove(pvVar7,__src,__n);
        uVar4 = param_1[2];
        __src = pvVar7;
      }
      param_1[1] = (long)__src;
      param_1[2] = uVar4 + (lVar5 >> 1) * 8;
    }
    else {
      puVar8 = (undefined8 *)param_1[4];
      local_70 = 0;
      lVar6 = uVar3 - *param_1;
      lVar5 = lVar6 >> 2;
      if (lVar6 == 0) {
        lVar5 = 1;
      }
      puStack_68 = puVar8;
      lVar6 = (**(code **)(*(long *)*puVar8 + 0x10))((long *)*puVar8,lVar5 << 3,0x10);
      if (lVar6 == 0) {
        (**(code **)(*(long *)*puVar8 + 0xe8))();
      }
      lVar1 = lVar6 + (lVar5 + 3U >> 2) * 8;
      lVar2 = lVar6 + lVar5 * 8;
      lVar5 = param_1[1];
      local_78 = param_1[2];
      lVar10 = local_78 - lVar5;
      if (lVar10 == 0) {
        lVar10 = lVar1;
      }
      else {
        lVar11 = (lVar10 >> 3) << 3;
        lVar9 = lVar1;
        local_88 = lVar6;
        lStack_80 = lVar1;
        local_78 = lVar1;
        local_70 = lVar2;
        do {
          FUN_0181a0dc(puVar8,lVar9,lVar5);
          lVar9 = lVar9 + 8;
          lVar5 = lVar5 + 8;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
        lVar5 = param_1[1];
        local_78 = param_1[2];
        lVar10 = lVar1 + lVar10;
      }
      local_88 = *param_1;
      *param_1 = lVar6;
      param_1[1] = lVar1;
      local_70 = param_1[3];
      param_1[2] = lVar10;
      param_1[3] = lVar2;
      lStack_80 = lVar5;
      FUN_01819e9c(&local_88);
      __src = (void *)param_1[1];
    }
  }
  FUN_027621ec(param_1[4],(long)__src + -8,param_2);
  param_1[1] = param_1[1] + -8;
  return;
}


