/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0051ce6c; name: FUN_0051ce6c
 */


long FUN_0051ce6c(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar8;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  if ((*(char *)(param_1 + 0x43) != '\0') &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x48) != '\0')) {
    puVar3 = *(ulong **)(param_1 + 0x30);
    if ((puVar3 != (ulong *)0x0) &&
       (puStack_48 = PTR_LAB_047cd728, local_50 = param_1, *puVar3 != 0xffffffffffffffff)) {
      local_40 = &puStack_48;
      local_28 = &local_40;
      puStack_38 = (undefined1 *)&local_50;
      std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)&LAB_0051d550);
    }
    if ((*(int *)(PTR_DAT_047cd750 + (ulong)*(uint *)(param_1 + 0x38) * 4) == 10) &&
       (*(int *)(param_1 + 0x3c) != 3)) {
      (**(code **)(*param_2 + 0x98))(param_2);
      lVar8 = *(long *)PTR_DAT_047cdbd8;
      uVar2 = *(uint *)(param_1 + 0x44);
      plVar5 = (long *)FUN_004f72a0(extraout_x1_00,param_2,param_1,0);
      lVar6 = (**(code **)(*plVar5 + 0x48))();
      return lVar6 + lVar8 + (ulong)(((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
             (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    }
  }
  if (*(int *)(param_1 + 0x3c) == 3) {
    puVar3 = *(ulong **)(param_1 + 0x30);
    if ((puVar3 != (ulong *)0x0) &&
       (puStack_48 = PTR_LAB_047cd728, local_50 = param_1, *puVar3 != 0xffffffffffffffff)) {
      local_40 = &puStack_48;
      local_28 = &local_40;
      puStack_38 = (undefined1 *)&local_50;
      std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)&LAB_0051d550);
    }
    if ((*(int *)(param_1 + 0x38) == 0xb) && (uVar4 = FUN_004a64c0(param_1), (uVar4 & 1) != 0)) {
      plVar5 = (long *)FUN_004f92d8(extraout_x1,param_2,param_1);
      uVar4 = FUN_004fdddc();
      if ((uVar4 & 1) != 0) {
        uVar4 = (**(code **)(*plVar5 + 0x50))(plVar5);
        uVar4 = uVar4 & 0xffffffff;
        goto LAB_0051cff8;
      }
    }
    uVar4 = FUN_004f48a0(extraout_x1,param_2,param_1);
    uVar4 = uVar4 & 0xffffffff;
  }
  else if (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x4b) == '\0') {
    uVar4 = FUN_004f4514(extraout_x1,param_2,param_1);
    uVar4 = uVar4 & 1;
  }
  else {
    uVar4 = 1;
  }
LAB_0051cff8:
  lVar6 = FUN_0051bee4(param_1,param_2);
  uVar7 = FUN_004a8fc4(param_1);
  if ((uVar7 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    puVar3 = *(ulong **)(param_1 + 0x30);
    if ((puVar3 != (ulong *)0x0) && (puStack_48 = PTR_LAB_047cd728, *puVar3 != 0xffffffffffffffff))
    {
      local_40 = &puStack_48;
      local_28 = &local_40;
      local_50 = param_1;
      puStack_38 = (undefined1 *)&local_50;
      std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)&LAB_0051d550);
    }
    lVar6 = lVar6 + ((ulong)(((uint)LZCOUNT(iVar1 << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) <<
                    (*(int *)(param_1 + 0x38) == 10)) * uVar4;
  }
  else if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar6 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
            (ulong)(((uint)LZCOUNT(*(int *)(param_1 + 0x44) << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
  }
  return lVar6;
}


