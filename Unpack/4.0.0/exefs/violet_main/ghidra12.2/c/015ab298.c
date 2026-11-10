/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015ab298; name: FUN_015ab298
 */


void FUN_015ab298(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_28 [8];
  long local_8;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 < *(ulong *)(param_1 + 0x30)) {
    FUN_015ab310(param_1,*(long *)(param_1 + 0x20) + uVar1 * 0x18);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  else {
    local_8 = *(long *)(param_1 + 0x20) + uVar1 * 0x18;
    FUN_02114c64(auStack_28,param_1,&local_8,param_2);
  }
  return;
}


