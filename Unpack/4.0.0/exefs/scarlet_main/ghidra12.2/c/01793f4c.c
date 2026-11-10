/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01793f4c; name: FUN_01793f4c
 */


void FUN_01793f4c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_28 [8];
  long local_8;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 < *(ulong *)(param_1 + 0x30)) {
    FUN_01793fbc(param_1,*(long *)(param_1 + 0x20) + uVar1 * 8);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  }
  else {
    local_8 = *(long *)(param_1 + 0x20) + uVar1 * 8;
    FUN_026f0070(auStack_28,param_1,&local_8,param_2);
  }
  return;
}


