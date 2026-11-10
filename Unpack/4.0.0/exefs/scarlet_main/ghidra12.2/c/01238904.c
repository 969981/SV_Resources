/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01238904; name: FUN_01238904
 */


void FUN_01238904(ulong *param_1,undefined8 param_2)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  void *__src;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong *local_48;
  
  uVar3 = param_1[2];
  if (uVar3 != param_1[3]) goto LAB_01238984;
  pvVar7 = (void *)*param_1;
  __src = (void *)param_1[1];
  if (pvVar7 <= __src && (long)__src - (long)pvVar7 != 0) {
    lVar5 = (long)__src - (long)pvVar7 >> 3;
    lVar2 = lVar5 + 2;
    if (-1 < lVar5 + 1) {
      lVar2 = lVar5 + 1;
    }
    __n = uVar3 - (long)__src;
    pvVar7 = (void *)((long)__src + (lVar2 >> 1) * -8);
    if (__n != 0) {
      memmove(pvVar7,__src,__n);
      __src = (void *)param_1[1];
    }
    uVar3 = (long)pvVar7 + __n;
    param_1[1] = (ulong)((long)__src + (lVar2 >> 1) * -8);
    param_1[2] = uVar3;
    goto LAB_01238984;
  }
  local_50 = 0;
  lVar2 = param_1[3] - (long)pvVar7;
  uVar3 = lVar2 >> 2;
  if (lVar2 == 0) {
    uVar3 = 1;
  }
  local_48 = param_1 + 4;
  local_68 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar3 << 3,0x10);
  if (local_68 == 0) {
    (**(code **)(*(long *)param_1[4] + 0xe8))();
  }
  local_60 = local_68 + (uVar3 >> 2) * 8;
  local_50 = local_68 + uVar3 * 8;
  local_58 = local_60;
  FUN_020dad14(&local_68,param_1[1],param_1[2]);
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar6 = param_1[2];
  *param_1 = local_68;
  param_1[1] = local_60;
  param_1[2] = local_58;
  uVar4 = param_1[3];
  param_1[3] = local_50;
  local_58 = uVar6;
  if (uVar6 - uVar1 != 0) {
    local_58 = uVar6 + ((uVar6 - uVar1) - 8 >> 3 ^ 0xffffffffffffffff) * 8;
  }
  local_68 = uVar3;
  local_60 = uVar1;
  local_50 = uVar4;
  if (uVar3 != 0) {
    plVar8 = (long *)*local_48;
    uVar1 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_00c4e600();
      if (0 < *(int *)(lVar2 + 0x12c8)) {
        FUN_00c48fe8(plVar8,uVar3,uVar4 - uVar3,0x10);
        goto LAB_01238a44;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,uVar3,uVar4 - uVar3,0x10);
  }
LAB_01238a44:
  uVar3 = param_1[2];
LAB_01238984:
  FUN_01238828(param_1 + 4,uVar3,param_2);
  param_1[2] = param_1[2] + 8;
  return;
}


