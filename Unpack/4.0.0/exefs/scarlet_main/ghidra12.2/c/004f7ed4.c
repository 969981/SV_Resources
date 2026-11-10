/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f7ed4; name: FUN_004f7ed4
 */


long FUN_004f7ed4(long param_1,long param_2,long param_3,long *param_4)

{
  char cVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  long local_58;
  undefined *puStack_50;
  undefined ***local_48;
  undefined **local_40;
  long *plStack_38;
  
  puVar2 = *(ulong **)(param_3 + 0x30);
  if ((puVar2 != (ulong *)0x0) &&
     (puStack_50 = PTR_LAB_047cd728, local_58 = param_3, *puVar2 != 0xffffffffffffffff)) {
    local_40 = &puStack_50;
    plStack_38 = &local_58;
    local_48 = &local_40;
    std::__call_once(puVar2,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if (param_4 == (long *)0x0) {
    param_4 = *(long **)(param_1 + 0x40);
    cVar1 = *(char *)(param_3 + 0x43);
  }
  else {
    cVar1 = *(char *)(param_3 + 0x43);
  }
  if (cVar1 == '\0') {
    puVar2 = *(ulong **)(param_3 + 0x30);
    if ((puVar2 != (ulong *)0x0) &&
       (puStack_50 = PTR_LAB_047cd728, local_58 = param_3, *puVar2 != 0xffffffffffffffff)) {
      local_40 = &puStack_50;
      plStack_38 = &local_58;
      local_48 = &local_40;
      std::__call_once(puVar2,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
    }
    if ((*(int *)(param_3 + 0x38) == 0xb) && (uVar4 = FUN_004a64c0(param_3), (uVar4 & 1) != 0)) {
      uVar4 = FUN_004fa4b0(param_1 + 8,param_3);
      lVar5 = FUN_004fdcf4(param_2 + (uVar4 & 0xffffffff));
      piVar8 = *(int **)(lVar5 + 0x10);
      iVar9 = *(int *)(lVar5 + 8);
    }
    else {
      uVar4 = FUN_004fa4b0(param_1 + 8,param_3);
      lVar5 = param_2 + (uVar4 & 0xffffffff);
      piVar8 = *(int **)(lVar5 + 0x10);
      iVar9 = *(int *)(lVar5 + 8);
    }
    if ((piVar8 != (int *)0x0) && (iVar9 < *piVar8)) {
      lVar3 = (long)iVar9;
      iVar9 = iVar9 + 1;
      *(int *)(lVar5 + 8) = iVar9;
      if (*(long *)(piVar8 + lVar3 * 2 + 2) != 0) {
        return *(long *)(piVar8 + lVar3 * 2 + 2);
      }
    }
    if (iVar9 == 0) {
      uVar7 = FUN_004a5124(param_3);
      plVar6 = (long *)(**(code **)(*param_4 + 0x10))(param_4,uVar7);
      uVar4 = *(ulong *)(param_2 + 8);
    }
    else {
      plVar6 = *(long **)(piVar8 + 2);
      uVar4 = *(ulong *)(param_2 + 8);
    }
    puVar2 = (ulong *)(uVar4 & 0xfffffffffffffffe);
    if ((uVar4 & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    lVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,puVar2);
    FUN_004f80a8(lVar5,lVar3);
  }
  else {
    lVar3 = FUN_004ee490(param_2 + (ulong)*(uint *)(param_1 + 0x28),param_3,param_4);
  }
  return lVar3;
}


