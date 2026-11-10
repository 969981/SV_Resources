/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018e5e44; name: FUN_018e5e44
 */


void FUN_018e5e44(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_28 [8];
  long local_8;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 < *(ulong *)(param_1 + 0x30)) {
    FUN_018e5ebc(param_1,*(long *)(param_1 + 0x20) + uVar1 * 0xc);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  else {
    local_8 = *(long *)(param_1 + 0x20) + uVar1 * 0xc;
    FUN_02114a90(auStack_28,param_1,&local_8,param_2);
  }
  return;
}


