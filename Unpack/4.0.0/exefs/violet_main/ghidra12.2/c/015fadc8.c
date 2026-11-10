/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015fadc8; name: FUN_015fadc8
 */


void FUN_015fadc8(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  ulong uVar4;
  void *__src;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong local_70;
  undefined8 *puStack_68;
  
  uVar5 = param_1[2];
  if (uVar5 == param_1[3]) {
    pvVar7 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src < pvVar7 || (long)__src - (long)pvVar7 == 0) {
      puVar8 = (undefined8 *)param_1[4];
      local_70 = 0;
      lVar1 = param_1[3] - (long)pvVar7;
      uVar5 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar5 = 1;
      }
      puStack_68 = puVar8;
      uVar4 = (**(code **)(*(long *)*puVar8 + 0x10))((long *)*puVar8,uVar5 << 3,4);
      if (uVar4 == 0) {
        (**(code **)(*(long *)*puVar8 + 0xe8))();
      }
      uVar2 = uVar4 + (uVar5 >> 2) * 8;
      uVar3 = uVar4 + uVar5 * 8;
      uVar5 = param_1[1];
      local_78 = param_1[2];
      lVar1 = local_78 - uVar5;
      if (lVar1 == 0) {
        uVar9 = uVar2;
      }
      else {
        lVar6 = (lVar1 >> 3) << 3;
        uVar9 = uVar2;
        local_88 = uVar4;
        uStack_80 = uVar2;
        local_78 = uVar2;
        local_70 = uVar3;
        do {
          FUN_015f96bc(puVar8,uVar9,uVar5);
          uVar9 = uVar9 + 8;
          uVar5 = uVar5 + 8;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
        uVar5 = param_1[1];
        local_78 = param_1[2];
        uVar9 = uVar2 + lVar1;
      }
      local_88 = *param_1;
      *param_1 = uVar4;
      param_1[1] = uVar2;
      local_70 = param_1[3];
      param_1[2] = uVar9;
      param_1[3] = uVar3;
      uStack_80 = uVar5;
      FUN_015f9874(&local_88);
      uVar5 = param_1[2];
    }
    else {
      lVar6 = (long)__src - (long)pvVar7 >> 3;
      lVar1 = lVar6 + 2;
      if (-1 < lVar6 + 1) {
        lVar1 = lVar6 + 1;
      }
      __n = uVar5 - (long)__src;
      pvVar7 = (void *)((long)__src + (lVar1 >> 1) * -8);
      if (__n != 0) {
        memmove(pvVar7,__src,__n);
        __src = (void *)param_1[1];
      }
      uVar5 = (long)pvVar7 + __n;
      param_1[1] = (ulong)((long)__src + (lVar1 >> 1) * -8);
      param_1[2] = uVar5;
    }
  }
  FUN_015f96bc(param_1[4],uVar5,param_2);
  param_1[2] = param_1[2] + 8;
  return;
}


