/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


