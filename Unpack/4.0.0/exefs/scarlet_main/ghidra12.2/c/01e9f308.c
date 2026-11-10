/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9f308; name: FUN_01e9f308
 */


void FUN_01e9f308(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((*(long **)(param_1 + 0x18) == *(long **)(param_2 + 0x18)) ||
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(), (uVar1 & 1) != 0)) {
    FUN_01ea0d60(param_1,param_2);
    return;
  }
  FUN_01d0e1a8(param_1,param_2);
  return;
}


