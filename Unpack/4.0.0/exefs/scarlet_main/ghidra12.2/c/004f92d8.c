/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f92d8; name: FUN_004f92d8
 */


void FUN_004f92d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
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
  if (*(int *)(param_3 + 0x38) == 0xb) {
    FUN_004a64c0(param_3);
  }
  FUN_004f0ba4(param_1,param_2,param_3);
  return;
}


