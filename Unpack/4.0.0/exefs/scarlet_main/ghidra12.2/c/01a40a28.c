/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a40a28; name: FUN_01a40a28
 */


void FUN_01a40a28(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_28 [8];
  long local_8;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 < *(ulong *)(param_1 + 0x30)) {
    FUN_01a40a98(param_1,*(long *)(param_1 + 0x20) + uVar1 * 0x20);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  else {
    local_8 = *(long *)(param_1 + 0x20) + uVar1 * 0x20;
    FUN_0289a528(auStack_28,param_1,&local_8,param_2);
  }
  return;
}


