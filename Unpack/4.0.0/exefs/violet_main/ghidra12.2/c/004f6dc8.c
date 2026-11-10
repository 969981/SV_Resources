/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f6dc8; name: FUN_004f6dc8
 */


void FUN_004f6dc8(long param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int local_54;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  long *plStack_38;
  undefined ***local_28;
  
  puVar3 = *(ulong **)(param_3 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_48 = PTR_LAB_047cd728, local_50 = param_3, *puVar3 != 0xffffffffffffffff)) {
    local_40 = &puStack_48;
    plStack_38 = &local_50;
    local_28 = &local_40;
    std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if (*(int *)(*(long *)(param_3 + 0x28) + 0x3c) != 3) {
    uVar4 = FUN_004a86e0(param_3);
    lVar5 = FUN_004a5400(uVar4,param_4);
    if (lVar5 == 0) {
      uVar6 = *(ulong *)(param_2 + (ulong)*(uint *)(param_1 + 0x24));
      if ((uVar6 & 1) == 0) {
        lVar5 = FUN_00264e54();
      }
      else {
        lVar5 = (uVar6 & 0xfffffffffffffffe) + 8;
      }
      FUN_00514e00(lVar5,*(undefined4 *)(param_3 + 0x44),(long)param_4);
      return;
    }
  }
  local_54 = param_4;
  if (*(char *)(param_3 + 0x43) == '\0') {
    FUN_004f311c(param_1,param_2,param_3,&local_54);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    puVar3 = *(ulong **)(param_3 + 0x30);
    if ((puVar3 != (ulong *)0x0) &&
       (puStack_48 = PTR_LAB_047cd728, local_50 = param_3, *puVar3 != 0xffffffffffffffff)) {
      local_40 = &puStack_48;
      plStack_38 = &local_50;
      local_28 = &local_40;
      std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
    }
    FUN_00522de4(param_2 + (ulong)uVar1,uVar2,*(undefined4 *)(param_3 + 0x38),local_54,param_3);
  }
  return;
}


