/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322c2f4; name: FUN_0322c2f4
 */


long * FUN_0322c2f4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char *__s;
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long **local_108;
  undefined8 local_100;
  long *local_f8;
  undefined1 **ppuStack_f0;
  undefined4 local_78;
  undefined1 *local_70;
  long local_68;
  undefined4 *local_60;
  long *local_58;
  
  local_108 = &local_58;
  local_100 = &local_60;
  local_f8 = &local_68;
  ppuStack_f0 = &local_70;
  iVar4 = FUN_03243c20(param_3,&DAT_046aaf88,&local_108);
  if (-1 < iVar4) {
    if (local_58 != (long *)0x0) {
      param_1[7] = *local_58;
      *(int *)(param_1 + 8) = (int)local_58[1];
      *(undefined4 *)((long)param_1 + 0x44) = 0xffffffff;
    }
    if (local_60 != (undefined4 *)0x0) {
      *(undefined4 *)((long)param_1 + 0x1c) = *local_60;
    }
    if (local_68 != 0) {
      *(ushort *)((long)param_1 + 0x1a) = *(ushort *)((long)param_1 + 0x1a) | 1;
    }
    if (local_70 != (undefined1 *)0x0) {
      *(undefined1 *)(param_1 + 3) = *local_70;
    }
  }
  if (*param_1 == 0) {
    local_f8 = (long *)((ulong)local_f8 & 0xffffffffffffff00);
    local_108 = &local_f8;
    local_100 = (undefined4 **)0x8000008000000001;
    local_78 = 1;
    __s = (char *)(param_1[5] & 0xfffffffffffffffe);
    if (__s != (char *)0x0) {
      sVar5 = strlen(__s);
      iVar9 = (int)sVar5;
      iVar4 = iVar9 + 1;
      if (iVar9 < 0x80) {
        iVar6 = 1;
      }
      else {
        FUN_030b4a20(&local_108,PTR_PTR_047d1a50 + 0x20,(long)iVar4);
        iVar6 = (int)local_100;
      }
      if ((iVar6 <= iVar9) || (iVar4 < iVar6)) {
        local_100 = (undefined4 **)CONCAT44(local_100._4_4_,iVar4);
      }
      *(undefined1 *)((long)local_108 + (long)iVar9) = 0;
      memmove(local_108,__s,(long)((int)local_100 + -1));
    }
    FUN_031c8c08(&local_108,param_2,param_3);
    FUN_031ca768(param_1 + 5,&local_108);
  }
  else {
    uVar2 = *(uint *)(param_1 + 1);
    uVar7 = *(uint *)((long)param_1 + 0xc);
    local_108 = (long **)((ulong)uVar2 + *param_1);
    uVar8 = uVar2 + 1;
    uVar1 = uVar8;
    if (uVar2 == 0xffffffff) {
      uVar1 = 1;
    }
    if ((int)uVar8 < 1) {
      uVar8 = (uint)(0 < (int)uVar7);
    }
    local_100 = (undefined4 **)(CONCAT44(uVar7,uVar1) | 0x8000000000000000);
    if ((0 < (int)uVar8) && ((int)uVar8 <= (int)uVar1)) {
      *(undefined1 *)((long)local_108 + (ulong)(uVar8 - 1)) = 0;
      uVar7 = local_100._4_4_;
    }
    local_78 = 0;
    if ((uVar7 & 0x7fffffff) == 0) {
      FUN_030b4a20(&local_108,PTR_PTR_047d1a50 + 0x20,1);
    }
    if ((int)local_100 != 1) {
      local_100 = (undefined4 **)CONCAT44(local_100._4_4_,1);
    }
    *(undefined1 *)local_108 = 0;
    FUN_031c8c08(&local_108,param_2,param_3);
    *(int *)(param_1 + 1) = (int)local_100 + -1;
  }
  uVar3 = (ulong)local_100;
  local_100 = (undefined4 **)((ulong)local_100 & 0xffffffff00000000);
  if ((-1 < (long)uVar3) && (local_108 != (long **)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return param_1;
}


