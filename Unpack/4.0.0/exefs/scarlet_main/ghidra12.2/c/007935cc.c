/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007935cc; name: FUN_007935cc
 */


void FUN_007935cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = nn::os::GetSystemTick();
  *param_1 = uVar1;
  return;
}


