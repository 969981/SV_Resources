/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f77800; name: FUN_01f77800
 */


void FUN_01f77800(undefined8 param_1,byte *param_2)

{
  byte *local_20;
  ulong uStack_18;
  
  uStack_18 = *(ulong *)(param_2 + 8);
  local_20 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_20 = param_2 + 1;
    uStack_18 = (ulong)(*param_2 >> 1);
  }
  FUN_01d023d0(param_1,&local_20);
  return;
}


