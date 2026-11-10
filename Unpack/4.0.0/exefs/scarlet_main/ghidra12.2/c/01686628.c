/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01686628; name: FUN_01686628
 */


void FUN_01686628(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0x3ffffffffffffff;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 1;
  *(undefined8 *)(param_1 + 0x48) = 0x3ffffffffffffff;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::InitializeLightEvent(param_1 + 0x80,0,1);
  return;
}


