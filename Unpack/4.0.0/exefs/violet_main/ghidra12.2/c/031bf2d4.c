/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


