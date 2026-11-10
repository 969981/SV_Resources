/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a035c; name: FUN_015a035c
 */


void FUN_015a035c(long param_1,byte param_2,undefined4 param_3)

{
  byte *local_28;
  undefined4 *puStack_20;
  undefined4 local_18;
  byte local_14 [4];
  
  local_14[0] = param_2 & 1;
  local_28 = local_14;
  puStack_20 = &local_18;
  if (*(long *)(param_1 + 200) != 0) {
    local_18 = param_3;
    FUN_015a039c(*(long *)(param_1 + 200),&local_28);
  }
  return;
}


