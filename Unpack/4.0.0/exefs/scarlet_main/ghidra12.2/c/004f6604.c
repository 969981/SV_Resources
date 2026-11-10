/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f6604; name: FUN_004f6604
 */


undefined8 FUN_004f6604(long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long local_48;
  undefined *puStack_40;
  undefined ***local_38;
  undefined **local_30;
  long *plStack_28;
  
  puVar1 = *(ulong **)(param_3 + 0x30);
  if (puVar1 != (ulong *)0x0) {
    puStack_40 = PTR_LAB_047cd728;
    local_48 = param_3;
    if (*puVar1 != 0xffffffffffffffff) {
      local_30 = &puStack_40;
      plStack_28 = &local_48;
      local_38 = &local_30;
      std::__call_once(puVar1,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (*(char *)(param_3 + 0x43) != '\0') {
    uVar2 = FUN_00522fa0(param_2 + (ulong)*(uint *)(param_1 + 0x28),*(undefined4 *)(param_3 + 0x44),
                         *(undefined8 *)(param_3 + 0x90));
    return uVar2;
  }
  uVar3 = FUN_004f9a80(param_1 + 8,param_3);
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined8 *)FUN_004f0f58(param_1,param_2,param_3);
    return *puVar4;
  }
  uVar2 = FUN_004f0e1c(param_1,param_2,param_3);
  return uVar2;
}


