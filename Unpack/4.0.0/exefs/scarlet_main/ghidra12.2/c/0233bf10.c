/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0233bf10; name: FUN_0233bf10
 */


void FUN_0233bf10(undefined1 *param_1,long param_2)

{
  undefined1 auStack_30 [8];
  undefined4 local_28;
  
  *param_1 = 1;
  FUN_0233bdfc(auStack_30);
  local_28 = *(undefined4 *)(param_2 + 8);
  FUN_0233bf64(param_1 + 8,auStack_30);
  FUN_01795c84(auStack_30);
  return;
}


