/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031bf2d4; name: FUN_031bf2d4
 */


void FUN_031bf2d4(long param_1)

{
  ulong uVar1;
  
  uVar1 = fpcr;
  fpcr = uVar1 | 0x1000000;
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}


