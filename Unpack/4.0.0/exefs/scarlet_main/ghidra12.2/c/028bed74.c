/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028bed74; name: FUN_028bed74
 */


void FUN_028bed74(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x360))(param_1 + 0x380);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0172bf50(param_1);
  return;
}


