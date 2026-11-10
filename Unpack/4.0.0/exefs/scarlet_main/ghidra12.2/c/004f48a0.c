/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f48a0; name: FUN_004f48a0
 */


ulong FUN_004f48a0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long local_48;
  undefined *puStack_40;
  undefined ***local_38;
  undefined **local_30;
  long *plStack_28;
  
  if (*(char *)(param_3 + 0x43) != '\0') {
    uVar1 = FUN_0052152c(param_2 + (ulong)*(uint *)(param_1 + 0x28),*(undefined4 *)(param_3 + 0x44))
    ;
    return uVar1;
  }
  puVar2 = *(ulong **)(param_3 + 0x30);
  if ((puVar2 != (ulong *)0x0) &&
     (puStack_40 = PTR_LAB_047cd728, local_48 = param_3, *puVar2 != 0xffffffffffffffff)) {
    local_30 = &puStack_40;
    plStack_28 = &local_48;
    local_38 = &local_30;
    std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  uVar6 = *(uint *)(param_3 + 0x38);
  switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)uVar6 * 4)) {
  case 1:
  case 8:
    puVar3 = (uint *)FUN_004f01c4(param_1,param_2,param_3);
    break;
  case 2:
    puVar3 = (uint *)FUN_004f0300(param_1,param_2,param_3);
    break;
  case 3:
    puVar3 = (uint *)FUN_004f043c(param_1,param_2,param_3);
    break;
  case 4:
    puVar3 = (uint *)FUN_004f0578(param_1,param_2,param_3);
    break;
  case 5:
    puVar3 = (uint *)FUN_004f06b4(param_1,param_2,param_3);
    break;
  case 6:
    puVar3 = (uint *)FUN_004f07f0(param_1,param_2,param_3);
    break;
  case 7:
    puVar3 = (uint *)FUN_004f092c(param_1,param_2,param_3);
    break;
  case 9:
  case 10:
    puVar2 = *(ulong **)(param_3 + 0x30);
    if (puVar2 != (ulong *)0x0) {
      puStack_40 = PTR_LAB_047cd728;
      local_48 = param_3;
      if (*puVar2 != 0xffffffffffffffff) {
        local_30 = &puStack_40;
        plStack_28 = &local_48;
        local_38 = &local_30;
        std::__call_once(puVar2,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
      }
      uVar6 = *(uint *)(param_3 + 0x38);
    }
    if ((uVar6 == 0xb) && (uVar1 = FUN_004a64c0(param_3), (uVar1 & 1) != 0)) {
      plVar4 = (long *)FUN_004f0ba4(param_1,param_2,param_3);
      uVar1 = FUN_004fddf0();
      if ((uVar1 & 1) == 0) {
        uVar1 = (**(code **)(*plVar4 + 0x50))(plVar4);
        return uVar1;
      }
      lVar5 = FUN_004fdbc0(plVar4);
    }
    else {
      lVar5 = FUN_004f0ce0(param_1,param_2,param_3);
    }
    return (ulong)*(uint *)(lVar5 + 8);
  default:
    return 0;
  }
  return (ulong)*puVar3;
}


