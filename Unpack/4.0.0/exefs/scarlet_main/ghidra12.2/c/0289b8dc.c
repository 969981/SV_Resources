/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289b8dc; name: FUN_0289b8dc
 */


void FUN_0289b8dc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_0289d024(param_1 + 0x18,uVar1);
    *(ulong *)(param_1 + 8) = uVar1 + 0x10;
    return;
  }
  FUN_0289d100(param_1,param_2);
  return;
}


