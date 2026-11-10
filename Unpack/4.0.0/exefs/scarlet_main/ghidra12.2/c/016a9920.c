/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a9920; name: FUN_016a9920
 */


void FUN_016a9920(long *param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  undefined1 **ppuStack_20;
  undefined1 *local_18;
  
  local_18 = auStack_30;
  local_28 = 0;
  if (*param_1 != 0) {
    lVar1 = *(long *)(*param_1 + 0x10);
    local_28 = 0;
    if (lVar1 != 0) {
      local_28 = lVar1 + -0x28;
    }
  }
  local_28 = local_28 + 0x108;
  ppuStack_20 = &local_18;
  FUN_016a996c(local_28,&local_28);
  return;
}


