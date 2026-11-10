/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0054f1a0; name: FUN_0054f1a0
 */


undefined8 FUN_0054f1a0(long param_1)

{
  ulong uVar1;
  undefined8 local_18;
  
  local_18 = 5000000000;
  FUN_00248930(&local_18,param_1 + 0xe0);
  uVar1 = FUN_006c50c4(param_1 + 0xe0);
  if ((uVar1 & 1) == 0) {
    FUN_01ea06c8(param_1 + 0xd0);
    **(undefined1 **)(param_1 + 200) = 1;
  }
  return 1;
}


