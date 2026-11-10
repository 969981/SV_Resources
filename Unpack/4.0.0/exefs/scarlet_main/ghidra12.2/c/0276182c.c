/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0276182c; name: FUN_0276182c
 */


void FUN_0276182c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  size_t __n;
  void *__src;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long *plStack_68;
  
  __src = (void *)param_1[1];
  if (__src == (void *)*param_1) {
    uVar5 = param_1[2];
    uVar4 = param_1[3];
    if (uVar5 < uVar4) {
      lVar7 = (long)(uVar4 - uVar5) >> 3;
      lVar6 = lVar7 + 2;
      if (-1 < lVar7 + 1) {
        lVar6 = lVar7 + 1;
      }
      __n = uVar5 - (long)__src;
      pvVar8 = (void *)(uVar5 + (lVar6 >> 1) * 8);
      if (__n == 0) {
        __src = pvVar8;
      }
      else {
        pvVar8 = (void *)((long)pvVar8 - __n);
        memmove(pvVar8,__src,__n);
        uVar5 = param_1[2];
        __src = pvVar8;
      }
      param_1[1] = (long)__src;
      param_1[2] = uVar5 + (lVar6 >> 1) * 8;
    }
    else {
      plVar1 = param_1 + 4;
      local_70 = 0;
      lVar7 = uVar4 - *param_1;
      lVar6 = lVar7 >> 2;
      if (lVar7 == 0) {
        lVar6 = 1;
      }
      plStack_68 = plVar1;
      lVar7 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],lVar6 << 3,8);
      if (lVar7 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
      lVar2 = lVar7 + (lVar6 + 3U >> 2) * 8;
      lVar3 = lVar7 + lVar6 * 8;
      lVar6 = param_1[1];
      local_78 = param_1[2];
      lVar10 = local_78 - lVar6;
      if (lVar10 == 0) {
        lVar10 = lVar2;
      }
      else {
        lVar11 = (lVar10 >> 3) << 3;
        lVar9 = lVar2;
        local_88 = lVar7;
        lStack_80 = lVar2;
        local_78 = lVar2;
        local_70 = lVar3;
        do {
          FUN_00df5000(plVar1,lVar9,lVar6);
          lVar9 = lVar9 + 8;
          lVar6 = lVar6 + 8;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
        lVar6 = param_1[1];
        local_78 = param_1[2];
        lVar10 = lVar2 + lVar10;
      }
      local_88 = *param_1;
      *param_1 = lVar7;
      param_1[1] = lVar2;
      local_70 = param_1[3];
      param_1[2] = lVar10;
      param_1[3] = lVar3;
      lStack_80 = lVar6;
      FUN_00df4dc0(&local_88);
      __src = (void *)param_1[1];
    }
  }
  FUN_00df5000(param_1 + 4,(long)__src + -8,param_2);
  param_1[1] = param_1[1] + -8;
  return;
}


