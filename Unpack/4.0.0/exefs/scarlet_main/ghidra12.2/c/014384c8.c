/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014384c8; name: FUN_014384c8
 */


void FUN_014384c8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  size_t __n;
  void *__src;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  undefined8 *puVar9;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined8 *local_48;
  
  __src = (void *)param_1[1];
  if (__src != (void *)*param_1) goto LAB_014384f4;
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  if (uVar2 < uVar1) {
    lVar5 = (long)(uVar1 - uVar2) >> 3;
    lVar3 = lVar5 + 2;
    if (-1 < lVar5 + 1) {
      lVar3 = lVar5 + 1;
    }
    __n = uVar2 - (long)__src;
    pvVar7 = (void *)(uVar2 + (lVar3 >> 1) * 8);
    if (__n == 0) {
      __src = pvVar7;
    }
    else {
      pvVar7 = (void *)((long)pvVar7 - __n);
      memmove(pvVar7,__src,__n);
      uVar2 = param_1[2];
      __src = pvVar7;
    }
    param_1[1] = (long)__src;
    param_1[2] = uVar2 + (lVar3 >> 1) * 8;
    goto LAB_014384f4;
  }
  puVar9 = (undefined8 *)param_1[4];
  local_50 = 0;
  lVar5 = uVar1 - *param_1;
  lVar3 = lVar5 >> 2;
  if (lVar5 == 0) {
    lVar3 = 1;
  }
  local_48 = puVar9;
  local_68 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,lVar3 << 3,8);
  if (local_68 == 0) {
    (**(code **)(*(long *)*puVar9 + 0xe8))();
  }
  local_60 = local_68 + (lVar3 + 3U >> 2) * 8;
  local_50 = local_68 + lVar3 * 8;
  local_58 = local_60;
  FUN_01e00ea8(&local_68,param_1[1],param_1[2]);
  lVar3 = *param_1;
  lVar5 = param_1[1];
  lVar6 = param_1[2];
  *param_1 = local_68;
  param_1[1] = local_60;
  param_1[2] = local_58;
  lVar4 = param_1[3];
  param_1[3] = local_50;
  local_58 = lVar6;
  if (lVar6 - lVar5 != 0) {
    local_58 = lVar6 + ((lVar6 - lVar5) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
  }
  local_68 = lVar3;
  local_60 = lVar5;
  local_50 = lVar4;
  if (lVar3 != 0) {
    plVar8 = (long *)*local_48;
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if ((uVar2 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar8,lVar3,lVar4 - lVar3,8);
        goto LAB_01438610;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar3,lVar4 - lVar3,8);
  }
LAB_01438610:
  __src = (void *)param_1[1];
LAB_014384f4:
  FUN_01e00fd4(param_1[4],(long)__src + -8,param_2);
  param_1[1] = param_1[1] + -8;
  return;
}


