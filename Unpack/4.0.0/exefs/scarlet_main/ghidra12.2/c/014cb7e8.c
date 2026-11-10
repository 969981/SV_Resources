/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014cb7e8; name: FUN_014cb7e8
 */


void FUN_014cb7e8(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_014cb964(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x40,0,1);
  return;
}


