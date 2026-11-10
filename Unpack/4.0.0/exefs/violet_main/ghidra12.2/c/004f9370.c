/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f9370; name: FUN_004f9370
 */


void FUN_004f9370(long param_1,byte param_2)

{
  byte local_34 [4];
  long local_30;
  undefined1 *local_28;
  long *plStack_20;
  byte *local_18;
  undefined1 **local_8;
  
  local_34[0] = param_2 & 1;
  if ((param_2 & 1) == 0) {
    local_34[0] = *(byte *)(param_1 + 1);
  }
  if (**(ulong **)(param_1 + 0x20) != 0xffffffffffffffff) {
    plStack_20 = &local_30;
    local_28 = &LAB_004f93e0;
    local_18 = local_34;
    local_8 = &local_28;
    local_30 = param_1;
    std::__call_once(*(ulong **)(param_1 + 0x20),&local_8,(_func_void_void_ptr *)&LAB_004fb9d0);
  }
  return;
}


