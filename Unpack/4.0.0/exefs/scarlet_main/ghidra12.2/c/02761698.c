/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02761698; name: FUN_02761698
 */


void FUN_02761698(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  size_t __n;
  ulong uVar5;
  void *__src;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong local_70;
  ulong *puStack_68;
  
  uVar6 = param_1[2];
  if (uVar6 == param_1[3]) {
    pvVar8 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar8 || (long)__src - (long)pvVar8 == 0) {
      puVar2 = param_1 + 4;
      local_70 = 0;
      lVar1 = param_1[3] - (long)pvVar8;
      uVar6 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar6 = 1;
      }
      puStack_68 = puVar2;
      uVar5 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar6 << 3,8);
      if (uVar5 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xe8))();
      }
      uVar3 = uVar5 + (uVar6 >> 2) * 8;
      uVar4 = uVar5 + uVar6 * 8;
      uVar6 = param_1[1];
      local_78 = param_1[2];
      lVar1 = local_78 - uVar6;
      if (lVar1 == 0) {
        uVar9 = uVar3;
      }
      else {
        lVar7 = (lVar1 >> 3) << 3;
        uVar9 = uVar3;
        local_88 = uVar5;
        uStack_80 = uVar3;
        local_78 = uVar3;
        local_70 = uVar4;
        do {
          FUN_00df5000(puVar2,uVar9,uVar6);
          uVar9 = uVar9 + 8;
          uVar6 = uVar6 + 8;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
        uVar6 = param_1[1];
        local_78 = param_1[2];
        uVar9 = uVar3 + lVar1;
      }
      local_88 = *param_1;
      *param_1 = uVar5;
      param_1[1] = uVar3;
      local_70 = param_1[3];
      param_1[2] = uVar9;
      param_1[3] = uVar4;
      uStack_80 = uVar6;
      FUN_00df4dc0(&local_88);
      uVar6 = param_1[2];
    }
    else {
      lVar7 = (long)__src - (long)pvVar8 >> 3;
      lVar1 = lVar7 + 2;
      if (-1 < lVar7 + 1) {
        lVar1 = lVar7 + 1;
      }
      __n = uVar6 - (long)__src;
      pvVar8 = (void *)((long)__src + (lVar1 >> 1) * -8);
      if (__n != 0) {
        memmove(pvVar8,__src,__n);
        __src = (void *)param_1[1];
      }
      uVar6 = (long)pvVar8 + __n;
      param_1[1] = (ulong)((long)__src + (lVar1 >> 1) * -8);
      param_1[2] = uVar6;
    }
  }
  FUN_00df5000(param_1 + 4,uVar6,param_2);
  param_1[2] = param_1[2] + 8;
  return;
}


