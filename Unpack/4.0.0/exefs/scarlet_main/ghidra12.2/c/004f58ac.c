/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f58ac; name: FUN_004f58ac
 */


void FUN_004f58ac(long param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong *puVar4;
  undefined8 local_58;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  long *plStack_38;
  undefined ***local_28;
  
  puVar3 = PTR_LAB_047cd728;
  puVar4 = *(ulong **)(param_3 + 0x30);
  local_58 = param_4;
  if (puVar4 != (ulong *)0x0) {
    puStack_48 = PTR_LAB_047cd728;
    local_50 = param_3;
    if (*puVar4 != 0xffffffffffffffff) {
      local_40 = &puStack_48;
      plStack_38 = &local_50;
      local_28 = &local_40;
      std::__call_once(puVar4,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    FUN_004f3560(param_1,param_2,param_3,&local_58);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_3 + 0x44);
    puVar4 = *(ulong **)(param_3 + 0x30);
    if (puVar4 != (ulong *)0x0) {
      puStack_48 = puVar3;
      local_50 = param_3;
      if (*puVar4 != 0xffffffffffffffff) {
        local_40 = &puStack_48;
        plStack_38 = &local_50;
        local_28 = &local_40;
        std::__call_once(puVar4,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
      }
    }
    FUN_00522170(param_2 + (ulong)uVar1,uVar2,*(undefined4 *)(param_3 + 0x38),local_58,param_3);
  }
  return;
}


