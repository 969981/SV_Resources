/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd58b8; name: FUN_01dd58b8
 */


void FUN_01dd58b8(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  if (*(char *)(param_1 + 0x2a0) == '\0') {
    return;
  }
  uVar1 = FUN_01dd5924(*(undefined8 *)(param_1 + 0x158));
  *(undefined4 *)(param_1 + 0x278) = uVar1;
  uVar2 = FUN_01195854();
  FUN_01dcc61c(uVar2,*(undefined4 *)(param_1 + 0x278));
  local_8 = FUN_01195974(param_1);
  FUN_014e85a0(param_1,&local_8,0);
  FUN_0119544c(param_1,*(undefined4 *)(param_1 + 0x27c));
  return;
}


