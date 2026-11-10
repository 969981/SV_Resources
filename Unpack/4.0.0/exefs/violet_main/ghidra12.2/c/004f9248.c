/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f9248; name: FUN_004f9248
 */


long FUN_004f9248(long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
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
  uVar2 = FUN_004fa4b0(param_1 + 8,param_3);
  return param_2 + (uVar2 & 0xffffffff);
}


