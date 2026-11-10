/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c4240; name: FUN_006c4240
 */


void FUN_006c4240(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  nn::os::SwitchToFiber(*(FiberType **)(param_1 + 0x98));
  return;
}


