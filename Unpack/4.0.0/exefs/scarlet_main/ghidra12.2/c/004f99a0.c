/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f99a0; name: FUN_004f99a0
 */


void FUN_004f99a0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined1 local_44 [4];
  long local_40;
  undefined1 *local_38;
  long *plStack_30;
  undefined1 *local_28;
  undefined1 **local_18;
  
  local_44[0] = *(undefined1 *)(param_1 + 1);
  local_40 = param_1;
  if (**(ulong **)(param_1 + 0x20) != 0xffffffffffffffff) {
    plStack_30 = &local_40;
    local_38 = &LAB_004f93e0;
    local_28 = local_44;
    local_18 = &local_38;
    std::__call_once(*(ulong **)(param_1 + 0x20),&local_18,(_func_void_void_ptr *)&LAB_004fb9d0);
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x60);
  if (0 < (int)*(uint *)(param_1 + 0x60)) {
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      FUN_005022e0(plVar1[-1],*(undefined8 *)(*plVar1 + 8));
      uVar2 = uVar2 - 1;
      plVar1 = plVar1 + 2;
    } while (uVar2 != 0);
  }
  return;
}


