/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c4240; name: FUN_006c4240
 */


void FUN_006c4240(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  nn::os::SwitchToFiber(*(FiberType **)(param_1 + 0x98));
  return;
}


