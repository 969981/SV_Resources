/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003084a0; name: FUN_003084a0
 */


void FUN_003084a0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(code **)(param_1 + 0xeb8) = FUN_003084f0;
  *(long *)(param_1 + 0xec0) = param_1;
  *(undefined8 *)(param_1 + 0xec8) = 0;
  if (4 < param_2) {
    param_2 = FUN_00350fb0(param_2);
  }
  FUN_00350c0c(uVar1,param_1 + 0xeb0,param_2);
  return;
}


